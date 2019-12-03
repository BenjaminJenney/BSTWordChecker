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
void insert(t data)
{
	node<t>* newNode = new node<t>(data);
	

	if (root == nullptr)
	{
		root = newNode;
	}
	else
	{
		if (data > tmp->data && tmp != nullptr)
		{
			node<t>* tmp = root;
			insert(tmp->right);
		}
		else if (data < tmp->data && tmp != nullptr)
		{
			node<t>* tmp = root;
			insert(tmp->left);
		}
		else
		{
			tmp = newNode;
		}
	}
}

template<class t>
void inorderTraverse(node<t>* walker)
{
	if
}