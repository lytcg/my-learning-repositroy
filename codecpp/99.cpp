#include <iostream>
using namespace std;
int main()
{
	for(int lie=1;lie<=9;lie++)
	{
		for(int hang=1;hang<=lie;hang++)
		{
			cout<<lie<<"*"<<hang<<"="<<lie*hang<<" ";			
		}
		cout<<endl;				
	}			
	system("pause");
	return 0;	
}
