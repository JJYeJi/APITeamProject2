#include "stdafx.h"
#include "Mouse.h"


CMouse::CMouse()
{
}


CMouse::~CMouse()
{
	Release();
}

void CMouse::Initialize()
{
	m_tInfo.fCX = 100.f;
	m_tInfo.fCY = 100.f;
}

int CMouse::Update()
{
	POINT pt = {};

	// 현재 마우스 커서 위치를 얻어오는 API 함수
	// 클라이언트 상의 좌표가 아닌 전체 스크린 좌표 상의 마우스 커서 위치를 얻어옴.
	GetCursorPos(&pt);

	// 스크린 좌표로 얻어온 마우스 위치를 클라이언트 좌표로 변환하는 API 함수.
	ScreenToClient(g_hWnd, &pt);

	m_tInfo.fX = float(pt.x);
	m_tInfo.fY = float(pt.y);

	return NO_EVENT;
}

void CMouse::Render(HDC hDC)
{
	CGameObject::UpdateRect();
	Ellipse(hDC, m_tRect.left, m_tRect.top, m_tRect.right, m_tRect.bottom);
}

void CMouse::Release()
{
}
