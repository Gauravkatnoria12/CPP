#include <iostream>
#include <fstream>
using namespace std;

int main(){

  ofstream fout("file.txt");
  fout<<"Hello World!"<<endl;
  fout.seekp(20, ios::end);
  int posn = fout.tellp();
  cout<<posn<<endl;
  fout.close();
  cout<<"Data written to the file."<< endl;

  ifstream fin("file.txt");
  fin.seekg(6);
  int posn1 = fin.tellg();
  cout<<posn1<<endl;
  string line;
  getline(fin, line);
  cout<<line<<endl;
  fin.close();
  
  return 0;
}