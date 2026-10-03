#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RayTracingMeshInstanceConfig.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__RayTracingMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LightProbeUsage_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructureBuildFlags_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingSubMeshFlags_impl.hpp"
#include "UnityEngine/zzzz__MotionVectorGenerationMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingMeshInstanceConfig_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__RayTracingMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructureBuildFlags_def.hpp"
#include "UnityEngine/zzzz__LightProbeProxyVolume_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingMeshInstanceConfig._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingMeshInstanceConfig::*)()>(&::UnityEngine::Rendering::RayTracingMeshInstanceConfig::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6f66c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingMeshInstanceConfig>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingMeshInstanceConfig._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingMeshInstanceConfig::*)(::UnityEngine::Mesh*, uint32_t, ::UnityEngine::Material*)>(
    &::UnityEngine::Rendering::RayTracingMeshInstanceConfig::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6f66d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingMeshInstanceConfig>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingMeshInstanceConfig.set_rayTracingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingMeshInstanceConfig::*)(::UnityEngine::Experimental::Rendering::RayTracingMode)>(
    &::UnityEngine::Rendering::RayTracingMeshInstanceConfig::set_rayTracingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f66e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingMeshInstanceConfig>(),
                                                             { "set_rayTracingMode", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::RayTracingMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingMeshInstanceConfig.set_dynamicGeometry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingMeshInstanceConfig::*)(bool)>(
    &::UnityEngine::Rendering::RayTracingMeshInstanceConfig::set_dynamicGeometry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f66e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingMeshInstanceConfig>(), { "set_dynamicGeometry", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingMeshInstanceConfig.set_accelerationStructureBuildFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingMeshInstanceConfig::*)(::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags)>(
    &::UnityEngine::Rendering::RayTracingMeshInstanceConfig::set_accelerationStructureBuildFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f66e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingMeshInstanceConfig>(),
                                                { "set_accelerationStructureBuildFlags", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingMeshInstanceConfig.set_accelerationStructureBuildFlagsOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingMeshInstanceConfig::*)(bool)>(
    &::UnityEngine::Rendering::RayTracingMeshInstanceConfig::set_accelerationStructureBuildFlagsOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f66e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingMeshInstanceConfig>(),
                                                                                           { "set_accelerationStructureBuildFlagsOverride", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RayTracingMeshInstanceConfig::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingMeshInstanceConfig>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RayTracingMeshInstanceConfig::_ctor(::UnityEngine::Mesh* mesh, uint32_t subMeshIndex, ::UnityEngine::Material* material) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingMeshInstanceConfig>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mesh, subMeshIndex, material);
}
inline void UnityEngine::Rendering::RayTracingMeshInstanceConfig::set_rayTracingMode(::UnityEngine::Experimental::Rendering::RayTracingMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingMeshInstanceConfig>(),
                                                                                         { "set_rayTracingMode", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::RayTracingMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RayTracingMeshInstanceConfig::set_dynamicGeometry(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingMeshInstanceConfig>(), { "set_dynamicGeometry", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RayTracingMeshInstanceConfig::set_accelerationStructureBuildFlags(::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingMeshInstanceConfig>(),
                                                           { "set_accelerationStructureBuildFlags", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RayTracingMeshInstanceConfig::set_accelerationStructureBuildFlagsOverride(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingMeshInstanceConfig>(), { "set_accelerationStructureBuildFlagsOverride", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "subMeshIndex", ty: "uint32_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "subMeshFlags", ty: "::UnityEngine::Rendering::RayTracingSubMeshFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam {
// name: "_rayTracingMode_k__BackingField", ty: "::UnityEngine::Experimental::Rendering::RayTracingMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "_dynamicGeometry_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "materialProperties", ty: "::UnityEngine::MaterialPropertyBlock*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "enableTriangleCulling", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "frontTriangleCounterClockwise", ty: "bool", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "layer", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "renderingLayerMask", ty: "uint32_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "mask", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "motionVectorMode", ty:
// "::UnityEngine::MotionVectorGenerationMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lightProbeUsage", ty: "::UnityEngine::Rendering::LightProbeUsage", modifiers:
// "", def_value: Some("{}"), comment: None }, CppParam { name: "lightProbeProxyVolume", ty: "::UnityW<::UnityEngine::LightProbeProxyVolume>", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "_accelerationStructureBuildFlags_k__BackingField", ty: "::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags", modifiers: "", def_value: Some("{}"), comment: None
// }, CppParam { name: "_accelerationStructureBuildFlagsOverride_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meshLod", ty: "int32_t",
// modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RayTracingMeshInstanceConfig::RayTracingMeshInstanceConfig(
    ::UnityW<::UnityEngine::Mesh> mesh, uint32_t subMeshIndex, ::UnityEngine::Rendering::RayTracingSubMeshFlags subMeshFlags,
    ::UnityEngine::Experimental::Rendering::RayTracingMode _rayTracingMode_k__BackingField, bool _dynamicGeometry_k__BackingField, ::UnityW<::UnityEngine::Material> material,
    ::UnityEngine::MaterialPropertyBlock* materialProperties, bool enableTriangleCulling, bool frontTriangleCounterClockwise, int32_t layer, uint32_t renderingLayerMask, uint32_t mask,
    ::UnityEngine::MotionVectorGenerationMode motionVectorMode, ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::UnityW<::UnityEngine::LightProbeProxyVolume> lightProbeProxyVolume,
    ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags _accelerationStructureBuildFlags_k__BackingField, bool _accelerationStructureBuildFlagsOverride_k__BackingField,
    int32_t meshLod) noexcept {
  this->mesh = mesh;
  this->subMeshIndex = subMeshIndex;
  this->subMeshFlags = subMeshFlags;
  this->_rayTracingMode_k__BackingField = _rayTracingMode_k__BackingField;
  this->_dynamicGeometry_k__BackingField = _dynamicGeometry_k__BackingField;
  this->material = material;
  this->materialProperties = materialProperties;
  this->enableTriangleCulling = enableTriangleCulling;
  this->frontTriangleCounterClockwise = frontTriangleCounterClockwise;
  this->layer = layer;
  this->renderingLayerMask = renderingLayerMask;
  this->mask = mask;
  this->motionVectorMode = motionVectorMode;
  this->lightProbeUsage = lightProbeUsage;
  this->lightProbeProxyVolume = lightProbeProxyVolume;
  this->_accelerationStructureBuildFlags_k__BackingField = _accelerationStructureBuildFlags_k__BackingField;
  this->_accelerationStructureBuildFlagsOverride_k__BackingField = _accelerationStructureBuildFlagsOverride_k__BackingField;
  this->meshLod = meshLod;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RayTracingMeshInstanceConfig::RayTracingMeshInstanceConfig() {}
