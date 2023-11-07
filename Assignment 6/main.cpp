#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
using namespace std;

//Elissa Hada
//This code will allow users to create itineraries for their trip

void printWelcome();
void printMenu();
int getCriteria(int locationChoice);
int getRecs(int criteria1, int criteria2, int criteria3, int criteria4, char correct, int locationChoice);

int main() {
    int locationChoice = 0;
    char correct = 'y';
    printWelcome();
    printMenu();

    cin >> locationChoice;
    cin.ignore(100, '\n');
    while (locationChoice != 5) {
        while (correct == 'y') {
            if (locationChoice == 1) {
                cout << "\nYou chose: JAPAN" << endl;
                cout << "Is this correct (y/n): ";
                cin >> correct;
                cin.ignore(100, '\n');
            }
            else if (locationChoice == 2) {
                cout << "\nYou chose: SPAIN" << endl;
                cout << "Is this correct (y/n): ";
                cin >> correct;
                cin.ignore(100, '\n');
            }
            else if (locationChoice == 3) {
                cout << "\nYou chose: GREECE" << endl;
                cout << "Is this correct (y/n): ";
                cin >> correct;
                cin.ignore(100, '\n');
            }
            else if (locationChoice == 4) {
                cout << "\nYou chose: SOUTH KOREA" << endl;
                cout << "Is this correct (y/n): ";
                cin >> correct;
                cin.ignore(100, '\n');
            }
            if (correct == 'n') {
                cout << "Please select again" << endl;
                printMenu();
                cin >> locationChoice;
                cin.ignore(100, '\n');    
                correct = 'y';   
            }
            else if (correct == 'y') {
                break;
            }
        }
        getCriteria(locationChoice);
        printMenu();
        cin >> locationChoice;
        cin.ignore(100, '\n');
    } 
}

void printWelcome() {
    cout << "Welcome to the travel recommendation generator!" << endl;
    cout << "By selecting an option from the criteria below the program will generate travel recommendations for you." << endl;
    cout << "The criteria in the program are location and preferences." << endl;
    cout << "Keep in mind that you do not need to select an option for each criteria, but skipping any will result in fewer recommendations." << endl;
    cout << "Additionally, the more accurate your responses are, the more accurate your recommendations will be." << endl;
}

void printMenu() {
    cout << "\nPlease choose one of the following locations to begin, or enter 5 to end the program:" << endl;
    cout << "1: Japan" << endl;
    cout << "2: Spain" << endl;
    cout << "3: Greece" << endl;
    cout << "4: South Korea" << endl;
    cout << "5: End the program" << endl;
    cout << "Please enter a choice from 1-5: ";
}

int getCriteria(int locationChoice) {
    char criteria1 = ' ';
    char criteria2 = ' ';
    char criteria3 = ' ';
    char criteria4 = ' ';
    char correct = 'y';

        cout << "\nNow you can choose your travel preferences." << endl;
        cout << "\nDo you prefer: " << endl;
        cout << "     A. Outdoor activities" << endl;
        cout << "     B. Indoor activities" << endl;
        cout << "     C. Skip this criteria" << endl;
        cin >> criteria1;

        cout << "\nDo you prefer: " << endl;
        cout << "     A. Warm weather" << endl;
        cout << "     B. Cold weather" << endl;
        cout << "     C. Skip this criteria" << endl;
        cin >> criteria2;

        cout << "\nDo you prefer: " << endl;
        cout << "     A. Urban scenery" << endl;
        cout << "     B. Countryside scenery" << endl;
        cout << "     C. Skip this criteria" << endl;
        cin >> criteria3;

        cout << "\nDo you prefer: " << endl;
        cout << "     A. Modern landmarks" << endl;
        cout << "     B. Traditional landmarks" << endl;
        cout << "     C. Skip this criteria" << endl;
        cin >> criteria4;

        cout << "You chose: " << endl;
        cout << "           " << criteria1 << endl;
        cout << "           " << criteria2 << endl;
        cout << "           " << criteria3 << endl;
        cout << "           " << criteria4 << endl; 
        cout << "Is this correct (y/n): ";
        cin >> correct;
        cin.ignore(100, '\n');

        if (correct == 'n') {
            cout << "Please select again" << endl;
            getCriteria(locationChoice);
        }
        else if (correct == 'y') {
            getRecs(criteria1, criteria2, criteria3, criteria4, correct, locationChoice);
        }
    return 0;
}

int getRecs(int criteria1, int criteria2, int criteria3, int criteria4, char correct, int locationChoice) {
        if (locationChoice == 1) {
            cout << "\nYou chose: JAPAN" << endl;
            cout << "Based on your preferences here are your recommendations:" << endl;

            if (criteria1 == 'A') {
                cout << "    1. Visit Tokyo to see the outdoor cherry blossom garden" << endl;
            }
            else if (criteria1 == 'B') {
                cout << "    1. Visit Akihabra to spend time at the Sega Arcades and shopping centers" << endl;
            }
            else {
                cout << "    1. No recommendation for this category" << endl;
            }
            if (criteria2 == 'A') {
                cout << "    2. Visit during June-September" << endl;
            }
            else if (criteria2 == 'B'){
                cout << "    2. Visit during October-February" << endl;
            }
            else {
                cout << "    2. No recommendation for this category" << endl;
            }
            if (criteria3 == 'A')
            {
                cout << "    3. Visit Kyoto for outdoor markets in the city" << endl;
            }
            else if (criteria3 == 'B'){
                cout << "    3. Visit Mt. Fuji for outdoor sites and hikes" << endl;
            }   
            else {
                cout << "    3. No recommendation for this category" << endl;
            }     
            if (criteria4 == 'A') {
                cout << "    4. Visit Kyoto to see Tokyo Tower and Shibuya for the Shibuya Crossing" << endl;
            }
            else if (criteria4 == 'B'){
                cout << "    4. Visit Osaka to see traditional Japanese villages, temples, and palaces" << endl;
            }
            else {
                cout << "    4. No recommendation for this category" << endl;
            }
        }

        if (locationChoice == 2) {
            cout << "\nYou chose: SPAIN" << endl;
            cout << "Based on your preferences here are your recommendations:" << endl;
            if (criteria1 == 'A') {
                cout << "    1. Rent a bicycle and cycle through cities like Barcelona, Valencia, or Seville" << endl;
            }
            else {
                cout << "    1. Visit the Prado National Museum for an indoor day" << endl;
            }
            if (criteria2 == 'A') {
                cout << "    2. Visit during June-September" << endl;
            }
            else {
                cout << "    2. Visit during October-February" << endl;
            }
            if (criteria3 == 'A')
            {
                cout << "    3. Visit Barcelona for outdoor street markets" << endl;
            }
            else {
                cout << "    3. Visit Sant Maurici Lake National Park for hiking, swimming, and wildlife observation" << endl;
            }        
            if (criteria4 == 'A') {
                cout << "    4. Visit any bustling city such as Madrid to view trendy cafes and charming buildings and shops " << endl;
            }
            else {
                cout << "    4. Visit Barcelona to see traditional cathedrals such as the La Sagrada Famila" << endl;
            }
        }
        if (locationChoice == 3) {
            cout << "\nYou chose: GREECE" << endl;
            cout << "Based on your preferences here are your recommendations:" << endl;
            if (criteria1 == 'A') {
                cout << "    1. Visit Kythnos and go diving on the coast" << endl;
            }
            else {
                cout << "    1. Visit one of Greece's many museums. There are art, history, and sports museums!" << endl;
            }
            if (criteria2 == 'A') {
                cout << "    2. Visit during June-September" << endl;
            }
            else {
                cout << "    2. Visit during December-March" << endl;
            }
            if (criteria3 == 'A')
            {
                cout << "    3. Visit one of the many outdoor shopping districts in Athens" << endl;
            }
            else {
                cout << "    3. Visit Mykonos for beautiful beaches and restaurants or visit Corfu for cities with a little more nature" << endl;
            }        
            if (criteria4 == 'A') {
                cout << "    4. Visit Athens Tower to see the first and only skyscraper!" << endl;
            }
            else {
                cout << "    4. Visit the Acropolis of Athens or Mount Olympus for some popular outdoor sites" << endl;
            }
        }
        if (locationChoice == 4) {
            cout << "\nYou chose: SOUTH KOREA" << endl;
            cout << "Based on your preferences here are your recommendations:" << endl;
            if (criteria1 == 'A') {
                cout << "    1. Visit Seoraksan National Park for scenic hiking in the mountains" << endl;
            }
            else {
                cout << "    1. Visit Seoul and head to a karaoke bar" << endl;
            }
            if (criteria2 == 'A') {
                cout << "    2. Visit during June-September" << endl;
            }
            else {
                cout << "    2. Visit during December-March" << endl;
            }
            if (criteria3 == 'A')
            {
                cout << "    3. Visit Gangnam for shopping and modern style restaurants" << endl;
            }
            else {
                cout << "    3. Visit Busan to see charming beaches and outdoor palaces" << endl;
            }        
            if (criteria4 == 'A') {
            cout << "    4. Visit Pangyo Techno Valley to see tech companies and innovative skyscrapers" << endl;
            }
            else {
                cout << "    4. Visit the Yongin Korean Folk Village for traditional Korean architecture, shops, and clothing" << endl;
            }
        }
    return 0;
}