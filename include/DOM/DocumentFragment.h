// This file is part of XmlPlus package
// 
// Copyright (C)   2010-2011 Satya Prakash Tripathi
//
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#ifndef __DOCUMENT_FRAGMENT_H__
#define __DOCUMENT_FRAGMENT_H__

#include "DOM/DOMCommonInc.h"

namespace DOM
{
  class DocumentFragment : public XPlus::XPlusObject
  {
    public:
      DocumentFragment():
        XPlusObject("DocumentFragment")
      {
      }
      virtual ~DocumentFragment() {}

  };
}

#endif
