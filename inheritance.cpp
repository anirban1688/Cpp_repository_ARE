# include <iostream>
# include <string>
using namespace std;
class Mechanical {
  private:
      string subjects_me[6] = {"Theory Of Machines", "Strength of Materials", "CAD", "Machine drawing", "Fluid mechanics", "Operations Research"};
  public:    
    void disp_subjects_me() {
      for (int i = 0; i < 6; i++)
          cout << subjects_me[i] << endl;
    }
};

// Derived class
class ARE: public Mechanical {
  string subjects_are[3] = {"Robot kinematics and dynamics", "IoT", "C++"};
  public:
    void disp_subjects_are() {
      for (int i = 0; i < 3; i++)
          cout << subjects_are[i] << endl;
    }
};

int main() {
  ARE subs_are;
  cout << endl << "subjects ARE inherits from ME" <<endl;
  subs_are.disp_subjects_me();
  cout << endl << "subjects ARE specialises in" <<endl;
  subs_are.disp_subjects_are();
  return 0;
}