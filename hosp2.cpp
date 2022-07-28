#include<iostream>
#include<fstream>
#include<cstdlib>
#include<conio.h>
#include<time.h>
#include<iomanip>
using namespace std;
int login(){
   string password ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
   cout<<"\t\t\t\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t\t\t\t     LOGIN \n";
   cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";
   cout << "\t\t\t\t\t\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13){/// 13 is enter, break
      password.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(password == "1234"){
      cout << "\n\n\t\t\t\t\t\t\t\tAccess Granted! \n";
      system("PAUSE"); ///
      system ("CLS");
   }else{
      cout << "\n\n\t\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}

/// main function
int main()
{
    time_t rawtime;
    struct tm * timeinfo;
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    re:
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
    cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout<<"\t\t\t\t\t@@|                                  WELCOME TO                                           |@@\n";
    cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
    cout<<"\t\t\t\t\t@@|                           HOSPITAL MANAGEMENT SYSTEM                                  |@@\n";
    cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
    cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
    cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
    cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
    cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
    cout<<"\t\t\t\t\t@@|                                                 -Marufa islam shanta,181-115-140      |@@\n";
    cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
    cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
    system("pause");
    system("cls"); /// clear screen

    login();

    int operation;

    b:
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
    cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
    cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
    cout<<"\t\t\t\t\t\t|                                           	                     |\n";
    cout<<"\t\t\t\t\t\t|             1  >> Add New Patient Record                        |\n";
    cout<<"\t\t\t\t\t\t|             2  >> Add Diagnosis Information                     |\n";
    cout<<"\t\t\t\t\t\t|             3  >> Full History of the Patient                   |\n";
    cout<<"\t\t\t\t\t\t|             4  >> Add new doctor record                         |\n";
    cout<<"\t\t\t\t\t\t|             5  >> Show doctors details                          |\n";
    cout<<"\t\t\t\t\t\t|             6  >> Add new ward                                  |\n";
    cout<<"\t\t\t\t\t\t|             7  >> add patients in the ward                      |\n";
    cout<<"\t\t\t\t\t\t|             8  >> view all patients in this ward                |\n";
    cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
    a:cout<<"\t\t\t\t\t\tEnter your choice: ";
    cin>>operation;
    if(operation>8 || operation<1)
    {
        cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";
        goto a;
    }

    system("cls"); /// clear screen
    if(operation == 1) /// add a new patient to our file
    {
      time_t rawtime;
      struct tm * timeinfo;
      time ( &rawtime );
      timeinfo = localtime ( &rawtime );
      cout<<"\n\n\t\t\t\t\t\t\t\t"<< asctime (timeinfo);
      ofstream patient_files; /// to write new information to files
      char file_name[50];
      cout<<"\n\n\n\nEnter the patient's file name : ";
      cin.ignore(); /// used to ignore or clear one or more characters from the input buffer
      gets(file_name);
      patient_files.open(file_name);
      if(!file_name)
      {
        cout<<"\nNo file name given\n";
        goto b;
      }
      else
      {
        struct patient_info
        {
            char name[20];
            char address[100];
            char contact[11];
            char age[5];
            char sex[8];
            char blood_gp[5];
            char disease_past[50];
            char id[15];
        };
        patient_info new_patient;
        cout<<"\n********************************************************************\n";patient_files<<"\n********************************************************************\n\n";//fn1353 st
        cout<<"\nName : ";patient_files<<"Name : ";gets(new_patient.name);patient_files<<new_patient.name<<"\n";
        cout<<"\nAddress : ";patient_files<<"Address : ";gets(new_patient.address);patient_files<<new_patient.address<<"\n";
        cout<<"\nContact Number : ";patient_files<<"Contact Number : ";gets(new_patient.contact);patient_files<<new_patient.contact<<"\n";
        cout<<"\nAge : ";patient_files<<"Age : ";gets(new_patient.age);patient_files<<new_patient.age<<"\n";
        cout<<"\nSex : ";patient_files<<"Sex : ";gets(new_patient.sex);patient_files<<new_patient.sex<<"\n";
        cout<<"\nBlood Group : ";patient_files<<"Blood Group : ";gets(new_patient.blood_gp);patient_files<<new_patient.blood_gp<<"\n";
        cout<<"\nAny Major disease suffered earlier : ";patient_files<<"Any Major disease suffered earlier : ";gets(new_patient.disease_past);patient_files<<new_patient.disease_past<<"\n";
        cout<<"\nPatient ID : ";patient_files<<"Patient ID : ";gets(new_patient.id);patient_files<<new_patient.id<<"\n";
        cout<<"\n********************************************************************\n";patient_files<<"\n********************************************************************\n\n";
        cout<<"\nInformation Saved Successfully\n";
     }
      system("pause");
      system("cls");
      goto b;
    }
    if(operation == 2)
    {
        fstream patient_files; /// create files, write information to files, and read information from files
        cout<<"\n\nEnter the patient's file name to be opened : ";
        cin.ignore();
        char file_name[50];
        gets(file_name);
        system("cls");
        patient_files.open(file_name, ios::in);
        if(!patient_files)
        {
           cout<<"\nError while opening the file\n";
           goto b;
        }
        else
        {
            cout<<"\n\n\n\n\t\t\t\t........................................ Information about "<<file_name<<" ........................................\n\n\n\n";
            string info;
            while(patient_files.good())
            {
               getline(patient_files,info);
               cout<<info<<"\n";
            }
            cout<<"\n";
            patient_files.close();
            patient_files.open(file_name, ios::out | ios::app); /// //////////////////////////////////
            cout<<"\n";
            cout<<"Adding more information in patient's file................on : "<<asctime (timeinfo);patient_files<<"Description of "<<asctime (timeinfo)<<"\n";
            struct app
            {
                char symptom[500];
                char diagnosis[500];
                char medicine[500];
                char addmission[30];
                char ward[15];
            };
            app add;
            cout<<"\nSymptoms : "; patient_files<<"Symptoms : ";gets(add.symptom); patient_files<<add.symptom<<"\n";
            cout<<"\nDiagnosis : "; patient_files<<"Diagnosis : ";gets(add.diagnosis); patient_files<<add.diagnosis<<"\n";
            cout<<"\nMedicines : "; patient_files<<"Medicines : ";gets(add.medicine); patient_files<<add.medicine<<"\n";
            cout<<"\nAddmission Required? : "; patient_files<<"Addmission Required? : ";gets(add.addmission); patient_files<<add.addmission<<"\n";
            cout<<"\nType of ward : "; patient_files<<"Type of ward : ";gets(add.ward); patient_files<<add.ward<<"\n";patient_files<<"\n*************************************************************************\n";
            cout<<"\n\n"<<add.ward<<" ward is alloted Successfully\n";
            patient_files.close();
            cout<<"\n\n";
            system("pause");
            system("cls");
            goto b;
        }
    }
    if(operation == 3)
    {
        fstream patient_files;
        cout<<"\n\nEnter the patient's file name to be opened : ";
        cin.ignore();
        char file_name[50];
        gets(file_name);
        system("cls");
        patient_files.open(file_name, ios::in);
        if(!patient_files)
        {
        cout<<"\nError while opening the file\n";goto b;
        }
        else
        {
            cout<<"\n\n\n\n\t\t\t\t........................................ Full Medical History of "<<file_name<<" ........................................\n\n\n\n";
            string info;
            while(patient_files.good())
            {
               getline(patient_files,info);
               cout<<info<<"\n";
            }
            cout<<"\n";
        }
        system("pause");
        system("cls");
        goto b;
    }
    if(operation == 4)
    {
        ofstream doc_files; /// to write new information to files
      char file_name[50];
      cout<<"\n\n\n\nEnter the doctor's file name : ";
      cin.ignore(); /// used to ignore or clear one or more characters from the input buffer
      gets(file_name);
      doc_files.open(file_name);
      if(!file_name)
      {
        cout<<"\nNo file name given\n";
        goto b;
      }
      else
      {
        struct doc_info
        {
            char name[20];
            char address[100];
            char contact[11];
            char age[5];
            char sex[8];
            char expertise[200];
            char id[15];
        };
        doc_info new_doc;
        cout<<"\n********************************************************************\n";doc_files<<"\n********************************************************************\n\n";//fn1353 st
        cout<<"\nName : ";doc_files<<"Name : ";gets(new_doc.name);doc_files<<new_doc.name<<"\n";
        cout<<"\nAddress : ";doc_files<<"Address : ";gets(new_doc.address);doc_files<<new_doc.address<<"\n";
        cout<<"\nContact Number : ";doc_files<<"Contact Number : ";gets(new_doc.contact);doc_files<<new_doc.contact<<"\n";
        cout<<"\nAge : ";doc_files<<"Age : ";gets(new_doc.age);doc_files<<new_doc.age<<"\n";
        cout<<"\nSex : ";doc_files<<"Sex : ";gets(new_doc.sex);doc_files<<new_doc.sex<<"\n";
        cout<<"\nExpertise : ";doc_files<<"expertise : ";gets(new_doc.expertise);doc_files<<new_doc.expertise<<"\n";
        cout<<"\nPatient ID : ";doc_files<<"doctors ID : ";gets(new_doc.id);doc_files<<new_doc.id<<"\n";
        cout<<"\n********************************************************************\n";doc_files<<"\n********************************************************************\n\n";
        cout<<"\nInformation Saved Successfully\n";
     }
      system("pause");
      system("cls");
      goto b;
    }
    if(operation == 5)
    {
        fstream doc_files;
        cout<<"\n\nEnter the doctor's file name to be opened : ";
        cin.ignore();
        char file_name[50];
        gets(file_name);
        system("cls");
        doc_files.open(file_name, ios::in);
        if(!doc_files)
        {
        cout<<"\nError while opening the file\n";goto b;
        }
        else
        {
            cout<<"\n\n\n\n\t\t\t\t........................................ Full Medical History of "<<file_name<<" ........................................\n\n\n\n";
            string info;
            while(doc_files.good())
            {
               getline(doc_files,info);
               cout<<info<<"\n";
            }
            cout<<"\n";
        }
        system("pause");
        system("cls");
        goto b;
    }
    if(operation == 6) /// add a new patient to our file
    {
      time_t rawtime;
      struct tm * timeinfo;
      time ( &rawtime );
      timeinfo = localtime ( &rawtime );
      cout<<"\n\n\t\t\t\t\t\t\t\t"<< asctime (timeinfo);
      ofstream ward_files; /// to write new information to files
      char file_name[50];
      cout<<"\n\n\n\nEnter the ward's file name : ";
      cin.ignore(); /// used to ignore or clear one or more characters from the input buffer
      gets(file_name);
      ward_files.open(file_name);
      if(!file_name)
      {
        cout<<"\nNo file name given\n";
        goto b;
      }
      else
      {
        struct ward_info
        {
            char word_detail[100];
        };
        ward_info new_ward;
        cout<<"\n********************************************************************\n";ward_files<<"\n********************************************************************\n\n";//fn1353 st
        cout<<"\ward info : ";ward_files<<"Ward info : ";gets(new_ward.word_detail);ward_files<<new_ward.word_detail<<"\n";
        cout<<"\n********************************************************************\n";ward_files<<"\n********************************************************************\n\n";
        cout<<"\nInformation Saved Successfully\n";
     }
      system("pause");
      system("cls");
      goto b;
    }
    if(operation == 7)
    {
        fstream ward_files; /// create files, write information to files, and read information from files
        cout<<"\n\nEnter the ward's file name to be opened : ";
        cin.ignore();
        char file_name[50];
        gets(file_name);
        system("cls");
        ward_files.open(file_name, ios::in);
        if(!ward_files)
        {
           cout<<"\nError while opening the file\n";
           goto b;
        }
        else
        {
            cout<<"\n\n\n\n\t\t\t\t........................................ Information about "<<file_name<<" ........................................\n\n\n\n";
            string info;
            while(ward_files.good())
            {
               getline(ward_files,info);
               cout<<info<<"\n";
            }
            cout<<"\n";
            ward_files.close();
            ward_files.open(file_name, ios::out | ios::app); /// //////////////////////////////////
            cout<<"\n";
            cout<<"Adding more patient in this ward ................on : "<<asctime (timeinfo);ward_files<<"Description of "<<asctime (timeinfo)<<"\n";
            struct pat
            {
                char name[500];
                char age[500];
                char id[500];
            };
            pat add;
            cout<<"\nName : "; ward_files<<"Name : ";gets(add.name); ward_files<<add.name<<"\n";
            cout<<"\nAge : "; ward_files<<"Age : ";gets(add.age); ward_files<<add.age<<"\n";
            cout<<"\nID : "; ward_files<<"id : ";gets(add.id); ward_files<<add.id<<"\n";
           // cout<<"\n\n"<<add.ward<<" ward is alloted Successfully\n";
            ward_files.close();
            cout<<"\n\n";
            system("pause");
            system("cls");
            goto b;
        }
    }
    if(operation == 8)
    {
        fstream ward_files;
        cout<<"\n\nEnter the ward's file name to be opened : ";
        cin.ignore();
        char file_name[50];
        gets(file_name);
        system("cls");
        ward_files.open(file_name, ios::in);
        if(!ward_files)
        {
        cout<<"\nError while opening the file\n";goto b;
        }
        else
        {
            cout<<"\n\n\n\n\t\t\t\t........................................ Full Medical History of "<<file_name<<" ........................................\n\n\n\n";
            string info;
            while(ward_files.good())
            {
               getline(ward_files,info);
               cout<<info<<"\n";
            }
            cout<<"\n";
        }
        system("pause");
        system("cls");
        goto b;
    }
}

