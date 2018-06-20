#pragma ounce
#include "Node.hpp"
#include "Trie.hpp"
class Visitor {
    public:
        void operator()(Node n);
        void operator()(Trie n);
};