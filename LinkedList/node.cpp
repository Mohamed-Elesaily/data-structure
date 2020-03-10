class Node{
    private:
        int data;
        Node *next;
    public:
        Node(int data);
        void set_next(Node *next);
        Node *get_next();    

    friend class LinkedList;
};

Node::Node(int data){
    this->next = nullptr;
    this->data = data;
} 
void Node::set_next(Node *next){
    this->next = next;
} 
Node *Node::get_next(){
    return next;
}