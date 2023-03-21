# include <iostream>
# include <string>
using namespace std;
class parent {
  private:
      int num1,num2;
  public:    
    void set_vals(int a, int b) {
      num1=a;
      num2=b;
    }
};

// Derived class
class child: public parent {  
  public:
    void add() {      
          cout << " The sum of the two numbers is: " << num1+num2 << endl;
    }
};

int main() {
  child child_obj;
  child_obj.set_vals(5,10);
  child_obj.add();
  return 0;
}