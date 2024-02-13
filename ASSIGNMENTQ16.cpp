#include<iostream>
using namespace std;
int main()
{
    float weight,height,bmi;
    cout<<"  \tBMI CALCULATOR AND BMI CATEGORY"<<endl;
    cout<<"Enter your weight in kilograms: ";
    cin>>weight;
    cout<<"Enter your height in meters: ";
    cin>>height;
    bmi=weight/(height*height);
    cout<<"\t\t Your BMI is: "<<bmi<<endl;
    if (bmi<18.5)
    {
        cout<<"\t\t BMI CATEGORY: UNDERWEIGHT";
    }
    if (bmi>=18.5&&bmi<=24.9)
    {
        cout<<"\t\t BMI CATEGORY: NORMAL";
    }
    if (bmi>=25&&bmi<=29.9)
    {
        cout<<"\t\t BMI CATEGORY: OVERWEIGHT";
    }
    if (bmi>=30)
    {
        cout<<"\t\t BMI CATEGORY: OBESITY";
    }
    // Display BMI values
    cout<<endl<<"The following information from the Department of Health and Human Services/National Institutes of Health"<<endl;
    cout << "\tBMI VALUES" << endl;
    cout << "Underweight: less than 18.5" << endl;
    cout << "Normal: between 18.5 and 24.9" << endl;
    cout << "Overweight: between 25 and 29.9" << endl;
    cout << "Obesity: 30 or greater" << endl;

    return 0;
}
