#ifndef BINARYTREELEAF_H
#define BINARYTREELEAF_H

template <typename T>
class binaryTreeLeaf{
	private:
		T value;
		binaryTreeLeaf left;
		binaryTreeLeaf right;

	public:
		binaryTreeLeaf(T value);
		binaryTreeLeaf getLeft();
		binaryTreeLeaf getRight();
		void setLeft(binaryTreeLeaf leaf);
		void setRight(binaryTreeLeaf leaf);
		void setValue(T val);
		T getValue();
};

#endif
