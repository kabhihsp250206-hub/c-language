// 1st question Read and Display an Integer
// #include <iostream>
//     using namespace std;
// int main()
// {
//     int a;
//     cout << "Enter Number: ";
//     cin >> a;
//     cout << "You Entered : " << a;
//     return 0;
// }

// 2nd question Read and Display Different Data Types Using cin and cout
// #include <iostream>
//     using namespace std;
// int main()
// {
//     int num;
//     float decimal;
//     char ch;
//     string name;
//     cout << "Enter Integer Value: ";
//     cin >> num;
//     cout << "Enter Float Value: ";
//     cin >> decimal;
//     cout << "Enter Character: ";
//     cin >> ch;
//     cout << "Enter String: ";
//     cin >> name;
//     cout << "Integer: " << num << endl;
//     cout << "Float: " << decimal << endl;
//     cout << "Character: " << ch << endl;
//     cout << "String :" << name << endl;
//     return 0;
// }

// 3rd quesion Create Your First Class and Objects
// #include <iostream>
//     using namespace std;
// class Student
// {
// public:
//     int roll_no;
//     string name;
//     float marks;
// };
// int main()
// {
//     Student s1;
//     cout << "Enter Roll Number: ";
//     cin >> s1.roll_no;
//     cout << "Enter Name: ";
//     cin >> s1.name;
//     cout << "Enter Marks: ";
//     cin >> s1.marks;
//     cout << "Student Details" << endl;
//     cout << "Roll Number: " << s1.roll_no << endl;
//     cout << "Name: " << s1.name << endl;
//     cout << "Marks: " << s1.marks << endl;
//     return 0;
// }

// 4th question Create Member function inside a class
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
//         cout << "Student Details" << endl;
//         cout << "Roll Number: " << roll_no << endl;
//         cout << "Name: " << name << endl;
//         cout << "Marks: " << marks << endl;
//     }
// };
// int main()
// {
//     Student s1;
//     s1.input();
//     s1.display();
//     return 0;
// }

// 5th question Create Multiple Object of a Class
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

// 6th question Array of Objects
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
//     int n;
//     cout << "Enter number of  Students: ";
//     cin >> n;
//     Student s[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter Details of Student " << i + 1 << endl;
//         s[i].input();
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Student " << i + 1 << endl;
//         s[i].display();
//     }
//     return 0;
// }

// 7th question Non - Inline Member Functions(Functions Defined Outside the Class)
// #include <iostream>
//                        using namespace std;
// class Student
// {
// public:
//     int roll_no;
//     string name;
//     float marks;
//     void input();
//     void display();
// };
// void Student ::input()
// {
//     cout << "Enter Roll Number: ";
//     cin >> roll_no;
//     cout << "Enter Name: ";
//     cin >> name;
//     cout << "Enter Marks: ";
//     cin >> marks;
// }
// void Student ::display()
// {
//     cout << "Student Details" << endl;
//     cout << "Roll Number: " << roll_no << endl;
//     cout << "Name: " << name << endl;
//     cout << "Marks: " << marks << endl;
// }
// int main()
// {
//     Student s1;
//     s1.input();
//     s1.display();
//     return 0;
// }

// 8th question Inline Member Function Using the inline Keyword
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

// 9th question Difference Between struct and class(Practical Demonstration)
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