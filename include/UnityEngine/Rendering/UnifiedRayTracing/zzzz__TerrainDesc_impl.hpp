#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/TerrainDesc.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__TerrainDesc_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc::*)(::UnityEngine::Terrain*)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e01f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Terrain*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc::_ctor(::UnityEngine::Terrain* terrain) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Terrain*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, terrain);
}
// Ctor Parameters [CppParam { name: "terrain", ty: "::UnityW<::UnityEngine::Terrain>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localToWorldMatrix", ty:
// "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mask", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "renderingLayerMask", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "materialID", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "enableTriangleCulling", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "frontTriangleCounterClockwise", ty: "bool", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc::TerrainDesc(::UnityW<::UnityEngine::Terrain> terrain, ::UnityEngine::Matrix4x4 localToWorldMatrix, uint32_t mask,
                                                                                uint32_t renderingLayerMask, uint32_t materialID, bool enableTriangleCulling,
                                                                                bool frontTriangleCounterClockwise) noexcept {
  this->terrain = terrain;
  this->localToWorldMatrix = localToWorldMatrix;
  this->mask = mask;
  this->renderingLayerMask = renderingLayerMask;
  this->materialID = materialID;
  this->enableTriangleCulling = enableTriangleCulling;
  this->frontTriangleCounterClockwise = frontTriangleCounterClockwise;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc::TerrainDesc() {}
