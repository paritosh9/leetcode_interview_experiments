#include <iostream>
#include <queue>

template<typename T>
class Node {
  public:
    T _data;
    Node* _left;
    Node* _right;

    Node(T data):_data(data), _left(nullptr), _right(nullptr){}
    
};

template<typename T>
class BinaryTree {
  public:
    Node<T>* _root;
    BinaryTree(): _root(nullptr){}
    
    void insertNode(T value){
      if(_root == nullptr){
          _root = new Node<T>(value);
          return ;
      } 
      
      std::queue<Node<T>*> q;
      q.push(_root);
      while(!q.empty()){
        Node<T> *node = q.front();
        if(node->_left == nullptr){
            Node<T>* newNode = new Node<T>(value);
            node->_left = newNode;
            return;
        }
        q.push(node->_left) ;
        if(node->_right == nullptr){
            Node<T>* newNode = new Node<T>(value);
            node->_right = newNode;
            return;
        }
        q.push(node->_right) ;
        q.pop();  
      }
      return;
    };
    
    void printTree(){
      if(_root == nullptr){
          std::cout <<"binary treee empty\n";
          return ;
      }
      std::queue<Node<T>*> q;
      q.push(_root);
      while(!q.empty()){
        Node<T> *node = q.front();
        std::cout << " " << node->_data << " " << std::endl;
        if(node->_left){
          q.push(node->_left) ;
        }
        if(node->_right){
          q.push(node->_right) ;
        }
        q.pop();  
      }
    };
};

int main()
{
    std::cout<<"Hello World\n";

    BinaryTree<int> binary_tree;
    binary_tree.insertNode(1);
    binary_tree.insertNode(21);
    binary_tree.insertNode(33);
    binary_tree.insertNode(44);
    binary_tree.insertNode(12);
    binary_tree.insertNode(74);
    binary_tree.insertNode(55);
    binary_tree.insertNode(124);
    binary_tree.insertNode(188);
    
    binary_tree.printTree();
    
    
    return 0;
}
