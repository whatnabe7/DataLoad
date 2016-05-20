#pragma once
#include "DataBase.h"
#include <vector>
//DataBase‚ÉLoad‹@”\‚ðŽæ‚è•t‚¯‚½‚à‚Ì

template<class T>
class DataLoad {
private:
	DataBase<T> data;
public:
	DataLoad() : data() {}
	void load(std::vector<std::vector<std::string>> *src) {
		data = DataBase<T>();

		for (unsigned int row = 0; row < src->size(); ++row) {
			RecordBase<T> record;
			record.set(&(*src)[row]);
			data.addData(record);
		}
	}
	void print() {
		printf("%s\n", data.getStr().c_str());
	}
	DataBase<T>* GetDataBase() { return &data; }
	T* GetRecord(int no) { return data.getRecord(no); }
};