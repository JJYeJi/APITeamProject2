#include "stdafx.h"
#include "Shield.h"


CShield::CShield()
	: m_pTarget(nullptr)
{
}


CShield::~CShield()
{
	Release();
}

void CShield::Initialize()
{
	m_tInfo.fCX = 100.f;
	m_tInfo.fCY = 100.f;

	m_fAngle = 90.f;
	m_fSpeed = 10.f;
	m_fTargetDist = 100.f;
}

int CShield::Update()
{
	m_pTarget = CObjectMgr::GetInstance()->GetPlayer();
	NULL_CHECK_RETURN(m_pTarget, DEAD_OBJ);

	m_tInfo.fX = m_pTarget->GetInfo().fX + cosf(m_fAngle * PI / 180.f) * m_fTargetDist;
	m_tInfo.fY = m_pTarget->GetInfo().fY - sinf(m_fAngle * PI / 180.f) * m_fTargetDist;

	m_fAngle += m_fSpeed;

	return NO_EVENT;
}

void CShield::Render(HDC hDC)
{
	CGameObject::UpdateRect();
	Ellipse(hDC, m_tRect.left, m_tRect.top, m_tRect.right, m_tRect.bottom);
}

void CShield::Release()
{
}
