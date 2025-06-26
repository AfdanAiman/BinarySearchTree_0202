#include <iostream>
using namespace std;

class Node
{
public:
    int info;
    Node *leftchild;
    Node *rightchild;

    // Constructor for the Node class
    Node()
    {
        leftchild = nullptr;// Initialize left child to null
        rightchild = nullptr; // Initialize right child to null

    }
};

class BinaryTree
{
public:
   Node *ROOT;

   BinaryTree()
    {
         ROOT = nullptr; // Initialize ROOT to NULL
    }

    void insert()
    {
        int x;
        cout << "Masukan Nilai:";
        cin >> x;

        //Step 1: Allocate memory for a new node
        Node *newNode = new Node();
    }
};