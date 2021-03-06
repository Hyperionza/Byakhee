#if !defined(AFX_OUTPUT_H__AA526963_960B_11D2_9FF9_00001C192944__INCLUDED_)
#define AFX_OUTPUT_H__AA526963_960B_11D2_9FF9_00001C192944__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Output.h : header file
//

#include "sizecbar.h"
#include "ColouredListBox.h"
#include "ScriptEngine/ScriptObject.h"
#include "ScriptEngine/Variant.h"

/////////////////////////////////////////////////////////////////////////////
// COutput dialog
/**
 * Copyright (C) 1998  David Harvey
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

class COutput : public CSizingControlBar
{
// Construction
public:
	void LoadDisplaySettings();
	COutput();
    virtual ~COutput();

	void Clear();
	void AddString( CString strText );

	CColouredListBox m_wndText;


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(COutput)
	protected:
	//}}AFX_VIRTUAL

// Implementation
protected:
	CFont m_Font;

	// Generated message map functions
	//{{AFX_MSG(COutput)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

class CScriptOutput : public CScriptObject  
{
public:
    virtual MEMBERRESULT ExecuteMemberFunction( char* pszName, Variant* pParameters, int nParameters, Variant& returnValue );
};


//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_OUTPUT_H__AA526963_960B_11D2_9FF9_00001C192944__INCLUDED_)
