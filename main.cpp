#include <iostream>
#include "Health.h"

using namespace std;


int main()
{
    // declaring string variables
    string name;
    string sur;
    int year;
    int month;
    int day;


    // Instantiating all objects
    HealthProfile profile ( "Korede", "Akanbi", 0, 0, 0 );

    // display
    profile.displayMessage();
    profile.displayMessage2();

    // Trying to prompt the user for their name and all respectively
    cout << "\n\nEnter your first name: " << endl;
    getline( cin, name );
    profile.setFirstName( name );

     cout << "\nEnter your Last name: " << endl;
    getline( cin, sur );
    profile.setLastName( sur );

    // Prompting the user for date of birth respectively
    cout << "\n\nYOB: " << endl;
    cin >> year;
    profile.setAgeY( year );

    cout << "\nMOB: " << endl;
    cin >> month;
    profile.setAgeM( month );

    cout << "\nDOB: " << endl;
    cin >> day;
    profile.setAgeD( day );

    cout << "\n\nFirst Name: " << profile.getFirstName() << "\nLast Name: " << profile.getLastName() << endl;

      cout << "\n\nAge: " << profile.getAgeY() << endl;

    profile.BMI();

      cout << "\n\nTarget Heart Rate: " << endl;
      profile.target();
}
