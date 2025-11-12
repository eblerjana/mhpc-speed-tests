#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
	if (argc < 2) {
		cerr << "No filename provided." << endl;
		return 0;
	}
	string filename = argv[1];
	cout << "Reading " << filename << endl;
	ifstream file(filename);
	string line;
	unsigned int n_lines = 0;
	while (getline(file, line)) {
		n_lines += 1;
	}
	cout << "Read " << n_lines << " lines." << endl;
	return 0;
};
