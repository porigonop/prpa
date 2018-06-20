#include "Node.hpp"
#include "Trie.hpp"
#include "Visitor.hpp"

#include "Pretty.hpp"

Pretty::Pretty()
{
}

Pretty::visit(Node* n)
{
  std::string str;
  str_ = str;
  n.insert(str);
}
