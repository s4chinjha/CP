class Solution {
public:
    bool isValid(string s) {
        
        //three cases correct ones
        //{}()[]
        //{[]}()
        //{[()]}

        //not correct
        //{]
        //{(})

        int n = s.size();int cnt1 =0;

        for(int i =0;i<n;i++){

            char ch = s[i];

            if(ch=='{'){
                cnt1 +=1;
            }
            else if(ch=='('){
                cnt1 +=2;
            }
            else{
                cnt1 +=3;
            }

            if(ch=='}'){
                cnt1 -=1;
            }
            else if(ch==')'){
                cnt1 -=2;
            }
            else{
                cnt1 -=3;
            }

        }

        //for the order 
        int i=0;int j =n-1;

        while(i<j){
            char ch = s[i];char ch2 = s[j];
            if(ch == '{' || ch == '(' || ch == '[' ){
                i++;
            }            
            else{
                j--;
            }

            if(ch != ch2){
                return false;
            }
        }

        return true;

    }
    //28 Mat
    bool isValid(string s){

        //make a stack
        stack<char> st;

        ////iterate over string
        //push and pop

        for(char &ch:s){

            //push
            if(st.empty() || ch == '{' || ch == '(' || ch == '['){

                st.push(ch);
                continue;
            }

            //pop

            if(ch == '}'){
                if(st.top() == '{'){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else if(ch == ')'){
                if(st.top() == '('){
                    st.pop();
                }
                else{
                    return false;
                }
            }else if(ch == ']'){
                if(st.top() == '['){
                    st.pop();
                }
                else{
                    return false;
                }
            }
    


        }
    
        return st.empty();
    }



};