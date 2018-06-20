#pragma ounce
#include <list>
#include <string>
#include <vector>
class Node
{
    public:
    Node();
    Node(char c)
    {
        c = c;
    }
    private:
        char c_;
        std::vector<Node> sons_;
        
};