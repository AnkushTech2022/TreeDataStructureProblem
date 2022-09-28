// Tree DS is non linear DS
// SIMPLE TREE STRUCTURE!
#include<iostream>
#include<vector>
using namespace std;

template<typename T>class TreeNode{
  public:
    T data;
    vector<TreeNode<T>*> childrean;
    TreeNode(T data){
      this->data=data;
    }
};

int main(){
  TreeNode<int>* root=new TreeNode<int>(10);
  TreeNode<int>* node1=new TreeNode<int>(20);
  TreeNode<int>* node2=new TreeNode<int>(30);
  
  root->childrean.push_back(node1);
  root->childream.push_back(node2);
  
  return 0;
}
