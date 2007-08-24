/***************************************************************************
 *   Copyright (C) 2004-2007 by Georgy Yunaev, gyunaev@ulduzsoft.com       *
 *   Please do not use email address above for bug reports; see            *
 *   the README file                                                       *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef INCLUDE_KCHMCONTENTSWINDOW_H
#define INCLUDE_KCHMCONTENTSWINDOW_H

#include "kde-qt.h"
#include "kchmtreeviewitem.h"

/**
@author tim
*/
class KCHMContentsWindow : public KQListView
{
	Q_OBJECT
	public:
    	KCHMContentsWindow( QWidget *parent = 0, const char *name = 0 );
		~KCHMContentsWindow();
		
		QRect	tip( const QPoint & p );
		
		void	refillTableOfContents();
		
		KCHMIndTocItem *	getTreeItem( const QString& url );
		
	public slots:
		void	slotContextMenuRequested ( Q3ListViewItem *item, const QPoint &point, int column );
		
	private:
		KQMenu 				  * m_contextMenu;
		QMap<QString, KCHMIndTocItem*>	m_urlListMap;
};

#endif /* INCLUDE_KCHMCONTENTSWINDOW_H */
