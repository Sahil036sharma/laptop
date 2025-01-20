// #include<iostream>
// #include<fstream>
// using namespace std;

// class temp{
//     public:
    
//     void temp()
//     {
        
//         string First_name,Last_name,Email_Id,Password;
//         string searchName,searchPass,searchEmail;
//         fstream file;
//         public:
//         void login();
//         void signup();
//         void forget();
        

//     }obj;
//     int main()
//     {
//         char choice;
//         cout<<"\n1.Login";
//         cout<<"\n2.Signup";
//         cout<<"\n3.Forget password:";
//         cout<<"\n4.Exit";
//         cout<<"Enter your choice: ";
//         cin>>choice;
//         case '1':
//         obj.login();
//         break;
//         case '2':
//         obj.signup();
//         break;
//         case '3':
//         obj.forget();
//         break;
//         case '4':
//         obj.exit();
//         break;
        
//         default:
//         cout<<"Invalid session: please try again";

//     }
// }

// void temp :: signup()
// {
//     cout<<"\nEnter your fisrt name: ";
//     getline(cin,First_name);

//     cout<<"\nEnter your last name: ";
//     getline(cin,Last_name);

//     cout<<"\nEnter your valid email id: ";
//     getline(cin,Email_Id);

//     cout<<"\nEnter your password: ";
//     getline(cin,Password);

//     file.open("logindata.txt" ios::out | ios :: app);
//     file<<first_name<<last_name,Password<<email_id<<endl;
//     file.close();
// }

// void temp:: login (){

//     cout<<"-------------------LOGIN---------------";

//     cout<<"\nEnter the username: ";
//     getline(cin,searchName);
//     cout<<"\nEnter the password: ";
//     getline(cin,searchPass);

//     file.open("logindata.txt" , ios::in);
//     getline(file,username,"*");
//     getline(file,email_id,"*");
//     getline(file,password,"\n ");

//    while(file.eof()){
//     if(username == searchName)
//     {
//         if(password == searchPass)
//         {
//             cout<<"\n Account login sucessfully -----!";
//             cout<<"\n Username :: "<<username<<endl;
//             cout<<"\n Email_Id :: "<<Email_id<<endl;
//         }
//         else{
//             cout<<"Password is Incorrect......";
//         }
//     }
//     getline(file,username,"*");
//     getline(file,email_id,"*");
//     getline(file,password,"\n ");
//    }
//    file.close();
// }
// void temp :: forget(){
//     cout<<"\nEnter your Username ::";
//     getline(cin,userName);
//     cout<<"\nEnter your Email Address ::";
//     getline(cin,searchEmail);

//     file.open("logindata.txt" , ios::in);
//     getline(file,username,"*");
//     getline(file,email_id,"*");
//     getline(file,password,"\n ");

//     while(file.eof()){
//     if(username == searchName)
//     {
//         if(Email == searchEmail)
//         {
//             cout<<"\n Account found....!"<<endl;
//             cout<<"\nYour password :: "<<password<<endl;
//         }
//         else{
//             cout<<"Not found.....!";
//         }
//     } else{
//          cout<<"Not found.....!";
//     }
    
//    }
//    file.close();
// }
// }
#include <iostream>
#include <fstream>
using namespace std;

class temp {
private:
    string username, Email_Id, Password;
    string searchName, searchPass, searchEmail;
    fstream file;

public:
    temp() {}

    void login();
    void signup();
    void forget();
    void exitProgram();
};

void temp::signup() {
    cout << "\nEnter your first name: ";
    getline(cin, username);


    cout << "\nEnter your valid email id: ";
    getline(cin, Email_Id);

    cout << "\nEnter your password: ";
    getline(cin, Password);

    file.open("logindata.txt", ios::out | ios::app);
    file << username<< "*" << Password << "*" << Email_Id << endl;
    file.close();
}

void temp::login() {
    cout << "-------------------LOGIN---------------";

    cout << "\nEnter the username: ";
    getline(cin, searchName);
    cout << "\nEnter the password: ";
    getline(cin, searchPass);

    file.open("logindata.txt", ios::in);
    string username, email_id, password;
    while (getline(file, username, '*') && getline(file, email_id, '*') && getline(file, password, '\n')) {
        if (username == searchName) {
            if (password == searchPass) {
                cout << "\n Account login successfully -----!";
                cout << "\n Username :: " << username << endl;
                cout << "\n Email_Id :: " << email_id << endl;
                return;
            } else {
                cout << "Password is Incorrect......";
                return;
            }
        }
    }
    cout << "Username not found.....!" << endl;
    file.close();
}

void temp::forget() {
    cout << "\nEnter your Username ::";
    getline(cin, searchName);
    cout << "\nEnter your Email Address ::";
    getline(cin, searchEmail);

    file.open("logindata.txt", ios::in);
    string username, email_id, password;
    while (getline(file, username, '*') && getline(file, email_id, '*') && getline(file, password, '\n')) {
        if (username == searchName && email_id == searchEmail) {
            cout << "\n Account found....!" << endl;
            cout << "\nYour password :: " << password << endl;
            file.close();
            return;
        }
    }
    cout << "Not found.....!" << endl;
    file.close();
}

void temp::exitProgram() {
    exit(0);
}

int main() {
    temp obj;
    char choice;
    do {
        cout << "\n1.Login";
        cout << "\n2.Signup";
        cout << "\n3.Forget password:";
        cout << "\n4.Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1':
                obj.login();
                break;
            case '2':
                obj.signup();
                break;
            case '3':
                obj.forget();
                break;
            case '4':
                obj.exitProgram();
                break;
            default:
                cout << "Invalid session: please try again";
        }
    } while (choice != '4');

    return 0;
}
