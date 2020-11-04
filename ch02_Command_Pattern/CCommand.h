#pragma once

#include "GameActor.h"

class CCommand
{
public : 
	virtual ~CCommand() {}
	virtual void execute(CGameActor& actor) = 0;	
	// CGameActor�� ���� ���带 ���ƴٴϴ� �÷��̾ �����ϴ� ��ǥ ĳ���͸� ���Ѵ�.
};

class CJumpCommand : public CCommand
{
public :
	virtual void execute(CGameActor& actor)
	{
		actor.jump();
	}
};

class CFireCommand : public CCommand
{
public : 
	virtual void execute(CGameActor& actor)
	{
		actor.fireGun();
	}
};

class CMoveUnitCommand : public CCommand
{
public : 
	CMoveUnitCommand(Unit* unit, int x, int y) : 
		unit(unit), x(x), y(y) {}

	virtual void execute()
	{
		unit->moveTo(x, y);
	}

private : 
	Unit* unit;
	int x;
	int y;
};