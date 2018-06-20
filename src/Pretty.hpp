#pragma once

#include <vector>


class Pretty:public Visitor
{
  public:
    Pretty();
    virtual void operator()(Node* n);
    virtual void operator()(Trie* t);

  private:
};
