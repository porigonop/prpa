#pragma once

#include <vector>


class Pretty:public Visitor
{
  public:
    Pretty();
    virtual void visit(Node* n);

  private:
    std::vector<Node> letters_;
    std::string str_;
};
