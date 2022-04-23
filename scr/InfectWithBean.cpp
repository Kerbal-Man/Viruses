#include <iostream>
#include <fstream>  
using namespace std;
int main(void)
{
	ofstream outfile("BEANZ");
	int i = 0;
    //system("C:\\ProgramData\\chocolatey\\lib\\Wget\\tools\\wget.exe URL -O C:\\Users\\noahg\\Desktop\\beans.png");
    
    
	while (i < 5000) {
		outfile << "Your PC is a Bean Now" << endl;
		i++;
	}
	
	outfile.close();
}