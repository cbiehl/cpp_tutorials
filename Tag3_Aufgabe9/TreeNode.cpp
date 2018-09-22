#include <iostream>
#include "TreeNode.hpp"

TreeNode::TreeNode(int content, TreeNodePtr left, TreeNodePtr right){
	std::cout << "A new TreeNode was born" << std::endl;
	this->content = content;
	this->leftChild = left;
	this->rightChild = right;
}

TreeNode::~TreeNode(){
	std::cout << "A TreeNode was destroyed" << std::endl;
}

TreeNodePtr TreeNode::createNode(int content, TreeNodePtr left, TreeNodePtr right){
	TreeNodePtr node(new TreeNode(content, left, right));
	if(left){
		left->setParent(node);
	}
	
	if(right){
		right->setParent(node);
	}
	
	return node;
}

void TreeNode::setParent(const TreeNodePtr &p){
	this->parent = p;
}