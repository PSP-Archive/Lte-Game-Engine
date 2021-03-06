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
 
// The code for the TerrainTriangleSelector is based on the GeoMipMapSelector
// developed by Spinz. He made it available for engine and allowed it to be
// distributed under this licence. I only modified some parts. A lot of thanks go to him.

#ifndef __C_TERRAIN_TRIANGLE_SELECTOR_H__
#define __C_TERRAIN_TRIANGLE_SELECTOR_H__

#include "ITriangleSelector.h"
#include "IMesh.h"

namespace engine
{
namespace scene
{

class ITerrainSceneNode;

//! Triangle Selector for the TerrainSceneNode
//! The code for the TerrainTriangleSelector is based on the GeoMipMapSelector
//! developed by Spinz. He made it available for engine and allowed it to be
//! distributed under this licence. I only modified some parts. A lot of thanks go to him.
class CTerrainTriangleSelector : public ITriangleSelector
{
public:

//! Constructs a selector based on an IGeoMipMapSceneNode
CTerrainTriangleSelector(ITerrainSceneNode* node, s32 LOD );

//! Destructor
~CTerrainTriangleSelector();

//! Clears and sets triangle data
virtual void setTriangleData ( ITerrainSceneNode* node, s32 LOD );

//! Gets all triangles.
void getTriangles ( core::triangle3df* triangles, s32 arraySize, s32& outTriangleCount,
                    const core::matrix4* transform = 0 );

//! Gets all triangles which lie within a specific bounding box.
void getTriangles ( core::triangle3df* triangles, s32 arraySize, s32& outTriangleCount,
                    const core::aabbox3d<f32>& box, const core::matrix4* transform = 0 );

//! Gets all triangles which have or may have contact with a 3d line.
virtual void getTriangles ( core::triangle3df* triangles, s32 arraySize,
                            s32& outTriangleCount, const core::line3d<f32>& line,
                            const core::matrix4* transform = 0 );

//! Returns amount of all available triangles in this selector
virtual s32 getTriangleCount ( ) const;

private:

friend class CTerrainSceneNode;

struct SGeoMipMapTrianglePatch
{
	core::array<core::triangle3df>  Triangles;
	s32 NumTriangles;
	core::aabbox3df Box;
};

struct SGeoMipMapTrianglePatches
{
	SGeoMipMapTrianglePatches ( )
	{
		TotalTriangles = 0;
		NumPatches = 0;
	}

	core::array<SGeoMipMapTrianglePatch>    TrianglePatchArray;
	s32 NumPatches;
	u32 TotalTriangles;
};

ITerrainSceneNode*              SceneNode;
SGeoMipMapTrianglePatches TrianglePatches;
};

} // end namespace scene
} // end namespace engine


#endif // __C_TERRAIN_TRIANGLE_SELECTOR_H__

