#pragma once

template<typename K>
class Comparable
{
public:
	virtual bool operator>(K const &other) const = 0;
	
	virtual bool operator<(K const &other) const = 0;
	
	virtual bool operator!=(K const &other) const = 0;
	
	virtual bool operator==(K const &other) const = 0;
};
