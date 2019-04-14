#include "std_lib_facilities.h"
//  Compute and print the total distance (the sum of all distances).
//  Find and print the smallest and greatest distance between two neighboring cities. Find and print
//  the mean distance between two neighboring cities.
//
int main()
{
	vector<int> distances;
	for(int temp; cin >> temp;)
		distances.push_back(temp);
	int sum = 0;
	for (int x : distances)
		sum += x;
	cout << "Mean disstance is: " << sum/distances.size() << '\n';
	sort(distances);
	int largest = distances[distances.size() - 1];
	cout << "Largest distance is: " << largest << '\n';
	int smallest = distances[0];
	cout << "The smallest is: " << smallest << '\n';
		
	return 0;
}	
