#include <iostream>
#include <string>

#include "C:\Users\Andrew\Desktop\arrowspace_programs\CImg\CImg-2.0.0\CImg.h"

using namespace std;
using namespace cimg_library;

int main() {	
	cout << endl << endl << " Image program running...";
	
	CImg<float> img("street_orig.bmp"); // Image stored as a bitmap, which has no encryption.  Avoids the need for another install and linked libraries; Magick, etc.
	
	int W = img.width(), H = img.height(), D = img.depth(), V = img.spectrum();
	
	cout << endl << " " << W;
	cout << endl << " " << H;
	cout << endl << " " << D;
	cout << endl << " " << V;
	
	cout << endl << endl << " Program terminated.  Ending..." << endl;
	return 0;
}