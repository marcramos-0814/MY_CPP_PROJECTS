#include <iostream>
using namespace std;

int main() {

string thought;

while (thought != "opo") {

    cout << "pogi ba si Marc? (opo/hindi): ";
    getline(cin, thought);

    if(thought == "opo") {
        cout << "OMSIM !!" << endl;
        }else{
            cout << "ENGKK!! Wrong answer po.." << endl;
    } 
}


    return 0;
}