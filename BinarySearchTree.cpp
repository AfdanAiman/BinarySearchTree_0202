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
        //Step 2: Assign the value to the data field of new node
        newNode->info = x;
        //Step 3: Make the left and right child of new node point to NULL
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;
        //Step 4: Locate the node which will be the parent of the node to be inserted
        Node *parent = nullptr;
        Node *currentNode = nullptr;
        search(x, parent, currentNode);

        //Step 5: if parent is NULL, (Tree is empty)
        if (parent == nullptr)
        {
            //5a: Mark the new node as ROOT
            ROOT = newNode;

            //5b: Exit
            return;
        }
        //Step 6: if the value in the data field of than that of the parent 
        if(x = parent->info)
        {
            //6a: Make the left child of parent point to the new node
            parent->leftchild = newNode;

            //6b: Exit
            return;
        }
        // Step 7: if the value in the data field of the new node is greater than that of the parent
        else if (x > parent->info)
        {
            //7a: Make the right child of point to the new node
            parent->rightchild = newNode;

            //7b: Exit
            return;
        }
    }
    void search(int element, Node *&parent, Node *&currentNode)
    {
        // This function searches the currentNode of the specified  Node as Well as the current Node of is parent
        currentNode = ROOT;
        parent = nullptr;
        while((currentNode != nullptr) && (currentNode->info != element))
        {
            parent = currentNode;
            if (element < currentNode->info)
                currentNode = currentNode->leftchild;
            else
                currentNode = currentNode->rightchild;
        }
    }

    void inorder(Node *ptr)
    {
        if (isEmpty())
        {
            cout << "Tree is empty." << endl;
            return;
        }
        if (ptr != nullptr)
           return;

        inorder(ptr->leftchild); 
        cout << ptr->info << " "; 
        inorder(ptr->rightchild);
    }
    void preorder(Node *ptr)
    {
        if (isEmpty())
        {
            cout << "Tree is empty." << endl;
            return;
        }
        if (ptr != nullptr)
           return;
        cout << ptr->info << " ";
        preorder(ptr->leftchild); 
        preorder(ptr->rightchild);
    }
    void postorder(Node *ptr)
    {
        if (isEmpty())
        {
            cout << "Tree is empty." << endl;
            return;
        }
        if (ptr != nullptr)
           return;
        
        postorder(ptr->leftchild); 
        postorder(ptr->rightchild);
        cout << ptr->info << " ";
    }

};