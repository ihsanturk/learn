#include<iostream>
#include<vector>
using namespace std;

const unsigned int N = 5;

class VecWrapper
{
public:
	std::vector<Student> vec;
	VecWrapper()
	{
		vec.reserve(N);
		for(unsigned int i = 0; i < N; ++i )
			vec.push_back(Student(i));
	}
};
VecWrapper myData;
int main()
{
	cout<< "Hello, This is a code to learn classes"<< endl;
	cout<< myData.vec[1].get_id() << endl;
	return 0;
}
