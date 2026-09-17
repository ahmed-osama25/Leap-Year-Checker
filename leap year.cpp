#include<iostream>

using namespace std;

class LeapYear
{

private:
    int year;

public:

    void setyear(int y)
    {
        year = y;
    }

    bool isLeapYear()
    {

        if(year % 400 == 0)
        {
            return true;
        }

        else if(year % 4 == 0 && year % 100 != 0)
        {
            return true;
        }

        else
        {
            return false;
        }

    }

    void displayResult()
    {

        if(isLeapYear())
        {
            cout << year << " is a leap year" << endl;
        }

        else
        {
            cout << year << " is not a leap year" << endl;
        }
    }
};

void ShowMenu()
{
    cout << "\n================================\n";
    cout << "\n       LEAP YEAR CHECKER        \n";
    cout << "\n================================\n";

    cout << "1- Check a Year\n";
    cout << "2- Check Multiple Years\n";
    cout << "3- Show Leap Years in Range\n";
    cout << "4- Exit\n";
}

int main()
{
    LeapYear year;

    int choice;

    while(true)
    {
        ShowMenu();

        cin >>  choice;

        if(choice  == 1  )
        {
            int y;

            cout << "Enter A year: ";
            
            cin >> y;

            year.setyear(y);

            year.displayResult();

            system("pause");

            system("cls");
        }

        if(choice == 2)
        {
            int numberofyears;

            cout << "Enter number of years: ";

            cin >>  numberofyears;

            for(int i = 1; i <= numberofyears ; i++)
            {
                int y;

                cout << "Enter year " << i << ": "; 

                cin >> y;

                year.setyear(y);

                year.displayResult();
            }

            system("pause");

            system("cls");
        }

        if(choice == 3)
        {
            int yearstart;

            int yearend;

            cout << "Enter start year: ";

            cin >> yearstart;

            cout <<  "Enter end  year: ";

            cin >> yearend;

            for(int i = yearstart ; i <= yearend ; i++)
            {
                year.setyear(i);

                if(year.isLeapYear())
                {
                    cout << i << " ";
                }

            }

            system("pause");

            system("cls");
        }

        if(choice == 4)
        {
            cout <<  "Good Bye!" << endl;

            system("pause");

            return 0;
        }

    }

    return 0;
}