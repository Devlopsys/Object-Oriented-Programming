#include<iostream>
using namespace std;
class Mother                               //base class
{
private:   //data members: variables
	float m_height;
	string m_skinColor;
protected:    //member functions (Only accessed in inherited classes)
	void input_data()          //defining function
	{

		cout << "Enter Mother Height:";
		cin >> m_height;
		cout << "Enter Mother Skin Color:";
		cin >> m_skinColor;
	}
};
class Father                               //base class
{
private:
	float f_height;
	string f_skinColor;
};
class child :public Mother, public Father     //derived class
{
public:
	void m_input()
	{
		input_data();//Mother class function
	}
};
int main()
{
	child c1;

	c1.m_input();// calling function (but cannot be accessed in main)
	

	return 0;

}