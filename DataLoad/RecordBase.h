#pragma once
#include "RecordStruct.h"
#include "RecordStruct_Names.h"
//RecordStruct‚ğŒp³‚µ‚½ƒNƒ‰ƒX‚ğ“¯—ñ‚Éˆµ‚¦‚é‚æ‚¤‚É‚­‚é‚Ş‚¾‚¯

template <class T>
class RecordBase {
private:
	T data;
public:
	RecordBase() : data() {}
	void set(T rec) { data = rec; }
	void set(std::vector<std::string> *str)	{	data.create(str);	}
	T* get() { return &data; }
	void clear() { data.clear(); }
	std::string getStr() {
		return data.getStr();
	}
};
