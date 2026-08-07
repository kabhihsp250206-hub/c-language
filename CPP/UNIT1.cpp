// 1st question student detail using cin and cout
// #include <iostream>
// using namespace std;
// int main()
// {
//     string name;
//     int roll_no;
//     string sec;
//     int age;
//     float marks;
//     cout << "Enter Student Name: ";
//     getline(cin,name); //used to read an entire line of text
//     cout << "Enter Roll Number: ";
//     cin >> roll_no;
//     cout << "Enter Section: ";
//     cin >> sec;
//     cout << "Enter Age: ";
//     cin >> age;
//     cout << "Enter Marks:";
//     cin >> marks;
//     cout << "Students Details" << endl;
//     cout << "Name: " << name << endl;
//     cout << "Roll Number: " << roll_no << endl;
//     cout << "Section: " << sec << endl;
//     cout << "Age: " << age << endl;
//     cout << "Marks: " << marks << endl;
//     return 0;
// }

// // 2nd question student details using class
// #include <iostream>
// using namespace std;
// class Student{
// public:
//     string name;
//     int roll_no;
//     string sec;
//     int age;
//     float marks;
// };
// int main()
// {
//     Student s1;
//     cout << "Enter Student Name: ";
//     getline(cin,s1.name); //used to read an entire line of text
//     cout << "Enter Roll Number: ";
//     cin >> s1.roll_no;
//     cout << "Enter Section: ";
//     cin >> s1.sec;
//     cout << "Enter Age: ";
//     cin >> s1.age;
//     cout << "Enter Marks:";
//     cin >> s1.marks;
//     cout << "Students Details" << endl;
//     cout << "Name: " << s1.name << endl;
//     cout << "Roll Number: " << s1.roll_no << endl;
//     cout << "Section: " << s1.sec << endl;
//     cout << "Age: " << s1.age << endl;
//     cout << "Marks: " << s1.marks << endl;
//     return 0;
// }

// 3rd question student details using member function
// #include <iostream>
// using namespace std;
// class Student
// {
// public:
//     string name;
//     int roll_no;
//     string sec;
//     int age;
//     float marks;
//     void getData()
//     {
//         cout << "Enter Student Name: ";
//         getline(cin, name); // used to read an entire line of text
//         cout << "Enter Roll Number: ";
//         cin >> roll_no;
//         cout << "Enter Section: ";
//         cin >> sec;
//         cout << "Enter Age: ";
//         cin >> age;
//         cout << "Enter Marks:";
//         cin >> marks;
//     }
//     void displayData()
//     {
//         cout << "Students Details" << endl;
//         cout << "Name: " << name << endl;
//         cout << "Roll Number: " << roll_no << endl;
//         cout << "Section: " << sec << endl;
//         cout << "Age: " << age << endl;
//         cout << "Marks: " << marks << endl;
//     }
// };
// int main()
// {
//     Student s1;
//     s1.getData();
//     s1.displayData();
//     return 0;
// }

// 4th question Create Multiple Object of a Class
// #include <iostream>
//     using namespace std;
// class Student
// {
// public:
//     int roll_no;
//     string name;
//     float marks;
//     void input()
//     {
//         cout << "Enter Roll Number: ";
//         cin >> roll_no;
//         cout << "Enter Name: ";
//         cin >> name;
//         cout << "Enter Marks: ";
//         cin >> marks;
//     }
//     void display()
//     {
//         cout << "Roll Number: " << roll_no << endl;
//         cout << "Name: " << name << endl;
//         cout << "Marks: " << marks << endl;
//     }
// };
// int main()
// {
//     Student s1, s2, s3;
//     cout << "Enter Details of Student 1" << endl;
//     s1.input();
//     cout << "Enter Details of Student 2" << endl;
//     s2.input();
//     cout << "Enter Details of Student 3" << endl;
//     s3.input();
//     cout << "Student 1 Details" << endl;
//     s1.display();
//     cout << "Student 2 Details" << endl;
//     s2.display();
//     cout << "Student 3 Details" << endl;
//     s3.display();
//     return 0;
// }

// 5th question Difference Between struct and class
// #include <iostream>
//     using namespace std;
// struct StudentStruct
// {
//     int roll_no;
//     string name;
// };
// class StudentClass
// {
// public:
//     int roll_no;
//     string name;
// };
// int main()
// {
//     struct StudentStruct s1;
//     StudentClass c1;
//     cout << "Enter Structure Student Details" << endl;
//     cout << "Roll Number: ";
//     cin >> s1.roll_no;
//     cout << "Name: ";
//     cin >> s1.name;
//     cout << "Enter Class Student Details" << endl;
//     cout << "Roll Number: ";
//     cin >> c1.roll_no;
//     cout << "Name: ";
//     cin >> c1.name;
//     cout << "Structure Student" << endl;
//     cout << "Roll Number: " << s1.roll_no << endl;
//     cout << "Name :" << s1.name << endl;
//     cout << "Class Student" << endl;
//     cout << "Roll Number: " << c1.roll_no << endl;
//     cout << "Name :" << c1.name << endl;
//     return 0;
// }

// 6th question Inline Member Function Using the inline Keyword
// #include <iostream>
//     using namespace std;
// class Calculator
// {
// public:
//     int a;
//     int b;
//     void input()
//     {
//         cout << "Enter First Number: ";
//         cin >> a;
//         cout << "Enter Second Number: ";
//         cin >> b;
//     }
//     inline void add()
//     {
//         cout << "Sum = " << a + b;
//     }
// };
// int main()
// {
//     Calculator c1;
//     c1.input();
//     c1.add();
//     return 0;
// }

// // 7th question Non-Inline Member Function
// #include <iostream>
//     using namespace std;
// class Calculator
// {
// public:
//     int a;
//     int b;
//     void input();
//     void multilpy();
// };
// void Calculator:: input()
//     {
//         cout << "Enter First Number: ";
//         cin >> a;
//         cout << "Enter Second Number: ";
//         cin >> b;
//     }
//     void Calculator:: multilpy()
//     {
//         cout << "Product = " << a * b;
//     }
// int main()
// {
//     Calculator c1;
//     c1.input();
//     c1.multilpy();
//     return 0;
// }

// 8th question static data member
// #include <iostream>
// using namespace std;
// class Student
// {
// public:
//     int roll_no;
//     string name;
//     float marks;
//     static int count; // Static data member
//     void getData()
//     {
//         cout << "Enter Roll Number: ";
//         cin >> roll_no;
//         cout << "Enter Name: ";
//         cin >> name;
//         cout << "Enter Marks: ";
//         cin >> marks;
//         count++; // Increase count whenever data is entered
//     }
//     void displayData()
//     {
//         cout << "Roll Number: " << roll_no << endl;
//         cout << "Name: " << name << endl;
//         cout << "Marks: " << marks << endl;
//     }
// };
// // Definition of the static data member
// int Student::count = 0;
// int main()
// {
//     Student s1, s2, s3;
//     cout << "Enter Details of Student 1" << endl;
//     s1.getData();
//     cout << "\nEnter Details of Student 2" << endl;
//     s2.getData();
//     cout << "\nEnter Details of Student 3" << endl;
//     s3.getData();
//     cout << "\n----- Student Details -----" << endl;
//     s1.displayData();
//     s2.displayData();
//     s3.displayData();
//     cout << "\nTotal Students = " << Student::count << endl;
//     return 0;
// }

// 9th question static member function
// #include <iostream>
// using namespace std;
// class Student
// {
// public:
//     int roll_no;
//     string name;
//     float marks;
//     static int count; // Static data member
//     void getData()
//     {
//         cout << "Enter Roll Number: ";
//         cin >> roll_no;
//         cout << "Enter Name: ";
//         cin >> name;
//         cout << "Enter Marks: ";
//         cin >> marks;
//         count++; // Increase count whenever data is entered
//     }
//     void displayData()
//     {
//         cout << "Roll Number: " << roll_no << endl;
//         cout << "Name: " << name << endl;
//         cout << "Marks: " << marks << endl;
//     }
//     static void showCount()
//     {
//         cout << "\nTotal Students = " << count << endl;
//     }
// };
// // Definition of the static data member
// int Student::count = 0;
// int main()
// {
//     Student s1, s2, s3;
//     cout << "Enter Details of Student 1" << endl;
//     s1.getData();
//     cout << "\nEnter Details of Student 2" << endl;
//     s2.getData();
//     cout << "\nEnter Details of Student 3" << endl;
//     s3.getData();
//     cout << "\n----- Student Details -----" << endl;
//     s1.displayData();
//     s2.displayData();
//     s3.displayData();
//     Student::showCount();
//     return 0;
// }

// 10th question Enumeration (enum)
// #include <iostream>
// using namespace std;
// enum Day
// {
//     Monday,
//     Tuesday,
//     Wednesday,
//     Thursday,
//     Friday,
//     Saturday,
//     Sunday
// };
// int main()
// {
//     Day today;
//     today = Wednesday;
//     cout << "Integer Value =  " << today << endl;
//     switch (today)
//     {
//     case Monday:
//         cout << "Today is Monday" << endl;
//         break;
//     case Tuesday:
//         cout << "Today is Tuesday" << endl;
//         break;
//     case Wednesday:
//         cout << "Today is Wednesday" << endl;
//         break;
//     case Thursday:
//         cout << "Today is Thursday" << endl;
//         break;
//     case Friday:
//         cout << "Today is Friday" << endl;
//         break;
//     case Saturday:
//         cout << "Today is Saturday" << endl;
//         break;
//     case Sunday:
//         cout << "Today is Sunday" << endl;
//         break;
//     default:
//         cout << "Invalid Day" << endl;
//     }
//     return 0;
// }