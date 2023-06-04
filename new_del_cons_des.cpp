// C++ Program to store GPA of n number of students and display it
// where n is the number of students entered by the user

#include <iostream>
using namespace std;

//This is because the new operator returns the address of the memory location.

class cgpa{
  private: 
    int num;
    float* ptr;
  public:
    cgpa()
    {
      cout<< "Executing the constructor!"<<endl;
      cout << "Enter total number of students: ";
      cin >> num;          
      // memory allocation of num number of floats
      ptr = new float[num];
    }

    void get_gpa()
    {
      cout << "Enter GPA of students." << endl;
      for (int i = 0; i < num; ++i) {
        cout << "Student" << i + 1 << ": ";
        cin >> *(ptr + i);
    }
    }

    void display_gpa()
    {
      cout << "\nDisplaying GPA of students." << endl;
      for (int i = 0; i < num; ++i) {
      cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
    }
    }

    ~cgpa()
    {
      cout<<"Executing the destructor now!"<<endl;
      delete[] ptr;
    }
};

int main() {

  cgpa c;
  c.get_gpa();
  c.display_gpa();

  return 0;
}