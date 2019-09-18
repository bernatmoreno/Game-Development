#include <stdlib.h>
#include <stdio.h>
#include <iostream>

template <class T> //we use this to be able to create values with templatized type

class vec3
{
private:
	T x, y, z; //instead of int we use T(the kind of variable) that in this case will be a float

public:
//constructors
	vec3() : x(0), y(0), z(0) {}; //first constructor giving values of 0 to the variables
	vec3(int first, int second, int third) : x(first), y(second), z(third) {}; //segon constructor. aquesta funcio serveix per donarli un valor 
	//a les variables x y z
	vec3(const vec3& parameter) : x(parameter.x), y(parameter.y), z(parameter.z) {}; //en el ultim constructor li pasem un vector enlloc de uns
	//nummeros perque els copii

//operators	
	//==
	bool operator==(const vec3& parameter) 
	{
		if (x == parameter.x && y == parameter.y && z == parameter.z)
		{
			return true;
		}

		else
		{
			return false;
		}
	}

	//+
	bool operator + (vec3 parameter)
	{
		x += parameter.x;
		y += parameter.y;
		z += parameter.z;
		return true;
	}

	//-
	bool operator -(vec3 parameter)
	{
		x -= parameter.x;
		y -= parameter.y;
		z -= parameter.z;
		return true;
	}

	//=
	bool operator =(vec3 parameter)
	{
		x = parameter.x;
		y = parameter.y;
		z = parameter.z;
		return true;

//methods
	//zero()    
		void zero()
		{
			x = 0;
			y = 0;
			z = 0;
		}
	//is_zero()
		bool is_zero()
		{
			if (x == 0 && y == 0 && z == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}

};

int main()
{
//constructors	
	vec3<float> vecExample; //(for the first constructor) the vecExample will have float values (x=2.23 for example)
	vec3<float> vecExample2(1, 5, 8);//(for the second constructor) aquests valors seran assignats a x y z gracies al segon constructor
	vec3<float> vecExample3(vecExample2); //(for the third constructor) copiem el vecExample2 al vecExample3 

//operators
	//==
	if (vecExample2 == vecExample3)
	{
		std::cout << "they are the same" << std::endl;
	}


	system("pause");
	return 0;
}