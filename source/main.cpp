#include <iostream>
#include <iomanip>
#include "Health.h"
using namespace std;



       // constructors for functions
    HealthProfile::HealthProfile ( string name, string sur, int year, int month, int day )
    {
        setFirstName( name );
        setLastName( sur );
        setAgeY( year );
        setAgeM( month );
        setAgeD( day );
        void target();
        void displayMessage();
        void displayMessage2();
    }
                 // NOTE: any time a constructor is defined in a class it must be initialised and then passed with arguments
                   // according to the number of parameter's in the function's definition, in the main function.


           // welcome messaging
    void HealthProfile::displayMessage()
    {
        cout << "                                                                  Welcome to the  COMPUTERIZED HEALTH RECORD keeper" << endl;
        cout << "                                                          NOTE: Computerized Health Records Could Make It Easier For Patients to" << endl;
        cout << "                                         share their Health Profiles And Histories Among Their Various Health Care Professionals. This Could Help Improve" << endl;
        cout << "                                 the Quality Of Health Care, Help Avoid Drug Conflicts And Erroneous Drug Prescriptions, Reduce Cost And In Emergencies, Could Save Life's.\n\n" << endl;
    }

    // Displaying  the BMI Values
     void HealthProfile::displayMessage2()
     {
    cout << "CATEGORY" << setw( 50 ) << "BMI RANGE - kg/m^2 " << endl;
    cout << setw( 4 ) << "Severe Thinness " << setw( 30 ) << " < 16 " << endl;
    cout << setw( 4 )<< "Moderate Thinness " << setw( 30 ) << " 16 - 17 " << endl;
    cout << setw( 4 )<< "Mild Thinness " << setw( 35 ) << " 17 - 18.5 " << endl;
    cout << setw( 4 )<< "Normal " << setw( 42 ) << " 18.5 - 25 " << endl;
    cout << setw( 4 )<< "Overweight " << setw( 37 ) << " 25 - 30 " << endl;
    cout << setw( 4 )<< "Obese Class I  " << setw( 33 ) << " 30 - 35 " << endl;
    cout << setw( 4 )<< "Obese Class II  " << setw( 32 ) << " 35 - 40 " << endl;
    cout << setw( 4 )<< "Obese Class III  " << setw( 30 ) << " < 40 " << endl;

     }

    // set and get function for first and last name

    void HealthProfile::setFirstName ( string name )
    {
          firstName = name;
    }

    string HealthProfile::getFirstName()
    {
        return firstName;
    }

    void HealthProfile::setLastName ( string sur )
    {
        lastName = sur;
    }

    string HealthProfile::getLastName ()
    {
        return lastName;
    }

   // End OF Function For the names of the patient



    //set and get functions to accept the patients age

     void HealthProfile::setAgeY ( int year )
    {
        ageY = year;
    }

    int HealthProfile::getAgeY()
    {
        return 2021 - ageY;
    }

  void HealthProfile::setAgeM ( int month )
    {
        int m = 0;
        if ( m < 1 )
            m = 1;
        while ( m > 12 )
        {
             m = 1;
            cout << "Error Input!" << endl;
            cin >> m;
        }
        ageM = month;
    }

   int HealthProfile::getAgeM()
    {
      return ageM;
    }

    void HealthProfile::setAgeD ( int day )
    {
        int d = 0;
        if ( d < 1 )
            d = 1;
        while ( d > 31)
        {
            d = 1;
            cout << "Error Input!" << endl;
            cin >> d;
        }
        ageD = day;
    }

     int HealthProfile::getAgeD()
     {
       return ageD;
     }

      // formula to calculate target heart rated of the patient

     void HealthProfile::target()
     {
        cout << 220 - getAgeY() << endl;
     }


        // End OF SET and GET functions


