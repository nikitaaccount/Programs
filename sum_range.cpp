#include<iostream>
using namespace std;
int main()
{
        int sum = 0 , upper_limit, lower_limit;
        cout << "\n Enter the lower limit: ";
        cin >> lower_limit;


        cout << "\n Enter the upper limit: ";
        cin >> upper_limit;

        //calculating sum of numbers in the given range
        for(int i = lower_limit; i <= upper_limit; i++){
        sum += i;
        }

        cout<<"\n The Sum of Natural Numbers from " << lower_limit << " to "<< upper_limit << " is " << sum;
        return 0;
}
