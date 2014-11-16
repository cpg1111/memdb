#ifndef binaryTree_H
#define binaryTree_H
#include <string>
#include <array>
using namespace std;

<template typename T>
class binaryTree{
	public:
		binaryTree();
		binaryTree(binaryTreeLeaf root);
		void insert(binaryTreeLeaf newLeaf);
		binaryTreeLeaf search(T value);
		int length();
		void remove(T value);
	private:
		string Name;
};
