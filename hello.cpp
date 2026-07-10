// #include<iostream>
// #include<string>
// using namespace std;
// class Student {
//   public:
//     string name;
//     int age;
//     void display(){
//       cout<<"The student name and age is "<< name << " & " <<age;
//     };
// };
// int main(){
//   Student s1;
//     s1.age = 32;
//     s1.name = "Saurabh Negi";
//     s1.display();
//   return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// class car {
//   public:
//   string brand;
//   int price;
//   void showDetails(){
//     cout<<"The brand name and price is "<< brand<<" & "<<price<<endl;
//   }
// };
// int main(){
//   car c1;
//   car c2;
//   c1.brand = "tata";
//   c1.price = 98765;
//   c2.brand = "Kia";
//   c2.price = 554536;
//   c1.showDetails();
//   c2.showDetails();
//   return 0;
// }

// #include<iostream>
// using namespace std;
// class Rectangle{
//   public:
//     int length, breadth;
//     int area(){
//       int area1 = length*breadth;
//       return area1;
//     }
// };
// int main(){
//   Rectangle R1;
//   R1.length = 57;
//   R1.breadth = 53;
//   cout<<R1.area()<<endl;
//   return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// class Employee
// {
// public:
//   string name;
//   int salary;
//   Employee()
//   {
//       Employee s1;
//     s1.name = "saurabh Negi";
//     s1.salary = 300000;
//   }
//   void display()
//   {
//     cout << "The name and salary is " << name << "& " << salary;
//   }
// };
// int main()
// {
//   student s1;

//   return 0;
// }




// #include <iostream>
// using namespace std;
// class car {
//   public:
//     car(){
//       cout<<"constructor called"<<endl;
//     }
// };
// int main(){
//   car c1;
// }




// #include <iostream>
// using namespace std;
// class Employee {
//   public:
//   string name;
//   int salary;
//   Employee(string n, int s){
//     name = n;
//     salary = s;
//   }
// };
// int main(){
//   Employee e1("Saurabh", 55000);
// }

// #include<iostream>
// using namespace std;
// class Student {
//   private: 
//     int marks;
//   public: 
//     void setMarks(){
//       marks = 432;
//     }
//     int getMarks(){
//       return marks;
//     }
// };
// int main(){
//   Student s1;
//   s1.setMarks();
//   cout<<s1.getMarks();
//   return 0;
// }






// #include<iostream>
// using namespace std;
// class bankAccount {
//   private: 
//     int balance;
//   public: 
//     int deposit(){
//       int amount;
//       cout<<"Enter the deposit amout"<<endl;
//       cin>>amount;
//       balance = amount;
//       return balance;
//     }
//     int withdraw(){
//       int withdrawel;
//       cout<<"Enter the withdraw amount"<<endl;
//       cin>>withdrawel;
//       if(withdrawel>balance){
//         cout<<"you don't have sufficient amount"<<endl;
//       }
//       balance = balance-withdrawel;
//       return balance;
//     }
//     int getBalance(){
//       return balance;
//     }
// };
// int main(){
//   bankAccount c1;
//   c1.deposit();
//   c1.withdraw();
//   cout<<"your remaining balance is "<<c1.getBalance();
//   return 0;
// }




// #include<iostream>
// using namespace std;
// double area(int a){
//    return 3.14*a*a;
// }
// int area(int a, int b){
//   return a*b;
// }
// int main(){
//   cout<<area(4)<<endl;
//   cout<<area(4,6);
// }





// constructor and destructor question
// #include<iostream>
// using namespace std;
// class Student {
//     public:
//     string name;
//     Student(string n){
//         name = n;
//         cout<<"student created";
//     }
//     void display() {
//         cout<<"name:"<<name;
//     }
//     ~Student(){
//         cout<<"student destroyed";
//     }
// };
// int main(){
//     Student s1("saurabh");

//     s1.display();
//     return 0;
// }
// Encapsulation
// #include<iostream>
// using namespace std;
// class Student {
//     private:
//         string name;
//         int age;
//     public: 
//         void setName(string n){
//             name = n;
//         }
//         void setAge(int a){
//             age = a;
//         }
//         void getName(){
//             cout<<name;
//         }
//         void getAge(){
//             cout<<age;
//         }
// };
// int main(){
//     Student s1;
//     s1.setName("saurabh");
//     s1.setAge(20);
//     s1.getName();
//     s1.getAge();

//     return 0;
// }
// Vectors
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec;
//     for(int i:vec){
//         cin>>i;
//     }
//     vec.push_back(10);
//     for (int i = 0; i < vec.size(); i++)
//     {
//         cout<<i<<endl;
//     }
//     return 0;
// }
/* Q1. Student Marks Management System

Ek program banao jisme students ke marks store ho.

Example:

Input:
5
90 85 76 88 92

Output:
Highest Marks = 92
Lowest Marks = 76
Average = 86.2
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int students;
    cout<<"Enter the number of students are there"<<endl;
    cin>>students;
    vector<int> marks;
    int mark;
    cout<<"Enter the marks of the students"<<endl;
    for (int i = 0; i < students; i++)
    {
        cin>>mark;
        marks.push_back(mark);
    }
    int highest_marks=marks[0];
    for (int i = 0; i < marks[students]; i++)
    {
                                                                   
    }
    
    return 0;
}