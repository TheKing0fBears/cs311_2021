#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;
  
int main(int argc, char** argv)
{
	std::ofstream outf{ "opmoves.dat" };
	srand(time(NULL));
	if( strcmp(argv[2], "zero" ) == 1)
	      {
		int initial=rand()%1;
	      	switch(initial)
	      		{
				case 0:
					cout<<"confess";//initial confess
				break;
				case 1:
					cout<<"silent";//initial silence
				break;
	      		}
	      }
	else
	      {
		       if( strcmp(argv[2], "silent" ) == 0){
		       		cout << "confess";
		    		outf << "confess";
		       }
			else {
      				cout << "confess";
      				outf << "silent";

			}
	   }
    return 0;

}
