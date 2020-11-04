#pragma once

#include "GameActor.h"

class CCommand
{
public : 
	virtual ~CCommand() {}
	virtual void execute(CGameActor& actor) = 0;	
	// CGameActor는 게임 월드를 돌아다니는 플레이어가 조종하는 대표 캐릭터를 말한다.
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