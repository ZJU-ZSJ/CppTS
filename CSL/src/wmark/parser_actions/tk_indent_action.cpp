﻿/*
** Xin YUAN, 2019, BSD (2)
*/

////////////////////////////////////////////////////////////////////////////////

#include "precomp.h"

#include "../WmarkDef.h"

#include "tk_indent_action.h"

////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
namespace CSL {
////////////////////////////////////////////////////////////////////////////////

// WmarkParserTkIndentAction

WmarkParserTkIndentAction::WmarkParserTkIndentAction() noexcept : m_pData(nullptr)
{
}
WmarkParserTkIndentAction::~WmarkParserTkIndentAction() noexcept
{
}

// IRdParserAction methods

void WmarkParserTkIndentAction::SetParameter(const std::any& param)
{
	m_pData = std::any_cast<RdParserActionMetaData*>(param);
}

bool WmarkParserTkIndentAction::DoAction(std::vector<std::string>& vecError)
{
	//indent
	assert( m_pData->posParent.uAddress != 0 );
	RdMetaDataPosition pos = m_pData->spMeta->InsertAstNode(WMARK_NODETYPE_INDENT);
	m_pData->spMeta->SetAstParent(pos, m_pData->posParent);
	if( m_pData->posCurrent.uAddress == 0 )
		m_pData->spMeta->SetAstChild(m_pData->posParent, pos);
	else
		m_pData->spMeta->SetAstNext(m_pData->posCurrent, pos);
	m_pData->posCurrent = pos;
	return true;
}

////////////////////////////////////////////////////////////////////////////////
}
////////////////////////////////////////////////////////////////////////////////