#include<iostream>

using namespace std;

int stack[10001];

int sp=1;
int ep=1;

void push(int n){
    stack[ep]=n;
    ep++;
}
void top(){
    if(sp == ep)
        cout<<-1<<"\n";
    else
        cout<<stack[ep-1]<<"\n";
}
void pop(){
    cout<<stack[ep-1]<<"\n";
    ep--;
    if(ep<=0) ep=1;
}
void size(){
    cout<<ep-sp<<"\n";
}
void empty(){
    if(ep == sp)
        cout<< 1<<"\n";
    else cout << 0 <<"\n";
}


int main(){
    for(int i=0;i<10001;i++){
    stack[i]=-1;
}
    int n, tmp;
    cin >> n;
    string com;
    while(n){
        cin >> com;
        if(com == "push"){
            cin >> tmp;
            push(tmp);
        }
        else if(com == "top")
            top();
        else if(com == "size")
            size();
        else if(com == "empty")
            empty();
        else if(com == "pop")
            pop();

        if(sp>ep)
            sp =ep;
        n--;
    }
}