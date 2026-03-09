#include <iostream>
#include <string>

using namespace std;

class RobotPemadam {
    private:
        int jarak;      
        string status;  

    public:
        void inputSensor(int inputJarak) {
            jarak = inputJarak;
        }

        void prosesLogika() {
            if (jarak > 20) {
                status = "Maju Mencari Api";
            } else if (jarak <= 20 && jarak > 5) {
                status = "UDAH DEKET NIH BRAY";
            } else if (jarak <= 5) {
                status = "Posisi Tepat! gas semprot kali ya!";
            }
        }

        void cetakStatus() {
            cout << "[Sensor: " << jarak << " cm] -> Action: [" << status << "]" << endl;
        }
};

int main() {
    RobotPemadam robot;
    int input;

    cout << "----------------------------------------------------------------" << endl;
    cout << "                   Simulasi Robot Pemadam Api" << endl;
    cout << "----------------------------------------------------------------" << endl;

    while (true) {
        cout << "Masukkan jarak sensor (cm): ";
        cin >> input;

        if (input == 67) {
            cout << "Program berhenti." << endl;
            break;
        } 

        robot.inputSensor(input);
        robot.prosesLogika();
        robot.cetakStatus();
        cout << "----------------------------------------------------------------" << endl;

    }
    cout << "----------------------------------------------------------------" << endl;
    return 0;
}