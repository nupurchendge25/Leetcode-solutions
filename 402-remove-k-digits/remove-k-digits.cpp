class Solution {
public:
    string removeKdigits(string num, int k) {
    stack<char> stk;
    int n=num.size();
     for(int i=0;i<n;i++){
        char digit=num[i];

        while( !stk.empty() && k>0 && stk.top()>digit){
            stk.pop();
            k--;
        }
        stk.push(digit);
     }

     while( !stk.empty() && k>0){
            stk.pop();
            k--;
        }

    if(stk.empty()) return "0";

    string result="";

    while(!stk.empty()){
        result.push_back(stk.top());
        stk.pop();
    }

    while(result.size()>0 && result.back()=='0'){
        result.pop_back();
    }

    reverse(result.begin(),result.end());
  
    if(result.empty()) return "0";

    return result;

    }
};