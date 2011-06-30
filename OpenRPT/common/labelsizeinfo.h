/*
 * Copyright (c) 2002-2006 by OpenMFG, LLC
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * If you do not wish to be bound by the terms of the GNU General Public
 * License, DO NOT USE THIS SOFTWARE.  Please contact OpenMFG, LLC at
 * info@openmfg.com for details on how to purchase a commercial license.
 */

#ifndef __LABELSIZEINFO_H__
#define __LABELSIZEINFO_H__

#include <qstring.h>
#include <qstringlist.h>

class LabelSizeInfo
{
  public:
    LabelSizeInfo(const QString&, const QString&, int, int, int, int, int, int, int, int);
    LabelSizeInfo();
    virtual ~LabelSizeInfo();

    const QString & name();
    const QString & paper();

    const int columns();
    const int rows();

    const int width();
    const int height();

    const int startX();
    const int startY();

    const int xGap();
    const int yGap();

    bool isNull();

    static const LabelSizeInfo & getByName(const QString &);
    static QStringList getLabelNames();

  protected:
    QString _name;
    QString _paper;

    int _columns;
    int _rows;

    int _width;
    int _height;

    int _startx;
    int _starty;

    int _xgap;
    int _ygap;

    bool _null;
};

#endif
