#include "Map.hpp"

using namespace std;


// �R���X�g���N�^
Map::Map()
{
	m_mapchipSize = 64.0f;

	ReadMap();
}

// �f�X�g���N�^
Map::~Map()
{
	m_vMapdata.clear();
	m_vMapdata.shrink_to_fit();
}


// �ǂݍ���
void Map::ReadMap()
{
	int L_Type;						// �����擾�p
	int L_Count;					// �ǂݍ��ݗp�i���s�ڂ�ǂݍ���ł��邩
	string L_Line;					// �ǂݍ��񂾍s�i1�s�j
	ifstream L_File;				// �ǂݍ��ރt�@�C��

	L_Count = 0;

	L_File.open("media\\map\\Map.txt");		// �t�@�C���I�[�v��

	if (L_File.fail()) {	// �t�@�C���ǂݍ���
	}
	else {
		// �ǂݍ��ݐ���
		while (getline(L_File, L_Line)) {	// ��s���ǂݍ���

			m_vMapdata.resize(L_Count + 1);
			for (int i = 0, n = L_Line.length(); i < n; i++) {
				// ���l�擾
				L_Type = stoi(L_Line.substr(i, 1));	// 1�������擾
				// MapChip�̎��̍쐬
				m_vMapdata[L_Count].push_back(L_Type);
			}
			L_Count++;	// ���̍s��
		}
	}
	// �t�@�C�������
	L_File.close();
}


vector<vector<int>> Map::GetMapID()
{
	return m_vMapdata;
}

float Map::GetSpriteSize()
{
	return m_mapchipSize;
}
