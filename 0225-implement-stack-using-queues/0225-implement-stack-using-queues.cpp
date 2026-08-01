// This is using only one queue code:

class MyStack {
public:
   queue<int> q;
    MyStack() {
     
    }
    
    void push(int x) {
        int s = q.size();
            q.push(x);
            for (int i =0;i<s;i++){
                q.push(q.front());
                q.pop();
            }
        
    }
    
    int pop() {
      int n =q.front();
       q.pop();
      return n;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
       return q.empty();
    }
};


//  This is using it with two queues:

// class MyStack {
// public:
//     queue<int> q1, q2;

//     MyStack() {

//     }

//     void push(int x) {
//         // Step 1: Insert new element into q2
//         q2.push(x);

//         // Step 2: Move all elements from q1 to q2
//         while (!q1.empty()) {
//             q2.push(q1.front());
//             q1.pop();
//         }

//         // Step 3: Swap q1 and q2
//         swap(q1, q2);
//     }

//     int pop() {
//         int val = q1.front();
//         q1.pop();
//         return val;
//     }

//     int top() {
//         return q1.front();
//     }

//     bool empty() {
//         return q1.empty();
//     }
// };
/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
