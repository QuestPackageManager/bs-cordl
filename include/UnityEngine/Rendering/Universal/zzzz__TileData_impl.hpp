#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/TileData.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TileData_def.hpp"
// Ctor Parameters [CppParam { name: "tileID", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "listBitMask", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "relLightOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unused", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::TileData::TileData(uint32_t tileID, uint32_t listBitMask, uint32_t relLightOffset, uint32_t unused) noexcept {
  this->tileID = tileID;
  this->listBitMask = listBitMask;
  this->relLightOffset = relLightOffset;
  this->unused = unused;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::TileData::TileData() {}
