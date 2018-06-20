#pragma ounce
#include <list>
#include <string>
#include <vector>

#include "Visitor.hpp"
class Node
{
    public:
    Node();
    Node(char c)
    insert(std::string str);
    void accept(Visitor v){
        v(this);
    }
    private:
        char c_;
        bool is_end;
        std::vector<Node> sons_;
};