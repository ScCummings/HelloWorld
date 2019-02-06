#include <iostream>
#include <string>
using namespace std;

int main(int argc,char** argv)
{
  string userName;
  cout << "What is your name? ";
  getline(cin,userName);
  cout << "Hello " << userName << "! Welcome to Data Structures!" << endl;
}
