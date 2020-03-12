#include"../LinkedList/linkedList.cpp"
class Queue{
    private:
        LinkedList q;
    public:
        void push(int d){
            q.push_front(d);
        }    
    
        int pop(){
            q.pop_back();
        }    
        void print(){
            
            q.print();
        }
        
        ~Queue(){
            q.~LinkedList();
        }
};