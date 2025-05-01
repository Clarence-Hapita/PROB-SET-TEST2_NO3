#include <iostream>
#include <unistd.h>
using namespace std;
int main(){
    string choice;
    cout<<"Do you want to print a countdown?(yes/no):";
    cin>>choice;
    
 
    if (choice=="yes"){
        for(int i =10;i>0;--i){
            sleep(1);
            cout<<i<<endl;
            cout<<endl;
        }
             cout<<"Congrats for wasting 10 seconds of your life."<<endl;
    }else{
            cout<<"Maybe next time! -Sarah G."<<endl;
    }
    return 0;
}

