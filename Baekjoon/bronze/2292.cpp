#include<iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    int check =1, answer=1;
    do
    {
        if (a<=check)
            break;
        check+=6*answer;
        answer+=1;
    } while (true);
    cout<<answer;

}