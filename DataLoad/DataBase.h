#pragma once
#include "RecordBase.h"
#include <vector>
//RecordStruct‚ÌW‡‘Ì

template<class T>
class DataBase {
private:
	std::vector<RecordBase<T>> data;
public:
	DataBase() : data() {}
	void addData(RecordBase<T> rec) { data.push_back(rec); }
	void clear() { data.clear(); }
	std::string getStr() {
		std::string str = "";

		for (auto itr = data.begin(); itr != data.end(); ++itr) {
			str += itr->getStr();
			str += "\n";
		}
		return str;
	}
	T* getRecord(int no) { return data[no].get(); }
};