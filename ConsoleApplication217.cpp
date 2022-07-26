/*
░█████╗░██████╗░██████╗░░█████╗░██╗░░░░░██████╗░░█████╗░██╗░░██╗███╗░░░███╗░█████╗░███╗░░██╗
██╔══██╗██╔══██╗██╔══██╗██╔══██╗██║░░░░░██╔══██╗██╔══██╗██║░░██║████╗░████║██╔══██╗████╗░██║
███████║██████╦╝██║░░██║███████║██║░░░░░██████╔╝███████║███████║██╔████╔██║███████║██╔██╗██║
██╔══██║██╔══██╗██║░░██║██╔══██║██║░░░░░██╔══██╗██╔══██║██╔══██║██║╚██╔╝██║██╔══██║██║╚████║
██║░░██║██████╦╝██████╔╝██║░░██║███████╗██║░░██║██║░░██║██║░░██║██║░╚═╝░██║██║░░██║██║░╚███║
╚═╝░░╚═╝╚═════╝░╚═════╝░╚═╝░░╚═╝╚══════╝╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░░░░╚═╝╚═╝░░╚═╝╚═╝░░╚══╝
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long bigbit;
#define loop1(n) for(int i=0;i<n;i++)
#define loop2(n) for (int j=1;j<=n;j++)
#define T int t; cin >> t; while (t--)
long long GCD(long long x, long long y) { return(!y) ? x : GCD(y, x % y); }
long long LCM(long long x, long long y) { return((x / GCD(x, y)) * y); }

// some data will need it 
int arr[105];
string s;
// some function will need it 
void sortString(string& str)
{
    sort(str.begin(), str.end());
}

void sortArray(int n, int a[]) {
    sort(a, a + n);
}
//fast code 
void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

/// <summary>
///  strat program 
///  will find sin ip and log in and use array data structure 
/// </summary>
class start_program {
private:
    int id, age;
    string name, email, pass;
public:
    start_program() {
        cout << "----------------------------------------------- \n";
        cout << "|                                               |\n";
        cout << "|            welcome sir ....                   |\n";
        cout << "|                                               |\n";
        cout << "|                                               |\n";
        cout << "----------------------------------------------- \n";
    }
    // ---------------------- set function ----------------------------

    void set_name(string name) {
        this->name = name;
    }

    void set_age(int age) {
        
        
            this->age = age;
    }
    void set_email(string email) {
        this->email = email;
    }

    void set_id(int id) {
        this->id = id;
    }

    void set_pass(string pass) {
        if (pass.length() < 8)
        {
            cout << "invaild pass \n";
        }
        else
            this->pass = pass;
    }
    //-------------get function----------------
    string get_name() {
        return name;
    }

    string get_email() {
        return email;
    }
    string get_pass() {
        return pass;
    }

    int get_id() {
        return id;
    }
    int get_age() {
        return age;
    }
    //---------------------------------------------------------------------
    
    bool check(string email) {
        int index=0;
        loop1(email.length()) {
            if (email[i] == '@')
                index = i;
        }
      
        if (s.substr(index+1 , 9 ) == "gmail.com")
            return true;
        else
            return false;

    }
    // ************************ sin up method *************************
    void sin_up() {
        cout << "----------------------------------------------- \n";
        cout << "|          please entre your data               |\n";
        cout << "|                                               |\n";
        cout << "|   name     :                                  |\n";
        cout << "|   email    :                                  |\n";
        cout << "|   age      :                                  |\n";
        cout << "|   password :                                  |\n";
        cout << "|                                               |\n";
        cout << "----------------------------------------------- \n\n\n";
    }

    void sin_up1() {
        cout << "Your name is : " << get_name() << endl;
        cout << "Your email is : " << get_email() << endl;
        cout << "Your age is : " << get_age() << endl;
        cout << "Your password is : **********" << endl << endl << endl;

    }

    void con() {
        cout << "congratulation your create account\n\n\n";
    }


    bool log_in() {
        int ch;
        cout << "if you want to log in again press 1 else press 0 \n"; cin >> ch;
        if (ch == 1) {
            cout << "----------------------------------------------- \n";
            cout << "|          please entre your data               |\n";
            cout << "|                                               |\n";
            cout << "|   email    :                                  |\n";
            cout << "|   password :                                  |\n";
            cout << "|                                               |\n";
            cout << "----------------------------------------------- \n\n\n";
            return true;

        }
        else
            return false;
    }


};



// parking class 
class parking {
    int k; 

public:
    parking() {
        cout << "------------------------------------------------------\n";
        cout << "|          welcome to easy parking Minya program      |\n";
        cout << "|                                                     |\n";
        cout << "|  choose your region:                                |\n";
        cout << "| 1- Maghagha                                         |\n";
        cout << "| 2- Beni Mazar                                       |\n";
        cout << "| 3- Abu Qirqas                                       |\n";
        cout << "| 4- El Idwa                                          |\n";
        cout << "| 5- Mallawi                                          |\n";
        cout << "| 6- New Minya                                        |\n";
        cout << "| 7- Deir Mawas                                       |\n";
        cout << "| 8- Samalut                                          |\n";
        cout << "| 9- Matai                                            |\n";
        cout << "----------------------------------------------- \n\n\n";
        
    }
    void booked() {
        cout << "It's done the place is booked for you for 15 minute\n"; 
    }

    void Maghagha() {
        cout << "choose near grage for you \n"; 
        cout << "1- Fahes Car Service Center\n2- Abu Eid for trips special cars\n";
        cin >> k; 
        parking::booked(); 
    }

    void Beni_Mazar() {
        cout << "choose near grage for you \n";
        cout << "1- Issam Amin's worksho\n2- Malak and Youssef Workshop"; 
        cin >> k;
        parking::booked();
    }
    void Abu_Qirqas() {
        cout << "choose near grage for you \n";
        cout << "1- Castor garage\n2- apricot garage\n";
        cin >> k;
        parking::booked();
    }
    void ElIdwa() {
        cout << "choose near grage for you \n";
        cout << "1- Al-Kabniah Garage\n2- Traffic Bridge Al-Adwa\n";
        cin >> k;
        parking::booked();
    }
    void Mallawi() {
        cout << "choose near grage for you \n";
        cout << "1- Opel King\n2- Garage Washer\n"; 
        cin >> k;
        parking::booked();
    }
    void New_Minya() {
        cout << "choose near grage for you \n";
        cout << "1- The Institute's\n2- garage for vehicles in Minya\n";
        cin >> k;
        parking::booked();
    }
    void Deir_Mawas() {
        cout << "choose near grage for you \n";
        cout << "1- King GLC Center\n2- Bani Haram\n";
        cin >> k;
        parking::booked();

    }
    void Samalut() {
        cout << "choose near grage for you \n";
        cout << "1- The Knight and Gharib\n2- Garage City Council in Samalout\n"; 
        cin >> k;
        parking::booked();

    }
    void Matai() {
        cout << "choose near grage for you \n";
        cout << "1- Matay Police Station\n2- Matai City Council garage\n";
        cin >> k;
        parking::booked();
    }



};




// payment   

class payment {
private :
    string bank_name, visa_num; 
public : 
    payment() {
        cout << "what bank you treate with \n"; 
        cout << "1- Bank Misr\n2- Bank Alahly\n3- Bank Naser\n"; 
    }

    void set_visa_num(string visa) {
        this->visa_num = visa_num; 
    }

    string get_visa_num() {
        return visa_num; 
    }

    void set_bank(string bank) {
        bank_name = bank; 
    }

    string get_bank() {
        return bank_name; 
    }



};



int main() {
    //-----------------------------
    fast();
    //--------------------------
    bool temp = false; 
    int id = 0;
    string names[100], emails[100], passs[100]; int ages[100];
    start_program s;
    string name, pass, email; int age;
    s.sin_up();

    cin >> name;        names[id] = name;
    s.set_name(name);


    cin >> email;   
    s.set_email(email);
   
    emails[id] = email;

    cin >> age;        
    while(age<18)
    {
        cout << "invaild age try agian\nage between 18 to 55 \n";
        cin >> age;
        if (age >= 18) {

            cout << "vaild age \n"; 
        }
    }
    s.set_age(age); 
    ages[id] = age;

    cin >> pass; 
    while (pass.length() < 8) {
        cout << "invaild password should be greater than or eqaul 8 try again \n";
        cin >> pass;     

    }
    
    passs[id] = pass;
    s.set_pass(pass);
    s.sin_up1();
    s.con();
    int t = 2;
    while (t--) {
        if (s.log_in() == true) {

            string e, p; cout << "email...............\n"; cin >> e;
            cout << "password.............\n"; cin >> p;
            if (e == emails[id] && p == passs[id]) {
                temp = true; 
              
                break; 
            }
            else {
                
                cout << "uncorrect email or password\n";
                cout << "email...............\n"; cin >> e;
                cout << "password.............\n"; cin >> p;
            }


        }
        else 

          exit(0);
        
    }

    if (temp == true) {
        cout << "welcome sir ... !\n\n";
        cout << "please follow rule \n\n";
        cout << "first you will pay subscribe of program\n";
        payment pay; 
        int ci; cin >> ci; 
        string visa; 
        cout << "entre your visa number\n\n"; 
        cin >>visa; 
        while (visa.substr(0, 4) != "5078" && visa.length()<16) {
            cout << "invaild visa number should start 5078 and length = 16\n";
        cin >> visa; 

        }
        cout << "all is Done Go to proagrm\n\n";
       
        
        parking p;
        int c; cin >> c;
        if (c == 1)
            p.Maghagha();

        else if (c == 2)
            p.Beni_Mazar();
        else if (c == 3)
            p.Abu_Qirqas();
        else if (c == 4)
            p.ElIdwa();
        else if (c == 5)
            p.Mallawi();
        else if (c == 6)
            p.New_Minya();
        else if (c == 7)
            p.Deir_Mawas();
        else if (c == 8)
            p.Samalut();
        else
            p.Matai();









    
    }





}
