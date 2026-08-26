#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        

        //first we make a map to store the val and the node

        unordered_map<int val,TreeNode*> mp;

        //a map to store the child

        unordered_set<int val> child_set;

        for(vi& it: descriptions){

            //initialize parent child and dirn

            int parent = it[0];
            int child  = it[1];
            int left = it[2];

            //check if the node is present already or not

            if(mp.find(parent) == mp.end()){
                mp[parent] = new TreeNode(parent);

            }

            //same for child

            if(mp.find(child) == mp.end()){
                mp[child] = new TreeNode(child);
                
            }

            if(left == 1){

                mp[parent]->left = mp[child];
            }
            else{
                mp[parent]->right = mp[child];
            }

            child_set.insert(child);

        }

        //now find head of the tree

        for(vi& it:descriptions){

            int parent = it[0];
            if(child_set.find(parent) == child_set.end()){

                return mp[parent];
            }
        }

        return NULL;
    }
};

