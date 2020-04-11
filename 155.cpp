/*
155. Min Stack

Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

push(x) -- Push element x onto stack.
pop() -- Removes the element on top of the stack.
top() -- Get the top element.
getMin() -- Retrieve the minimum element in the stack.
*/

class MinStack {
private:
        struct Node {
        int data;
        int minn;
        Node *next;
        Node(int minn, int data) {
            this->data = data;
            this->minn = minn;
            this->next = NULL;
        }
    };
    Node *top_h;
public:
    /** initialize your data structure here. */


    

    
    MinStack() {
        top_h = NULL;
    }
    
    void push(int x) {
        if(!top_h) top_h = new Node(x, x);
        else {
            Node* n = new Node(min(x, top_h->minn), x);
            n->next = top_h;
            top_h = n;
        }
        
    }
    
    void pop() {
        
    Node *temp = top_h;
    top_h = top_h->next; 
    delete temp;
    }
    
    int top() {
        return top_h->data;
    }
    
    int getMin() {
        return top_h->minn;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
 
 /*
  Runtime: 36 ms, faster than 54.13% of C++ online submissions for Min Stack.
  Memory Usage: 14.8 MB, less than 100.00% of C++ online submissions for Min Stack.
 */
