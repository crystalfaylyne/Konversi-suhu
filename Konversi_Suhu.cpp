#include <iostream>

using namespace std;

int main() {

    double konv, temp;
    int form_1, form_2;

    cout << "===============KONVERSI SUHU===============" << endl;
    cout << "1. Celcius " << endl;
    cout << "2. Fahrenheit " << endl;
    cout << "3. Reamur " << endl;
    cout << "4. Kelvin " << endl;
    cout << "===========================================" << endl;
    cout << "Bentuk Asal\t : "; cin >> form_1;
    cout << "Bentuk Akhir\t : "; cin >> form_2;
    cout << "Besaran suhu\t : "; cin >> temp;

    if (form_1 == 1) {

        switch (form_2) {
        case 1:
            //Celcius
            konv = temp;
            cout << temp << " C " << " = " << konv << "  C  " << endl;
            break;
        case 2:
            //Fahrenheit
            konv = temp * 9 / 5 + 32;
            cout << temp << " C " << " = " << konv << " F " << endl;
            break;
        case 3:
            //Reamur
            konv = (temp * 4 / 5);
            cout << temp << " C " << " = " << konv << " R " << endl;
            break;
        case 4:
            //Kelvin
            konv = temp + 273;
            cout << temp << " C " << " = " << konv << " K " << endl;
            break;
        default:
            cout << "Masukkan Data yang Benar!!";
            break;
        }
    }
    else if (form_1 == 2) {

        switch (form_2) {

        case 1:
            //Celcius
            konv = (temp - 32) * 5 / 9;
            cout << temp << " F " << " = " << konv << " C " << endl;
            break;
        case 2:
            konv = temp;
            cout << temp << " F " << " = " << konv << " F " << endl;
            break;
        case 3:
            //Reamur
            konv = (temp - 32) * 4 / 9;
            cout << temp << " F " << " = " << konv << " R " << endl;
            break;
        case 4:
            //Kelvin
            konv = ((temp - 32) * 5 / 9) + 273;
            cout << temp << " F " << " = " << konv << " K " << endl;
            break;
        default:
            cout << "Masukkan Data yang Benar!!";
            break;
        }
    }
    else if (form_1 == 3) {

        switch (form_2) {

        case 1:
            //Celcius
            konv = temp * 5 / 4;
            cout << temp << " R " << " = " << konv << " C " << endl;
            break;
        case 2:
            //fahrenheit
            konv = temp * 9 / 4 + 32;
            cout << temp << " R " << " = " << konv << " F " << endl;
            break;
        case 3:
            //Reamur
            konv = temp;
            cout << temp << " R " << " = " << konv << " r " << endl;
            break;
        case 4:
            //Kelvin
            konv = temp * 5 / 4 + 273;
            cout << temp << " R " << " = " << konv << " K " << endl;
            break;
        default:
            cout << "Masukkan Data yang Benar!!";
            break;
        }

    }
    else if (form_1 == 4) {

        switch (form_2) {

        case 1:
            //Celcius
            konv = temp - 273;
            cout << temp << " K " << " = " << konv << " C " << endl;
            break;
        case 2:
            //fahrenheit
            konv = ((temp - 32) * 5 / 9) - 273;
            cout << temp << " K " << " = " << konv << " F " << endl;
            break;
        case 3:
            //Reamur
            konv = (temp - 273) * 4 / 5;
            cout << temp << " K " << " = " << konv << " r " << endl;
            break;
        case 4:
            //Kelvin
            konv = temp;
            cout << temp << " K " << " = " << konv << " K " << endl;
            break;
        default:
            cout << "Masukkan Data yang Benar!!";
            break;
        }
    }

    else {
        cout << "Masukkan Data yang Benar!!";
    }
    return 0;
}