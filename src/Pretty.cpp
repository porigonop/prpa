#include "Node.hpp"
#include "Trie.hpp"
#include "Visitor.hpp"

#include "Pretty.hpp"

Pretty::Pretty()
{
}

Pretty::operator()(Node* n)
{

}

Pretty::operator()(Trie* t)
{
  for (auto i = sons_.begin(); i != sons_.end(); i++)
  {
    t.accept(this);
  }
}
