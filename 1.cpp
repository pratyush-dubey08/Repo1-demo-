/*#include <iostream>
using namespace std;

class bank {
public:
    string name;
    string typ;
    float bal;
    int accnum;

    void input();
    void deposit();
    void wdraw();
    void display();
};

void bank::input() {
    cout << "\nEnter Your Name::";
    cin >> name;
    cout << "\nEnter Your account type::";
    cin >> typ;
    cout << "\nEnter Your balance::";
    cin >> bal;
    cout << "\nEnter Your Account number::";
    cin >> accnum;
}

void bank::deposit() {
    float x;
    cout << "\nWhat amount you want to deposit::";
    cin >> x;
    bal = bal + x;
    cout << "\nYour balance now is ::" << bal;
}

void bank::wdraw() {
    cout << "\nYour balance is ::" << bal;
    cout << "\nHow much you want to withdraw?::";
    float x;
    cin >> x;
    bal = bal - x;
    cout << "\nYour balance now is ::" << bal;
}

void bank::display() {
    cout << "\nThe name of Account Holder is " << name;
    cout << "\nThe account type is " << typ;
    cout << "\nThe available balance is " << bal;
    cout << "\nThe Account number is " << accnum;
}

int main() {
    bank a, b;

    a.input();
    a.deposit();
    a.wdraw();
    a.display();

    return 0;
}




int calculateArea(int l, int b)
{
    cout<<"You are going to calculate the area of rectangle --> "<<endl;
    cout<<"Enter length of rectangle : ";
    cin>>l;
    cout<<"Enter breadth of rectangle : ";
    cin>>b;
    cout<<"Calculated area of rectangle of length "<<l<<" and breadth "<<b<<" is : "<< l*b<<endl;

}

int calculateArea(float radius)
{
    cout<<"You are going to calculate the area of circle --> "<<endl;
    cout<<"Enter radius of circle : ";
    cin>>radius;
    cout<<"Calculated area of circle of radius "<<radius<<" is : "<<3.14*radius*radius<<endl;

}

int calculateArea(int side)
{
    cout<<"You are going to calculate the area of square --> "<<endl;
    cout<<"Enter side of square : ";
    cin>>side;
    cout<<"Calculated area of square of side "<<side<<" is : "<<side*side<<endl;
}

int main()
{
    int choices;

    cout<<"Select the shape whose area you want to calculate : "<<endl<<"1. Rectangle "<<endl<<"2. Circle "<<endl<<"3. Square"<<endl;
    cout<<"Enter your choice : ";
    cin>>choices;
    switch (choices)
    {
       case 1:
           int l , b;
           calculateArea(l,b);
           break;
       case 2:
           float radius;
           calculateArea(radius);
           break;
       case 3:
        int side;
        calculateArea(side);
        break;
       default:
        cout<<"Invalid Choice"<<endl;
    }



return 0;
}


int main()
{
    //int a[5];
    cout<<"Enter first value: ";
    cin>>a[0];
    cout<<"Enter second value: ";
    cin>>a[1];
    cout<<"Enter third value: ";
    cin>>a[2];
    cout<<"Enter fourth value: ";
    cin>>a[3];
    cout<<"Enter fifth value: ";
    cin>>a[4];

    int i;
    while(i<5)
    {
        cout<<"Enter value of "<<"a["<<i<<"] : ";
        cin>>a[i];
        i++;
    }
    for(i=0;i<5;i++)
    {
        cout<<"Value of a["<<i<<"] : "<<a[i]<<endl;
    }

    int* p = a;
    for(i=0;i<5;i++)
    {
        cout<<"By concept of pointer in array, we have *(p+"<<i<<") --> "<<*(p+i)<<endl;
    }



class Animal
{
private:
    int how_many;
public:
    string name;
    string type;
    int legs;
    bool tail;

void setdata(int hm);
void getdata()
{
    cout<<"How many animal : "<<how_many<<endl;
    cout<<"Animal name : "<<name<<endl;
    cout<<"Animal Type : "<<type<<endl;
    cout<<"Animal legs : "<<legs<<endl;
    cout<<"Animal tail : "<<tail<<endl;

}
};

void Animal::setdata(int hm)
{
    how_many = hm;
}


int main()
{
    Animal cow;
    cow.name = "bhuri";
    cow.type = "black";
    cow.legs = 4;
    cow.tail = 1;
    cow.setdata(6);

    cow.getdata();

    return 0;
}





class circle
{
private:
    float radius;
    float area;
    float perimeter;

public:
    void setdimensions();
    void calculatearea();
    void calculateperimeter();
};

void circle::setdimensions()
{
    float r;
    cout<<"Enter radius of circle :";
    cin>>r;
    radius = r;
}

void circle::calculatearea()
{
    area = 3.14*radius*radius;
    cout<<"The area of circle : "<<area<<endl;
}

void circle::calculateperimeter()
{
    perimeter = 2*3.14*radius;
    cout<<"Perimeter of circle : "<<perimeter<<endl;
}
int main()
{
    float r;

    circle c1;
   // c1.radius = 2.3; not possible because it is private

    c1.setdimensions();
    c1.calculatearea();
    c1.calculateperimeter();

    return 0;

}


#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int targetValue = 5;

    auto result = std::find(numbers.begin(), numbers.end(), targetValue);

    if (result != numbers.end()) {
        std::cout << "Value " << targetValue << " found at index " << std::distance(numbers.begin(), result) << std::endl;
    } else {
        std::cout << "Value " << targetValue << " not found in the vector." << std::endl;
    }

    return 0;
}
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include<algorithm>

using namespace std;

int main() {
    // Step 1: Create or open the file
    ofstream outputFile("abc.txt");

    // Check if the file is successfully opened
    if (!outputFile.is_open()) {
        cout << "File abc.txt already exists or cannot be created." << endl;
        return 1; // Exit with an error code
    }

    // Input data
    string name = "Your Name";
    string dob = "01/01/2000";
    string school = "Your School";

    // Write data to the file
    outputFile << name << endl;
    outputFile << dob << endl;
    outputFile << school << endl;

    // Step 2: Close the file
    outputFile.close();

    // Step 3: Reopen the file and change the date format
    ifstream inputFile("abc.txt");
    ofstream tempFile("temp.txt");

    if (!inputFile.is_open() || !tempFile.is_open()) {
        cout << "Error opening files." << endl;
        return 1; // Exit with an error code
    }

    // Read data from the original file, change the date format, and write to the temp file
    string line;
    while (getline(inputFile, line)) {
        if (line.find("/") != string::npos) {
            // Assuming the date is the only line that contains "/"
            // You may need a more sophisticated check based on your specific format
            replace(line.begin(), line.end(), '/', '-');
        }
        tempFile << line << endl;
    }

    // Close the files
    inputFile.close();
    tempFile.close();

    // Remove the original file
    remove("abc.txt");

    // Rename the temp file to the original file name
    rename("temp.txt", "abc.txt");

    cout << "File abc.txt has been modified successfully." << endl;

    return 0;
}*/

// Here's a simple C++ program that includes the `globalCount` and `localCount` functions as described:

//```cpp

/*#include <iostream>

// Global variable to count the number of calls
int callCountGlobal = 0;

// Function using a global variable to count calls
void globalCount() {
    callCountGlobal++;
    std::cout << "globalCount() has been called " << callCountGlobal << " times." << std::endl;
}

// Function using a static local variable to count calls
void localCount() {
    static int callCountLocal = 0;
    callCountLocal++;
    std::cout << "localCount() has been called " << callCountLocal << " times." << std::endl;
}

int main() {
    // Calling both functions at least ten times
    for (int i = 0; i < 10; ++i) {
        globalCount();
        localCount();
    }

    return 0;
}


Explanation:

1. `globalCount`: Uses a global variable `callCountGlobal` to count the number of calls. Global variables are accessible throughout the entire program.

2. `localCount`: Uses a static local variable `callCountLocal` to count the number of calls. The `static` keyword ensures that the variable retains its value between function calls.

In general, using `localCount` with a static local variable is often more appropriate than using a global variable (`globalCount`). Here's why:

- **Encapsulation**: `localCount` encapsulates the counting variable within the function, making it inaccessible from other parts of the program. This is generally a good practice for preventing unintended modifications.

- **Scope**: The scope of the static local variable is limited to the function, reducing the chances of unintended interference with other parts of the program.

- **Modularity**: `localCount` is more modular and can be used independently without worrying about global state changes affecting other parts of the program.

- **Thread Safety**: If your program involves multithreading, using a static local variable can provide a level of thread safety compared to a global variable, as access to the static local variable is confined to the function.

In conclusion, while both approaches work, using a static local variable (`localCount`) is often considered a more appropriate and modular design, especially when you want to limit the scope and encapsulate the counting variable within the function.

*/

#include <iostream>
#include <string>
using namespace std;

class Customer
{
private:
    int customerID;
    string lastName;
    string firstName;
    double creditLimit;

public:
    // Function to set customer ID
    void setCustomerID(int id)
    {
        customerID = id;
    }

    // Function to set last name
    void setLastName(const string &lastName)
    {
        this->lastName = lastName;
    }

    // Function to set first name
    void setFirstName(const string &firstName)
    {
        this->firstName = firstName;
    }

    // Function to set credit limit with validation

    // Function to display customer data
    void displayCustomerData(double limit)
    {
        cout << "Customer ID: " << customerID << endl;
        cout << "First Name: " << firstName << endl;
        cout << "Last Name: " << lastName << endl;
        if (limit <= 10000.0)
        {
            creditLimit = limit;
            cout << "Credit Limit : Rs." << creditLimit;
        }
        else
        {
            creditLimit = 10000.0;
            cout << "Error: Credit limit cannot exceed 10,000. Setting to 10,000." << endl;
            cout << "Credit Limit : Rs." << creditLimit;
        }
    }
};

int main()
{
    // Create Customer objects
    Customer customer1, customer2;

    // Set customer1 fields
    customer1.setCustomerID(12345);
    customer1.setLastName("Doe");
    customer1.setFirstName("John");

    // Set customer2 fields
    customer2.setCustomerID(6789);
    customer2.setLastName("Wick");
    customer2.setFirstName("John");

    // Display customer data
    customer1.displayCustomerData(8000);
    cout<<endl<<endl;
    customer2.displayCustomerData(8000000);

    return 0;
}





