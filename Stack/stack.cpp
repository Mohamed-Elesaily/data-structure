
// implement stack using static array
class Stack{
    private:
        int arr[1000];
        int size;
    public:
        Stack();
        bool isequal(Stack a);
        bool empty();
        int top();
        void push(int d);
        void pop();
};

Stack::Stack(){
    size = 0;
}
bool Stack::isequal(Stack a){
    Stack b = *this; //make copy from this stack
    if(b.empty() && a.empty()) return true;
    while(b.top() == a.top()){
        a.pop();
        b.pop();
        if(b.size == 0 ) break;
            }
    return (b.empty() && a.empty());
}
bool Stack::empty(){
    if(size == 0) return true;
    return false;
}
int Stack::top(){
    if(size == 0) return 0;
    return arr[size-1];
}
void Stack::push(int d){
    arr[size] = d;
    size++;
}
void Stack::pop(){
    if(size == 0) return;
    size--;
}