#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    string tmp;
    
    int ch =1;
    while(true){
        stack<int> check;
        string a="";
        ch=1;
        while(true){
            getline(cin, tmp);

            a+=tmp;
            for(int i=0;i<=tmp.size();i++){
                if(tmp[i] == '(' or tmp[i] == '[')
                    check.push(tmp[i]);
                else if(tmp[i] == ')'){
                    if(check.empty()){
                        ch=0;
                        break;
                    }
                    if(check.top() == '(')
                        check.pop();
                    else break;
                }
                else if(tmp[i] == ']'){
                    if(check.empty()){
                        ch=0;
                        break;
                    }
                    if(check.top() == '[')
                        check.pop();
                    else break;
                }
            }
            
            if(tmp.back() == '.')
                break;
        }

        if(a=="." and a.size()==1) break;
        check.empty() & ch ? cout<<"yes\n" : cout<<"no\n";
        
    
    }
    
}