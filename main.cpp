#include <iostream>
#include <string>

// Homework 3 — Betsy Caudel
// CIS 5 Week 03 · Types & variables

using std::cout;
using std::string;
using std::endl;

int main() {
  const int CURRENT_YEAR = 2026;

  // String
  string name = "Betsy";

  //Integer
  int age = 17;

  //Double
  double height_m = 1.55;

  //Character
  char initial = 'B';

  //Boolean
  bool student = true;

  //Integer
  int credits = 11;

  //Double
  double gpa = 4.0;

  //int was chosen for credits because the amount will always be a whole number.
  //const was placed for CURRENT_YEAR because the year is the same for the entire
  //time of this class.

  std::cout << "=== About me ===\n";
  // Prints what variable is and the variable as well as the current year.
  cout << "Name: " << name << endl;
  cout << "Age: " << age << endl;
  cout << "Height (m): " << height_m << endl;
  cout << "Initial: " << initial << endl;
  cout << "Student: " << student << endl;
  cout << "Credits: " << credits << endl;
  cout << "GPA: " << gpa << endl;
  cout << "Year: " << CURRENT_YEAR << endl;

  // Prints a sentence using the information above.
  cout << name << " is " << age << " years old, " << height_m << " meters tall, taking " << credits << " credits, and has a GPA of " << gpa << "." << endl;
  cout << endl;
  //old value = 17, new value = 16
  //The console changed the value because it now stores the int 16 in
  //age rather than 17, so the next time it prints age, 16 will print.
  age = 16;
  
  // prints new value
  cout << "Age: " << age << endl;

  //two commented lines that would not compile
  // age = "seventeen"; //Would not compile because a string in is place of int.
  //initial = "B"; //Would not compile because of double quotation marks - means it is a string.

  return 0;
}
