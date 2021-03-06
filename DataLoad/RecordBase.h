#pragma once
#include "RecordStruct.h"
#include "RecordStruct_Names.h"
//RecordStructを継承したクラスを同列に扱えるようにくるむだけ

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
