//Tree from array
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node* left;
    Node* right;
    Node():val(0),left(nullptr),right(nullptr){}
    Node(int x):val(x),left(nullptr),right(nullptr){}
    Node(int x,Node* left,Node* right):val(x),left(left),right(right){}
};
Node* build_tree(vector<int>a)
{
    if(a.empty()) return nullptr;
    Node* root=new Node(a[0]);
    queue<Node*>q;
    q.push(root);
    int i=1;
    while(i<a.size())
    {
        Node* curr=q.front();
        q.pop();
        if(i<a.size())
        {
            curr->left=new Node(a[i++]);
            q.push(curr->left);
        }
        if(i<a.size())
        {
            curr->right=new Node(a[i++]);
            q.push(curr->right);
        }
    }
    return root;
}
void dfs(Node* root,vector<int>lol)
{
    while(root)
    {
        dfs(root->left,lol);
        lol.push_back(root->val);
        dfs(root->right,lol);
    }
}
int main()
{
    vector<int>a={1,2,3,4,5};
    Node* pog=build_tree(a);
    vector<int>piss;
    dfs(pog,piss);
    for(int i=0;i<piss.size();i++)
    {
        cout<<piss[i]<<endl;
    }
}