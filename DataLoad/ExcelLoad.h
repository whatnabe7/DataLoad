#pragma once
#include <string>
#include <vector>
//Excel���[�h�N���X
//�ǂݏo���f�[�^�̈ꎞ�ۊǂ�string��vector��z�肵�Ă��邪�����Ƃ������̂����邩������Ȃ��B
class ExcelLoad {
public:
	ExcelLoad(){}

	std::vector<std::vector<std::string>> Load(std::string filename) {
		std::vector<std::vector<std::string>> data;
		
		//�_�~�[���[�h����
		std::vector<std::string> line;
		line.push_back("4");
		line.push_back("�q�g�J�Q");
		data.push_back(line);
		line.clear();
		line.push_back("5");
		line.push_back("���U�[�h");
		data.push_back(line);
		line.clear();
		line.push_back("6");
		line.push_back("���U�[�h��");
		data.push_back(line);

		return data;
	}
};