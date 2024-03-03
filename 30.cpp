#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cout << "Enter Your Name: ";
    getline(cin, name);
    string feedback;
    cout << "Enter Your Feedback: ";
    getline(cin, feedback);

    cout << "Dear " << name << "," << endl
         << "Thank you for sharing your feedback." << endl
         << "We're delighted to hear about your positive experience you've gained during the 30 Days Of Code Challenge." << endl
         << "Farewell and best wishes for your future coding endevours!";
}