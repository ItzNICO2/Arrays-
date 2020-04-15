//Nicholas Caceres
//2/18/2020
//Lab 3
//COP 2220 06

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define liters 3.785
#define kms 1.609

void beautiful_car();
void tab();
void deny();
void Q1 (void);
void Q2 (void);
void Q3 (void);
double output(double miles, double gallons);
double MPG(double miles, double gallons);
double L_per_100_kms ();

int main()
{
    Q1();
    Q2();
    //Q3();
    return 0;
}

void beautiful_car()
{
    printf("For that's a beautiful car!\n");
}

void tab()
{
    printf("\t");
}

void deny()
{
    printf("\t\t\tWhich nobody can deny.");
}

void Q1 (void)
{
    beautiful_car();
    tab();
    beautiful_car();
    tab();
    tab();
    beautiful_car();
    deny();
}

double MPG (double miles, double gallons)
{
    double miles_per_gallon;
    miles_per_gallon = miles / gallons;
    return miles_per_gallon;
}

void Q2 (void)
{
    double miles;
    double gallons;
    double L_per_100_kms;
    double miles_per_gallon;
    printf("\n\nEnter the numbers of miles traveled and the number of gallons of gasoline consumed:");
    scanf("%lf %lf", &miles, &gallons);
    miles_per_gallon= MPG(miles,gallons);
    L_per_100_kms= (100 * liters) / (kms * miles_per_gallon);
    printf("\nThe MPG on the car is %.1f. Converting to liters per 100 kms is %.2f.", miles_per_gallon, L_per_100_kms);

}

double output (double miles, double gallons)
{
    double gas_mileage;
    gas_mileage= (100 * liters) / (kms * (miles / gallons));
    return gas_mileage;
}

void Q3 (void)
{
    double miles, gallons, gas_mileage;
    gas_mileage= output(miles, gallons);
    printf("My car is a 2019 Nissan 370z AS7 and its gas mileage in L/100kms is %.1f.", output);
}

