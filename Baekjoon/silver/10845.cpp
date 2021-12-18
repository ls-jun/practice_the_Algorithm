#include<iostream>

using namespace std;

int queue[10001];

int sp=0;
int ep=0;

void push(int n){
    queue[ep]=n;
    ep++;
}
void front(){
    cout<<queue[sp]<<"\n";
}
void back(){
    if(sp == ep)
        cout<<-1<<"\n";
    else
        cout<<queue[ep-1]<<"\n";
}
void pop(){
    cout<<queue[sp]<<"\n";
    sp++;
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
    queue[i]=-1;
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
        else if(com == "front")
            front();
        else if(com == "back")
            back();
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