#include "Network.hpp"
#include "Node.hpp"
#include <vector>
#include "Network.hpp"


Network::Network(std::string name){
    this->network_name = name;
    this->nodes = std::vector<Node>();
    this->nodes.reserve(20);
    this->numNodes = 0;
};

void Network::addToNetwork(Node node){
    
    if(numNodes == static_cast<int>(this->nodes.size())){
        this->nodes.push_back(node);
    }
    else if(numNodes < static_cast<int>(this->nodes.size())){
        this->nodes[numNodes] = node;
    }
    else{
        std::cout << "Unsupported Node";
    }
    this->numNodes++;
};

std::string Netowrk::getName(){
    return this->network_name;
}

int main(){
    
}