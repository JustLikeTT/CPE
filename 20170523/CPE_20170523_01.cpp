// CPE_20170523_01.cpp : 定義主控台應用程式的進入點。
//

#include <iostream>
#include <cstdlib>

using namespace std;
void ShowSequence(int *);
void ResetSequence(int *);

void ShowSequence(int *Seq)
{
	for(int i=0; i<10; i++)
		cout << Seq[i] <<" ";
	
}
void ResetSequence(int *Seq)
{
	for(int i=0; i<10; i++)
		Seq[i] = 0;
}

int main()
{

	int DataNumber=1,MaxNumber;
	int Sequence[10] = {0,0,0,0,0,0,0,0,0,0};//0 to 9

	cin >> DataNumber;
	for (int i = 0; i < DataNumber; i++)
	{
		cin >> MaxNumber;
		for (int j = 1; j <= MaxNumber; j++)
		{
			int CurrentNum;
			CurrentNum = j;
			Sequence[CurrentNum%10]++;
			while(CurrentNum >= 10)
			{		
				CurrentNum /= 10;
				Sequence[CurrentNum%10]++;	
			}
		}
		ShowSequence(Sequence);
		ResetSequence(Sequence);
	} 
	system("pause");
    return 0;
}


