#pragma once

#include "CCommand.h"

class InputHandler
{
private : 
	CCommand* m_ButtonX;
	CCommand* m_ButtonY;
	CCommand* m_ButtonA;
	CCommand* m_ButtonB;

public : 
	CCommand* handleInput()
	{
		// �Ϲ������� ������ ��ɾ� ����
		if (isPressed(PK_BUTTON_X))
		{
			return m_ButtonX;
		}
		else if (isPressed(PK_BUTTON_Y))
		{
			return m_ButtonY;
		}
		else if (isPressed(PK_BUTTON_A))
		{
			return m_ButtonA;
		}
		else if (isPressed(PK_BUTTON_B))
		{
			return m_ButtonB;
		}

		return nullptr;
	}
};