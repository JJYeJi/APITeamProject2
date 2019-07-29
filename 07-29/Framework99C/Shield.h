#pragma once
#include "GameObject.h"
class CShield :
	public CGameObject
{
public:
	CShield();
	virtual ~CShield();

public:
	// CGameObject을(를) 통해 상속됨
	virtual void Initialize() override;
	virtual int Update() override;
	virtual void Render(HDC hDC) override;

private:
	virtual void Release() override;

private:
	CGameObject*	m_pTarget;
	float			m_fTargetDist;
};

