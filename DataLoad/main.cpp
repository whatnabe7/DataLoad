// DataLoad.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
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

	//�ǂ݂���
	auto readData = load.Load("hogehoge");
	data.load(&readData);

	//�\��
	data.print();

	//�f�[�^�擾��
	auto firstdata_name = data.GetRecord(0)->getName();
	printf("0�Ԗڂ̖��O�F%s\n", firstdata_name.c_str());

	//�_�C�A���O������ɏ����Ȃ��悤��
	printf("press enter key");
	getchar();
    return 0;
}

