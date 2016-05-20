#pragma once
#include <string>
#include <vector>

//データ構造の親クラス
class RecordStruct {
public:
	RecordStruct() { create(); }
	RecordStruct(std::vector<std::string> *str) { create(str); }
	virtual void create() {}
	virtual void create(std::vector<std::string> *str) { set(str); }
	virtual void set(std::vector<std::string> *line) {}
	virtual std::string getStr() { return "";  }
	virtual void clear() {}
};
