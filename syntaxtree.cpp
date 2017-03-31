/*
 AUTHOR: Shivendra Pratap Singh
 email : shivendrapratapsingh333@gmail.com
 */
#include<bits/stdc++.h>
using namespace std;
  
struct node
{
    char value;
    node *left,*right;
};
node* newNode(char x)
{
    node * temp=new node;
    node->left=NULL;
    node->rigt=NULL;
    node->value=x;
    return temp;
}
bool isOperator(char c)
{
    if(c=='+'||c=='-'||c=='*'||c=='/'||c=='=')
      return true;
    return false;
}
node* tree(string expr)
{
    stack<node*> syntaxTree;
    node *x,*y,*z;
    for(int i=0;i<expr.length;i++)
    {
         x=newNode(expr[i]);
        if(!isOperator(expr[i]))
        {
           syntaxTree.push(x)
        }
        else
        {
            y=syntaxTree.top();
            syntaxTree.pop();
            z=syntaxTree.top();
            syntaxTree.pop();
            syntaxTree->right=y;
            syntaxTree->left=z;
        }
        
    }
    x=syntaxTree.pop();
    syntaxTree.top();
    return x;
}
int main()
{
    string s;
    cin>>s;
    node *result=tree(s);
    cout<<"x";
    return 0;
}
