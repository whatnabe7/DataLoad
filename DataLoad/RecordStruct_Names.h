#pragma once
#include "RecordStruct.h"
#include <string>
#include <vector>
//���O�f�[�^�\���T���v��
//RecordStruct���p������RecordStruct_***���f�[�^���Ƃɍ��

class RecordStruct_Name : public RecordStruct{
private:
	//�f�[�^�̒��g
	int			id;
	std::string name;
public:
private:
public:
	RecordStruct_Name() {}
	RecordStruct_Name(std::vector<std::string> *str) { set(str); }
	void set(std::vector<std::string> *line) {
		id = std::stoi((*line)[0]);
		name = (*line)[1];
	}
	void create() {}
	void create(std::vector<std::string> *str) { set(str); }
	std::string getStr() {
		char buf[100];
		snprintf(buf, 100, "%d/%s", id, name.c_str());
		std::string str = buf;
		return str;
	}
	std::string getName() { return name; }
};