#include<iostream>
using namespace std;

int linearsearch(int*p,int n,int key){
    for(int i=0;i<n;i++){
        if(*(p+i)==key)
        return 1;
    }
    return 0;
}
int main(){
    int key,i;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"enter the number to be searched"<<endl;
    cin>>key;
    int res=linearsearch(arr,10,key);
    if(res){
        cout<<"number is present in array"<<endl;
    }
    else{
        cout<<"number not present in array"<<endl;
    }
}