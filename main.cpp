#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>

using namespace std;

int main(int argc, char* argv[]) {
	if (argc < 2) {
		throw runtime_error("No filename provided.");
		return 1;
	}
	string filename = argv[1];
	ifstream file(filename);
	if (! file.good()) {
		throw runtime_error("File cannot be opened.");
		return 1;
	}
	string line;
	unsigned int n_lines = 0;
	while (getline(file, line)) {
		n_lines += 1;
	}
	cout << "Read " << n_lines << " lines." << endl;
	return 0;
};
