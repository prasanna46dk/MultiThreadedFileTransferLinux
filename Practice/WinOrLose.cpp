#include<iostream>
#include<bits/stdc++.h>
#include<string>
// 2
// 6
// 10 20 50 100 500 400
// 30 20 60 70 90 490
// 5
// 10 20 30 40 50
// 40 50 60 70 80
using namespace std;

string winOrLose()
{
    unsigned int *arrayVillans, *arrayHeros;
    unsigned int noOfVillans;
    unsigned int i;
    cin >> noOfVillans;

    arrayVillans = new unsigned int(noOfVillans);
    arrayHeros = new unsigned int(noOfVillans);

    // read test cases and number of heros and villans.
    for (i = 0; i < noOfVillans; i++)
        cin >> arrayVillans[i];
    for (i = 0; i < noOfVillans; i++)
        cin >> arrayHeros[i];

    // sort both villans and hero array
    sort(arrayHeros, arrayHeros+noOfVillans);
    sort(arrayVillans, arrayVillans+noOfVillans);

    for (i = 0; i< noOfVillans; i++) {
        if (arrayVillans[i] >= arrayHeros[i])
            break;
    }

    delete[] arrayHeros;
    delete[] arrayVillans;

    if (i >= noOfVillans)
        return ("WIN");
    else
        return ("LOSE");
}

int main()
{
    unsigned int testCases;
    cin >> testCases;
    vector<string> result;

    for (int i = 0; i < testCases; i++)
        result.push_back(winOrLose());

    for (vector<string>::iterator i = result.begin(); i != result.end(); i++)
        cout << (*i) << endl;
    return 0;
}
