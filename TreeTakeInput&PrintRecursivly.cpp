
// Basic Tree example of taking input recursivly & printing output recursivly in c++ programming using vector
#include<bits/stdc++.h>
#include<vector>
using namespace std;

template<typename T> class TreeNode{
  public:
  T data;
  vector<TreeNode<T>*>childrean;
  
  Tree(T data){
    this->data=data;
  }
};
TreeNode<int>* takeInput(){
  int rootData;
  cout<<"Enter data: "<<endl;
  cin>>rootData;
  TreeNode<int>* root=new TreeNode(rootData);
  int n;
  cout<<"Enter number of childrean: "<<endl;
  for(int i=0;i<n;i++){
    TreeNode<int>* child=takeInput();
    root->childrean.push_back(child);
  }
return root;
}
void printTree(TreeNode<int>* root){
  if(root==NULL){
    return;
  }
  cout<<root->data<<": ";
  for(int i=0;i<root->childrean.size();i++){
    cout<<root->childrean[i]->data<<", ";
  }
  cout<<endl;
  for(int i=0;i<root->childrean.size();i++){
    printTree(root->childrean[i]);
  }
  
}

int main(){

  TreeNode<int>* root=takeInput();
  printTree(root);
  return 0;
}
