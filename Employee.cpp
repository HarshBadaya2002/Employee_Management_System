#include <iostream>
using namespace std;

string id[30], name[30], address[50], dob[30], mobile_no[30], doj[30], marstatus[30], workd[30], workl[40], ctc[30], socialins[30], email[30];

int total = 0; // to store all data

void enter()
{
  int ch = 0;
  cout << "How many employees ' Data do you want to enter ? " << endl;

  cin >> ch;

  if (total == 0)
  {
    total = ch + total;

    for (int i = 0; i < ch; i++)
    {

      cout << "\n Enter the Data of Employee " << i + 1 << endl
           << endl;
      cout << "** PERSONAL DETAILS **" << endl
           << endl;

      cout << "Enter Name: " << endl;
      cin >> name[i];

      cout << "Enter Address: " << endl;
      cin >> address[i];

      cout << "Enter Date of Birth: " << endl;
      cin >> dob[i];

      cout << "Is Employee Married?: " << endl;
      cin >> marstatus[i];

      cout << "** WORK DETAILS **" << endl
           << endl;

      cout << "Enter Id: " << endl;
      cin >> id[i];

      cout << "Enter Date of Joining: " << endl;
      cin >> doj[i];

      cout << "Enter Work Department: " << endl;
      cin >> workd[i];

      cout << "Enter Work Location: " << endl;
      cin >> workl[i];

      cout << "Enter CTC: " << endl;
      cin >> ctc[i];

      cout << "Enter social Insurance id: " << endl;
      cin >> socialins[i];

      cout << "** CONTACT DETAILS **" << endl
           << endl;
      cout << "Enter Mobile Number : " << endl;
      cin >> mobile_no[i];

      cout << "Enter Email: " << endl;
      cin >> email[i];
    }
  }

  else
  {
    for (int i = total; i < total + ch; i++)
    {
      for (int i = 0; i < ch; i++)
      {

        cout << "\n Enter the Data of Employee " << i + 1 << endl
             << endl;
        cout << "** PERSONAL DETAILS **" << endl
             << endl;

        cout << "Enter Name: " << endl;
        cin >> name[i];

        cout << "Enter Address: " << endl;
        cin >> address[i];

        cout << "Enter Date of Birth: " << endl;
        cin >> dob[i];

        cout << "Is Employee Married?: " << endl;
        cin >> marstatus[i];

        cout << "** WORK DETAILS **" << endl
             << endl;

        cout << "Enter Id: " << endl;
        cin >> id[i];

        cout << "Enter Date of Joining: " << endl;
        cin >> doj[i];

        cout << "Enter Work Department: " << endl;
        cin >> workd[i];

        cout << "Enter Work Location: " << endl;
        cin >> workl[i];

        cout << "Enter CTC: " << endl;
        cin >> ctc[i];

        cout << "Enter social Insurance id: " << endl;
        cin >> socialins[i];

        cout << "** CONTACT DETAILS **" << endl
             << endl;
        cout << "Enter Mobile Number : " << endl;
        cin >> mobile_no[i];

        cout << "Enter Email: " << endl;
        cin >> email[i];
      }
    }
    total += ch;
  }
}

void show()
{
  if (total == 0)
  {
    cout << "No Data is Entered" << endl;
  }

  else
  {
    for (int i = 0; i < total; i++)
    {
      cout << "** RESULT FOR SHOW DATA **" << endl;
      cout << "\nData of Employee: " << i + 1 << endl
           << endl;
      cout << "** PERSONAL DETAILS **" << endl
           << endl;

      cout << "Full Name: " << name[i] << endl;
      cout << "Address: " << address[i] << endl;
      cout << "Date Of Birth: " << dob[i] << endl;
      cout << "Marital Status: " << marstatus[i] << endl
           << endl;

      cout << "** WORK DETAILS **" << endl
           << endl;
      cout << "Id: " << id[i] << endl;
      cout << "Date of Joing: " << doj[i] << endl;
      cout << "Work Department: " << workd[i] << endl;
      cout << "Work Location: " << workl[i] << endl;
      cout << "CTC: " << ctc[i] << endl;
      cout << "Social Insurance: " << socialins[i] << endl
           << endl;

      cout << "** CONTACT DETAILS **" << endl
           << endl;
      cout << "Mobile NO: " << mobile_no[i] << endl;
      cout << "Email Id: " << email[i] << endl;
    }
  }
}

void search()
{
  if (total == 0)
  {
    cout << "No data is there to search" << endl;
  }

  else
  {
    string emp_id;
    cout << "Enter the id of the employee to search: " << endl;
    cin >> emp_id;
    int flag = 0;
    for (int i = 0; i < total; i++)
    {
      if (emp_id == id[i])
      {
        cout << "RESULT FOR EMPLOYEE ID: " << emp_id << endl;

        cout << "** PERSONAL DETAILS **" << endl
             << endl;

        cout << "Full Name: " << name[i] << endl;
        cout << "Address: " << address[i] << endl;
        cout << "Date of Birth: " << dob[i] << endl;
        cout << "Maritual Status: " << marstatus[i] << endl
             << endl;

        cout << "** WORK DETAILS **" << endl
             << endl;

        cout << "Id: " << id[i] << endl;
        cout << "Date of Joing: " << doj[i] << endl;
        cout << "Work Department: " << workd[i] << endl;
        cout << "Work Location: " << workl[i] << endl;
        cout << "CTC: " << ctc[i] << endl;
        cout << "Social Insurance: " << socialins[i] << endl
             << endl;

        cout << "** CONTACT DETAILS **" << endl
             << endl;
        cout << "Mobile NO: " << mobile_no[i] << endl;
        cout << "Email Id: " << email[i] << endl;
      }
    }
  }
}

void update()
{
  if (total == 0)
  {
    cout << "No data to Update" << endl;
  }

  else
  {
    string emp_id;

    cout << "Enter the id you want to update" << endl;
    cin >> emp_id;

    for (int i = 0; i < total; i++)
    {
      if (emp_id == id[i])
      {
        cout << "** PREVIOUS DATA ** " << endl
             << endl;
        cout << "\nData of Employee: " << i + 1 << endl
             << endl;
        cout << "** PERSONAL DETAILS **" << endl
             << endl;

        cout << "Full Name: " << name[i] << endl;
        cout << "Address: " << address[i] << endl;
        cout << "Date Of Birth: " << dob[i] << endl;
        cout << "Marital Status: " << marstatus[i] << endl
             << endl;

        cout << "** WORK DETAILS **" << endl
             << endl;
        cout << "Id: " << id[i] << endl;
        cout << "Date of Joing: " << doj[i] << endl;
        cout << "Work Department: " << workd[i] << endl;
        cout << "Work Location: " << workl[i] << endl;
        cout << "CTC: " << ctc[i] << endl;
        cout << "Social Insurance: " << socialins[i] << endl
             << endl;

        cout << "** CONTACT DETAILS **" << endl
             << endl;
        cout << "Mobile NO: " << mobile_no[i] << endl;
        cout << "Email Id: " << email[i] << endl;

        cout << "\nEnter the New Data: " << endl
             << endl;
        cout << "** PERSONAL DETAILS **" << endl
             << endl;

        cout << "Enter Name: " << endl;
        cin >> name[i];

        cout << "Enter Address: " << endl;
        cin >> address[i];

        cout << "Enter Date of Birth: " << endl;
        cin >> dob[i];

        cout << "Is Employee Married?: " << endl;
        cin >> marstatus[i];

        cout << "** WORK DETAILS **" << endl
             << endl;

        cout << "Enter Id: " << endl;
        cin >> id[i];

        cout << "Enter Date of Joining: " << endl;
        cin >> doj[i];

        cout << "Enter Work Department: " << endl;
        cin >> workd[i];

        cout << "Enter Work Location: " << endl;
        cin >> workl[i];

        cout << "Enter CTC: " << endl;
        cin >> ctc[i];

        cout << "Enter social Insurance id: " << endl;
        cin >> socialins[i];

        cout << "** CONTACT DETAILS **" << endl
             << endl;
        cout << "Enter Mobile Number : " << endl;
        cin >> mobile_no[i];

        cout << "Enter Email: " << endl;
        cin >> email[i];
      }
    }
  }
}

void Delete()
{
  if (total == 0)
  {
    cout << "No data to delete" << endl;
  }
  else
  {
    int n;
    cout << "Are You sure you want to delete the data ?" << endl;
    cout << "Press 1 to delete all the data" << endl;
    cin >> n;

    if (n == 1)
    {
      total = 0;
      cout << "All Data is deleted...." << endl;
    }
    else
    {
      cout << "No data is deleted Press 1 for delete" << endl;
    }
  }
}

int main()
{
  int value, sample;

  cout << "ENTER 1: To Proceed.." << endl;
  cin >> sample;

  while (sample < 2)
  {
    cout << ">>>>>>>> EMPLOYEE RECORD MANAGEMENT SYSTEM  <<<<<<" << endl;

    cout << "\n PRESS 1: To Enter data" << endl;

    cout << "--------------------------" << endl;
    cout << "PRESS 2: To Show data" << endl;
    cout << "--------------------------" << endl;
    cout << "PRESS 3: To Search data" << endl;
    cout << "--------------------------" << endl;
    cout << "PRESS 4: To Update data" << endl;
    cout << "--------------------------" << endl;
    cout << "PRESS 5: To Delete data" << endl;
    cout << "--------------------------" << endl;
    cout << "PRESS 6: To Quit" << endl;
    cout << "--------------------------" << endl;

    cin >> value;
    switch (value)
    {
    case 1:
      enter();
      break;
    case 2:
      show();
      break;
    case 3:
      search();
      break;
    case 4:
      update();
      break;
    case 5:
      Delete();
      break;
    case 6:
      exit(0);
      break;

    default:
      cout << "Invalid Input" << endl;
    }
  }
}