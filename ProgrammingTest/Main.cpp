#include <iostream>

float sum5(float a, float b, float c)
{
	float sum = a + b + c;
	return sum * 5;
}

void evenArray(int * Array, int size)
{
	for (int i = 0; i < size; i++)
	{
		int Even = (i + 1) * 2;
		Array[i] = Even;
	}
}

void reverseString(char string[])
{
	int i = 0;
	for (; string[i] != '\0'; i++)
	{

	}
	for (int k = 0; k != i / 2; k++)
	{
		char temp;
		temp = string[k];
		string[k] = string[(i - 1) - k];
		string[(i - 1) - k] = temp;
	}
}
	
class Cat
{
private:
	char m_Name;
public:
	Cat() {};
	void NameMe(char a) {
		a = m_Name;
	}
};

//int MostSeen(int Array[], int size)
//{
//	return 0;
//}

int main()
{
	int Array[4] = { 0, 0, 0, 0 };
	int * pointer = &Array[4];
	evenArray(Array, 4);
	char string[7] = "philip";
	reverseString(string);
	Cat Array[26]
	{

	}
}