#include<iostream>
using namespace std;


void swapi(int &a,int &b){
     int temp;   
    temp = a;
    a = b;
    b = temp;
    
 
}
int main(){
    int n,arr[40];
    cout<<"size"<<endl;
    cin>>n;


    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        int min=i;

        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[min]){
                min=j;
            }
        }
        swapi(arr[i],arr[min]);


    }



    for(int i=0;i<n;i++){
        cout<<arr[i];
        cout<<endl;
    }


}