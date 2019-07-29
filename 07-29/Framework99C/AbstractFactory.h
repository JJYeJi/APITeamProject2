#pragma once

// 디자인 패턴

// 추상 팩토리 패턴
// 오브젝트를 생성할 때 공통된 요소를 모아서 캡슐화한 디자인 패턴.
class CGameObject;

template <typename T>
class CAbstractFactory
{
public:
	static CGameObject* CreateObject()
	{
		CGameObject* pInstance = new T;
		pInstance->Initialize();

		return pInstance;
	}

	static CGameObject* CreateObject(float x, float y)
	{
		CGameObject* pInstance = new T;
		pInstance->Initialize();
		pInstance->SetPos(x, y);

		return pInstance;
	}

	static CGameObject* CreateObject(float x, float y, float angle)
	{
		CGameObject* pInstance = new T;
		pInstance->Initialize();
		pInstance->SetPos(x, y);
		pInstance->SetAngle(angle);

		return pInstance;
	}
};