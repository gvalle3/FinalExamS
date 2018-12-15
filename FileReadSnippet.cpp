/* W15664768 Lupe Valle Final Exam
Directions:Assume that there is a valid file named"cards.txt"
in the current directory which containsten valid ints. 
There is one int on every line. Writea code snippet 
which reads in the first 3 ints andprints them to the screen. 
Paste a link in to your answer. 
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream file;
  int int1, int2, int3;
  file.open("cards.txt");
  file >> int1;
  file >> int2;
  file >> int3;
  file.close();
  cout << int1 << endl;
  cout << int2 << endl;
  cout << int3 << endl;
  cout << "or " << int1 << " " << int2 << " " << int3 << endl;
  
  return 0;
}
/*
[gvalle3@hills FinalExamS]$ g++ FileReadSnippet.cpp
[gvalle3@hills FinalExamS]$ ./a.out
1
2
3
or 1 2 3
[gvalle3@hills FinalExamS]$
*/