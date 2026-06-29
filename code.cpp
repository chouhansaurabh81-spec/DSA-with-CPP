#include<iostream>
using namespace std;
//int main(){
/*    int num;
    cout<<"enter number:";
    cin>>num;

    if(num>0){
        cout<<"positive";
    }else{
        cout<<"negative";
    } 

    int age;
    cout<<"enter age:";
    cin>>age;

    if(age>=18){
        cout<<"eligible for vote ";
    }else{
        cout<<"not eligible for vote ";
    }

    int marks;
    cout<<"enter marks:";
    cin>>marks;

    if(marks>=90){
        cout<<"excellent";
    }else if(marks>=37 && marks<90){
        cout<<"good";
    }else{
        cout<<"need improvement";
    }


    char ch;
    cout<<"enter character:";
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<"lowercase";
    }else if(ch>='A' && ch<='Z'){
        cout<<"upppercase";
    }else{
        cout<<"invalid";
    }

    int count=1;

    while(count<=10){
        cout<<count<<endl;
        count++;
}

    int n;
    cout<<"enter number:";
    cin>>n;
    
    int count=1;
    while(count<=n){
        cout<< count <<" ";
        count++;
    }



int n;
cout<<"enter number:";
cin>>n;

int oddsum=0;

for(int i=1 ; i<=n ; i++){
    if(i%2!=0){
    oddsum=oddsum+i;
}
}
     cout<<"sum="<<oddsum;
};

int n;
cout<<"enter number:";
cin>>n;

int sum=0;
for(int i=1 ; i<=n ; i=i+2){
    sum=sum+i;
}
      cout<<"sum="<<sum;
};

int n;
cout<<"enter number:";
cin>>n;

int  evensum=0;
for(int i=1 ; i<=n ; i++){
    if(i%2==0){
         evensum=evensum+i;
    }
}
            cout<<"evensum="<<evensum;
};


int n;
cout<<"enter number:";
cin>>n;
int evensum=0;
int i=1;
while(i<=n){
    i++;
    if(i%2==0){
        evensum=evensum+i;
    }
}
      cout<<"evensum="<<evensum;
};


int n;
cout<<"enter number:";
cin>>n;

int i=1;
do{
    cout<<i<<" ";
    i++;
}while(i<=n);
  cout<<endl;
return 0  ;
}

    int n;
    cout<<"enter a number:";
    cin>>n;

    bool isprime=true;

    for(int i=2 ; i<=n-1 ; i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
    if(isprime==true){
        cout<<"prime number";
    }else{
        cout<<"not prime number";
    }
};


int n,m;
cin>>n>>m;

for(int i=1 ; i<=n ; i++){
    for(int j=1 ; j<=m ; j++){
        cout<<"*";
    }
    cout<<endl;
}};


int n;
cout<<"enter a number";
cin>>n;

int sum=0;

for(int i=1 ; i<=n ; i++){
    if(i%3==0){
        sum=sum+i;
    }
    }
        cout<<sum;
};


int n;
cout<<"enter a number:";
cin>>n;

for(int i=1 ; i<=n ; i++){
    if(n%i==0){
        cout<<i<<endl;
    }
}
   };
  
   int n=4;
   
   for(int i=1 ; i<=n ; i++){
    for(int j=1 ; j<=n ; j++){
        cout<<"*"<<" ";
    }
     cout<<endl;
   }
};

int n=5;
for(int i=1 ; i<n ; i++){
    char ch='A';
    for(int j=1 ; j<n ; j++){
        cout<<ch<<" ";
        ch=ch+1;
    }
    cout<<endl;
}
};


int n;
cout<<"enter a number:";
cin>>n;
int num=1;
for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<n ; j++){
        cout<<num<<" ";
        num++;
    }
    cout<<endl;
}
};

int n=3;
char ch='A';
for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<n ; j++){
        cout<<ch<<" ";
        ch++;
    }
    cout<<endl;
}};


int n;
cout<<"enter a n:";
cin>>n;

for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<i+1 ; j++){
        cout<<"*"<<" ";
    }
    cout<<endl;
}
}


int n;
cout<<"enter a number:";
cin>>n;

for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<i+1 ; j++){
    cout<<(i+1)<<" ";
}
cout<<endl;
}
}

int n;
cout<<"enter a number:";
cin>>n;
char ch='A';
for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<i+1 ; j++){
        cout<<ch<<" ";
        //Tch++;
    }
    cout<<endl;
    ch++;
}
}


int n;
cout<<"enter a number:";
cin>>n;

for(int i=0 ; i<n ; i++){
  for(int j=1 ; j<=i+1 ; j++){
       cout<<j<<" ";
    }
    cout<<endl;
}
};

int n;
cout<<"enter a number:";
cin>>n;

for(int i=0 ; i<n ; i++){
    for(int j=i+1 ; j>0 ; j--){
        cout<<j<<" ";
    }
    cout<<endl;
}
};

int n;
cout<<"enter a number:";
cin>>n;
int count=1;

for(int i=0 ; i<n ; i++){
    for (int j=0 ; j<i+1 ; j++){
        cout<<count<<" ";
         count++;
    }
       cout<<endl;
}
};

int n;
cout<<"enter a number:";
cin>>n;

char ch='A';
for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<i+1 ; j++){
        cout<<ch<<" ";
        ch++;
    }
    cout<<endl;
}
}


int n;
cout<<"enter a number:";
cin>>n;

for(int i=0 ; i<n ; i++){
    for(int j=i+1 ; j>0 ; j--){
        cout<<char('A'+j-1)<<" ";
    }
    cout<<endl;
}
}


int n;
cout<<"enter a number:";
cin>>n;

for(int i=0 ; i<n ; i++){
    //spaces
    for(int j=0 ; j<i ; j++){
        cout<<" ";
    }
    //numbers
    for(int j=0 ; j<n-i ; j++){
        cout<<i+1;
    }
    cout<<endl;
}
}


int n;
cout<<"enter a number:";
cin>>n;

for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<i ; j++){
        cout<<" ";
    }
    for(int j=0 ; j<n-i ; j++){
        cout<<char('A'+i);
    }
    cout<<endl;
}
}


int n;
cout<<"enter a number:";
cin>>n;

for(int i=0 ; i<n ; i++){
    //spaces
    for(int j=0 ; j<n-i-1 ; j++){
        cout<<" ";
    }
    //num1
    for(int j=1 ; j<=i+1 ; j++){
        cout<<j;
    }
    //num2
    for(int j=i ; j>0 ; j--){
        cout<<j;
    }
    cout<<endl;
}
};


int n=4;

//top
for(int i=0 ; i<n ; i++){
    //spaces
    for(int j=0 ; j<n-i-1 ; j++){
        cout<<" ";
    }
    cout<<"*";
    
    if(i!=0){
//spaces2
    for(int j=0 ; j<2*i-1 ; j++){
        cout<<" ";
    }
    cout<<"*";
}
    cout<<endl;
}
  //bottom

  for(int i=0 ; i<n-1 ; i++){
    //spaces
    for(int j=0 ; j<i+1 ; j++){
        cout<<" ";
    }
    cout<<"*";

if(i!=n-2){
    //spaces
    for(int j=0 ; j<2*(n-i)-5 ; j++){
        cout<<" ";
    }
      cout<<"*";
}
     cout<<endl;
  }
};

void changeX(int x){
    x=2*x;
    cout<<"x="<<x<<endl;
}

 int main(){
    int x=5;
    changeX(x);
    cout<<"x="<<x<<endl;
    return 0;
 }


int revNum(int n){
    int rev=0;
    
    while(n!=0){
        rev=rev*10+n%10;
        n=n/10;
    }
    return rev;
}
int main(){
    cout<<"reverse="<<revNum(456)<<endl;
    return 0;
}
    

    int x;
    int *ptr;
    x=7;
    ptr=&x;
    cout<<*ptr;
}
    
   void multiplebytwo(int &a, int &b, int &c){
    a=a*2;
    b=b*2;
    c=c*2;
   }
   int main(){
    int x=1,y=2,c=3;
    multiplebytwo(x,y,c);
    cout<<x<<y<<c<<endl;
    return 0;
   }
    */