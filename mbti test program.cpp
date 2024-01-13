#include <iostream>
#include <string>
using namespace std;

int main() {
    string EI;
    string NS;
    string TF;
    string JP;

    cout << "Thank you for taking the MBTI personality test, you are required to answer 4 questions." << "\n";
    cout << "Your MBTI persoanlity type will be decided based on the questions taht you have answered." << "\n";
    cout << "Are you ready to take the test ?" << "\n";
    cout << "Click any key and press enter if you are ready, if not, click on the close button on the upper right corner to stop the program." << "\n";
    cout << "If you made any mistakes, you will have to close the program and retake the test, there's no eraser and you cannot undo the submission." << "\n";
    string Ready;
    cin >> Ready;
    //The test will start doesn't matter is the user is ready or not. 
    //It's his / her fault if she is not ready. 
    //He/she shouldn't be running this program if he/she is not ready.

    cout << "Here we go." << "\n";

    cout << "------------------------------------------------------------------------------------------------------" << "\n";
    cout << "Are you (1) extroverted or (2) introverted ?\n\"Type 1 for extroverted and 0 for introverted.\"" << "\n";
    bool ei;
    cin >> ei;

    if (ei == true) {
        EI = "E";
    }
    else {
        EI = "I";
    }
    cout << "------------------------------------------------------------------------------------------------------" << "\n";
    cout << "Are you (1) a person who prefers facts and details and focus on present or\n"
        << "(2) a person who likes abstract theories and ideas and like to imagine things and future possiblities ?" << "\n"
        << "\"Type 1 for the first option and 0 for the second option.\"" << "\n";
    bool ns;
    cin >> ns;

    if (ns == true) {
        NS = "S";
    }
    else {
        NS = "N";
    }

    cout << "------------------------------------------------------------------------------------------------------" << "\n";
    cout << "How do you make decisions ?\nDo you (1) make decisions based on the logical and consistency of the choice or\n"
        << "(2) taking into consideration of the perspective of everyone involved in ?" << "\n"
        << "\"Type 1 for the first option and 0 for the second option.\"" << "\n";
    bool tf;
    cin >> tf;

    if (tf == true) {
        TF = "T";
    }
    else {
        TF = "F";
    }

    cout << "------------------------------------------------------------------------------------------------------" << "\n";
    cout << "How you relate to the outside world?" << "\n" << "Do you (1) tend to be decision-oriented and organized,\n"
        << "who who make to-do lists and enjoy getting things done ahead of deadlines or" << "\n"
        << "(2) more hesitant to make decisions, liking to leave things open and keep making observations and will tend to procrastinate tasks ?\n"
        << "\"Type 1 for the first option and 0 for the second option.\"" << "\n";
    bool jp;
    cin >> jp;

    if (jp == true) {
        JP = "J";
    }
    else {
        JP = "P";
    }

    cout << "------------------------------------------------------------------------------------------------------" << "\n";
    cout << "Your MBTI is : " << EI << NS << TF << JP;
    cout << " " << "\n";

    system("pause");
    return 0;

}