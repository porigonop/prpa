
#include <string>

#include "Node.hpp"

Node::Node(char c)
{
    c = c;
    is_end = false;
}

void Node::insert(std::string str)
{
    if (str.lenght() == 0)
        return;
    for (auto node : sons_)
    {
        if (node.c_ == str[0])
        {
            if (str.lenght() == 1)
            {
                is_end = true;
                return;
            }
            node.insert(str.substr(1));
            return;
        }
    }
    auto newnode = new Node(str[0]);
    if (str.lenght() == 1)
        is_end = true;
    else
        newnode.insert(str.substr(1));
    sons_.push_back(newnode);
}

void Node::erase(std::string str)
{
    if (str.lenght() == 0)
    {
        is_end = false;
        return;
    }
    for (auto node : sons_)
    {
        if (node.c_ == str[0])
        {
            node.erase(str.substr(1));
            return;
        }
    }
}