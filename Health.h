#ifndef COMPUTERIZEDHEALTHFUNCTIONHEADER_H_INCLUDED
#define COMPUTERIZEDHEALTHFUNCTIONHEADER_H_INCLUDED



#endif // COMPUTERIZEDHEALTHFUNCTIONHEADER_H_INCLUDED

#include <string>
#include <iomanip>
using namespace std;


class HealthProfile
{
    public:
       // constructors for functions
       HealthProfile ( string name, string sur, int year, int month, int day )
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
    void displayMessage()
    {
        cout << "                                                                  Welcome to the  COMPUTERIZED HEALTH RECORD keeper" << endl;
        cout << "                                                          NOTE: Computerized Health Records Could Make It Easier For Patients to" << endl;
        cout << "                                         share their Health Profiles And Histories Among Their Various Health Care Professionals. This Could Help Improve" << endl;
        cout << "                                 the Quality Of Health Care, Help Avoid Drug Conflicts And Erroneous Drug Prescriptions, Reduce Cost And In Emergencies, Could Save Life's.\n\n" << endl;
    }

    // Displaying  the BMI Values
     void displayMessage2()
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

    void setFirstName ( string name )
    {
          firstName = name;
    }

    string getFirstName()
    {
        return firstName;
    }

    void setLastName ( string sur )
    {
        lastName = sur;
    }

    string getLastName ()
    {
        return lastName;
    }

   // End OF Function For the names of the patient



    //set and get functions to accept the patients age

     void setAgeY ( int year )
    {
        ageY = year;
    }

    int getAgeY()
    {
        return 2021 - ageY;
    }

  void setAgeM ( int month )
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

   int getAgeM()
    {
      return ageM;
    }

    void setAgeD ( int day )
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

     int getAgeD()
     {
       return ageD;
     }

      // formula to calculate target heart rated of the patient

     void target()
     {
        cout << 220 - getAgeY() << endl;
     }

     // formula to calculate maximum heart rate
     void BMI()
     {
         double height;
         double weight;
         double maximumHeartRate;

         cout << "\n\nEnter your Weight in pounds: \n" << endl;
         cin >> weight;
         cout << "\n\nEnter your Height in pounds: \n" << endl;
         cin >> height;

         maximumHeartRate = weight*703/height*height;
         cout << setprecision( 2 ) << fixed << endl;
         cout << "\n\n maximumHeartRate: " << maximumHeartRate << endl;

     }

     private:
     	string firstName;
     	string lastName;
     	int ageY;
     	int ageM;
     	int ageD;

};

        // End OF SET and GET functions
