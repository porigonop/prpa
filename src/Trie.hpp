#pragma ounce
#include <list>
#include <string>
#include <vector>

#include "Node.hpp"

class Trie
{
    public:
    Trie();
    Trie(const std::initializer_list<std::string> &init);
    void accept(Visitor v);
    private:
        std::vector<Node> first_letter_;
};