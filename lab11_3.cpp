#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    int count = 0;
    double sum = 0;
    double SD =0;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        count++;
    }
    double mean = sum/count;
    source.close();
    ifstream sds("score.txt");
    while(getline(sds,textline)){
        SD += pow((atof(textline.c_str())- mean ), 2);
    }
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << double (sqrt(SD/count)) << "\n";
    sds.close();
    return 0;
}
