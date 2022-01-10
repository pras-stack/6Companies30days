Question : https://practice.geeksforgeeks.org/problems/serialize-and-deserialize-a-binary-tree/1#
Solution :
class Solution
{
    public:
    
    vector<int> vec;
     void help(Node* root)
    {
        if(!root)
        return;
        
        help(root->left);
        vec.push_back(root->data);
        help(root->right);
    }
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) 
    {
        help(root);
       return vec;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
        struct Node*newroot = new Node(-1);
       Node* temp = newroot;
       int n = A.size();
       for(int i=0;i<n;i++)
       {
           temp->right = new Node(A[i]);
           temp = temp->right;
       }
       return newroot->right;
    }

};
