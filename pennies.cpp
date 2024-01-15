// um programa para calcular a quantidade de moedas

#include "std_lib_facilities.h"

int main()
{
    // variables
    double penny= 0, nickel= 0, dime= 0, quarter= 0, half= 0, dollar= 0;
    
    // prompt the user to enter some values in pennies, nickels, dimies, quarters, half, and one dollars.

    cout<<"\nHow many pennies do you have? ";
    cin>>penny;
    cout<<"\nHow many nickels do you have? ";
    cin>>nickel;
    cout<<"\nHow many dimes do you have? ";
    cin>>dime;
    cout<<"\nHow many quarter-dollars do you have? ";
    cin>>quarter;
    cout<<"\nHow many half-dollars do you have? ";
    cin>>half;
    cout<<"\nHow many one-dollars do you have? ";
    cin>>dollar;

    // print each quantity
    if (penny > 0) {if (penny == 1) {cout<<"\nYou have 1 penny";} else {cout<<"\nYou have "<<penny<<" pennies";};}
    if (nickel > 0) {if (nickel == 1) {cout<<"\nYou have 1 nickel";} else {cout<<"\nYou have "<<nickel<<" nickels";};}
    if (dime > 0) {if (dime == 1) {cout<<"\nYou have 1 dime";} else {cout<<"\nYou have "<<dime<<" dimes";};}
    if (quarter > 0) {if (quarter == 1) {cout<<"\nYou have 1 quarter-dollar";} else {cout<<"\nYou have "<<quarter<<" quarter-dollars";};}
    if (half > 0) {if (half == 1) {cout<<"\nYou have 1 half-dollar";} else {cout<<"\nYou have "<<half<<" half-dollars";};}
    if (dollar > 0) {if (dollar == 1) {cout<<"\nYou have 1 one-dolar";} else {cout<<"\nYou have "<<dollar<<" one-dollars";};}

    // sum all 
    double soma;
    soma = penny + 5 * nickel + 10 * dime + 25 * quarter + 50 * half + 100 * dollar;

    // print the total
    if (soma == 1) {cout<<"\nThe value of all of your coins is 1 cent.";} else cout<<"\nThe value of all of your coins is $"<<soma/100<<" dollars.";
}