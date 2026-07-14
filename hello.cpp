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

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int students;
//     cout<<"Enter the number of students are there"<<endl;
//     cin>>students;
//     vector<int> marks;
//     int mark;
//     cout<<"Enter the marks of the students"<<endl;
//     for (int i = 0; i < students; i++)
//     {
//         cin>>mark;
//         marks.push_back(mark);
//     }
//     int highest_marks=marks[0];
//     for (int i = 0; i < students; i++)
//     {
//         if(marks[i]>= highest_marks){
//             highest_marks= marks[i];
//         }
//     }
//     cout<<"Highest marks is: "<<highest_marks<<endl;
//     int lowest_marks = marks[0];
//     for (int i = 0; i < students; i++)
//     {
//         if(marks[i]<= lowest_marks){
//             lowest_marks = marks[i];
//         }
//     }
//     cout<<"Lowest marks: "<<lowest_marks<<endl;
//     float average;
//     float sum = 0;
//     for (int i = 0; i < students; i++)
//     {
//         sum = sum+marks[i];
//     }
//     average = sum/students;
//     cout<<"Average marks: "<<average;
//     return 0;
// }

// Q1. Student Marks Management System

// Ek program banao jisme students ke marks store ho.

// Example:

// Input:
// 5
// 90 85 76 88 92

// Output:
// Highest Marks = 92
// Lowest Marks = 76
// Average = 86.2
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int students;
//     cout<<"Enter the number of students: "<<endl;
//     cin>>students;
//     if(students<=0){
//         cout<<"No student found"<<endl;
//         return 0;
//     }
//     int mark;
//     vector<int> marks;
//     cout<<"Enter the marks of the students: "<<endl;
//     for (int i = 0; i < students; i++)
//     {
//         cin>>mark;
//         marks.push_back(mark);
//     }
//     int highest_mark = marks[0];
//     int lowest_mark = marks[0];
//     float sum = 0;
//     float average;
//     for (int i = 0; i < students; i++)
//     {
//         if(marks[i]>=highest_mark){
//             highest_mark = marks[i];
//         }
//         if(marks[i]<=lowest_mark){
//             lowest_mark = marks[i];
//         }
//         sum = sum+marks[i];
//     }
//     average = sum/students;
//     cout<<"Highest marks"<<highest_mark<<endl;
//     cout<<"Lowest marks"<<lowest_mark<<endl;
//     cout<<"Average marks"<<average<<endl;
//     return 0;
// }
// 1. Sum of Array
// Q1.

// Store marks of 10 students in a vector and print the total marks.

// Example:

// Input:
// 50 60 70 80 90 40 30 20 10 100

// Output:
// 550
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int students;
//     cin>>students;
//     vector<int> marks(students);
//     int sum = 0;
//     for (int i = 0; i < students; i++)
//     {
//         cin>>marks[i];
//         sum +=marks[i];
//     }
//     cout<<"sum: "<<sum;
//     return 0;
// }
// 2. Average
// Q3.

// Find the average of N numbers.

// Example

// Input
// 5
// 10 20 30 40 50

// Output
// 30
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int numbers;
//     cin>>numbers;
//     vector<int> values(numbers);
//     float average;
//     int sum = 0;
//     for (int i = 0; i < numbers; i++)
//     {
//         cin>>values[i];
//         sum += values[i];
//     }
//     average = (float)sum/numbers;
//     cout<<"average: "<<average;
//     return 0;
// }
// // Q11.

// // Count how many even numbers are present.

// // Example

// // Input
// // 6
// // 1 2 3 4 5 6

// // Output
// // Even = 3
// // Odd = 3
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     cout<<"Enter the numbers how many u want to write: "<<endl;
//     int numbers;
//     cin>>numbers;
//     int even = 0;
//     int odd = 0;
//     vector<int> value(numbers);
//     for (int i = 0; i < numbers; i++)
//     {
//         cin>>value[i];
//         if(value[i]%2==0){
//             even++;
//         }
//         else{
//             odd++;
//         }
//     }
//     cout<<"Total even numbers are: "<<even;
//     cout<<"Total odd numbers are: "<<odd;
//     return 0;
// }
// 6. Linear Search
// Q14.

// Search an element in the array.

// If found print index.

// Else print

// Not Found
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int num;
//     cout<<"how many numbers you want to write: "<<endl;
//     cin>>num;
//     if(num<=0){
//         cout<<"0 and negative values are not allowed"<<endl;
//         return 0;
//     }
//     vector<int> numbers;
//     int temp_num;
//     int find_num;
//     cout<<"enter the number: "<<endl;
//     for (int i = 0; i < num; i++)
//     {
//         cin>>temp_num;
//         numbers.push_back(temp_num);
//     }
//     cout<<"Enter the number whose index you want to find: "<<endl;
//     cin>>find_num;
//     for (int i = 0; i < numbers.size(); i++)
//     {
//         if(find_num==numbers[i]){
//             cout<<i;
//             return 0;
//         }
//     }
//     cout<<"No value found";
//     return 0;
// }
// 7. Frequency of an Element
// Q17.

// Count how many times a number occurs.

// Example

// Input
// 7

// 1 2 3 2 5 2 7

// Find = 2

// Output
// 3
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     int num;
//     int temp_num;
//     int count = 0;
//     cout << "how many numbers you want to write: " << endl;
//     int find_num;
//     cin >> num;
//     if (num <= 0)
//     {
//         cout << "0 and negative values not allowed" << endl;
//         return 0;
//     }
//     vector<int> numbers(num);
//     cout << "Enter the number: " << endl;
//     for (int i = 0; i < num; i++)
//     {
//         cin >> numbers[i];
//         numbers[i] = numbers[i]+5;
//     }
//     cout << "Enter the number which u want to find: " << endl;
//     cin >> find_num;
//     for (int i = 0; i < numbers.size(); i++)
//     {
//         if (find_num == numbers[i])
//         {
//             count++;
//         }
//     }
//     cout << count;
//     return 0;
// }
// 11. Second Largest
// Q30.

// Find the second highest marks.

// Example

// Input

// 5

// 10 40 80 90 70

// Output

// 80
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int num;
//     cout<<"How many numbers you want to write: "<<endl;
//     cin>>num;
//     vector<int> numbers(num);
//     cout<<"Enter the numbers: "<<endl;
//     for (int i = 0; i < num; i++)
//     {
//         cin>>numbers[i];
//     }
//     int highest_number = numbers[0];
//     int second_highest_number = numbers[1];
//     for (int i = 0; i < numbers.size(); i++)
//     {
//         if(numbers[i]>=highest_number){
//             second_highest_number = highest_number;
//             highest_number= numbers[i];
//         }
//         else if(numbers[i]> second_highest_number && numbers[i]!=highest_number){
//             second_highest_number =  numbers[i];
//         }
//     }
//     cout<<"Second highest number: "<<second_highest_number<<endl;
//     return 0;
// }
// 12. Check Sorted
// Q33.

// Check whether array is sorted in ascending order.

// Output

// YES

// or

// NO
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int num;
//     cout<<"How many numbers do u want to write: "<<endl;
//     cin>>num;
//     cout<<"Enter the numbers: "<<endl;
//     vector<int> numbers(num);
//     for (int i = 0; i < num; i++)
//     {
//         cin>>numbers[i];
//     }

//     for (int i = 0; i < num; i++)
//     {
//         if(numbers[i+1]>=numbers[i]){
//             cout<<"no";
//             return 0;
//         }
//         else{
//             cout<<"yes";
//         }
//     }
    
//     return 0;
// }Q30.

// Find the second highest marks.

// Example

// Input

// 5

// 10 40 80 90 70

// Output

// 80
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter how many numbers you want to write: "<<endl;
//     cin>>num;
//     if(num<=0){
//         cout<<"0 and negative values are not allowed"<<endl;
//         return 0;
//     }
//     vector <int> numbers(num);
//     for (int i = 0; i < num; i++)
//     {
//         cin>>numbers[i];
//     }
    
//     int highest_number = numbers[0];
//     int second_highest_number = numbers[0];
//     for (int i = 0; i < num; i++)
//     {
//         if (numbers[i]>highest_number)
//         {
//             second_highest_number = highest_number;
//             highest_number = numbers[i];
//         }
//         else if(numbers[i]>=second_highest_number && numbers[i]!=highest_number){
//             second_highest_number = numbers[i];
//         }
//     }
//     cout<<"Second highest number is: "<<second_highest_number<<endl;
//     return 0;
// }
// 12. Check Sorted
// Q33.

// Check whether array is sorted in ascending order.

// Output

// YES

// or

// NO
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int num;
//     cout<<"How many numbers of array it is: "<<endl;
//     cin>>num;
//     if(num<=0){
//         cout<<"Negative and 0 values are not allowed"<<endl;
//         return 0;
//     }
//     vector <int>arr(num);
//     cout<<"Enter the numbers: "<<endl;
//     for (int i = 0; i < num; i++)
//     {
//         cin>>arr[i];
//     }
//     for (int i = 0; i < arr.size()-1; i++)
//     {
//         if(arr[i]>=arr[i+1]){
//             cout<<"No"<<endl;
//             return 0;
//         }
//     }
//     cout<<"yes";
    
//     return 0;
// }
// 1. Insert Element at Given Position ⭐⭐⭐

// Concept:

// Shift elements to right
// Increase size
// Boundary cases
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> arr={1,7,11,15,19,25,76};
//     arr.resize(8);
//     int position;
//     cout<<"Enter the position"<<endl;
//     cin>>position;
//     int value;
//     cout<<"Enter the value you want to insert: "<<endl;
//     cin>>value;
//     for (int i = position-1; i > arr.size()-1; i--)
//     {
//         arr[i+1] = arr[i];
//     }
//     arr[position-1] = value;
    
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout<< arr[i]<< " ";
//     }
    
    
//     return 0;
// }
// 1. Insert Element at Given Position ⭐⭐⭐

// Concept:

// Shift elements to right
// Increase size
// Boundary cases
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int position;
//     int value;
//     vector<int> arr={1,7,11,15,19,25,76};
//     cout<<"Enter the Position from 1 to "<<arr.size()+1 <<endl;
//     cin>>position;
//     cout<<"Enter the value: "<<endl;
//     cin>>value;
//     if(position<1 || position> arr.size()+1){
//         cout<<"Invalid position"<<endl;
//         return 0;
//     }
//     arr.resize(arr.size()+1);
//     for (int i = arr.size()-2; i >= position-1; i--)
//     {
//         arr[i+1] = arr[i];
//     }
//     arr[position-1] = value;
//     for (int i = 0; i <arr.size() ; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }
// 2. Delete Element from Given Position ⭐⭐⭐

// Concept:

// Shift elements to left
// Decrease size
// Boundary cases
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int position, value;
//     vector<int> arr={1,7,11,15,19,25,76};
//     cout<<"Enter the Position from 1 to "<<arr.size()-1 <<endl;
//     cin>>position;
//     if(position<1 || position> arr.size()-1){
//         cout<<"Invalid postion"<<endl;
//         return 0;
//     }
//     for (int i = position-1; i <arr.size()-1 ; i++)
//     {
//         arr[i]=arr[i+1];
//     }
//     arr.resize(arr.size()-1);
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }
// 3. Update an Element ⭐

// Concept:

// Replace value at index
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int position, value;
//     vector<int> arr={1,7,11,15,19,25,76};
//     cout<<"Enter the Position from 1 to "<<arr.size() <<endl;
//     cin>>position;
//     if(position<1 || position> arr.size()){
//         cout<<"Invalid postion"<<endl;
//         return 0;
//     }
//     cout<<"Enter the value: "<<endl;
//     cin>>value;
//     arr[position-1] = value;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
// 4. Reverse an Array (Two Pointers) ⭐⭐⭐⭐

// Concept:

// Swapping
// Two pointers
// Very important
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> arr={3,6,7,10,24,34,654,34};
//     //initializing pointer
//     int left = 0;
//     int right = arr.size()-1;
//     int temp;
//     while (left<right)
//     {
//         temp = arr[left];
//         arr[left] = arr[right];
//         arr[right] = temp;
//         left++;
//         right--;
//     }
    
//     // for (int i = 0; i < arr.size()/2; i++)
//     // {
//     //     temp = arr[i];
//     //     arr[i]=arr[arr.size()-1-i];
//     //     arr[arr.size()-1-i] = temp;
//     // }
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
    
//     return 0;
// }
// // 5. Left Rotate Array by One ⭐⭐⭐

// // Concept:

// // Store first element
// // Shift left
// // Put stored element at end
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> arr{2,53,64,23,75,87,56,54,324,564};
//     int temp;
//     temp = arr[0];
//     for (int i = 0; i < arr.size()-1; i++)
//     {
//         arr[i] = arr[i+1];
//     }
//     arr[arr.size()-1] = temp;
//         for (int i = 0; i < arr.size(); i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
// 6. Right Rotate Array by One ⭐⭐⭐

// Concept:

// Store last element
// Shift right
// Put stored element at beginning
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> arr{2,53,64,23,75,87,56,54,324,564};
//     int temp;
//     temp = arr[arr.size()-1];
//     for (int i = arr.size()-1; i >=1; i--)
//     {
//         arr[i] = arr[i-1];
//     }
//     arr[0] = temp;
//         for (int i = 0; i < arr.size(); i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
// 7. Left Rotate by K Places ⭐⭐⭐⭐⭐

// Concept:

// k %= n
// Multiple rotations
// Efficient thinking
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={4,2,5,7,45,23,675,34,54,23};
    int rotations;
    cout<<"Enter how many rotations you want:"<<endl;
    cin>>rotations;
    int temp;
    // int effective_roations = rotations%arr.size();
    for (int i = 0; i < rotations; i++)
    {
        temp = arr[i];
        for (int i = 0; i < arr.size(); i++)
        {
            arr[i] = arr[i+1];
        }
        arr[arr.size()-1-i] = temp;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;


}