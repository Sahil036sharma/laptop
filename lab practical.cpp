// (Program number 1)write a program to find the sum of individual digits  of a positive integers;

// #include<iostream>
// using namespace std;
// class num{
//     public:
//     int a,b,sum=0;
//     void input(){
//         cout<<"Enter the first number:-";
//         cin>>a;
//         cout<<"Enter the second number:-";
//         cin>>b;
//     }
//     void output(){
//         sum=a+b;
//         cout<<"Sum of the two numbers:-"<<sum<<endl;
//     }
// };
// int main(){
//  num n;
//  n.input();
//  n.output();
//  return 0;
// }


// (Program number 2) write a program to genrate the first n terms of the sequence;

// Online C++ compiler to run C++ program online
// #include<iostream>
// using namespace std;
// class genrate{
//     public:
//     int n ;
//     void num(){
//         cout<<"Enter the number:-";
//         cin>>n;
//     }
//     void show(){
//         for (int i=5;i>=n;n++)
//         {
//             int count=i+n*2;
            
//             cout<<"number in squence:-"<<count<<endl;
//         }
//     }
    
// };
//     int main()
//     {
//         genrate g;
//         g.num();
//         g.show();
//         return 0;
//     }


// (Program number 3) write a program to genrate all the prime numbers between the 1 and n where n is a value supplied by the user;

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
// int n,i,t;
//   cout<<"Enter the number:-";
//   cin>>n;
// if(n<2)
// {
//     cout<<"This number is not a prime number";
// }
//     else{
//     t=sqrt(n);
//     i=2;
//     while(i<=t)
//     {
//         if((n%i)==0)
//         break;

    
//      else{
//         i++;
//     }
//     }
//     if(i>t)
//     {
//         cout<<"This number is prime number:-"<<n<<endl;
//     }
//     else{
//         cout<<"This number is not a prime number:-"<<n<<endl;
//     }
//     return 0;
// }
// }

//(Program number 4) write a program to find both the largest and smallest number in a list of interger;

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={10,20,30,40,50};
//    int size = sizeof(arr)/sizeof(arr[0]);
//    if(size==0)
//    {
//     cout<<"This array is empty:-";
//     return 1;
//    }

//    int smallest= arr[0];
//    int largest = arr[0];

//    for( int i=1;i<size;i++)
//    {
//     if(arr[i]<smallest)
//     {
//         smallest=arr[0];
//     }
//     if(arr[i]>largest)
//     {
//         largest= arr[i];
//     }
//    }
//    cout<<"This number is smallest: " <<smallest<<endl;
//    cout<<"This number is largset: " <<largest<<endl;
//    return 0;
// }


//(Program number 5)write a program to sort a  list of number in ascending order in cpp;
#include<iostream>
using namespace std;

int main(){
    int arr[0]={10,20,43,53,32};
    int size = sizeof(arr)/sizeof(arr[0]);
   if(size==0)
   {
    cout<<"This array is empty:-";
    return 1;
  }

}
