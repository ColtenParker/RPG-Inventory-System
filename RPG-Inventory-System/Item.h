#pragma once
#include <string>

class Item
{
protected:
	std::string name;
	std::string description;
	std::string type;
	int value;
	int weight;

public:
	Item(const std::string& name, const std::string& description, const std::string& type, int value, int weight);

	std::string getName() const;
	std::string getType() const;
	int getValue() const;
	int getWeight() const;

	virtual void displayInfo() const;

	virtual ~Item() = default;
};

