#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Bendri kursai (palyginimui)
    const double GBP_BENDRAS = 0.8729;
    const double USD_BENDRAS = 1.1793;
    const double INR_BENDRAS = 104.6918;

    // Pirkimo kursai (EUR -> valiuta)
    const double GBP_PIRKTI = 0.8600;
    const double USD_PIRKTI = 1.1460;
    const double INR_PIRKTI = 101.3862;

    // Pardavimo kursai (valiuta -> EUR)
    const double GBP_PARDUOTI = 0.9220;
    const double USD_PARDUOTI = 1.2340;
    const double INR_PARDUOTI = 107.8546;

    int meniu = 0;

    while (meniu != 4) {
        cout << "\n=== VALIUTOS KEITYKLA ===" << endl;
        cout << "1. Valiutos kurso palyginimas su euru" << endl;
        cout << "2. Valiutos pirkimas (EUR -> pasirinkta valiuta)" << endl;
        cout << "3. Valiutos pardavimas (pasirinkta valiuta -> EUR)" << endl;
        cout << "4. Iseiti" << endl;
        cout << "Pasirinkite veiksma (1-4): ";
        cin >> meniu;

        if (meniu == 4) {
            cout << "Aciu, kad naudojates keitykla. Viso gero!" << endl;
            break;
        }
        if (meniu < 1 || meniu > 4) {
            cout << "KLAIDA: Nera tokio pasirinkimo. Pasirinkite tarp 1-4" << endl;
            continue;
        }
        int pasirinkimas;
        cout << "\nPasirinkite valiuta:" << endl;
        cout << "1 - GBP (Didziosios Britanijos svaras)" << endl;
        cout << "2 - USD (JAV doleris)" << endl;
        cout << "3 - INR (Indijos rupija)" << endl;
        cout << "Jusu pasirinkimas: ";
        cin >> pasirinkimas;

        double bendras = 0, pirkti = 0, parduoti = 0;
        string valiuta = "";

        switch (pasirinkimas) {
            case 1:
                bendras = GBP_BENDRAS;
                pirkti = GBP_PIRKTI;
                parduoti = GBP_PARDUOTI;
                valiuta = "GBP";
                break;
            case 2:
                bendras = USD_BENDRAS;
                pirkti = USD_PIRKTI;
                parduoti = USD_PARDUOTI;
                valiuta = "USD";
                break;
            case 3:
                bendras = INR_BENDRAS;
                pirkti = INR_PIRKTI;
                parduoti = INR_PARDUOTI;
                valiuta = "INR";
                break;
            default:
                cout << "KLAIDA: Tokio valiutos pasirinkimo nera!" << endl;
                continue;
        }

        cout << fixed << setprecision(2);

    }
    return 0;
}
