//
// Created by user on 27-Jan-25.
//
//simple_interest = (P * T * R) / 100

#include<iostream>
using namespace std;
int main()
{
  int principal = 0;
  int tenure = 0;
  float Rate = 0;

  cout << "Enter Principal amount..: " << endl;
  cin >> principal;

  cout << "Enter Tenure of Loan..: " << endl;
  cin >> tenure;

  cout << "Enter Intrest Rate of Loan..: " << endl;
  cin >> Rate;

  float simple_intrest = (principal * tenure * Rate) / 100;

  cout << "Simple Interest Rate: " << simple_intrest << endl;

  return 0;
}