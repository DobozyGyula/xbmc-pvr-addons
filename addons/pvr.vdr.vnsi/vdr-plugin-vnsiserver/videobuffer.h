/*
 *      Copyright (C) 2005-2012 Team XBMC
 *      http://www.xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#pragma once

#include <stdint.h>
#include <stdlib.h>

class cVideoBuffer
{
public:
  virtual ~cVideoBuffer();
  static cVideoBuffer* Create();
  virtual void Put(uint8_t *buf, unsigned int size) = 0;
  virtual int Read(uint8_t **buf, unsigned int size) = 0;
  virtual size_t GetPosMin() { return 0; };
  virtual size_t GetPosMax() { return 0; };
  virtual size_t GetPosCur() { return 0; };
  virtual void GetPositions(size_t *cur, size_t *min,size_t *max) {};
  virtual void SetPos(size_t pos) {};
protected:
  cVideoBuffer();
};
