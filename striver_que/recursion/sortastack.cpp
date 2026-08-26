class Solution {
public:
    void insert(stack<int> &v, int temp) {

        /*
            Base condn check if size == 0 || the v[last] <= temp(to be inserted)
            [0,1,5] insert [2]
            no decision
            make i/p smaller
            [0,1] insert [2]
        */

        if (v.size() == 0 || v.top() <= temp) {
            v.push(temp);
            return;
        }

        // make the problem smaller

        int val = v.top();
        v.pop();
        insert(v, temp);
        v.push(val);
    }

void sortStack(stack<int> &v)
{

    // Unable to make a decision
    // So make the problem smaller
    // Base Condn if the array is empty it is aleardy sorted
    if (v.size() <= 1) {
        return;
    }

    int val = v.top();
    v.pop();

    // recursion call for the smaller i/p
    sortStack(v);

    // after we reach the basecase
    // we will have to add the prev element we removed

    insert(v, val);
        
}


};