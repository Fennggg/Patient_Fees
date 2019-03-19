#include <iostream>
using namespace std;
static double medcost, surcost, totalcost;
class PatientAccount{
private:
    int day;
public:
    PatientAccount(int days) {
        day = days;
    }
    double gettotal() {
        return totalcost = medcost  + surcost + (day *160);
    }
};
class Surgery {
private:
    int bone,knee,eye,heart,foot,num;
    double price1 = 0;
    double price[6];
public :
    Surgery(int num2) {
        num = num2;
        price[num2];
    }
    void setnum(int num2) {
        num = num2;
    }
    double getSurgeryprice() {
        price[1] = 1200;
        price[2] = 1000;
        price[3] = 2000;
        price[4] = 5200;
        price[5] = 790;
        price1 = price[num];
        return price1;
    }
    double getSurgerypricetotal() {
        surcost += price1;
        return surcost;
    }
    double gettotal() {
        return surcost;
    }
    double getSurgeryprice2() {
        char x;
        do {
            cout << "1.bone " << endl;
            cout << "2.knee " << endl;
            cout << "3.eye " << endl;
            cout << "4.heart " << endl;
            cout << "5.foot " << endl;
            cin >> num;
            cout << "The surgery fee is " << endl;
            getSurgeryprice();
            cout << getSurgerypricetotal() << endl;
            cout << "Do you want another surgery? Y/N " << endl;
            cin >> x;
        } while (x!='N');
        return gettotal();
    }
};
class Pharmacy {
private:
    int killer, fever, cancer, cold, hiv,num;
    double price1 = 0;
    double price[6];
public:
    Pharmacy(int num2) {
        num = num2;
        price[num];
    }
    double getPharmacyprice() {
        price[1] = 105;
        price[2] = 72;
        price[3] = 250;
        price[4] = 92;
        price[5] = 30;
        price1 = price[num];
        return price1;
    }
    double getPharmacypricetotal() {

        medcost += price1;
        return medcost;
    }
    double gettotal() {
        return medcost;
    }
    double getPharmacyprice2() {
        char x;
        do {
            cout << "1.killer" << endl;
            cout << "2.fever" << endl;
            cout << "3.cancer" << endl;
            cout << "4.hiv" << endl;
            cout << "5.cold" << endl;
            cin >> num;
            cout << "The medication fee is " << endl;
            getPharmacyprice();
            cout << getPharmacypricetotal() << endl;
            cout << "Do you want another medication? Y/N " << endl;
            cin >> x;
        } while (x != 'N');
        return gettotal();
    }
};
int main() {
    int chooice1, chooice2,day;
    char chooice3, chooice4;
    cout << "welcome to the hospital, How can I help you" << endl;
    cout << "1.bone " << endl;
    cout << "2.knee " << endl;
    cout << "3.eye " << endl;
    cout << "4.heart " << endl;
    cout << "5.foot " << endl;
    cin >> chooice1;
    Surgery Surgery1(chooice1);
    cout << "The surgery fee is " << endl;
    cout << Surgery1.getSurgeryprice() << endl;
    Surgery1.getSurgerypricetotal();
    cout << "Do you want another surgery? Y/N " << endl;
    cin >> chooice3;
    if (chooice3 == 'Y') {
        Surgery1.getSurgeryprice2();
    }
    cout << "What type of medication you want" << endl;
    cout << "1.killer" << endl;
    cout << "2.fever" << endl;
    cout << "3.cancer" << endl;
    cout << "4.hiv" << endl;
    cout << "5.cold" << endl;
    cin >> chooice2;
    Pharmacy Pharmacy1(chooice2);
    cout << "The medication fee is " << endl;
    cout << Pharmacy1.getPharmacyprice() << endl;
    Pharmacy1.getPharmacypricetotal();
    cout << "Do you want another medication? Y/N " << endl;
    cin >> chooice4;
    if (chooice4 == 'Y') {
        Pharmacy1.getPharmacyprice2();
    }
    cout << "How many days you want to stay at Hospital:" << endl;
    cin >> day;
    PatientAccount PatientAccount1(day);
    cout << "Total cost is:" << endl;
    cout << PatientAccount1.gettotal();
}