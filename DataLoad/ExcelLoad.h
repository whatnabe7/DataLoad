#pragma once
#include <string>
#include <vector>
//Excelロードクラス
//読み出しデータの一時保管はstringのvectorを想定しているがもっといいものがあるかもしれない。
class ExcelLoad {
public:
	ExcelLoad(){}

	std::vector<std::vector<std::string>> Load(std::string filename) {
		std::vector<std::vector<std::string>> data;
		
		//ダミーロード結果
		std::vector<std::string> line;
		line.push_back("4");
		line.push_back("ヒトカゲ");
		data.push_back(line);
		line.clear();
		line.push_back("5");
		line.push_back("リザード");
		data.push_back(line);
		line.clear();
		line.push_back("6");
		line.push_back("リザードン");
		data.push_back(line);

		return data;
	}
};