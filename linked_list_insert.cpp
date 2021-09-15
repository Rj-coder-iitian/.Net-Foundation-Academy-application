#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* next;
  Node(int val){
      data = val;
      next = NULL;
  }
};

Node* insert(Node* root, int val, int pos){
    Node* temp = new Node(val);
    if(root == NULL)
        return temp;
    if(pos == 1){
        temp->next = root;
        return temp;
    }
    int curPos = 1;
    Node* curr = root;
    while(curr->next != NULL && curPos < pos - 1){
        curr = curr->next;
        curPos++;
    }
    Node* next = curr->next;
    curr->next = temp;
    temp->next = next;
    
    return root;
}



int main() {
    std::cout << "Insert function for linked list in c++" << std::endl;
    return 0;
}
