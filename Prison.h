#include <iostream>
#include <conio.h>   //for getch() 
#include <string.h>  
#include <fstream>
#include <stdlib.h>  //for exit()
using namespace std;
class Prison
{
	
       // Details of Prisoner
    string First_Name[20]= {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", 
	                        " ", " ", " ", " ", " ", " ", " ", " ", " ", " "};
    string Second_Name[20];
    string gender[20];
    int CellNo[20]= {1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009,1010,
	                 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020};
    int age[20];
    double height[20];
    string eyecolor[20];
    string crime[20];
    int Punishmentmonths[20];
    int i = 0;

public:
	
    void SetData();      // Set data of the prisoners
    void Details();      // Getting details of the prisoners
    void Afterlogin();   // After login page OR Menu function
    void monthly_Attendance();   // Storing attendance of the prisoners
    void Release();      // Release the prisoners
    void SearchPrison(); // Search Prison
    void PrisonFile();   // Prison File
    void Logout();       // Logout
    void Exit();         // Exit function
    void Login();        //login
};

Prison p;  //global Object created

//function Definition outside the class

void Prison::Logout()
{
    system("cls");
    cout << "\n\n\n\t\t\t";
    cout << "logging out ";
   for (int m = 0; m < 15; m++)  
    {
      for (int a = 0; a <= 100000000; a++)   //empty loop
        {}
    cout << ".";
    }
    Login();
}
void Prison::Login()
{

    char Username[15],Password[15];
    char Epwd;
    int true1 = 1,try1 = 0,i = 0;
	do
    {
        system("cls");
       
        cout << "\n\n\n";
      
        cout << "\t\t\t\t    ----------------------------------------\n";
        
        cout << "\t\t\t\t    |   PRISON STATION MANAGEMENT SYSTEM   |\n";
        
        cout << "\t\t\t\t    ----------------------------------------\n";
        
        cout << "\n\n";
        cout << "\t\t\t\t\t";
        cout << "Username : ";
        cin >> Username;
        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t";
        cout << "Password : ";
        for (i = 0; ; )
        {
            Epwd = getch();     //storing characters in string
            if ((Epwd >= 'a' && Epwd <= 'z') || (Epwd >= 'A' && Epwd <= 'Z') || (Epwd >= '0' && Epwd <= '9'))
            {
                Password[i] = Epwd;
                ++i;
                cout << "*";
            }
            if (Epwd == '\b' && i >= 1)
            {
                cout << "\b \b";
                --i;
            }
            if (Epwd == '\r')
            {
                Password[i] = '\0';
                break;
            }
        }

        if (strcmp(Username, "admin") == 0 && strcmp(Password,"pass") == 0)
        {
            cout << "\n\n";
            cout << "\t\t\t\t";
            cout << "You are accessed to the system!\n\n";
            cout << "\t\t\t\t";
            system("pause");
            system("cls");
            true1 = 0;
            try1 = 4;
            Afterlogin();
        }
        else
        {
            system("cls");
            try1 = try1 + 1;
            cout << "\n";
            cout << "\t\t\t\t\t";
            cout << "No. of attempts remain: " << 3 - try1;
            cout << "\n\n";
            cout << "\t\t\t\t";
            system("pause");

            if (try1 >= 3)
            {
                cout << "\t\t\t\t\t\t";
                cout << "\n";
                cout << "\t\t\t\t";
                cout << "No permission to enter the system!\n\n";
                cout << "\t\t\t\t";
                system("pause");
                exit(0);
            }
        }
    } while (try1 < 3);
}

void Prison ::SetData()
{
    system("cls");
    int enter;
    
    cout << "\t\t\t\t    -----------------------------------------------------\n";
    
    cout << "\t\t\t\t    |                                                   |\n";
    cout << "\t\t\t\t    |         Enter basic information of prisoner       |\n";
    cout << "\t\t\t\t    |                                                   |\n";
    
    cout << "\t\t\t\t    -----------------------------------------------------\n";
    
    cout << "\n\n";
    cout << "\t\t\t\t\t";
    cout << "Enter first name : ";
    cin >> First_Name[i];
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Enter second name : ";
    cin >> Second_Name[i];
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Enter gender : ";
    cin >> gender[i];
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Enter age : ";
    cin >> age[i];
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Enter height : ";
    cin >> height[i];
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Enter eyecolor : ";
    cin >> eyecolor[i];
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Enter crime : ";
    cin >> crime[i];
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Enter punishment span in months : ";
    cin >> Punishmentmonths[i];
    cout << "\t\t\t\t\t";
    cout << "\n\n\n";
    cout << "\t\t\t\t\t";
    cout << "Your Cell No is " << CellNo[i];
    cout << "\n\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    i+=1;
    cout<<"Press 1 to return : ";
    cin>>enter;
    if (enter == 1)
     Afterlogin();
}

void Prison ::Details()
{
    system("cls");
    cout << "\t\t\t\t    -----------------------------------------------------\n";
    cout << "\t\t\t\t    |                                                   |\n";
    cout << "\t\t\t\t    |                Prisoner list                      |\n";
    cout << "\t\t\t\t    |                                                   |\n";
    cout << "\t\t\t\t    -----------------------------------------------------\n";
    
    int enter,counter= 0, serial = 0;

    cout << "\n\t\t\t\t\t";
	 cout << "\n===========================================================================================================\n";
    cout << "SR.\tNAME\t\t\tCell Block\tAge\tGender\tHeight\tEye Colour\tCrime\tPunishment\n";
    cout << "===========================================================================================================\n";

    for (int j = 0; j < 20; j++)
    {
        if (First_Name[j] != " ")
        {
            serial++;
            cout << serial << "\t" << First_Name[j] << " " << Second_Name[j] << "\t\t" << CellNo[j] << "\t\t" << age[j] 
			<< "\t" << gender[j] << "\t" << height[j] << "\t" << eyecolor[j] << "\t\t" << crime[j] << "\t\t" 
			<< Punishmentmonths[j] << endl;
            cout << "\n"<< endl;
            counter++;
        }
    }
    if (counter == 0)
    {
        cout << "\n\t\t\t\t\t";
        cout << "No prisoner Present";
        cout << "\n";
        cout << "\t\t\t\t\t";
    }
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Press 1 to return : ";
    cin>>enter;
    if (enter== 1)
      Afterlogin();
    
}
void Prison ::monthly_Attendance()
{
    int enter, block, counter= 0;
    char ch;
    do
    {
        system("cls");
        system("cls");
        int t;
        
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    |           Prisoner attendance maintainer          |\n";
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        cout << "\n\t\t\t\t\t";
        cout << "\n===========================================================================================================\n";
        cout << "NAME\t\t\tCell Block\tAge\tGender\tHeight\tEye Colour\tCrime\tPunishment\n";
        cout << "===========================================================================================================\n";
        for (int x = 0; x <20; x++)
        {
            if (First_Name[x] != " ")
            {
                cout<<First_Name[x] << " " << Second_Name[x] << "\t\t" << CellNo[x] << "\t\t" << age[x] << "\t"
				 <<gender[x] << "\t" << height[x] << "\t" << eyecolor[x] << "\t\t" << crime[x] << "\t\t" 
				 <<Punishmentmonths[x]<<endl;
                cout << "\n"<< endl;
                counter++;
            }
        }
        if (counter != 0)
        {
            cout << "\n\t\t\t\t\t";
            cout << "Enter the cell  block of the prisoner :";
            cin>>block;
            block = block - 1001;
            cout << "\n\t\t\t\t\t";
            cout << "Name : ";
            cout << First_Name[block] << " " << Second_Name[block];
            Punishmentmonths[block]--;
            cout << "\n\t\t\t\t\t";
            cout << "Punishment for :" << Punishmentmonths[block] << " months";
            if (Punishmentmonths[block] == 0)
            {
                cout << "\n\t\t\t\t\t";
                cout << "Prisoner is ready for release";
            }
            cout << "\n\n";
            cout << "\n\t\t\t\t\t";
            cout << "Press 'y' to choose another prisoner and press 'n' to exit :";
            cin >> ch;
        }
        else
        {
            
            cout << "\t\t\t\t\t";
            cout << "\n";
            cout << "\t\t\t\t\t";
            
            cout << "\t\t\t\t                                                    \n";
            cout << "\t\t\t\t    ------------------------------------------------\n";
            
            cout << "\t\t\t\t    |             No prisoners present             |\n";
            
            cout << "\t\t\t\t    ------------------------------------------------\n";
        }

    } while (ch == 'y'||ch=='Y');
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Press 1 to return : ";
    cin>>enter;
    if (enter == 1)
     Afterlogin();
    
}

void Prison ::Release()
{
    int s, block, counter= 0, enter;
    char ch;
    do
    {
        system("cls");
        
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    |                Release prisoner                   |\n";
        cout << "\t\t\t\t    |                                                   |\n";
        
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        

        cout << "\n\t\t\t\t\t";
        cout << "\n===========================================================================================================\n";
        cout << "NAME\t\t\tCell Block\tAge\tGender\tHeight\tEye Colour\tCrime\tPunishment\n";
        cout << "===========================================================================================================\n";

        for (int x = 0; x <20; x++)
        {
            if (First_Name[x] != " ")
            {
                cout << First_Name[x] << " " << Second_Name[x] << "\t\t" << CellNo[x] << "\t\t" << 
				age[x] << "\t" << gender[x] << "\t" << height[x] << "\t" << eyecolor[x] << "\t\t" << crime[x] 
				<< "\t\t" << Punishmentmonths[x] << endl;
                cout << "\n"
                     << endl;
                counter++;
            }
        }
        if (counter != 0)
        {
            cout << "\n\t\t\t\t\t";
            cout << "Enter the cell block of the prisoner :";
            cin>>block;
            block = block - 1001;
            cout << "\n\t\t\t\t\t";
            cout << "Name : ";
            cout << First_Name[block] << "  " << Second_Name[block];
            cout << "\n\t\t\t\t\t";
            if (Punishmentmonths[block] == 0)
            {
                cout << "\n\t\t\t\t\t";
                cout << "Prisoner is ready for release";
                cout << "\n\t\t\t\t\t";
                cout << "Press 1 to release the prisoner :";
                cin >> enter;
                if (enter == 1)
                {
                    First_Name[block] = " ";
                    Second_Name[block] = " ";
                    gender[block] = " ";
                    age[block] = 0;
                    height[block] = 0;
                    eyecolor[block] = " ";
                    Punishmentmonths[block] = 0;
                    cout << "\n\t\t\t\t\tProcessing";

                    for (int process = 0; process < 7; process++)
                    {
                        for (int a = 0; a <= 100000000; a++)
						{}
                        cout << ".";
                    }
                    cout << "\n\t\t\t\t\t";
                    cout << "Prisoner released successfully";
                }
            }
            else
            {
                cout << "\n\t\t\t\t\t";
                cout << "Prisoner is not ready for release";
            }

            cout << "\n\n";
            cout << "\n\t\t\t\t\t";
            cout << "Press y to choose another prisoner and press n to exit :";
            cin >> ch;
        }
        else
        {
            int a;
            cout << "\t\t\t\t\t";
            cout << "\n";
            cout << "\t\t\t\t\t";
            
            cout << "\t\t\t\t                                                    \n";
            cout << "\t\t\t\t    ------------------------------------------------\n";
            
            cout << "\t\t\t\t    |             No prisoners present             |\n";
            
            cout << "\t\t\t\t    ------------------------------------------------\n";
            break;
        }
    } while (ch == 'y'||ch=='Y');
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Press 1 to return : ";
    cin>>s;
    if (s == 1)
     Afterlogin();
    
}

void Prison ::SearchPrison()
{
    int info,cell, i, a, enter, block, c = 0, p = 0;

    system("cls");
    cout << "\t\t\t\t    ----------------------------------------\n";
    
    cout << "\t\t\t\t    |             Search Menu              |\n";
    
    cout << "\t\t\t\t    ----------------------------------------\n";
    
    cout << "\n\n";
    cout << "\t\t\t\t";
    cout << "Enter the prisoner cell id to be searched : ";
    cin >> cell;
    cout << "\n\t\t\t\t";
    cout << "\n===========================================================================================================\n";
    cout << "NAME\t\t\tCell Block\tAge\tGender\tHeight\tEye Colour\tCrime\tPunishment\n";
    cout << "===========================================================================================================\n";
    block = cell - 1001;
    info = CellNo[block];
    if (cell == info)
    {
        if (First_Name[block] != " ")
        {
            cout << First_Name[block] << " " << Second_Name[block] << "\t\t" << CellNo[block] << "\t\t" 
			<< age[block] << "\t" << gender[block] << "\t" << height[block] << "\t" << eyecolor[block] << "\t\t" 
			<< crime[block] << "\t\t" << Punishmentmonths[block] << endl;
            cout << "\n"<< endl;
        }
        else
        {
            cout << "\n";
            cout << "\t\t\t\t";
            cout << "\n";
            cout << "\t\t\t\t";
            cout << "cell block empty" << endl;
        }
    }
    else
    {
        cout << "\n";
        cout << "\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t";
        cout << "invalid cell id" << endl;
    }
    cout << "\n";
    cout << "\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t";
    cout << "Press 1 to return : ";
    cin>>enter;
    if (enter == 1)
     Afterlogin();
    
}

void Prison ::PrisonFile()
{
    
    system("cls");

    int format;
    int enter, counter = 0, serial = 0;
    cout << "\n\n\n";
    cout << "\t\t\t\t-----------------------------------------------------------------\n";
    
    cout << "\t\t\t\t|                                                               |\n";
    
    cout << "\t\t\t\t|                     1)   Text File                            |\n";
    cout << "\t\t\t\t|                                                               |\n";
    
    cout << "\t\t\t\t|                     2)   Html File                            |\n";
    cout << "\t\t\t\t|                                                               |\n";
    
    cout << "\t\t\t\t|                     3)   Word File                            |\n";
    cout << "\t\t\t\t|                                                               |\n";
    
    cout << "\t\t\t\t-----------------------------------------------------------------\n";
    
    cout << "\n";
    cout << "\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t";
    cout << "In which format you want to open your file? ";
    cin >> format;
    ofstream MyFile_;
    switch (format)
    {
    case 1:
    	
        system("cls");
        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t";
        cout << "\n\n\n\n\n";
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    |        Txt File created successfully              |\n";
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    -----------------------------------------------------\n";

        MyFile_.open("Prison_Data.txt");

        MyFile_ << "\t\t\t\t    -----------------------------------------------------\n";
        MyFile_ << "\t\t\t\t    |                                                                            |\n";
        MyFile_ << "\t\t\t\t    |                Prisoner list                                     |\n";
        MyFile_ << "\t\t\t\t    |                                                                            |\n";
        MyFile_ << "\t\t\t\t    -----------------------------------------------------\n";

        MyFile_ << "\n\t\t\t\t\t";

        MyFile_ << "\n=====================================================================================================================\n";
        MyFile_ << "SR.\tNAME\t\t\tCell Block\tAge\t\tGender\tHeight\tEye Colour\tCrime\tPunishment\n";
        MyFile_ << "=======================================================================================================================\n";

        for (int x = 0; x < 20; x++)
        {
            if (First_Name[x] != " ")
            {
                serial++;
                MyFile_ << serial << "\t" << First_Name[x] << " " << Second_Name[x] << "\t\t" << CellNo[x] 
				<< "\t" << age[x] << "\t\t" << gender[x] << "\t" << height[x] << "\t\t" << eyecolor[x] 
				<< "\t\t" << crime[x] << "\t\t" << Punishmentmonths[x] << endl;
                MyFile_ << "\n" << endl;
                counter++;
            }
        }
        if (counter == 0)
        {
            MyFile_ << "\n\t\t\t\t\t";
            MyFile_ << "No prisoner Present";
            MyFile_ << "\n";
            MyFile_ << "\t\t\t\t\t";
        }
        MyFile_.close();
        break;

    case 2:
        
        system("cls");
        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t";
        cout << "\n\n\n\n\n";
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    |          Html File created successfully           |\n";
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    -----------------------------------------------------\n";

        MyFile_.open("Prison_Data.html");

        MyFile_ << "\t\t\t\t    -----------------------------------------------------";
        MyFile_ << "\t\t\t\t    |                                                   |";
        MyFile_ << "\t\t\t\t    |                Prisoner list                      |";
        MyFile_ << "\t\t\t\t    |                                                   |";
        MyFile_ << "\t\t\t\t    -----------------------------------------------------";
        MyFile_ << "<br>";

        for (int x = 0; x <20; x++)
        {
            if (First_Name[x] != " ")
            {
                MyFile_ << "First name: " << First_Name[x];
                MyFile_ << "<br>";
                MyFile_ << "Second name: " << Second_Name[x];
                MyFile_ << "<br>";
                MyFile_ << "Cell number: " << CellNo[x];
                MyFile_ << "<br>";
                MyFile_ << "Age: " << age[x];
                MyFile_ << "<br>";
                MyFile_ << "Gender: " << gender[x];
                MyFile_ << "<br>";
                MyFile_ << "Height: " << height[x];
                MyFile_ << "<br>";
                MyFile_ << "Eye colour: " << eyecolor[x];
                MyFile_ << "<br>";
                MyFile_ << "Crime: " << crime[x];
                MyFile_ << "<br>";
                MyFile_ << "Punishment Months: " << Punishmentmonths[x];
                MyFile_ << "<br>";
                MyFile_ << "<br>";
                counter++;
            }
        }
        if (counter == 0)
        {

            MyFile_ << "<br>\t\t\t\t\t";
            MyFile_ << "No prisoner Present";
            MyFile_ << "<br>";
            MyFile_ << "\t\t\t\t\t";
        }
        MyFile_.close();
        break;

    case 3:
        
        system("cls");
        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t";
        cout << "\n\n\n\n\n";
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    |          Word File created successfully           |\n";
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    -----------------------------------------------------\n";

        MyFile_.open("Prison_Data.doc");

        MyFile_ << "\t\t\t *** Prisoner list *** ";
        MyFile_ << "\n";

        for (int x = 0; x<20; x++)
        {
            if (First_Name[x] != " ")
            {
                MyFile_ << "First name: " << First_Name[x];
                MyFile_ << "\n";
                MyFile_ << "Second name: " << Second_Name[x];
                MyFile_ << "\n";
                MyFile_ << "Cell number: " << CellNo[x];
                MyFile_ << "\n";
                MyFile_ << "Age: " << age[x];
                MyFile_ << "\n";
                MyFile_ << "Gender: " << gender[x];
                MyFile_ << "\n";
                MyFile_ << "Height: " << height[x];
                MyFile_ << "\n";
                MyFile_ << "Eye colour: " << eyecolor[x];
                MyFile_ << "\n";
                MyFile_ << "Crime: " << crime[x];
                MyFile_ << "\n";
                MyFile_ << "Punishment Months: " << Punishmentmonths[x];
                MyFile_ << "\n";
                MyFile_ << "\n";
                counter++;
            }
        }
        if (counter == 0)
        {

            MyFile_ << "\n\t\t\t\t";
            MyFile_ << "No prisoner Present";
            MyFile_ << "\n";
            MyFile_ << "\t\t\t\t\t";
        }
        MyFile_.close();
        break;
    default:
        cout << "Invalid choice";
        break;
    }

    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Press 1 to return : ";
    cin>>enter;
    if (enter== 1)
      Afterlogin();
    
}

void Prison ::Afterlogin()
{
    int  choice,again;
    do
    {
        again = 0;
        system("cls");
        cout << "\n\n\n";
        cout << "\t\t\t\t---------------------------------------------------------------------------\n";
        cout << "\t\t\t\t|                                                                         |\n";
        
        cout << "\t\t\t\t|                     1)   New prisoner entry                             |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        
        cout << "\t\t\t\t|                     2)   Prisoner details                               |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        
        cout << "\t\t\t\t|                     3)   Attendace prisoner                             |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        
        cout << "\t\t\t\t|                     4)   Release prisoner                               |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        
        cout << "\t\t\t\t|                     5)   Search prisoner                                |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        
        cout << "\t\t\t\t|                     6)   Prison File                                    |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        
        cout << "\t\t\t\t|                     7)   Logout                                         |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        
        cout << "\t\t\t\t|                     8)   Exit                                           |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        
        cout << "\t\t\t\t|                                                                         |\n";
        
        cout << "\t\t\t\t---------------------------------------------------------------------------\n";
        
        cout << "\n";
        cout << "\t\t\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t\t\t";
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            SetData();
            break;
        case 2:
            Details();
            break;
        case 3:
            monthly_Attendance();
            break;
        case 4:
            Release();
            break;
        case 5:
            SearchPrison();
            break;
        case 6:
            PrisonFile();
            break;
        case 7:
            Logout();
            break;
        case 8:
            Exit();
            break;
        default:
            cout << "\n\t\t\t\tInvalid choice\n";
            cout << "\t\t\t\tPress 1 to return : ";
            cin >>again;
        }
    } while (again == 1);
}

void Prison ::Exit()
{
    system("cls");
    cout << "\n\n\n\n\n\n\t\t\t\t\t\t";
    cout << "Thank you!!";
    cout << "\n\n\n\n\n\n\t\t\t\t\t\t";
    getch();
}
