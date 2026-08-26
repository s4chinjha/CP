#include <bits/stdc++.h>

class Solution {
public:
    struct trieNode {
        // smallest index to store
        int idx;
        // array of trieNode pointers
        trieNode* children[26];
    };

    // func to create a newnode

    trieNode* getNode(int i) {
        trieNode* temp = new trieNode();

        temp->idx = i;

        // all children has null values for now

        for (int i = 0; i < 26; i++) {
            temp->children[i] = NULL;
        }

        return temp;
    }

    void insertTrie(trieNode* root, int i, vector<string>& wordsContainer) {

        string& word = wordsContainer[i];

        int n = word.length();

        // storing the string in reverse in the trie;

        for (int j = n - 1; j >= 0; j--) {

            char ch = word[j];

            int ch_idx = ch - 'a';

            // check in the children
            // if the current char of the string
            // is null or not

            if (root->children[ch_idx] == NULL) {

                // if it is null
                // we make a new node

                root->children[ch_idx] = getNode(i);
            }

            // move root

            root = root->children[ch_idx];

            // already present
            // current string of i
            // is length smaller than the string in root

            // we store smallest index of the string in the root
            if (wordsContainer[root->idx].length() > n) {
                root->idx = i;
            }
        }
    }

    int searchTrie(trieNode* root, string& word) {
        int result_idx = root->idx;

        int n = word.length();

        // searching the word

        for (int i = n - 1; i >= 0; i--) {

            int ch_idx = word[i] - 'a';

            root = root->children[ch_idx];

            if (root == NULL) {
                return result_idx;
            }

            result_idx = root->idx;
        }

        return result_idx;
    }

    vector<int> stringIndices(vector<string>& wordsContainer,
                              vector<string>& wordsQuery) {

        int m = wordsContainer.size();
        int n = wordsQuery.size();

        // array of ans
        vector<int> result(n);

        trieNode* root = getNode(0);

        for (int i = 0; i < m; i++) {

            int idx = root->idx;
            // shortest string idx
            if (wordsContainer[idx].length() > wordsContainer[i].length()) {
                // string wtih smallest length is at ith index
                root->idx = i;
            }

            insertTrie(root, i, wordsContainer);
        }

        for (int i = 0; i < n; i++) {
            // search
            result[i] = searchTrie(root, wordsQuery[i]);
        }

        return result;
    }
};
