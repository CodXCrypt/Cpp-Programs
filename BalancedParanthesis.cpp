#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter input paranthesis : ";
    cin>>s;
    stack<char> st;
    int i, res=1;

    for(i=0;i<s.size();i++){

        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
          st.push(s[i]);
        
        if(s[i]==')'){
           if(st.top()!='('){
               res=0;
               break;
           }
           else
             st.pop();
        }

        if(s[i]=='}'){
     
           if(st.top()!='{'){
               res=0;
               break;
           }
           else
             st.pop();
        }

        if(s[i]==']'){
         
           if(st.top()!='['){
               res=0;
               break;
           }
           else 
             st.pop();
        }
    }

    if(res==1)
      cout<<"\nThe paranthesis are balanced.";

    else 
      cout<<"\nThe paranthesis are not balanced.";

    return 0;
}