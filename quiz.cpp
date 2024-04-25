#include <iostream>
using namespace std;

int main() {
    int i, marks = 0, life = 5, count = 0;
    cout << "\t LET'S START WITH OUR QUIZ GAME \n";
    cout << "LET US DISCUSS THE RULE OF THE GAME FIRST \n";
    cout << "RULE 1: YOU ARE PROVIDED WITH 5 LIFE AND ON EVERY WRONG ANSWER YOU WILL LOSE YOUR 1 LIFE AND ON EVERY 5 CORRECT ANSWER YOU WILL GAIN 1 LIFE \n";
    cout << "RULE 2: YOU WILL HAVE TEN SECTION IN THIS GAME \n EACH SECTION WILL CONTAIN TEN QUESTIONS\n";
    cout << "RULE 3: CHOSE YOU CORRECT OPTION BY PRESSING 1 , 2 , 3 , 4 \n";
    cout << "LET'S BEGIN\n";

    for (i = 0; i <= 100; i++) {
        if (i == 1) {
            cout << "\t This section of quiz will deal with record-breaking athletes and the history and rules of sports. \n";
            cout << "SO YOUR FIRST QUESTION IS\n";
            cout << "1. When Michael Jordan played for the Chicago Bulls, how many NBA Championships did he win?\n";
            cout << "1 - six\n";
            cout << "2 - three\n";
            cout << "3 - four\n";
            cout << "4 - two\n";
            int choice;
            cin >> choice;
            if (choice == 1) {
                cout << "correct answer\n";
                marks++;
                cout << "YOUR MARKS = " << marks << "\n";
                count++;
            }
            else if (life >= 1) {
                cout << "OOPS - wrong answer\n";
                cout << "YOU HAVE " << life << " life that's why you are getting promoted\n";
                cout << "THE ANSWER OF THE QUESTION IS SIX\n";
                cout << "YOU HAVE USED YOUR ONE LIFE\n SO YOUR LIFE IS DEDUCTED BY ONE\n";
                life--;
                cout << "YOUR LIFE = " << life << "\n";
            }
            else {
                cout << "OOPS - wrong answer\n";
                cout << "YOU HAVE LOST YOUR ALL LIVES\n SO YOU ARE OUT FROM THE GAME\n";
                cout << "GAME OVER\n";
                return 0;
            }
        }
        else if (i == 2) {
            cout << "2. Which Williams sister has won more Grand Slam titles?\n";
            cout << "1- AMELIA\n";
            cout << "2- EMMA\n";
            cout << "3 - AVA\n";
            cout << "4- SERENA\n";
            int choice;
            cin >> choice;
            if (choice == 4) {
                cout << "correct answer\n";
                marks++;
                cout << "YOUR MARKS = " << marks << "\n";
                count++;
            }
            else if (life >= 1) {
                cout << "OOPS - wrong answer\n";
                cout << "YOU HAVE " << life << " life that's why you are getting promoted\n";
                cout << "THE ANSWER OF THE QUESTION IS SERENA\n";
                cout << "YOU HAVE USED YOUR ONE LIFE\n SO YOUR LIFE IS DEDUCTED BY ONE\n";
                life--;
                cout << "YOUR LIFE = " << life << "\n";
            }
            else {
                cout << "OOPS - wrong answer\n";
                cout << "YOU HAVE LOST YOUR ALL LIVES\n SO YOU ARE OUT FROM THE GAME\n";
                cout << "GAME OVER\n";
                return 0;
            }
        }
        else if (i == 3) {
            cout << "3. Which racer holds the record for the most Grand Prix wins?\n";
            cout << "1- Lewis Ethane\n";
            cout << "2- Michael Schumacher\n";
            cout << "3- Harold Glen\n";
            cout << "4- Julian Conner\n";
            int choice;
            cin >> choice;
            if (choice == 2) {
                cout << "correct answer\n";
                marks++;
                cout << "YOUR MARKS = " << marks << "\n";
                count++;
            }
            else if (life >= 1) {
                cout << "OOPS - wrong answer\n";
                cout << "YOU HAVE " << life << " life that's why you are getting promoted\n";
                cout << "THE ANSWER OF THE QUESTION IS MICHAEL SCHUMACHER\n";
                cout << "YOU HAVE USED YOUR ONE LIFE\n SO YOUR LIFE IS DEDUCTED BY ONE\n";
                life--;
                cout << "YOUR LIFE = " << life << "\n";
            }
            else {
                cout << "OOPS - wrong answer\n";
                cout << "YOU HAVE LOST YOUR ALL LIVES\n SO YOU ARE OUT FROM THE GAME\n";
                cout << "GAME OVER\n";
                return 0;
            }
        }
        else if (i == 4) {
            cout << "4. Which Jamaican runner is an 11-time world champion and holds the record in the 100 and 200-meter race?\n";
            cout << "1- Bryan Clay\n";
            cout << "2- Usain Bolt\n";
            cout << "3- Paula Radcliffe\n";
            cout << "4- Haile Gebrselassie\n";
            int choice;
            cin >> choice;
            if (choice == 2) {
                cout << "correct answer\n";
                marks++;
                cout << "YOUR MARKS = " << marks << "\n";
                count++;
            }
            else if (life >= 1) {
                cout << "OOPS - wrong answer\n";
                cout << "YOU HAVE " << life << " life that's why you are getting promoted\n";
                cout << "THE ANSWER OF THE QUESTION IS USAIN BOLT\n";
                cout << "YOU HAVE USED YOUR ONE LIFE\n SO YOUR LIFE IS DEDUCTED BY ONE\n";
                life--;
                cout << "YOUR LIFE = " << life << "\n";
            }
            else {
                cout << "OOPS - wrong answer\n";
                cout << "YOU HAVE LOST YOUR ALL LIVES\n SO YOU ARE OUT FROM THE GAME\n";
                cout << "GAME OVER\n";
                return 0;
            }
        }
        else if (i == 5) {
            cout << "5. Which boxer was known as The Greatest and The Peoples Champion?\n";
            cout << "1- Bryan Clay\n";
            cout << "2- Paula Radcliffe\n";
            cout << "3- Muhammad Ali\n";
            cout << "4- Haile Gebrselassie\n";
            int choice;
            cin >> choice;
            if (choice == 3) {
                cout << "correct answer\n";
                marks++;
                cout << "YOUR MARKS = " << marks << "\n";
                count++;
                if (count >= 5) {
                    life++;
                    cout << "WELL DONE\n";
                    cout << "YOUR LIFE IS INCREASED BY 1\n";
                    cout << "LIFE = " << life << "\n";
                    count = 0;
                }
            }
            else if (life >= 1) {
                cout << "OOPS - wrong answer\n";
                cout << "YOU HAVE " << life << " life that's why you are getting promoted\n";
                cout << "THE ANSWER OF THE QUESTION IS Muhammad Ali\n";
                cout << "YOU HAVE USED YOUR ONE LIFE\n SO YOUR LIFE IS DEDUCTED BY ONE\n";
                life--;
                cout << "YOUR LIFE = " << life << "\n";
            }
            else {
                cout << "OOPS - wrong answer\n";
                cout << "YOU HAVE LOST YOUR ALL LIVES\n SO YOU ARE OUT FROM THE GAME\n";
                cout << "GAME OVER\n";
                return 0;
            }
        }
        else if (i == 6) {
            cout << "6. What country won the very first FIFA World Cup in 1930?\n";
            cout << "1- Uruguay\n";
            cout << "2- Belgium\n";
            cout << "3- France\n";
            cout << "4- Brazil\n";
            int choice;
            cin >> choice;
            if (choice == 1) {
                cout << "correct answer\n";
                marks++;
                cout << "YOUR MARKS = " << marks << "\n";
                count++;
                if (count >= 5) {
                    life++;
                    cout << "WELL DONE\n";
                    cout << "YOUR LIFE IS INCREASED BY 1\n";
                    count = 0;
                    cout << "LIFE = " << life << "\n";
                }
            }
            else if (life >= 1) {
                cout << "OOPS - wrong answer\n";
                cout << "YOU HAVE " << life << " life that's why you are getting promoted\n";
                cout << "THE ANSWER OF THE QUESTION IS Uruguay\n";
                cout << "YOU HAVE USED YOUR ONE LIFE\n SO YOUR LIFE IS DEDUCTED BY ONE\n";
                life--;
                cout << "YOUR LIFE = " << life << "\n";
            }
            else {
                cout << "OOPS - wrong answer\n";
                cout << "YOU HAVE LOST YOUR ALL LIVES\n SO YOU ARE OUT FROM THE GAME\n";
                cout << "GAME OVER\n";
                return 0;
            }
        }
        else if (i == 7) {
            cout << "7. Which of these events is NOT part of a decathlon?\n";
            cout << "1- Badminton\n";
            cout << "2- Cricket\n";
            cout << "3- Cycling\n";
            cout << "4- Hammer throw\n";
            int choice;
            cin >> choice;
            if (choice == 4) {
                cout << "correct answer\n";
                marks++;
                cout << "YOUR MARKS = " << marks << "\n";
                count++;
                if (count >= 5) {
                    life++;
                    cout << "WELL DONE\n";
                    cout << "YOUR LIFE IS INCREASED BY 1\n";
                    count = 0;
                    cout << "LIFE = " << life << "\n";
                }
            }
            else if (life >= 1) {
                cout << "OOPS - wrong answer\n";
                cout << "YOU HAVE " << life << " life that's why you are getting promoted\n";
                cout << "THE ANSWER OF THE QUESTION IS Hammer Throw\n";
                cout << "YOU HAVE USED YOUR ONE LIFE\n SO YOUR LIFE IS DEDUCTED BY ONE\n";
                life--;
                cout << "YOUR LIFE = " << life << "\n";
            }
            else {
                cout << "OOPS - wrong answer\n";
                cout << "YOU HAVE LOST YOUR ALL LIVES\n SO YOU ARE OUT FROM THE GAME\n";
                cout << "GAME OVER\n";
                return 0;
            }
        }
        else if (i == 8) {
            cout << "8. Which hockey team did Wayne Gretzky play for in the 80s?\n";
            cout << "1- Mikko Koskinen\n";
            cout << "2- Oscar Klefbom\n";
            cout << "3- Edmonton Oilers\n";
            cout << "4- Leon Draisaitl\n";
            int choice;
            cin >> choice;
            if (choice == 3) {
                cout << "correct answer\n";
                marks++;
                cout << "YOUR MARKS = " << marks << "\n";
                count++;
                if (count >= 5) {
                    life++;
                    cout << "WELL DONE\n";
                    cout << "YOUR LIFE IS INCREASED BY 1\n";
                    count = 0;
                    cout << "LIFE = " << life << "\n";
                }
            }
            else if (life >= 1) {
                cout << "OOPS - wrong answer\n";
                cout << "YOU HAVE " << life << " life that's why you are getting promoted\n";
                cout << "THE ANSWER OF THE QUESTION IS EDMONTON OILERS\n";
                cout << "YOU HAVE USED YOUR ONE LIFE\n SO YOUR LIFE IS DEDUCTED BY ONE\n";
                life--;
                cout << "YOUR LIFE = " << life << "\n";
            }
            else {
                cout << "OOPS - wrong answer\n";
                cout << "YOU HAVE LOST YOUR ALL LIVES\n SO YOU ARE OUT FROM THE GAME\n";
                cout << "GAME OVER\n";
                return 0;
            }
        }
        else if (i == 9) {
            cout << "9. In what year was the first ever Wimbledon Championship held?\n";
            cout << "1- 1877\n";
            cout << "2- 1875\n";
            cout << "3- 1879\n";
            cout << "4- 1870\n";
            int choice;
            cin >> choice;
            if (choice == 1) {
                cout << "correct answer\n";
                marks++;
                cout << "YOUR MARKS = " << marks << "\n";
                count++;
                if (count >= 5) {
                    life++;
                    cout << "WELL DONE\n";
                    cout << "YOUR LIFE IS INCREASED BY 1\n";
                    count = 0;
                    cout << "LIFE = " << life << "\n";
                }
            }
            else if (life >= 1) {
                cout << "OOPS - wrong answer\n";
                cout << "YOU HAVE " << life << " life that's why you are getting promoted\n";
                cout << "THE ANSWER OF THE QUESTION IS 1877\n";
                cout << "YOU HAVE USED YOUR ONE LIFE\n SO YOUR LIFE IS DEDUCTED BY ONE\n";
                life--;
                cout << "YOUR LIFE = " << life << "\n";
            }
            else {
                cout << "OOPS - wrong answer\n";
                cout << "YOU HAVE LOST YOUR ALL LIVES\n SO YOU ARE OUT FROM THE GAME\n";
                cout << "GAME OVER\n";
                return 0;
            }
        }
        else if (i == 10) {
            cout << "10. How many soccer players should each team have on the field at the start of each match?\n";
            cout << "1- 15\n";
            cout << "2- 12\n";
            cout << "3- 16\n";
            cout << "4- 11\n";
            int choice;
            cin >> choice;
            if (choice == 4) {
                cout << "correct answer\n";
                marks++;
                cout << "YOUR MARKS = " << marks << "\n";
                count++;
                if (count >= 5) {
                    life++;
                    cout << "WELL DONE\n";
                    cout << "YOUR LIFE IS INCREASED BY 1\n";
                    count = 0;
                    cout << "LIFE = " << life << "\n";
                }
            }
            else if (life >= 1) {
                cout << "OOPS - wrong answer\n";
                cout << "YOU HAVE " << life << " life that's why you are getting promoted\n";
                cout << "THE ANSWER OF THE QUESTION IS 11\n";
                cout << "YOU HAVE USED YOUR ONE LIFE\n SO YOUR LIFE IS DEDUCTED BY ONE\n";
                life--;
                cout << "YOUR LIFE = " << life << "\n";
            }
            else {
                cout << "OOPS - wrong answer\n";
                cout << "YOU HAVE LOST YOUR ALL LIVES\n SO YOU ARE OUT FROM THE GAME\n";
                cout << "GAME OVER\n";
                return 0;
            }
        }
    }
    return 0;
}
