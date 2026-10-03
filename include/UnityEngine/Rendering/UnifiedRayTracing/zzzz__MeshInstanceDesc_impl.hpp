#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/MeshInstanceDesc.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__MeshInstanceDesc_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc::*)(::UnityEngine::Mesh*, int32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e0cf28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc::_ctor(::UnityEngine::Mesh* mesh, int32_t subMeshIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mesh, subMeshIndex);
}
// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "subMeshIndex", ty: "int32_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "localToWorldMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mask", ty:
// "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instanceID", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "enableTriangleCulling", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "frontTriangleCounterClockwise", ty: "bool", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "opaqueGeometry", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc::MeshInstanceDesc(::UnityW<::UnityEngine::Mesh> mesh, int32_t subMeshIndex, ::UnityEngine::Matrix4x4 localToWorldMatrix,
                                                                                          uint32_t mask, uint32_t instanceID, bool enableTriangleCulling, bool frontTriangleCounterClockwise,
                                                                                          bool opaqueGeometry) noexcept {
  this->mesh = mesh;
  this->subMeshIndex = subMeshIndex;
  this->localToWorldMatrix = localToWorldMatrix;
  this->mask = mask;
  this->instanceID = instanceID;
  this->enableTriangleCulling = enableTriangleCulling;
  this->frontTriangleCounterClockwise = frontTriangleCounterClockwise;
  this->opaqueGeometry = opaqueGeometry;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc::MeshInstanceDesc() {}
