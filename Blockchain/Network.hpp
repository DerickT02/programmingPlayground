#include <iostream>
#include <vector>
#include "Node.hpp"
#pragma once


class Network{
    std::string network_name;
    std::vector<Node> nodes;
    int numNodes;

    public:
        Network(std::string name);
        void addToNetwork(Node node);
        std::string getName();
};