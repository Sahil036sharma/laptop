// // // // // write a program to show the student information using class and object in c++; 
// // // // #include<iostream>
// // // // using namespace std;
 
// // // //  class student{
// // // //     public:
// // // //     string name;
// // // //     int id;
// // // //     string course;
// // // //  };
// // // //  int main(){
// // // //     student s1;
// // // //     s1.name="Sahil";
// // // //     s1.id = 93022;
// // // //     s1.course = "BCA";
// // // //     cout<<"Student name is:-"<<s1.name<<endl;
// // // //     cout<<"Student id is:-"<< s1.id<<endl;
// // // //     cout<<"Student course is:- "<<s1.course<<endl;
// // // //     return 0; 
// // // //  }

// // //  // write a program to show the student information using inharitance in c++; 

// // // //  #include <iostream>
// // // //  using namespace std;
// // // //  class student_info{
// // // //    public:
// // // //    int id;
// // // //    string name ;

// // // //    void ps_info(){
// // // //       cout<<"Enter the student id:-";
// // // //       cin>>id;
// // // //       cout<<"Enter the student name:-";
// // // //       cin>>name;

// // // //          }
// // // //  };
// // // //  class info:private student_info{
// // // //    int fee;
// // // //    string course ;

// // // //    public:

// // // //    void main_info()
// // // //    {
// // // //       ps_info();
// // // //       cout<<"Enter the  student fee:-";
// // // //       cin>>fee;
// // // //       cout<<"Enter the student course:-";
// // // //       cin>>course;
// // // //    }
// // // //    void display(){
// // // //       cout<<"Student name is:-"<<name<<endl;
// // // //       cout<<"student id is:-"<<id<<endl;
// // // //       cout<<"student fee is :-"<<fee<<endl;
// // // //       cout<<"student course is:-"<<course<<endl;
// // // //    }
// // // //  };
// // // //  int main(){
// // // //    info i;
// // // //    i.main_info();
// // // //    i.display();
// // // //    return 0;
// // // //  }

// // // //write a progrm to show the student marks using polymorphism in c++

// // // // #include<iostream>
// // // // using namespace std;
// // // // class marks{
// // // //    public:
// // // //    void func(int x)
// // // //    {
// // // //       cout<<"value of x is:-"<<x<<endl;
// // // //    }

// // // //    void func(double x)
// // // //    {
// // // //       cout<<"value of x is:-"<<x<<endl;
// // // //    }

// // // //    void func(int x ,int y)
// // // //    {
// // // //       cout<<"value of x and y is:-"<<x <<","<<y<<endl;
// // // //    }
// // // // };
// // // // int main(){
// // // //    marks m;
// // // //    m.func(20);
// // // //    m.func(20.205);
// // // //    m.func(12,15);
// // // //    return 0;
// // // // }

// // // //write a program of abstraction in c++;
// // // #include<iostream>
// // // using namespace std;
// // // class value{
// // //    public:
// // //    int a,b;

// // //    void func( int x ,int y){
// // //       a=x;
// // //       b=y;

// // //    }
// // //    void display()
// // //    {
// // //       cout<<"The value of a :-"<<a<<endl;
// // //       cout<<"The value of b :-"<<b<<endl;
// // //    }
// // // };
// // // int main(){
// // //    value v;
// // //    v.func( 10,20);
// // //    v.display();
// // //    return 0;
// // // }

// // // #include <iostream>

// // // int main() {
// // //     int arr[] = {10, 5, 7, 2, 8, 15};
// // //     int size = sizeof(arr) / sizeof(arr[0]);

// // //     if (size == 0) {
// // //         std::cout << "Array is empty" << std::endl;
// // //         return 1;
// // //     }

// // //     int smallest = arr[0];
// // //     int largest = arr[0];

// // //     for (int i = 1; i < size; i++) {
// // //         if (arr[i] < smallest) {
// // //             smallest = arr[i];
// // //         }
// // //         if (arr[i] > largest) {
// // //             largest = arr[i];
// // //         }
// // //     }

// // //     std::cout << "Smallest element: " << smallest << std::endl;
// // //     std::cout << "Largest element: " << largest << std::endl;

// // //     return 0;
// // // }


// // // #include<iostream>
// // // using namespace std;

// // // class num{
// // //    public:
// // //     int x;
// // //     void show(){
// // //         cout<<"Enter the first number :";
// // //         cin>>x;
        
// // //     }
// // // };
// // // class sum :protected num {
// // //     public:
// // //     // void show();
// // //     void nM(){
// // //         show();
// // //     cout<<"The value of x: "<<x;
// // //     }
// // // };

// // // int main(){
// // //     sum n;
// // //     n.nM();
// // //     return 0;
// // // }


// // // #include<iostream>
// // // using namespace std;

// // // class student{
// // //     public:
// // //     string name;
// // //     int roll_no;
// // //     float marks;

// // //     void data( string n,int r, float m)
// // //     {
// // //         name = n;
// // //         roll_no = r;
// // //         marks = m;
// // //     }

// // //     void show(){
// // //         cout<<"\nStudent name is : "<<name;
// // //         cout<<"\nStudent rollno is : "<<roll_no ;
// // //         cout<<"\nStudent total marks is : "<<marks;
// // //     }
// // // };



// // // int main(){
// // //     student s;
// // //     s.data("Sahil",1120,90.0);
// // //     s.show();
// // //     return 0;

// // // }
// // // Program to illustrate default constructor parameterized constructor and copy constructor


// // // #include<iostream>
// // // using namespace std;

// // // class MyClass {
// // //     int num;
// // // public:
// // //     // Default constructor
// // //     MyClass() {
// // //         num = 0;
// // //     }

// // //     // Parameterized constructor
// // //     MyClass(int i) {
// // //         num = i;
// // //     }

// // //     // Copy constructor
// // //     MyClass(const MyClass &obj) {
// // //         num = obj.num;
// // //     }

// // //     void display() {
// // //         cout << "The number is: " << num << endl;
// // //     }
// // // };

// // // int main() {
// // //     // Default constructor invoked
// // //     MyClass obj1;
// // //     obj1.display();

// // //     // Parameterized constructor invoked
// // //     MyClass obj2(100);
// // //     obj2.display();

// // //     // Copy constructor invoked
// // //     MyClass obj3 = obj2;
// // //     obj3.display();

// // //     return 0;
// // // }

// // // Write out program to demonstrate the operator overloading and function overloading


// #include<iostream>
// using namespace std;

// class num{
//     public:
//     int a,b,n;
//     void sum(int x, int y)
//     {
//         a=x;
//         b=y;
//         n=a+b;
//         cout<<n;

//     }
// };

// class abc :public num{

//     public:
//     int c,s;

//     public:
//     void sum(int x, int y, int z){
//         a=x;
//         b=y;
//         c=z;
//         s=a+b+c;
//         cout<<s;
//     }
// };

// int main(){
//     abc obj1;
//     obj1.sum(3,6);
// }



// // #include<iostream>
// // using namespace std;

// // class A{
// //     public:
// //     int a;
// //     void get_data(int n)
// //     {
// //         a=n;
// //     }
// // };

// // class B{
// //     public:
// //     int b;
// //     void get_d(int n)
// //     {
// //         b=n;
// //     }
// // };
// // class C : public B, public A{
// //     public:
// //     void display()
// //     {
// //     cout<<"Value of a is: "<<a<<endl;
// //     cout<<"Value of b is: "<<b<<endl;
// //     cout<<"Addition of two number is: "<<a+b;
// //     }
// // };
// // int main(){
// //      C obj;
// //     obj.get_data(10);
// //     obj.get_d(20);
// //     obj.display();
// //     return 0;
// //     }

// \
// // | Write a program to demonstrate the operator overloading and function overloading


// #include<iostream>
// using namespace std;

// class MyClass {
// public:
//     int num;
//     MyClass() : num(0) {}

//     MyClass(int i) : num(i) {}

//     MyClass operator+(const MyClass &obj) {
//         MyClass res;
//         res.num = this->num + obj.num;
//         return res;
//     }

//     void display() {
//         cout << "The number is: " << num << endl;
//     }

//     void display(string msg) {
//         cout << msg << num << endl;
//     }
// };

// int main() {
//     MyClass obj1(10);
//     MyClass obj2(20);

//     // Operator overloading
//     MyClass obj3 = obj1 + obj2;
//     obj3.display();  // Output: The number is: 30

//     // Function overloading
//     obj3.display("The sum is: ");  // Output: The sum is: 30

//     return 0;
// }



// Overload ++ when used as prefix

// #include <iostream>
// using namespace std;

// class Count {
//    private:
//     int value;

//    public:

//     // Constructor to initialize count to 5
//     Count() : value(5) {}

//     // Overload ++ when used as prefix
//     void operator ++ () {
//         ++value;
//     }

//     void display() {
//         cout << "Count: " << value << endl;
//     }
// };

// int main() {
//     Count count1;

//     // Call the "void operator ++ ()" function
//     ++count1;

//     count1.display();
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class num{
//     public:
//     int a,b,c,n,s;
//     void sum(int x, int y)
//     {
//         a=x;
//         b=y;
//         n=a+b;
//         cout<<n;
//     }
//     void sum(int x,int y,int z)
//     {
//         a=x;
//         b=y;
//         c=z;
//         s=a+b+c;
//         cout<<s;
//     }
// };
// int main(){
//     num obj;
//     obj.sum(3,2,7);
//     return 0;
// // }

// #include<iostream>
// using namespace std;

// class box {
//     private:
//     int length;
//     public:
//     box(){}
//         friend int printlength(box);
// };
// int printlength(box b)
// {
//     b.length+=10;
//     return b.length;

// }
// int main()
// {
//     box b;
//     cout<<"length of the box is: "<<printlength(b)<<endl;
//     return 0;

// }

// #include<iostream>
// using namespace std;

// class Box{
//     private:
//     int length;
//     int height;
//     public:
//     Box():length(10);
//     Box2():height(20); {}
//     friend int printdata(Box);
//     friend int 

// };
// int printdata(Box b)
// {
//     b.length=10;
//     b.height=20;
//     return 0 ;
// }
// int main()
// {
//     Box b;
//     cout<<"The length of the box is:"<<printdata(b)<<endl;
//     return 0;
// }

#include <iostream>

class Box {
public:
    int length;
    int breadth;
    int height;

public:
    // Constructor
    Box(int l, int b, int h) : length(l), breadth(b), height(h) {}

    // Friend function declaration
    friend void getDimensions(Box b);
};

// Friend function definition
void getDimensions(Box b) {
    std::cout << "Enter length: ";
    std::cin >> b.length;

    std::cout << "Enter breadth: ";
    std::cin >> b.breadth;

    std::cout << "Enter height: ";
    std::cin >> b.height;
}

int main() {


    Box b(length,breadth,height); // Initialize with default values


    getDimensions(b); // Call friend function to get dimensions

    // Display the dimensions
    std::cout << "Length: " << b.length << std::endl;
    std::cout << "Breadth: " << b.breadth << std::endl;
    std::cout << "Height: " << b.height << std::endl;

    return 0;
}
