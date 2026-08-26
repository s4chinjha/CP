class Solution {
public:
    void insert(vector<int>& v, int temp) {

        /*
            Base condn check if size == 0 || the v[last] <= temp(to be inserted)
            [0,1,5] insert [2]
            no decision
            make i/p smaller
            [0,1] insert [2]
        */

        if (v.size() == 0 || v[v.size() - 1] <= temp) {
            v.push_back(temp);
            return;
        }

        // make the problem smaller

        int val = v[v.size() - 1];
        v.pop_back();
        insert(v, temp);
        v.push_back(val);
    }

    vector<int> sortArray(vector<int>& v) {

        // Unable to make a decision
        // So make the problem smaller
        // Base Condn if the array is empty it is aleardy sorted
        if (v.size() <= 1) {
            return v;
        }

        int val = v[v.size() - 1];
        v.pop_back();

        // recursion call for the smaller i/p
        sortArray(v);

        // after we reach the basecase
        // we will have to add the prev element we removed

        insert(v, val);
        return v;
    }
};