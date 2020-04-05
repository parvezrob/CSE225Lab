#include <iostream>
#include "stacktype.h"
using namespace std;

int main()
{
    StackType<char> stck;

    string s;
    cout <<"enter the string of paranthesis" <<endl;
    cin>>s;

    int flag = 1;

    for (int i =0; s[i]!='\0'; i++) {

        if(s[i]=='(') {
            try {
                stck.Push(s[i]);
            }
            catch(FullStack e) {
                cout <<"stack is full"<< endl;
            }
        } else if(s[i] == ')') {
            try {
                stck.Pop();
            } catch(EmptyStack e) {
                flag = 0;
                break;
            }
        }

    }
    if(stck.IsEmpty() && flag) {
        cout<<"balanced"<<endl;
    } else {
        cout<<"Not Balanced "<<endl;
    }
    return 0;
}
