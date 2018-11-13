#pragma once
#include <vector>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

enum class MAPID { wall = 8, wallJump, wallDead };

class Map
{
private:
	/// �}�b�v�֘A
	void ReadMap();

	/// �}�b�v�f�[�^�{��
	std::vector<std::vector<int>>m_vMapdata;

	/// �}�b�v�`�b�v�̃T�C�Y
	float m_mapchipSize;

public:
	/// �R���X�g���N�^
	Map();
	/// �f�X�g���N�^
	~Map();

	/// MapID�擾
	std::vector<std::vector<int>>GetMapID();

	/// �X�v���C�g�T�C�Y
	float GetSpriteSize();
};