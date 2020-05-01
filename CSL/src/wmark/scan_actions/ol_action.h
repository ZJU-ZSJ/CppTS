﻿/*
** Xin YUAN, 2019, BSD (2)
*/

////////////////////////////////////////////////////////////////////////////////
#ifndef __OL_ACTION_H__
#define __OL_ACTION_H__
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
namespace CSL {
////////////////////////////////////////////////////////////////////////////////

// WmarkScannerOlAction

class WmarkScannerOlAction : public IRdScannerAction
{
public:
	WmarkScannerOlAction() throw();
	~WmarkScannerOlAction() throw();

// IRdScannerAction
	virtual bool Scan(std::istream& stm, RdActionStack& stk, RdToken& token);
};

////////////////////////////////////////////////////////////////////////////////
}
////////////////////////////////////////////////////////////////////////////////
#endif
////////////////////////////////////////////////////////////////////////////////
