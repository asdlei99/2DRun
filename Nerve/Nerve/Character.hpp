#pragma once
#include <string>
#include "Input.hpp"
#include "Map.hpp"


class Character
{
private:
	enum class MOVE_DIRE { walk = 0, fall = 6, jump, wallJump };

	/// �X�v���C�g�̕`��̂��߂�ID
	int m_ID;

	/// �X�v���C�g�̍ő吔
	const int m_spriteNum = 8;

	/// ���W
	float m_x, m_y;

	/// �`��ł̍��W
	float m_drawX, m_drawY;

	/// �X�v���C�g�̃R�}����z��p�� -1
	const int m_walkFrame = 6;

	/// �R�}����
	void FrameSprite(MOVE_DIRE direction);

	/// �����̕���
	bool m_direction[4];

	/// �R�}����ҋ@
	int m_frameWait;

	/// �R�}����ҋ@����
	const int m_frameWaitTimer = 5;

	/// �X�v���C�g�T�C�Y
	float m_xSize, m_ySize;

	/// �E�������ǂ���
	bool m_rightDire;

	/// �X�s�[�h
	int m_speed;					


	/// �}�b�v�ł̂����蔻��̂���
	Map* m_map;

	/// �W�����v�֘A
	/// �n�ʂɐG��Ă邩
	bool m_groundFlag;

	/// �W�����v���Ă��邩
	bool m_jumpFlag;

	/// �������W�����v��
	bool m_longJump;		

	/// �W�����v��
	float m_jumpPower;	

	/// �d��
	float m_gravityPower;	

	/// �����Ă��邩�ǂ���
	float m_fallNow;

	/// ���O��Y���W
	float m_preY;

	/// �ǂ���̃W�����v���ǂ���
	bool m_wallJump;

	/// �X�N���[���̓s���ŉ��Z����}�b�v�`���X���W
	float m_mapDrawAddX;


public:
	Character();
	~Character();

	void Process();


	int GetID();
	float GetX();
	float GetY();
	float GetXSize();
	float GetYSize();
	bool GetRightDire();
	float GetMapDrawAddX();
};

