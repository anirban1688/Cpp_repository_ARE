# include <iostream>
# include <string>
using namespace std;

//class Electrical;

class Mechanical {
  private:
      string subjects_me[6] = {"Theory Of Machines", "Strength of Materials", "CAD", "Machine drawing", "Fluid mechanics", "Operations Research"};
  public:    
    void disp_subjects_me() {
      for (int i = 0; i < 6; i++)
          cout << subjects_me[i] << endl;
    }
    friend class ARE;
};

class Electrical {
  private:
      string subjects_ee[4] = {"Control Systems", "Signal Processing", "Sensors and Transducers", "AC and DC machines"};
  public:    
    void disp_subjects_ee() {
      for (int i = 0; i < 6; i++)
          cout << subjects_ee[i] << endl;
    }
    friend class ARE;
};


class ARE {
  string subjects_are[3] = {"Robot kinematics and dynamics", "IoT", "C++"};
  public:
    void disp_subjects_are() {
      for (int i = 0; i < 3; i++)
          cout << subjects_are[i] << endl;
      }
    void disp_subjects_me(Mechanical &me) {      
      //class Mechanical me;
      cout << "ARE is a friend of Mechanical!"<<endl;
        
      for (int i = 0; i < 6; i++)
          cout << me.subjects_me[i] << endl;
    }
    void disp_subjects_ee() {      
      class Electrical ee;
      cout << "ARE is a friend of Electrical too!"<<endl;
        
      for (int i = 0; i < 4; i++)
          cout << ee.subjects_ee[i] << endl;
    }
};

int main() {
  //Mechanical subs_mech
  Mechanical me;
  ARE subs_are;
  cout << endl << "subjects ARE has in common with ME" <<endl;
  subs_are.disp_subjects_me(me);
  cout << endl << "subjects ARE has in common with EE" <<endl;
  subs_are.disp_subjects_ee();
  cout << endl << "subjects ARE specialises in" <<endl;
  subs_are.disp_subjects_are();
  return 0;
}