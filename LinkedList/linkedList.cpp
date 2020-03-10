#include "node.cpp"
#include<iostream>
#include<assert.h>
class LinkedList{
    private:
        Node *head;
        void clear();
    public:
   
        LinkedList();
        bool isempty();
        int contains(int d);
        int lenght(); 

        void push_front(int data);
        void pop_front();
        void push_back(int data);
        void pop_back();

        void insert_node(int data, int pos);
        void delete_node(int pos);
        
        void print();
        void bubble_sort();
        ~LinkedList();
};

LinkedList::LinkedList(){
    head = nullptr;
}

bool LinkedList::isempty(){
    return head == nullptr;
}
int LinkedList::contains(int d){
    Node *search = head;
    int position=0;
    while(search->next != nullptr){
        position++;
        if(search->data == d){
            return position;
        }
        search = search->next;

    }
    return -1;
}
int LinkedList::lenght(){
    Node *sel = head;
    int len=0;
    while(sel != nullptr){
        sel = sel->next;
        len++;
    }
    return len;
}

void LinkedList::push_front(int data){
   Node *newNode = new Node(data);
   newNode->next = head;
   head = newNode;
}
void LinkedList::pop_front(){
    if(isempty()) return;
    Node * delNode;
    delNode = head;
    head = head->next;
    delete delNode;
}
void LinkedList::push_back(int d){
    Node *node = new Node(d);
    Node *last_node = head;
    while(last_node->next != nullptr) last_node = last_node->next;
    last_node->next = node;
}
void LinkedList::pop_back(){
    assert(head != nullptr);
    Node *last_node = head;
    Node *pre_last_node;
    while(last_node->next != nullptr){
        pre_last_node = last_node;
        last_node = last_node->next;
    }
    delete [] last_node;
    pre_last_node->next = nullptr;
}
void LinkedList::insert_node(int d,int pos){
    assert(head != nullptr);
    pos--;
    Node *insert = head;
    Node *pre_last_node;
    while((insert->next != nullptr) && pos != 0){
        pre_last_node = insert;
        insert=insert->next;
        pos--;
    }
    pre_last_node->next = new Node(d);
    pre_last_node->next->next = insert;
}
void LinkedList::delete_node(int pos){
    assert(head != nullptr);
    pos--;
    Node *last_node = head;
    Node *pre_last_node;
    while((last_node->next != nullptr) && pos != 0){
        pre_last_node = last_node;
        last_node=last_node->next;
        pos--;
    }
    pre_last_node->next = last_node->next;
    delete [] last_node;
}
void LinkedList::clear(){
    Node *temp;
    while(!isempty()){
        this->pop_front();
    }
}
void LinkedList::print(){
    assert(head != nullptr);
    Node *sel = head;
    while (sel != nullptr){
        
        std::cout<< sel->data;
        sel =sel->next;
    } 
  
}
LinkedList::~LinkedList(){
    clear();
}  