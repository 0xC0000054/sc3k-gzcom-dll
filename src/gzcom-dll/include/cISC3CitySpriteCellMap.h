/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3CitySpriteCellMap.h
 *
 * Copyright (C) 2026 Nicholas Hayes
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, under
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <https://www.gnu.org/licenses/>.
 */

#pragma once
#include "cIGZUnknown.h"

class cIGZBuffer;
class cISC3CitySpriteInst;
class cISC3OccTest;
class cISC3Pick;
class cRZPoint;
class cRZRect;
class DynamicSpriteRecord;
class tagCitySpriteCellMapPickObject;

class cISC3CitySpriteCellMap : public cIGZUnknown
{
public:
	virtual bool Init(uint32_t cellCountX, uint32_t cellCountZ, uint32_t screenWidth, uint32_t screenHeight, int32_t unknown5, int32_t unknown6, int32_t zoom, int32_t rotation, bool unknown9) = 0;
	virtual bool Shutdown() = 0;

	virtual void GetBackgroundBuffer(cIGZBuffer** ppBuffer) = 0; // Does not AddRef
	virtual void SetBackgroundBuffer(cIGZBuffer* pBuffer, bool update) = 0;
	virtual void GetViewRect(cRZRect&) const = 0;
	virtual void SetViewClipRect(cRZRect const& rect) = 0;
	virtual void RemoveViewClipRect() = 0;
	virtual void GetViewClipRect(cRZRect& rect) const = 0;
	virtual bool MoveRelative(int32_t unknown1, int32_t unknown2, bool unknown3) = 0;
	virtual bool MoveAbsolute(int32_t unknown1, int32_t unknown2, bool unknown3) = 0;

	virtual int32_t GetZoom() const = 0;
	virtual void SetZoom(int32_t zoom, bool update, int32_t focusCellX, int32_t focusCellZ) = 0;
	virtual int32_t ZoomIn(bool update, int32_t focusCellX, int32_t focusCellZ) = 0;
	virtual int32_t ZoomOut(bool update, int32_t focusCellX, int32_t focusCellZ) = 0;
	virtual int32_t GetRotate() const = 0;
	virtual void SetRotate(int32_t rotation, bool update, int32_t focusCellX, int32_t focusCellZ) = 0;
	virtual int32_t RotateLeft(bool update, int32_t focusCellX, int32_t focusCellZ) = 0;
	virtual int32_t RotateRight(bool update, int32_t focusCellX, int32_t focusCellZ) = 0;

	virtual uint32_t ScreenCellSizeX() = 0;
	virtual uint32_t ScreenCellAdjustmentY() = 0;
	virtual uint32_t ScreenCellSizeZ() = 0;
	virtual uint32_t MicroYToPixelUnits(int32_t unknown1, int32_t unknown2) = 0;
	virtual bool Insert(cISC3CitySpriteInst* pSprite, uint32_t unknown2, uint32_t unknown3, uint8_t unknown4, uint8_t unknown5, bool unknown6, uint32_t unknown7) = 0;
	virtual bool Remove(uint32_t unknown1, uint32_t unknown2, bool unknown3) = 0;
	virtual bool RemoveAll() = 0;
	virtual bool StartChangeSpriteBatch() = 0;
	virtual bool EndChangeSpriteBatch() = 0;
	virtual bool ChangeSprite(uint32_t unknown1, uint32_t unknown2, bool unknown3, uint32_t unknown4, void* unknown5) = 0;

	virtual bool GetCellsForViewCornersUnclipped(cRZPoint* unknown1, bool unknown2, cRZRect* unknown3) = 0;
	virtual bool DoPick(cISC3Pick& unknown1, bool unknown2) = 0;
	virtual bool IsSpriteVisible(int32_t unknown1, int32_t unknown2, bool unknown3) = 0;
	virtual bool IsDynamicSpriteVisible(cISC3CitySpriteInst* pSprite, int32_t unknown2, int32_t unknown3, bool unknown4) = 0;
	virtual bool IsCityPixelSolidForSprite(int32_t unknown1, int32_t unknown2, int32_t unknown3, int32_t unknown4, bool unknown5) = 0;
	virtual void ActualGridToDrawGridMicroVirtual(int32_t unknown1, int32_t unknown2, int32_t& unknown3, int32_t& unknown4) = 0;
	virtual void DrawGridToActualGridMicroVirtual(int32_t unknown1, int32_t unknown2, int32_t& unknown3, int32_t& unknown4) = 0;
	virtual bool IsEmpty(int32_t unknown1, int32_t unknown2) = 0;
	virtual bool IsEmptyDrawGrid(int32_t unknown1, int32_t unknown2) = 0;
	virtual intptr_t GetSprite(int32_t unknown1, int32_t unknown2) = 0; // Returns cISC3CitySpriteInst*
	virtual intptr_t GetSpriteDrawGrid(int32_t unknown1, int32_t unknown2) = 0;  // Returns cISC3CitySpriteInst*
	virtual uint8_t GetCellSizeOfSprite(int32_t unknown1, int32_t unknown2) = 0;

	virtual bool InCellBounds(int32_t unknown1, int32_t unknown2) = 0;
	virtual uint32_t GetActualGridSizeX() = 0;
	virtual uint32_t GetActualGridSizeZ() = 0;
	virtual uint32_t GetDrawGridSizeX() = 0;
	virtual uint32_t GetDrawGridSizeZ() = 0;
	virtual uint8_t GetAltitudeActualGrid(int32_t unknown1, int32_t unknown2) = 0;
	virtual void GetRegCellForSprite(int32_t unknown1, int32_t unknown2, int32_t& unknown3, int32_t& unknown4) = 0;
	virtual void GetCityPixelRectForSprite(int32_t unknown1, int32_t unknown2, cRZRect& unknown3) = 0;
	virtual void GetVisibleAreaRectangle(cRZRect* unknown1, cRZRect* unknown2) = 0;
	virtual void GetPixelSizeOfSprite(int32_t unknown1, int32_t unknown2, uint32_t& unknown3, uint32_t& unknown4) = 0;
	virtual void SpritePixelToMicroActualGrid(int32_t unknown1, int32_t unknown2, uint32_t unknown3, uint32_t unknown4, int32_t& unknown5, int32_t& unknown6, int32_t& unknown7) = 0;
	virtual void GetEntireCityBaseRect(cRZRect& unknown1, bool unknown2) = 0;
	virtual uint32_t GetLowestTerrainAltitude(bool drawGrid) const = 0;
	virtual uint32_t GetHighestTerrainAltitude(bool drawGrid) const = 0;
	virtual uint32_t GetLowestSpriteHeight(bool unknown1) const = 0;
	virtual uint32_t GetHighestSpriteHeight(bool unknown1) = 0;
	virtual uint32_t GetHeightOfSprite(int32_t unknown1, int32_t unknown2, bool unknown3) = 0;
	virtual void Position3DToWindowPixel(int32_t unknown1, int32_t unknown2, int32_t unknown3, int32_t& unknown4, int32_t& unknown5) = 0;
	virtual bool IsPointWithinCityOutline(int32_t unknown1, int32_t unknown2, bool unknown3) = 0;
	virtual uint32_t GetUnusedCellCount() = 0;
	virtual bool InMicroCellBounds(int32_t x, int32_t z) = 0;

	virtual bool InsertDynamicSprite(cISC3CitySpriteInst* pSprite, int32_t unknown2, int32_t unknown3, int32_t unknown4, bool unknown5, int32_t unknown6, uint32_t unknown7) = 0;
	virtual bool RemoveDynamicSprite(cISC3CitySpriteInst* pSprite, int32_t unknown2, int32_t unknown3, bool unknown4) = 0;
	virtual bool RemoveAllDynamicSprites(bool invalidateScreen) = 0;
	virtual bool MoveDynamicSprite(cISC3CitySpriteInst* pSprite, int32_t unknown2, int32_t unknown3, int32_t unknown4, int32_t unknown5, int32_t unknown6) = 0;
	virtual bool ChangeDynamicSprite(cISC3CitySpriteInst* pSprite, int32_t unknown2, int32_t unknown3, uint32_t unknown4, void* unknown5) = 0;
	virtual void InvalidateDynamicSprite(DynamicSpriteRecord* pRecord) = 0;
	virtual void GetDynamicSpritesInVolume(int32_t unknown1, int32_t unknown2, int32_t unknown3, int32_t unknown4, int32_t unknown5, int32_t unknown6, cISC3CitySpriteInst** unknown7, uint32_t& unknown8) = 0;
	virtual bool IsChanged() = 0;
	virtual bool IsAbleToModifyOccupants() = 0;
	virtual cIGZBuffer* GetCityBufferPtr() = 0;
	virtual void GetTilingOriginWindowPixel(int32_t& unknown1, int32_t& unknown2) = 0;
	virtual bool UpdateCitySurface(cRZRect const& rect) = 0;
	virtual void AddDirtyRect(cRZRect const& rect, bool unknown2, uint32_t unknown3) = 0;
	virtual void AddDirtyRectWindowPixelUnits(cRZRect const& rect, bool unknown2, uint32_t unknown3) = 0;
	virtual uint32_t AddOverlayBuffer(cRZPoint const& unknown1, cIGZBuffer* unknown2, cIGZBuffer* unknown3) = 0;
	virtual void RemoveOverlayBuffer(uint32_t unknown1) = 0;
	virtual void MoveOverlayBuffer(cRZPoint* unknown1, uint32_t unknown2) = 0;
	virtual void InvalidateEntireScreen() = 0;
	virtual void UpdateAllDirtyRects(bool unknown1, bool unknown2) = 0;
	virtual void UpdateCitySurfaceAll() = 0;
	virtual int32_t IncrementAlphaBlendCount(int32_t count) = 0;
	virtual void CopyAllExtraRectsToBackBuffer() = 0;
	virtual void CopyEntireAreaToBackBuffer() = 0;

	virtual bool IsBackgroundTaskEnabled() = 0;
	virtual bool EnableBackgroundTask(bool enableBackgroundTask, bool processBackgroundTasks) = 0;
	virtual bool IsBackgroundTaskIdle() = 0;
	virtual bool IsCurrentZoomAndRotationLoaded() = 0;
	virtual bool IsZoomAndRotationLoaded(int32_t zoom, int32_t rotation) = 0;
	virtual bool LoadZoomAndRotation(int32_t zoom, int32_t rotation) = 0;

	virtual bool WindowPixelToActualGrid_NonInline(int32_t unknown1, int32_t unknown2, int32_t& unknown3, int32_t& unknown4, bool unknown5, tagCitySpriteCellMapPickObject* unknown6, cISC3OccTest* unknown7) = 0;
	virtual void ActualGridToWindowPixel_NonInline(int32_t unknown1, int32_t unknown2, int32_t& unknown3, int32_t& unknown4) = 0;
	virtual void CityPixelToWindowPixel_NonInline(int32_t unknown1, int32_t unknown2, int32_t& unknown3, int32_t& unknown4) = 0;
	virtual void WindowPixelToCityPixel_NonInline(int32_t unknown1, int32_t unknown2, int32_t& unknown3, int32_t& unknown4) = 0;
	virtual bool CityPixelToDrawGrid_NonInline(int32_t unknown1, int32_t unknown2, int32_t& unknown3, int32_t& unknown4, bool unknown5, tagCitySpriteCellMapPickObject* unknown6, cISC3OccTest* unknown7) = 0;
	virtual void CityPixelToDrawGridNoAltitude_NonInline(int32_t unknown1, int32_t unknown2, int32_t& unknown3, int32_t& unknown4) = 0;
	virtual void DrawGridToCityPixel_NonInline(int32_t unknown1, int32_t unknown2, int32_t& unknown3, int32_t& unknown4) = 0;
	virtual void DrawGridToCityPixelNoAltitude_NonInline(int32_t unknown1, int32_t unknown2, int32_t& unknown3, int32_t& unknown4) = 0;
	virtual bool CityPixelToActualGrid_NonInline(int32_t unknown1, int32_t unknown2, int32_t& unknown3, int32_t& unknown4, bool unknown5, tagCitySpriteCellMapPickObject* unknown6, cISC3OccTest* unknown7) = 0;
	virtual void ActualGridToCityPixel_NonInline(int32_t unknown1, int32_t unknown2, int32_t& unknown3, int32_t& unknown4) = 0;
	virtual void ActualGridToCityPixelNoAltitude_NonInline(int32_t unknown1, int32_t unknown2, int32_t& unknown3, int32_t& unknown4) = 0;
	virtual void DrawGridToActualGrid_NonInline(int32_t unknown1, int32_t unknown2, int32_t& unknown3, int32_t& unknown4) = 0;
	virtual void ActualGridToDrawGrid_NonInline(int32_t unknown1, int32_t unknown2, int32_t& unknown3, int32_t& unknown4) = 0;
	virtual bool MicroActualGridToCityPixel_NonInline(int32_t unknown1, int32_t unknown2, int32_t unknown3, int32_t& unknown4, int32_t& unknown5) = 0;
};