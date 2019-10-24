#ifndef TURBOPASCAL_SA_VISITOR_H
#define TURBOPASCAL_SA_VISITOR_H

#include "ast.h"
#include <stack>
#include "symbol_table.h"
#include <string>
#include <error.h>
#include <vector>
using namespace AST;
using namespace std;
class SemanticAnalysisVisitor : public Visitor {
 public:
  explicit SemanticAnalysisVisitor(SymbolTable table) : table_(table){};
  virtual void visit( const IntegerExprNode* node )override {
    cout << "entering IntegerExprNode" << endl;
    //intStack_.push(node->get_value());
    cout << "pushing = integer" << endl;
    stringStack_.push("integer");
  }
  virtual void visit( const RealExprNode* node )override{
    cout << "entering RealExprNode" << endl;
    //floatStack_.push(node->get_value());

    cout << "pushing = real" << endl;
    stringStack_.push("real");
  }
  virtual void visit( const BooleanExprNode* node )override{
    cout << "entering BooleanExprNode" << endl;
    //boolStack_.push(node->get_value());
    cout << "pushing = boolean"  << endl;
    stringStack_.push("boolean");
  }
  virtual void visit( const StringExprNode* node )override{
    cout << "entering StringExprNode" << endl;
    //stringStack_.push(node->get_str());
    cout << "should be pushing = string" << endl;
    stringStack_.push("string");
  }
  virtual void visit( const OpExprNode* node )override{
    auto rhs = node->get_rhs();
    auto lhs = node->get_lhs();
    cout << "entering OpExprNode" << endl;
    string stackLHS, stackRHS = "";
    if(lhs != nullptr){
      accept(lhs);
      stackLHS = stringStack_.top(); stringStack_.pop();
    }
    if(rhs != nullptr) {
      accept(rhs);
      stackRHS = stringStack_.top();stringStack_.pop();
    }
    if(lhs == nullptr){
      stringStack_.push(stackRHS);
    }
    else{
      cout << "stack size should be = " << stringStack_.size() << endl;
      //o_eq, o_gt, o_gteq, o_neq, o_lt, o_lteq
      static map<LNG::ExprOperator, int> relational_op = {
          {LNG::ExprOperator::o_eq, 0},
          {LNG::ExprOperator::o_gt, 0},
          {LNG::ExprOperator::o_gteq, 0},
          {LNG::ExprOperator::o_neq, 0},
          {LNG::ExprOperator::o_lt, 0},
          {LNG::ExprOperator::o_lteq, 0}
      };
      auto it = relational_op.find(node->get_op());
      if(stackLHS == stackRHS){
        if(it == relational_op.end()){
          cout << "pushing = " << stackLHS << endl;
          stringStack_.push(stackLHS);
        }
        cout << "size of stack OpExprNode : " << stringStack_.size() << endl;
      }
      else{
        cout << "exiting in opExprNode" << endl;
        exit(0);
      }
    }
  }
  virtual void visit( const VariableExprNode* node ) override{
    cout << "entering VariableExprNode" << endl;
    auto n = table_.lookup("",node->get_name());

    std::cout << "node->getname: " << node->get_name() << std::endl;
    if(n == nullptr){
      cout << "n is a nullptr" << endl;
    }
    cout << "pushing = " << n->data_type.str() << endl;
    stringStack_.push(n->data_type.str());
    cout << "size of stack variableExprNode: " << stringStack_.size() << endl;

  }
  virtual void visit( const FunctionCallExprNode* node )override{
    cout << "entering FunctionCallExprNode" << endl;
    string name = node->get_name();
    string signature = table_.lookup("",name)->signature;
    cout << "-----------------------------: " << name << endl;
    cout << "signature: " << signature << endl;
    cout << "NAME: " << name << endl;
    vector<string> tokens;
    string token;
    char delim = ',';
    stringstream stream(signature);
    while(getline(stream, token, delim)){
        tokens.push_back(token);
    }
    for(auto i : tokens){
      cout << "i in tokens: " << i << endl;
    }
    auto args = node->get_arguments();
    int argsSize = node->get_arguments().size();
    if(argsSize != tokens.size()){
      cout << "The argument list not of the same size" << endl;
      cout << "callSize: " << argsSize << " ,  actualSize: " << tokens.size() << endl;
      exit(0);
    }
    int counter = 0;
    for(auto i : args){
      accept(i);
      string topOfStack = stringStack_.top();stringStack_.pop();
      cout << "size of stack function call: " << stringStack_.size() << endl;

      if(topOfStack != tokens[counter]){
        cout << "type miss match " << topOfStack << " != " << tokens[counter] << endl;
        exit(0);
      }
      cout << "type match " << topOfStack << " == " << tokens[counter] << endl;
      counter ++;
    }
    cout << "leaving function call " << endl;
    stringStack_.push(table_.lookup("",name)->data_type.str());
  }

  virtual void visit( const AssignmentStmtNode* node )override{
    cout << "entering AssignmentStmtNode" << endl;
    accept(node->get_var());
    cout << "popping = " << node->get_var()->get_name() << endl;
    string stackLHS = stringStack_.top();stringStack_.pop();
    accept(node->get_expr());
    string stackRHS = stringStack_.top();stringStack_.pop();
    cout << "size of stack assignmentstmtNode: " << stringStack_.size() << endl;
    if(stackLHS != stackRHS){
      cout << "exiting in assignmentNode" << endl;
      exit(0);
    }
  }
  virtual void visit( const EmptyStmtNode* node )override{
    cout << "entering EmptyStmtNode" << endl;

  }
  virtual void visit( const CompoundStmtNode* node )override{
    cout << "entering CompundStmtNode" << endl;
    auto list = node->get_stmts();
    for(auto i : list){
      accept(i);
    }
  }
  virtual void visit( const IfStmtNode* node ) override{
    cout << "entering IfStmtNode" << endl;
    accept(node->get_expr());
    accept(node->get_stmt_if());
    if(node->get_stmt_else() != nullptr){
      accept(node->get_stmt_else());
    }
  }
  virtual void visit( const ProcedureCallStmtNode* node ) override{
    cout << "entering ProcedureCallStmtNode" << endl;
    string name = node->get_name();
    string signature = table_.lookup("",name)->signature;
    cout << "-----------------------------: " << name << endl;
    cout << "signature: " << signature << endl;
    cout << "NAME: " << name << endl;
    vector<string> tokens;
    string token;
    char delim = ',';
    stringstream stream(signature);
    while(getline(stream, token, delim)){
      tokens.push_back(token);
    }
    for(auto i : tokens){
      cout << "i in tokens: " << i << endl;
    }
    auto args = node->get_arguments();
    int argsSize = node->get_arguments().size();
    if(argsSize != tokens.size()){
      cout << "The argument list not of the same size" << endl;
      cout << "callSize: " << argsSize << " ,  actualSize: " << tokens.size() << endl;
      exit(0);
    }
    int counter = 0;
    for(auto i : args){
      accept(i);
      string topOfStack = stringStack_.top();stringStack_.pop();
      cout << "size of stack function call: " << stringStack_.size() << endl;

      if(topOfStack != tokens[counter]){
        cout << "type miss match " << topOfStack << " != " << tokens[counter] << endl;
        exit(0);
      }
      cout << "type match " << topOfStack << " == " << tokens[counter] << endl;
      counter ++;
    }
    cout << "leaving function call " << endl;
    stringStack_.push(table_.lookup("",name)->data_type.str());
  }
  virtual void visit( const WhileStmtNode* node ) override{
    cout << "entering WhileStmtNode" << endl;
    accept(node->get_expr());
    accept(node->get_stmt());

  }
  virtual void visit( const ReadStmtNode* node ) override{
    cout << "entering ReadStmtNode" << endl;
    accept(node->get_arg());

  }
  virtual void visit( const WriteStmtNode* node ) override{
    cout << "entering WriteStmtNode" << endl;
    accept(node->get_expr());
    string topOfTheStack = stringStack_.top();stringStack_.pop();
    if(stringStack_.size() != 0){
      cout << "more than one argument was given" << endl;
      exit(0);
    }
    cout << "size of stack when leaveing writeStmt" << stringStack_.size() << endl;
  }

  virtual void visit( const VariableNode* node ) override{
    cout << "entering VariableNode" << endl;
    string name = node->get_name();
    string lookup = table_.lookup("", name)->data_type.str();
    stringStack_.push(lookup);
  }
  virtual void visit( const VariableDeclNode* node ) override{
    cout << "entering VariableDeclNode" << endl;
  }
  virtual void visit( const ProcedureDeclNode* node )override{
    cout << "ProcedureDeclNode" << endl;
    accept(node->get_block());
  }
  virtual void visit( const FunctionDeclNode* node )override{
    cout << "entering FunctionDeclNode" << endl;
    cout << "====================fun dec ========================" << endl;
    string name = node->get_name();
    auto it = table_.lookup("",name)->signature;
    cout << "signature " << it << endl;
    accept(node->get_block());
  }
  virtual void visit( const VariableDeclarationsNode* node ) override{
    cout << "entering VariableDeclarationsNode" << endl;
    auto list = node->get_declarations();
    for(auto i : list){
      accept(i);
    }
  }
  virtual void visit( const CallableDeclarationsNode* node ) override{
    cout << "entering callableDeclerationsNode" << endl;
    for(auto i : node->get_declarations()){
      accept(i);
    }
  }
  virtual void visit( const BlockNode* node ) override{
    cout << "entering BlockNode" << endl;
    if (node->get_var_decl() != nullptr)  // Could legitimately be a nullprt.
      accept(node->get_var_decl());
    accept(node->get_call_decl());
    accept(node->get_stmt());

  }
  virtual void visit( const ProgramNode* node ) override{
    cout << "entering programNode" << endl;
    accept(node->get_block());

  }
  virtual void visit( const OptionalArgumentsNode* node)override {
    cout << "entering optionalArgmentsNode" << endl;
    for(auto i : node->get_list()){
      accept(i);
    }
  }

  void accept(const AST::Node *node) {
    if (node != nullptr) node->accept(*this);
  }

 private:
  std::stack<int> intStack_;
  std::stack<bool > boolStack_;
  std::stack<float > floatStack_;
  std::stack<std::string> stringStack_;
  SymbolTable table_;

};

#endif //TURBOPASCAL_SA_VISITOR_H
