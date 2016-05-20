// DataLoad.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include "DataLoad.h"
#include "RecordBase.h"
#include "RecordStruct_Names.h"
#include "ExcelLoad.h"

int main()
{
	DataLoad<RecordStruct_Name> data;
	ExcelLoad load;

	//読みだし
	auto readData = load.Load("hogehoge");
	data.load(&readData);

	//表示
	data.print();

	//データ取得例
	auto firstdata_name = data.GetRecord(0)->getName();
	printf("0番目の名前：%s\n", firstdata_name.c_str());

	//ダイアログが勝手に消えないように
	printf("press enter key");
	getchar();
    return 0;
}

