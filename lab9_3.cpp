#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include<iomanip>
using namespace std;

int main(){
    float Mean ,Standard,sum,sumS1,sumS2,count;
    string text;
    ifstream source("score.txt");
    while(getline(source,text))
    {
        sum += atof(text.c_str());
        sumS2 += pow(atof(text.c_str()),2);
        count++;
    }
    Mean = (1/count)*sum;
    sumS1 = ((1/count)*sumS2)-pow(Mean,2);
    Standard = sqrt(sumS1);
    cout << "Number of data = "<<count;
    cout <<setprecision(3);
    cout << "\nMean = "<<Mean;
    cout << "\nStandard deviation = "<<Standard;
    return 0;
}