#pragma once
class CCollsionMgr
{
public:
	CCollsionMgr();
	~CCollsionMgr();

public:
	static void CollisionRect(const OBJLIST& dstLst, const OBJLIST& srcLst);
	static void CollisionRectEX(const OBJLIST& dstLst, const OBJLIST& srcLst);
	static void CollisionSphere(const OBJLIST& dstLst, const OBJLIST& srcLst);

private:
	static bool CheckRect(const CGameObject* pDest, const CGameObject* pSource, float* pMoveX, float* pMoveY);
	static bool CheckSphere(const CGameObject* pDest, const CGameObject* pSource);
};

