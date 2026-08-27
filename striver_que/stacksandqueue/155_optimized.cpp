#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<int> st;long long mini = LLONG_MAX;
    MinStack() {
    }

    void push(int value) {
        if(st.empty()){
            st.push(value);
            mini = value;
        }
        else{
            if(mini > value){
                st.push(2LL*value - mini);
                mini = value;
            }
            else{
                st.push(value);
            }
        }

    }

    void pop() {

        if(st.empty()){
            return;
        }
        else{
            long long topValue = st.top();

            if(topValue > mini){
                st.pop();
            }else{
                mini = 2LL*mini - topValue;
                st.pop();
            }
        }

    }

    int top() {
        if(st.empty()){
            return -1;
        }else {
            if(st.top() > mini){
                return st.top();
            }
            else{
                return (int)mini;
            }
        }

    }

    int getMin() {
        return (int)mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
