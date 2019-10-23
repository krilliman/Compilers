#ifndef TURBOPASCAL_SA_VISITOR_H
#define TURBOPASCAL_SA_VISITOR_H

#include "ast.h"
#include <stack>
#include "symbol_table.h"
#include <string>
using namespace AST;
using namespace std;
class SemanticAnalysisVisitor : public Visitor {
 public:
  explicit SemanticAnalysisVisitor(SymbolTable *table) : table_(table){};
  virtual void visit(  const IntegerExprNode* node )override {
    cout << "entering IntegerExprNode" << endl;
    intStack_.push(node->get_value());
  }
  virtual void visit( const RealExprNode* node )override{
    cout << "entering RealExprNode" << endl;
    floatStack_.push(node->get_value());
  }
  virtual void visit( const BooleanExprNode* node )override{
    cout << "entering BooleanExprNode" << endl;
    boolStack_.push(node->get_value());
  }
  virtual void visit( const StringExprNode* node )override{
    cout << "entering StringExprNode" << endl;
    stringStack_.push(node->get_str());
  }
  virtual void visit( const OpExprNode* node )override{
    auto rhs = node->get_rhs();
    auto lhs = node->get_lhs();
    cout << "entering OpExprNode" << endl;
    if(node->get_op() == LNG::ExprOperator::o_multiply){
    }
    if(lhs != nullptr){
      accept(lhs);
    }
    if(rhs != nullptr){
      accept(rhs);
    }
  }
  virtual void visit( const VariableExprNode* node ) override{
    cout << "entering VariableExprNode" << endl;
    auto n = table_->lookup("",node->get_name());
    if(n->data_type.str() == "int"){
      int t = std::stoi(n->str());
      std::cout << "t: " << t << std::endl;
      intStack_.push(t);
    }
    else if(n->str() == "false"){
      bool t = false;
      std::cout << "t: " << t << std::endl;
      boolStack_.push(t);
    }
    else if(n->str() == "true"){
      bool t = true;
      std::cout << "t: " << t << std::endl;
      boolStack_.push(t);
    }
    else if(n->data_type.str() == "float"){
      float t = std::stof(n->str());
      std::cout << "t: " << t << std::endl;
      floatStack_.push(t);
    }
    else if(n->data_type.str() == "string"){
      stringStack_.push((n->str()));
    }
  }
  virtual void visit( const FunctionCallExprNode* node )override{
    cout << "entering FunctionCallExprNode" << endl;
    for(auto i : node->get_arguments()){
      accept(i);
    }
  }

  virtual void visit( const AssignmentStmtNode* node )override{
    cout << "entering AssignmentStmtNode" << endl;
    accept(node->get_var());
    accept(node->get_expr());

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
    for(auto i : node->get_arguments()){
      accept(i);
    }
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
  }

  virtual void visit( const VariableNode* node ) override{
    cout << "entering VariableNode" << endl;

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

  }

  void accept(const AST::Node *node) {
    if (node != nullptr) node->accept(*this);
  }

 private:
  std::stack<int> intStack_;
  std::stack<bool > boolStack_;
  std::stack<float > floatStack_;
  std::stack<std::string> stringStack_;
  SymbolTable *table_;

};

#endif //TURBOPASCAL_SA_VISITOR_H
