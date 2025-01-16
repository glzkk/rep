#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main() {
   
    vector<int> numbers;
    int number;
    cout << "Podaj 5 numerow ";
    for (int i = 0; i < 5; i++) {
        cin >> number;
        numbers.push_back(number); 
    }

    
    int wynik = 1; 
    for (int num : numbers) {
        wynik *= num; 
    }

    // int wynik = 0; 
    // for (int num : numbers) {
    //     wynik += num; 
    // }

    // int wynik = 0; 
    // for (int num : numbers) {
    //     wynik += num; 
    
    // }

    // int srednia = suma / cyferkiPlik.size();
    
 
    ofstream outFile("wyjscie.txt", ios::out);
    for (int num : numbers) {
        outFile << num << " ";  
    }
  
    outFile << endl << "wynik: " << wynik << endl; 
    outFile.close(); 


    ifstream wPliku("wyjscie.txt");
    string linia;
    cout << "wyniki" << endl;
    while (getline(wPliku, linia)) {
        cout << linia << endl;
    }
    wPliku.close(); 

    return 0;
}