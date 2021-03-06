/*
 * LTE Game Engine
 * Copyright (C) 2006-2008 SiberianSTAR <haxormail@gmail.com>
 * http://www.ltestudios.com
 *
 * The LTE Game Engine is based on Irrlicht 1.0
 * Irrlicht Engine is Copyright (C) 2002-2006 Nikolaus Gebhardt
 *
 * This is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2.1 of
 * the License, or (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this software; if not, write to the Free
 * Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA, or see the FSF site: http://www.fsf.org.
 */

#ifndef __MEMORY__INCLUDED__
#define __MEMORY__INCLUDED__
#define DIMENSIONE_BUFFER 131072
namespace engine
{

namespace core
{

class CMemory
{


private:

//* Buffer
unsigned char __attribute__((aligned(16)))  buffer[DIMENSIONE_BUFFER*4];
unsigned char *currptr;

public:
CMemory();

//* Ripristina tutto lo spazio allocato
void CFlushMemory();

//* Alloca uno spazio di memoria
void *CMemoryAlloc(int size);


};
}
}
#endif
