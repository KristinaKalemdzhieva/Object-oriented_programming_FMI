#include <iostream>
#include <fstream>

int main()
{
	std::ofstream ofs("myfile.dat", std::ios::out | std::ios::binary);
	
	if(!ofs.is_open())
		return -1;
	
	int arr[5] = { 1,2,3,4,5 };

	ofs.write((const char*)arr, 5 * sizeof(int));

	ofs.close();
}
