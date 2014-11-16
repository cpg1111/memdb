#include "binaryTreeLeaf.h"

binaryTreeLeaf::binaryTreeLeaf(T value){
	this->value = value;
}

binaryTreeLeaf::getLeft(){
	if(this->left==NULL){
		return "end of tree";
	}
	return this->left;
}

binaryTreeLeaf::getRight(){
	if(this->right==NULL){
		return "end of tree";
	}
	return this->right;
}

binaryTreeLeaf::setLeft(binaryTreeLeaf left){
	this->left = left;
}

binaryTreeLeaf::setRight(binaryTreeLeaf right){
	this->right = right;
}

binaryTreeLeaf::setValue(T val){
	this->value = val;
}

binaryTreeLeaf::getValue(){
	return this->value;
}
