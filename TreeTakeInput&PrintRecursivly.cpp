
// Basic Tree example of taking input recursivly & printing output recursivly in c++ programming using vector
#include<bits/stdc++.h>
#include<vector>
using namespace std;

template<typename T> class Tree{
  public:
  T data;
  vector<Tree<T>*>childrean;
  
  Tree(T data){
    this->data=data;
  }
};
