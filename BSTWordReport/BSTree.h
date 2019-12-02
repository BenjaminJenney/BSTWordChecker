#pragma once
template<class t>
struct node
{
	t data;
	node* left;
	node* right;
	node(t data) : data(data) {};
};

template<class t>
class BSTree
{
private:
	node<t>* root;
	
public:
	BSTree(node<t>* root = nullptr) : root(root) {};

	void insert(t data);
	void traverse(node<t>*);
	~BSTree();
};

template<class t>
void BSTree(t data)
{
	node<t>* newNode = new node<t>(data);

	if (root == nullptr)
	{
		root = newNode;
	}
	else
	{
		node<t>* pivot = root;
	}
}
