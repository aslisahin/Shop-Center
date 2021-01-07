/* Beykoz University
 * Zeynep Asli Sahin
 * 1904010019 */

#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main(){

int choise;
int Password = 0;
ifstream productsFile;
string productsName;
int category = 0;
double numberofTelephone = 0;
double numberofTelevision=0;
double numberofLaptop=0;
double total = 0;

    system("color C");
    cout << "------------WELCOME TO THE SHOP CENTER------------" <<endl;
    cout << "------------Please choose login method------------" <<endl;
    cout <<endl<< "(1)Employee Login" << endl;
    cout << "(2)Customer Login"<<endl;
    cin>>choise; //prompt from user

   if(choise==1) {
       cout << "Please enter your 4 digit password" << endl; //for admin login
       cout << "Employee Login" << endl << "Password:" << endl;
       cin>>Password;
   }
       if(Password==1407){
           cout<<"Successful Login"<<endl;
           cout<<"Stocks are not finished yet"<<endl;
       }
       else if(Password!=1407)
    {
           cout<<"Please enter the correct password"<<endl;
       }
       if(choise==2) { //customer login
           system ("CLS");
           cout << "Customer Login" << endl;
           cout << "Product Categories..." << endl;
           productsFile.open("productName.txt");
           while (getline(productsFile, productsName)) //opens txt document
                {
               cout << productsName << endl; //prints the txt document to the screen
           } //end while
         
       }
       //starts a menu loop
           do {
               system("color F");
               cout << endl<<"Please select your category..." << endl << "1)Telephones 2)Televisions 3)Laptops 4)Exit"
                    << endl;
               cin >> category;

               if (category == 1) {
                   system ("CLS");
                   system("color 5");
                   cout << "Select the number of the product you want to buy" << endl;
                   cout << "1.1 iPhone11 699$ " << endl << "1.2 Xiaomi Redmi Note 9 249$"
                        << endl
                        << "1.3 Samsung Galaxy A71 239$" << endl;
                   cin >> numberofTelephone; //for choosing different products

                   if (numberofTelephone == 1.1) {
                       total += 699;

                   }
                   if (numberofTelephone == 1.2) {
                       total += 249;

                   }
                   if (numberofTelephone == 1.3) {
                       total += 239;

                   }
                   cout << "Total is:" << total << " Dollars" << endl; //prints total payment
               }
               //for televisions
               if (category == 2) {
                   system ("CLS");
                   system("color 3");
                   cout << "Select the number of the product you want to buy" << endl;
                   cout << "2.1 Vestel 65U9500 749$ " << endl << "2.2 LG 75NANO906NA 190 2199$ "
                        << endl
                        << "2.3 Philips The One 899$ " << endl;
                   cin >> numberofTelevision;

                   if (numberofTelevision == 2.1) {
                       total += 749;

                   }
                   if (numberofTelevision == 2.2) {
                       total += 2199;

                   }
                   if (numberofTelevision == 2.3) {
                       total += 899;

                   }
                   cout << "Total is:" << total << " Dollars" << endl;

               }
               //for laptops
               if (category == 3) {
                   system ("CLS");
                   system("color 8");
                   cout << "Select the number of the product you want to buy" << endl;
                   cout << "3.1 Lenovo IdeaPad L3 899$ " << endl
                        << "3.2 Apple MacBook Air 999$ "
                        << endl
                        << "3.3 Asus Vivobook 15 1199$ " << endl;
                   cin >> numberofLaptop;

                   if (numberofLaptop == 3.1) {
                       total += 899;

                   }
                   if (numberofLaptop == 3.2) {
                       total += 999;

                   }
                   if (numberofLaptop == 3.3) {
                       total += 1199;

                   }
                   cout << "Total is:" << total << " Dollars" << endl;
               }
               //if the customer wants to end the shopping
               if (category == 4) {
                   system("CLS");
                   system("color C");
                   cout<<"------------------------------------------------"<<endl;
                   cout << "Total is: " << total << " Dollars" << endl; //prints total payments
                   cout << "Thank you for choosing us. Have a nice day!!!" << endl;
                   cout<<"------------------------------------------------"<<endl;
               }
           } //ends do
           while(category!=4); //returns loop unless the user presses the exit key

    return 0;


}
