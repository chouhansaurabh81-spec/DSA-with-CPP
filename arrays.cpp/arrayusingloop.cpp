#include<iostream>
using namespace std;
int main(){
/*   int arr[25]={9,8,7,6,5};
   int n=sizeof(arr)/sizeof(int);

   for(int i=0 ; i<n ; i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   return 0;
}
   

   int arr[5];
   int n=sizeof(arr)/sizeof(int);

   for(int i=0 ; i<n ; i++){
    cin>>arr[i];
   }
   for(int i=0 ; i<n ; i++){
    cout<<arr[i]<<",";
   }
   cout<<endl;
}
   */
  int n;
  cout<<"enter element of an array:";
  cin>>n;

  int arr[n];
  for(int i=0 ; i<n ; i++){
    cin>>arr[i];
  }
  for(int i=0 ; i<n ; i++){
    cout<<arr[i]<<",";
  }
//  cout<<endl;
  return 0;
}