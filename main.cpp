#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

bool linearSearch(const std::vector<std::string>& inventory, const std::string& item) {
	for (const std::string& i : inventory) {
		if (i == item) {
			return true;
		}
	}
	return false;
}

bool binarySearch(const std::vector<int>& arr, int target) {
	int left = 0;
	int right = arr.size() - 1;

	while (left <= right) {
		int mid = left + (right - left) / 2;

		if (arr[mid] == target) {
			return true;  
		}
		else if (arr[mid] < target) {
			left = mid + 1;  
		}
		else {
			right = mid - 1; 
		}
	}
	return false; 
}


int main() {

	std::vector<std::string> inventory = { "Potion", "Iron Sword", "Herb", "Shield", "Magic Stone" };
	std::string searchItem = "Magic Stone";

	std::cout << "Checking inventory for: " << searchItem << std::endl;

	if (linearSearch(inventory, searchItem)) {
		std::cout << "Item found!" << std::endl;
	}
	else {
		std::cout << "No such item in inventory!" << std::endl;
	}



	std::vector<int> requiredRuneIDs = { 5, 10, 15, 20, 25, 30 };
	int runeToFind = 20;

	std::cout << "Checking inventory for rune: " << runeToFind << std::endl;

	if (binarySearch(requiredRuneIDs, runeToFind)) {
		std::cout << "Rune found!" << std::endl;
	}
	else {
		std::cout << "You do not have the rune! Get grinding son!" << std::endl;
	}


	std::map<std::string, int> enemyHP = {
		{"Goblin", 30},
		{"Orc", 80},
		{"Dragon", 300},
		{"Skeleton", 45}
	};

	std::string enemy = "Orc";
	std::cout << "Enemy selected: " << enemy << std::endl;
	std::cout << "HP Value: " << enemyHP[enemy] << std::endl;




	return 0;
}