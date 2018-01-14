#include <iostream>
using namespace std;
int main(int argc,char* argv[]){
    bool found;
    if(argc>1)
        found = true;
    else
        found = false;
    if(!found){
        cout<<"Złe hasło!"<<endl;
    } else {
        cout<<"Dobre hasło"<<endl;
    }
    return 0;
}