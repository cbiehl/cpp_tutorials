#include <iostream>
#include <memory>
#include "TreeNode.hpp"

int main(int argc, char **argv){
	TreeNodePtr node = TreeNode::createNode(1, TreeNode::createNode(2), TreeNode::createNode(3));
	
	return 0;
}
