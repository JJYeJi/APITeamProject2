#pragma once
#include "GameObject.h"
class CMouse :
	public CGameObject
{
public:
	CMouse();
	virtual ~CMouse();

public:
	// CGameObject을(를) 통해 상속됨
	virtual void Initialize() override;
	virtual int Update() override;
	virtual void Render(HDC hDC) override;

private:
	virtual void Release() override;
};

