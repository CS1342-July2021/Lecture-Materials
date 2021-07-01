#include <fstream>
#include <iostream>

using namespace std;

int main() {
  char ofilename[25];  // a string for the output filename
  ofstream out1;       // a file output stream for processing

  do {
    out1.clear();  // to clear status flags in the stream

    cout << "Please enter the name of the output file.\n";
    cout << "Filename:  ";
    cin >> ofilename;

    out1.open(ofilename);
    if (!out1) cout << "That is not a valid file.  Try again!\n";

    // Note:  IF the opening of the file has failed, a "fail" flag has
    //        been set in the ofstream object.  The clear() call at
    //        the top of this loop is used to reset that flag for the
    //        next try!

  } while (!out1);

  // write some data to the file

  out1 << "Hello, World\n";
  out1 << "The quick brown fox jumped over the lazy platypus\n";

  out1.close();

  cout << "Processing complete\n";
  return 1;
}
