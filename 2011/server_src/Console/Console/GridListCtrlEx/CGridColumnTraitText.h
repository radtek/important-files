#pragma once

#include "CGridColumnTrait.h"

//------------------------------------------------------------------------
// Author:  Rolf Kristensen	
// Source:  http://www.codeproject.com/KB/list/CGridListCtrlEx.aspx
// License: Free to use for all
//
//! CGridColumnTraitText provides customization of cell text and background
//------------------------------------------------------------------------

class CGridColumnTraitText : public CGridColumnTrait
{
public:
	CGridColumnTraitText();
	virtual void OnCustomDraw(CGridListCtrlEx& owner, NMLVCUSTOMDRAW* pLVCD, LRESULT* pResult);	

	bool UpdateTextColor(COLORREF& textColor);
	bool UpdateBackColor(COLORREF& backColor);

protected:
	CFont*	m_pOldFont;		// Backup of the original font while drawing with this font
	COLORREF m_TextColor;
	COLORREF m_BackColor;

	virtual void Accept(CGridColumnTraitVisitor& visitor);
	virtual int GetCellFontHeight(CGridListCtrlEx& owner);
	virtual CRect GetCellEditRect(CGridListCtrlEx& owner, int nRow, int nCol);
};
