#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream fp;
	string line;
	fp.open("fp.txt",ios::trunc|ios::out|ios::in);
	
	while(fp)
	{
		getline(cin,line);
		if(line=="-1")
			break;
		fp<<line;
	}
	
	fp.seekg(0,ios::beg);
	while (getline(fp, line)) {
    cout << line << endl;
	}

	
	fp.close();
	return 0;
}