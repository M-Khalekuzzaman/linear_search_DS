#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int *arr = new int[size]{0};
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
Flag:
    int checkValue;
    cout<<"Please enter the value you want to search : ";
    cin>>checkValue;
    bool found = false;
    for(int i = 0;i<size;i++){
        if(arr[i] == checkValue){
            cout<<"Index no : "<<i<<" Position no : "<<i+1<<endl;
            found = true;
        }
    }
    if(found == false){
        cout<<"Not Found!!"<<endl;
    }
    char ch;
    cout<<"Do you want to continue search(Y/N): ";
    cin>>ch;
    if(ch == 'y' || ch == 'Y'){
       goto Flag;
    }




    return 0;
}
