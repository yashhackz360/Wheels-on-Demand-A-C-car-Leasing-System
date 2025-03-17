#include <stdlib.h>
#include <fstream>
#include <iomanip>
#include <iostream>

#define B_MAG "\x1B[45m"
#define MAG "\x1B[35m"
#define BLU "\x1B[34m"
#define B_BLU "\x1B[44m"
#define B_RED "\x1B[41;1m"
#define RED "\x1B[31;1m"
#define RE "\x1B[31m"
#define B_CYAN "\x1B[46m"
#define CYAN "\x1B[36m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define RESET "\x1B[0m"
#define BOLD "\x1B[1m"

using namespace std;
float trent = 0;
int tcar = 0;
char first_name[20];
char last_name[20];
long int contact;
int days;

class car {
 public:
  int n;
  char ch;

  static int cthar, cjeep, cland,  crolls, cbentley, cbmw,cfortuner, cscorpio, cinnova;

  void cust_details() {
    if (trent == 0) {
      cout << "\t" MAG BOLD
              "----------------------------------------------------------------"
              "---------------------" RESET "\n";
      cout << "\tPlease provide cumstomer details\n\n";
      cout << "\tEnter first name : ";
      cin >> first_name;
      cout << "\n";
      cout << "\tEnter last name : ";
      cin >> last_name;
      cout << "\n";
      cout << "\tEnter contact no. : ";
      cin >> contact;
      cout << "\t" MAG BOLD
              "----------------------------------------------------------------"
              "---------------------" RESET "\n";
      cout << "\n";
    }
  }
};
int car::cthar = 1;
int car::cjeep = 2;
int car::cland = 3;
int car::crolls = 2;
int car::cbentley = 1;
int car::cbmw = 3;
int car::cfortuner = 3;
int car::cscorpio = 2;
int car::cinnova = 4;


class offroad: public car {
 public:
  void get_data() {
    std::cout << left << std::setw(60)
              << "\t" YEL BOLD
                 "-------------------------------------------------------------"
                 "-----------------------" RESET
              << "\n";

    std::cout << left << std::setw(16) << "";
    std::cout << left << std::setw(15) << "";
    std::cout << left << std::setw(31) << RED "MAHINDHRA THAR" RESET;
    std::cout << left << std::setw(33) << BLU BOLD "JEEP WRANGLER" RESET;
    std::cout << left << std::setw(23) << MAG BOLD "LAND CRUSIER" RESET;
    cout << "\n";
    std::cout << left << std::setw(20) << "";
    std::cout << left << std::setw(20) << CYAN "MODEL NO" RESET;
    std::cout << left << std::setw(20) << "5687";
    std::cout << left << std::setw(20) << "7980";
    std::cout << left << std::setw(20) << "3434";
    cout << "\n";
    std::cout << left << std::setw(20) << "";
    std::cout << left << std::setw(20) << CYAN "MILEAGE" RESET;
    std::cout << left << std::setw(20) << "12";
    std::cout << left << std::setw(20) << "11";
    std::cout << left << std::setw(20) << "14";
    cout << "\n";
    std::cout << left << std::setw(20) << "";
    std::cout << left << std::setw(20) << CYAN "COLOR" RESET;
    std::cout << left << std::setw(20) << "Red";
    std::cout << left << std::setw(20) << "Blue";
    std::cout << left << std::setw(20) << "Violet";
    cout << "\n";
    std::cout << left << std::setw(20) << "";
    std::cout << left << std::setw(20) << CYAN "COST" RESET;
    std::cout << left << std::setw(20) << "1000/day";
    std::cout << left << std::setw(20) << "1500/day";
    std::cout << left << std::setw(20) << "1800/day";
    cout << "\n";
    std::cout << left << std::setw(20)
              << "\t" YEL BOLD
                 "-------------------------------------------------------------"
                 "------------------------" RESET "\n";
  }
  void display() {
    std::cout << std::setw(60)
              << "\t" GRN
                 "--------------------------DETAILS OF offroad "
                 "CARS--------------------------" RESET "\n\n";
    std::cout << left << std::setw(20) << "";
    cout << "_\n";
    std::cout << left << std::setw(20) << "";
    cout << "_\n\n\n";

    for (int i = 1; i <= cthar; i++) {
      std::cout << left << std::setw(20) << "";
      cout << "|" B_RED "MAHINDHRA THAR" RESET "\n\n";
    }
    for (int i = 1; i <= cjeep; i++) {
      std::cout << left << std::setw(20) << "";
      cout << "|" B_BLU BOLD "JEEP WRANGLER" RESET "\n\n";
    }
    for (int i = 1; i <= cland; i++) {
      std::cout << left << std::setw(20) << "";
      cout << "|" B_MAG BOLD "LAND CRUSIER" RESET "\n\n";
    }
    std::cout << left << std::setw(20) << "";
    cout << "_\n";
    std::cout << left << std::setw(20) << "";
    cout << "_\n";

    cout << "\n";
  }
  void buy_car() {
    cout << "\tDo you want to rent a " CYAN BOLD "offroad" RESET
            " car? If yes press 'Y' or press 'N' : ";
    cin >> ch;
    if (ch == 'N' || ch == 'n') {
      return;
    } else {
      cout << "\n";
      cust_details();
      cout << "\tEnter \n\t1.To rent MAHINDHRA THAR\n\t2.To rent JEEP WRANGLER\n\t3.To rent "
              "LAND CRUSIER \n\t";
      cin >> n;
      cout << "\tEnter the number of days : ";
      cin >> days;
      cout << "\n";
      switch (n) {
        case 1:
          if (cthar == 0) {
            cout << "\t" RED
                    "Sorry no cars available in this category, Pick another "
                    "car" RESET "\n";
          } else {
            tcar = 1;
            cout << "\t" CYAN BOLD "Total amount = " RESET << 1000 * days
                 << endl
                 << endl;
            trent += 1000 * days;
            cthar--;
          }
          break;
        case 2:
          if (cjeep == 0) {
            cout << "\t" RED
                    "Sorry no cars available in this category, Pick another "
                    "car" RESET "\n";
          } else {
            tcar = 2;
            cout << "\t" CYAN BOLD "Total amount = " RESET << 1500 * days
                 << endl
                 << endl;
            trent += 1500 * days;
            cjeep--;
          }
          break;
        case 3:
          if (cland == 0) {
            cout << "\t" RED
                    "Sorry no cars available in this category, Pick another "
                    "car" RESET "\n";
          } else {
            tcar = 3;
            cout << "\t" CYAN BOLD "Total amount = " RESET << 1800 * days
                 << endl
                 << endl;
            trent += 1800 * days;
            cland--;
          }
          break;
        default:
          cout << "\t" RED "Enter a valid input " RESET "\n";
          break;
      }
    }
  }
};
class LUXURY : public car {
 public:
  void get_data() {
    std::cout << left << std::setw(20)
              << "\t" YEL BOLD
                 "-------------------------------------------------------------"
                 "------------------------" RESET;
    cout << "\n";

    std::cout << left << std::setw(16) << "";
    std::cout << left << std::setw(15) << "";
    std::cout << left << std::setw(31) << RED "ROLLSROYCE" RESET;
    std::cout << left << std::setw(33) << BLU BOLD "BENTLEY" RESET;
    std::cout << left << std::setw(23) << MAG BOLD "BMW" RESET;
    cout << "\n";
    std::cout << left << std::setw(20) << "";
    std::cout << left << std::setw(20) << CYAN "MODEL NO" RESET;
    std::cout << left << std::setw(20) << "5687";
    std::cout << left << std::setw(20) << "7980";
    std::cout << left << std::setw(20) << "3434";
    cout << "\n";
    std::cout << left << std::setw(20) << "";
    std::cout << left << std::setw(20) << CYAN "MILEAGE" RESET;
    std::cout << left << std::setw(20) << "15";
    std::cout << left << std::setw(20) << "12";
    std::cout << left << std::setw(20) << "11";
    cout << "\n";
    std::cout << left << std::setw(20) << "";
    std::cout << left << std::setw(20) << CYAN "COLOR" RESET;
    std::cout << left << std::setw(20) << "White";
    std::cout << left << std::setw(20) << "Silver";
    std::cout << left << std::setw(20) << "Black";
    cout << "\n";
    std::cout << left << std::setw(20) << "";
    std::cout << left << std::setw(20) << CYAN "COST" RESET;
    std::cout << left << std::setw(20) << "3000/day";
    std::cout << left << std::setw(20) << "3500/day";
    std::cout << left << std::setw(20) << "3800/day";
    cout << "\n";
    std::cout << left << std::setw(20)
              << "\t" YEL BOLD
                 "-------------------------------------------------------------"
                 "------------------------" RESET "\n";
  }
  void display() {
    std::cout << std::setw(60)
              << "\t" GRN
                 "--------------------------------DETAILS OF LUXURY CARS "
                 "CARS------------------------------" RESET "\n\n";
    std::cout << left << std::setw(20) << "";
    cout << "_\n";
    std::cout << left << std::setw(20) << "";
    cout << "_\n\n\n";

    for (int i = 1; i <= crolls; i++) {
      std::cout << left << std::setw(20) << "";
      cout << "|" B_RED "ROLLSROYCE" RESET "\n\n";
    }
    for (int i = 1; i <= cbentley; i++) {
      std::cout << left << std::setw(20) << "";
      cout << "|" B_BLU BOLD "BENTLEY" RESET "\n\n";
    }
    for (int i = 1; i <= cbmw; i++) {
      std::cout << left << std::setw(20) << "";
      cout << "|" B_MAG BOLD "BMW" RESET "\n\n";
    }
    std::cout << left << std::setw(20) << "";
    cout << "_\n";
    std::cout << left << std::setw(20) << "";
    cout << "_\n";

    cout << "\n";
  }
  void buy_car() {
    cout << "\tDo you wanna rent a " CYAN BOLD "LUXURY CAR" RESET
            " ? If yes press 'Y' or press 'N' : ";
    cin >> ch;
    if (ch == 'N' || ch == 'n') {
      return;
    } else {
      cout << "\n";
      cust_details();
      cout << "\t" MAG BOLD
              "----------------------------------------------------------------"
              "---------------------" RESET "\n";
      cout << "\tEnter \n\t1.To rent ROLLSROYCE\n\t2.To rent BENTLEY \n\t3.To rent "
              "BMW \n\t";
      cin >> n;
      cout << "\tEnter the number of days : ";
      cin >> days;
      cout << "\n";
      switch (n) {
        case 1:
          if (crolls == 0) {
            cout << "\t" RED
                    "Sorry no cars available in this category, Pick another "
                    "car" RESET "\n";
          } else {
            tcar = 4;
            cout << "\t" CYAN BOLD "Total amount = " RESET << 3000 * days
                 << endl
                 << endl;
            trent += 3000 * days;
            crolls--;
            cout << "\t" MAG BOLD
                    "----------------------------------------------------------"
                    "---------------------------" RESET "\n";
          }
          break;
        case 2:
          if (cbentley == 0) {
            cout << "\t" RED
                    "Sorry no cars available in this category, Pick another "
                    "car" RESET "\n";
          } else {
            tcar = 5;
            cout << "\t" CYAN BOLD "Total amount = " RESET << 3500 * days
                 << endl
                 << endl;
            trent += 3500 * days;
            cbentley--;
            cout << "\t" MAG BOLD
                    "----------------------------------------------------------"
                    "---------------------------" RESET "\n";
          }
          break;
        case 3:
          if (cbmw == 0) {
            cout << "\t" RED
                    "Sorry no cars available in this category, Pick another "
                    "car" RESET "\n";
          } else {
            tcar = 6;
            cout << "\t" CYAN BOLD "Total amount = " RESET << 3800 * days
                 << endl
                 << endl;
            trent += 3800 * days;
            cbmw--;
            cout << "\t" MAG BOLD
                    "----------------------------------------------------------"
                    "---------------------------" RESET "\n";
          }
          break;
        default:
          cout << "\t" RED "Enter a valid input " RESET "\n";
          cout << "\t" MAG BOLD
                  "------------------------------------------------------------"
                  "-------------------------" RESET "\n";
          break;
      }
    }
  }
};
class SUV : public car {
 public:
  void get_data() {
    std::cout << left << std::setw(20)
              << "\t" YEL BOLD
                 "-------------------------------------------------------------"
                 "------------------------" RESET;
    cout << "\n";
    std::cout << left << std::setw(16) << "";
    std::cout << left << std::setw(15) << "";
    std::cout << left << std::setw(31) << RED "FORTUNER" RESET;
    std::cout << left << std::setw(33) << BLU BOLD "INNOVA" RESET;
    std::cout << left << std::setw(23) << MAG BOLD "SCORPIO" RESET;
    cout << "\n";
    std::cout << left << std::setw(20) << "";
    std::cout << left << std::setw(20) << CYAN "MODEL NO" RESET;
    std::cout << left << std::setw(20) << "5687";
    std::cout << left << std::setw(20) << "7980";
    std::cout << left << std::setw(20) << "3434";
    cout << "\n";
    std::cout << left << std::setw(20) << "";
    std::cout << left << std::setw(20) << CYAN "MILEAGE" RESET;
    std::cout << left << std::setw(20) << "17";
    std::cout << left << std::setw(20) << "15";
    std::cout << left << std::setw(20) << "13";
    cout << "\n";
    std::cout << left << std::setw(20) << "";
    std::cout << left << std::setw(20) << CYAN "COLOR" RESET;
    std::cout << left << std::setw(20) << "Red";
    std::cout << left << std::setw(20) << "Blue";
    std::cout << left << std::setw(20) << "Violet";
    cout << "\n";
    std::cout << left << std::setw(20) << "";
    std::cout << left << std::setw(20) << CYAN "COST" RESET;
    std::cout << left << std::setw(20) << "4800/day";
    std::cout << left << std::setw(20) << "4500/day";
    std::cout << left << std::setw(20) << "4000/day";
    cout << "\n";
    std::cout << left << std::setw(20)
              << "\t" YEL BOLD
                 "-------------------------------------------------------------"
                 "------------------------" RESET "\n";
  }
  void display() {
    std::cout << std::setw(60)
              << "\t" GRN
                 "--------------------------------DETAILS OF SUV "
                 "CARS--------------------------" RESET "\n\n";
    std::cout << left << std::setw(20) << "";
    cout << "_\n";
    std::cout << left << std::setw(20) << "";
    cout << "_\n\n\n";

    for (int i = 1; i <= cfortuner; i++) {
      std::cout << left << std::setw(20) << "";
      cout << "|" B_RED "FORTUNER" RESET "\n\n";
    }
    for (int i = 1; i <= cinnova; i++) {
      std::cout << left << std::setw(20) << "";
      cout << "|" B_BLU BOLD "INNOVA" RESET "\n\n";
    }
    for (int i = 1; i <= cscorpio; i++) {
      std::cout << left << std::setw(20) << "";
      cout << "|" B_MAG BOLD "SCORPIO" RESET "\n\n";
    }
    std::cout << left << std::setw(20) << "";
    cout << "_\n";
    std::cout << left << std::setw(20) << "";
    cout << "_\n";

    cout << "\n";
  }
  void buy_car() {
    cout << "\tDo you want to rent a " CYAN BOLD "SUV" RESET
            " car? If yes press 'Y' or press 'N' : ";
    cin >> ch;
    if (ch == 'N' || ch == 'n') {
      return;
    } else {
      cout << "\n";
      cust_details();
      cout << "\t" MAG BOLD
              "----------------------------------------------------------------"
              "---------------------" RESET "\n";
      cout << "\tEnter \n\t1.To rent Fortuner\n\t2.To rent Innova \n\t3.To "
              "rent Scorpio \n\t";
      cin >> n;
      cout << "\tEnter the number of days : ";
      cin >> days;
      cout << "\n";
      switch (n) {
        case 1:
          if (cfortuner == 0) {
            cout << "\t" RED
                    "Sorry no cars available in this category, Pick another "
                    "car" RESET "\n";
          } else {
            tcar = 7;
            cout << "\t" CYAN BOLD "Total amount = " RESET << 4800 * days
                 << endl
                 << endl;
            ;
            trent += 4800 * days;
            cfortuner--;
            cout << "\t" MAG BOLD
                    "----------------------------------------------------------"
                    "---------------------------" RESET "\n";
          }
          break;
        case 2:
          if (cinnova == 0) {
            cout << "\t" RED
                    "Sorry no cars available in this category, Pick another "
                    "car" RESET "\n";
          } else {
            tcar = 8;
            cout << "\t" CYAN BOLD "Total amount = " RESET << 4500 * days
                 << endl
                 << endl;
            trent += 4500 * days;
            cinnova--;
            cout << "\t" MAG BOLD
                    "----------------------------------------------------------"
                    "---------------------------" RESET "\n";
          }
          break;
        case 3:
          if (cscorpio == 0) {
            cout << "\t" RED
                    "Sorry no cars available in this category, Pick another "
                    "car" RESET "\n";
          } else {
            tcar = 9;
            cout << "\t" CYAN BOLD "Total amount = " RESET << 4000 * days
                 << endl
                 << endl;
            trent += 4000 * days;
            cscorpio--;
            cout << "\t" MAG BOLD
                    "----------------------------------------------------------"
                    "---------------------------" RESET "\n";
          }
          break;
        default:
          cout << "\t" RED "Enter a valid input " RESET "\n";
          cout << "\t" MAG BOLD
                  "------------------------------------------------------------"
                  "-------------------------" RESET "\n";
          break;
      }
    }
  }
};


class rent : virtual public offroad,
             virtual public LUXURY,
             virtual public SUV {
 public:
  int m;
  void display() {
    cout << "\t" MAG BOLD
            "------------------------------------------------------------------"
            "-------------------" RESET "\n";
    cout << "\t" CYAN BOLD "Kindly select the type of vehicle that best suits your requirements. " RESET "\n";
    cout << "\t1.OFFROAD Cars\n\t2.LUXURY Cars \n\t3.SUV Cars\n\t";
    cin >> m;
    cout << "\t" MAG BOLD
            "------------------------------------------------------------------"
            "-------------------" RESET "\n";
    switch (m) {
      case 1:
        offroad::display();
        offroad::get_data();
        offroad::buy_car();
        break;
      case 2:
        LUXURY::display();
        LUXURY::get_data();
        LUXURY::buy_car();
        break;
      case 3:
        SUV::display();
        SUV::get_data();
        SUV::buy_car();
        break;
    }
  }
};
int main() {
  char ch;
  rent r;

  cout << "\t" B_RED BOLD
          "-------------------------------Welcome TO WHEELS ON DEMAND(A CAR LEASING SYSTEM) "
          "-----------------------------" RESET "\n";
  r.display();

  ofstream file;
  file.open("Customer_details.txt");
  file << "\n\n\t****************************** YASHWANTH's CAR LEASING SYSTEM "
          "\n";
  file << "\t                                  RECEIPT                         "
          "           \n\n";
  file << "\t CUSTOMER DETAILS: \n\n";
  file << "\t CUSTOMER NAME : " << first_name << "  " << last_name << endl
       << endl;
  file << "\t CONTACT : " << contact << endl << endl;
  file << "\t__"
          "\n\n";
  file << left << setw(20) << "\t TYPE OF CAR ";
  file << left << setw(20) << " DAYS ";
  file << left << setw(20) << " COST/DAY ";
  file << left << setw(17) << " TOTAL COST \n";
  file << ""
          "\n\n\n\n\t";

  for (;;) {
    do {
      cout << "\n";

      if (tcar == 1) {
        file << left << setw(20) << " MAHINDHRA THAR :";
        file << left << setw(20) << days;
        file << left << setw(20) << "Rs.1000";
        file << left << setw(20) << 1000 * days << "\n\t";
      }

      if (tcar == 2) {
        file << left << setw(20) << " JEEP WRANGLER :";
        file << left << setw(20) << days;
        file << left << setw(20) << "Rs.1500";
        file << left << setw(20) << 1500 * days << "\n\t";
      }

      if (tcar == 3) {
        file << left << setw(20) << " LAND CRUISER :";
        file << left << setw(20) << days;
        file << left << setw(20) << "Rs.1800";
        file << left << setw(20) << 1800 * days << "\n\t";
      }
      if (tcar == 4) {
        file << left << setw(20) << " ROLLSROYCE :";
        file << left << setw(20) << days;
        file << left << setw(20) << "Rs.3000";
        file << left << setw(20) << 3000 * days << "\n\t";
      }
      if (tcar == 5) {
        file << left << setw(20) << " BENTLEY :";
        file << left << setw(20) << days;
        file << left << setw(20) << "Rs.3500";
        file << left << setw(20) << 3500 * days << "\n\t";
      }
      if (tcar == 6) {
        file << left << setw(20) << " BMW :";
        file << left << setw(20) << days;
        file << left << setw(20) << "Rs.3800";
        file << left << setw(20) << 3800 * days << "\n\t";
      }
      if (tcar == 7) {
        file << left << setw(20) << " FORTUNER :";
        file << left << setw(20) << days;
        file << left << setw(20) << "Rs.4800";
        file << left << setw(20) << 4800 * days << "\n\t";
      }
      if (tcar == 8) {
        file << left << setw(20) << " INNOVA :";
        file << left << setw(20) << days;
        file << left << setw(20) << "Rs.4500";
        file << left << setw(20) << 4500 * days << "\n\t";
      }
      if (tcar == 9) {
        file << left << setw(20) << " SCORPIO :";
        file << left << setw(20) << days;
        file << left << setw(20) << "Rs.4000";
        file << left << setw(20) << 4000 * days << "\n\t";
      }

      cout << "\tDo you want to rent another car? If yes press 'Y' or press "
              "'N' : ";
      cin >> ch;
      if (ch == 'n' || ch == 'N') break;

      r.display();
    } while (ch == 'y' || ch == 'Y');
    file.close();

    string linesread;
    ifstream infile("Customer_details.txt");
    if (infile.is_open()) {
      while (getline(infile, linesread)) {
        cout << linesread << endl;
      }
      infile.close();
    } else
      cout << "File cannot be read";
      
    
    cout << "\t" RED " RENTAL CHARGES : " RESET    << trent <<   endl ;
    cout << "\t" "\n\n" YEL "Thank You for visiting" RESET "\n\n";
    
    exit(0);
  }
  return 0;
}