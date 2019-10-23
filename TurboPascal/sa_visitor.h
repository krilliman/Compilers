#ifndef TURBOPASCAL_SA_VISITOR_H
#define TURBOPASCAL_SA_VISITOR_H

#include "ast.h"
#include <stack>
#include "symbol_table.h"
#include <string>
using namespace AST;
class SemanticAnalysisVisitor : public Visitor {
 public:
  explicit SemanticAnalysisVisitor(SymbolTable *table) : table_(table){};
  virtual void visit(  const IntegerExprNode* node )override {
    intStack_.push(node->get_value());
  }
  virtual void visit( const RealExprNode* node )override{
    floatStack_.push(node->get_value());
  }
  virtual void visit( const BooleanExprNode* node )override{
    boolStack_.push(node->get_value());
  }
  virtual void visit( const StringExprNode* node )override{
    stringStack_.push(node->get_str());
  }
  virtual void visit( const OpExprNode* node )override{
    if(node->get_op() == LNG::ExprOperator::o_multiply){
      auto rhs = node->get_rhs();
      auto lhs = node->get_lhs();
    }
  }
  virtual void visit( const VariableExprNode* node ) override{
    auto n = table_->lookup("",node->get_name());
    if(n->data_type.str() == "int"){
      int t = std::stoi(n->str());
      intStack_.push(t);
    }
    else if(n->str() == "false"){
      bool t = false;
      boolStack_.push(t);
    }
    else if(n->str() == "true"){
      bool t = true;
      boolStack_.push(t);
    }
    else if(n->data_type.str() == "float"){
      float t = std::stof(n->str());
      floatStack_.push(t);
    }
  }
  virtual void visit( const FunctionCallExprNode* node )override{

  }

  virtual void visit( const AssignmentStmtNode* node )override{

  }
  virtual void visit( const EmptyStmtNode* node )override{

  }
  virtual void visit( const CompoundStmtNode* node )override{

  }
  virtual void visit( const IfStmtNode* node ) override{

  }
  virtual void visit( const ProcedureCallStmtNode* node ) override{

  }
  virtual void visit( const WhileStmtNode* node ) override{

  }
  virtual void visit( const ReadStmtNode* node ) override{

  }
  virtual void visit( const WriteStmtNode* node ) override{

  }

  virtual void visit( const VariableNode* node ) override{

  }
  virtual void visit( const VariableDeclNode* node ) override{

  }
  virtual void visit( const ProcedureDeclNode* node )override{

  }
  virtual void visit( const FunctionDeclNode* node )override{

  }
  virtual void visit( const VariableDeclarationsNode* node ) override{

  }
  virtual void visit( const CallableDeclarationsNode* node ) override{

  }
  virtual void visit( const BlockNode* node ) override{

  }
  virtual void visit( const ProgramNode* node ) override{

  }
  virtual void visit( const OptionalArgumentsNode* node)override {

  }

 private:
  std::stack<int> intStack_;
  std::stack<bool > boolStack_;
  std::stack<float > floatStack_;
  std::stack<std::string> stringStack_;
  SymbolTable *table_;

};

#endif //TURBOPASCAL_SA_VISITOR_H
