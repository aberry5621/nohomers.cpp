//
//  main.cpp
//  Book Exercise 4.2 - Great Circle Distance
//
//  Created by ax on 9/25/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include<fstream>
#include<iostream>
using namespace std;

int main() {

	ofstream my_file;

	my_file.open("E:\\nohomers.txt");

	my_file << "               ,---." << endl;
	my_file << "            ,.\'-.   \\" << endl;
	my_file << "           ( ( ,\'\"\"\"\"\" - " << endl;
	my_file << "           `,X          `" << endl;
	my_file << "           /` `           `" << endl;
	my_file << "          (            ,   ,_\\" << endl;
	my_file << "          |          ,---.,\'o `" << endl;
	my_file << "          |         / o   \\     )" << endl;
	my_file << "           \\ ,.    (      .____," << endl;
	my_file << "            \\| \\    \\____,\'     \\" << endl;
	my_file << "          '`\'\\  \\        _,____,\'" << endl;
	my_file << "          \\  ,--      ,-\'     \\" << endl;
	my_file << "            ( C     ,\'         \\ " << endl;
	my_file << "             `--\'  .\'           |" << endl;
	my_file << "               |   |         .O |" << endl;
	my_file << "	__ | \\, -\'" << endl;
	my_file << "            / `L     `._  _,\'  \' `" << endl;
	my_file << "           /    `--.._  `\',.   _\\  `" << endl;
	my_file << "           `-.       /\\  | `. ( ,\\  \\" << endl;
	my_file << "          _/  `-._  /  \\ |--\'  (     \\" << endl;
	my_file << "         \'  `-.   `\'    \\/\\`.   `.    ) " << endl;
	my_file << "               \\           \\ `.  |    | " << endl;



	my_file.close();

	ifstream also_my_file;
	
	also_my_file.open("E:\\nohomers.txt");

	cout << "Done";

	return 0;
}
