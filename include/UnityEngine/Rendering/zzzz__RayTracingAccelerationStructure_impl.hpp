#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RayTracingAccelerationStructure.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructureBuildFlags_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructure_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructureBuildFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructure_def.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingMeshInstanceConfig_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask::RayTracingAccelerationStructure_RayTracingModeMask(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask::RayTracingAccelerationStructure_RayTracingModeMask() {}
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask::Nothing{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask::Static{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask::DynamicTransform{
  static_cast<int32_t>(0x4)
};
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask::DynamicGeometry{
  static_cast<int32_t>(0x8)
};
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask::DynamicGeometryManualUpdate{
  static_cast<int32_t>(0x10)
};
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask::Everything{ static_cast<int32_t>(
    0x1e) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructure_ManagementMode::RayTracingAccelerationStructure_ManagementMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructure_ManagementMode::RayTracingAccelerationStructure_ManagementMode() {}
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructure_ManagementMode UnityEngine::Rendering::RayTracingAccelerationStructure_ManagementMode::Manual{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructure_ManagementMode UnityEngine::Rendering::RayTracingAccelerationStructure_ManagementMode::Automatic{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings.set_buildFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings::*)(
    ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags)>(&::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings::set_buildFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f677dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings>(),
                                                             { "set_buildFlags", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings.set_relativeOrigin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings::set_relativeOrigin)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f677e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings>(),
                                                                                           { "set_relativeOrigin", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings::*)()>(
    &::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6f677f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings::set_buildFlags(::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings>(),
                                                           { "set_buildFlags", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings::set_relativeOrigin(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings>(),
                                                                                         { "set_relativeOrigin", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_buildFlags_k__BackingField", ty: "::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "_relativeOrigin_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings::RayTracingAccelerationStructure_BuildSettings(
    ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags _buildFlags_k__BackingField, ::UnityEngine::Vector3 _relativeOrigin_k__BackingField) noexcept {
  this->_buildFlags_k__BackingField = _buildFlags_k__BackingField;
  this->_relativeOrigin_k__BackingField = _relativeOrigin_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings::RayTracingAccelerationStructure_BuildSettings() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings.set_buildFlagsStaticGeometries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings::*)(
    ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags)>(&::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings::set_buildFlagsStaticGeometries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f67850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings>(),
                                                             { "set_buildFlagsStaticGeometries", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings.set_buildFlagsDynamicGeometries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings::*)(
    ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags)>(&::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings::set_buildFlagsDynamicGeometries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f67858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings>(),
                                                             { "set_buildFlagsDynamicGeometries", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings.set_enableCompaction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings::*)(bool)>(
    &::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings::set_enableCompaction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f67860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings>(), { "set_enableCompaction", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings::*)()>(
    &::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6f67868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RayTracingAccelerationStructure_Settings::set_buildFlagsStaticGeometries(::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings>(),
                                                           { "set_buildFlagsStaticGeometries", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure_Settings::set_buildFlagsDynamicGeometries(::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings>(),
                                                           { "set_buildFlagsDynamicGeometries", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure_Settings::set_enableCompaction(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings>(), { "set_enableCompaction", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure_Settings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "managementMode", ty: "::UnityEngine::Rendering::RayTracingAccelerationStructure_ManagementMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam {
// name: "rayTracingModeMask", ty: "::UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "layerMask",
// ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_buildFlagsStaticGeometries_k__BackingField", ty:
// "::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_buildFlagsDynamicGeometries_k__BackingField", ty:
// "::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_enableCompaction_k__BackingField", ty: "bool",
// modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings::RayTracingAccelerationStructure_Settings(
    ::UnityEngine::Rendering::RayTracingAccelerationStructure_ManagementMode managementMode, ::UnityEngine::Rendering::RayTracingAccelerationStructure_RayTracingModeMask rayTracingModeMask,
    int32_t layerMask, ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags _buildFlagsStaticGeometries_k__BackingField,
    ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags _buildFlagsDynamicGeometries_k__BackingField, bool _enableCompaction_k__BackingField) noexcept {
  this->managementMode = managementMode;
  this->rayTracingModeMask = rayTracingModeMask;
  this->layerMask = layerMask;
  this->_buildFlagsStaticGeometries_k__BackingField = _buildFlagsStaticGeometries_k__BackingField;
  this->_buildFlagsDynamicGeometries_k__BackingField = _buildFlagsDynamicGeometries_k__BackingField;
  this->_enableCompaction_k__BackingField = _enableCompaction_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings::RayTracingAccelerationStructure_Settings() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Rendering::RayTracingAccelerationStructure*)>(
    &::UnityEngine::Rendering::RayTracingAccelerationStructure_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6f67884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure_BindingsMarshaller*>(),
                                                             { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr
UnityEngine::Rendering::RayTracingAccelerationStructure_BindingsMarshaller::ConvertToNative(::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure_BindingsMarshaller*>(),
                                                                                         { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, rayTracingAccelerationStructure);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructure_BindingsMarshaller::RayTracingAccelerationStructure_BindingsMarshaller() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingAccelerationStructure::*)()>(&::UnityEngine::Rendering::RayTracingAccelerationStructure::Finalize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f66e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingAccelerationStructure::*)()>(&::UnityEngine::Rendering::RayTracingAccelerationStructure::Dispose)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6f66eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingAccelerationStructure::*)(bool)>(
    &::UnityEngine::Rendering::RayTracingAccelerationStructure::Dispose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6f66e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingAccelerationStructure::*)(::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings)>(
    &::UnityEngine::Rendering::RayTracingAccelerationStructure::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6f66f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.AddInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RayTracingAccelerationStructure::*)(
    ::by_ref<::UnityEngine::Rendering::RayTracingMeshInstanceConfig>, ::UnityEngine::Matrix4x4, ::System::Nullable_1<::UnityEngine::Matrix4x4>, uint32_t)>(
    &::UnityEngine::Rendering::RayTracingAccelerationStructure::AddInstance)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x6f6702c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                             { "AddInstance",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RayTracingMeshInstanceConfig>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(),
                                                                 ::i2c::type_of<::System::Nullable_1<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.RemoveInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingAccelerationStructure::*)(int32_t)>(
    &::UnityEngine::Rendering::RayTracingAccelerationStructure::RemoveInstance)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f67364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(), { "RemoveInstance", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.UpdateInstanceTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingAccelerationStructure::*)(int32_t, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::RayTracingAccelerationStructure::UpdateInstanceTransform)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6f673c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                             { "UpdateInstanceTransform", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.UpdateInstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingAccelerationStructure::*)(int32_t, uint32_t)>(
    &::UnityEngine::Rendering::RayTracingAccelerationStructure::UpdateInstanceID)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f67454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                                                           { "UpdateInstanceID", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.UpdateInstanceMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingAccelerationStructure::*)(int32_t, uint32_t)>(
    &::UnityEngine::Rendering::RayTracingAccelerationStructure::UpdateInstanceMask)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f674c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                                                           { "UpdateInstanceMask", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.ClearInstances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingAccelerationStructure::*)()>(
    &::UnityEngine::Rendering::RayTracingAccelerationStructure::ClearInstances)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6f6752c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(), { "ClearInstances", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings)>(
    &::UnityEngine::Rendering::RayTracingAccelerationStructure::Create)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f66ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                             { "Create", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RayTracingAccelerationStructure*)>(&::UnityEngine::Rendering::RayTracingAccelerationStructure::Destroy)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6f66f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                                                           { "Destroy", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.RemoveInstance_InstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingAccelerationStructure::*)(int32_t)>(
    &::UnityEngine::Rendering::RayTracingAccelerationStructure::RemoveInstance_InstanceID)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6f67368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(), { "RemoveInstance_InstanceID", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.UpdateInstanceTransform_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingAccelerationStructure::*)(int32_t, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::RayTracingAccelerationStructure::UpdateInstanceTransform_Handle)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6f673ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                             { "UpdateInstanceTransform_Handle", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.UpdateInstanceMask_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingAccelerationStructure::*)(int32_t, uint32_t)>(
    &::UnityEngine::Rendering::RayTracingAccelerationStructure::UpdateInstanceMask_Handle)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6f674c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                                                           { "UpdateInstanceMask_Handle", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.UpdateInstanceID_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingAccelerationStructure::*)(int32_t, uint32_t)>(
    &::UnityEngine::Rendering::RayTracingAccelerationStructure::UpdateInstanceID_Handle)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6f67458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                                                           { "UpdateInstanceID_Handle", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.AddMeshInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RayTracingAccelerationStructure::*)(::UnityEngine::Rendering::RayTracingMeshInstanceConfig,
                                                                                                                              ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4*, uint32_t)>(
    &::UnityEngine::Rendering::RayTracingAccelerationStructure::AddMeshInstance)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6f672e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                             { "AddMeshInstance",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RayTracingMeshInstanceConfig>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(),
                                                                 ::i2c::type_of<::UnityEngine::Matrix4x4*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.ClearInstances_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Rendering::RayTracingAccelerationStructure::ClearInstances_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f6757c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(), { "ClearInstances_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.Create_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings>)>(
    &::UnityEngine::Rendering::RayTracingAccelerationStructure::Create_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f675b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                             { "Create_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.Destroy_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Rendering::RayTracingAccelerationStructure::Destroy_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f675f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(), { "Destroy_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.RemoveInstance_InstanceID_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Rendering::RayTracingAccelerationStructure::RemoveInstance_InstanceID_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f67630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                             { "RemoveInstance_InstanceID_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.UpdateInstanceTransform_Handle_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::Rendering::RayTracingAccelerationStructure::UpdateInstanceTransform_Handle_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f67674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                         { "UpdateInstanceTransform_Handle_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.UpdateInstanceMask_Handle_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, uint32_t)>(&::UnityEngine::Rendering::RayTracingAccelerationStructure::UpdateInstanceMask_Handle_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f676c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                { "UpdateInstanceMask_Handle_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.UpdateInstanceID_Handle_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, uint32_t)>(&::UnityEngine::Rendering::RayTracingAccelerationStructure::UpdateInstanceID_Handle_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f6771c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                { "UpdateInstanceID_Handle_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.AddMeshInstance_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Rendering::RayTracingMeshInstanceConfig>, ::by_ref<::UnityEngine::Matrix4x4>,
                                                                   ::UnityEngine::Matrix4x4*, uint32_t)>(&::UnityEngine::Rendering::RayTracingAccelerationStructure::AddMeshInstance_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f67770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                             { "AddMeshInstance_Injected",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RayTracingMeshInstanceConfig>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::UnityEngine::Matrix4x4*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::Rendering::RayTracingAccelerationStructure::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::Rendering::RayTracingAccelerationStructure::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void UnityEngine::Rendering::RayTracingAccelerationStructure::__cordl_internal_set_m_Ptr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure::_ctor(::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings settings) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline int32_t UnityEngine::Rendering::RayTracingAccelerationStructure::AddInstance(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RayTracingMeshInstanceConfig> config,
                                                                                    ::UnityEngine::Matrix4x4 matrix,
                                                                                    /* [DefaultValue("null")] */ ::System::Nullable_1<::UnityEngine::Matrix4x4> prevMatrix, uint32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                           { "AddInstance",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RayTracingMeshInstanceConfig>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(),
                                                               ::i2c::type_of<::System::Nullable_1<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, config, matrix, prevMatrix, id);
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure::RemoveInstance(int32_t handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(), { "RemoveInstance", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure::UpdateInstanceTransform(int32_t handle, ::UnityEngine::Matrix4x4 matrix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                           { "UpdateInstanceTransform", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, matrix);
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure::UpdateInstanceID(int32_t handle, uint32_t instanceID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                                                         { "UpdateInstanceID", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, instanceID);
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure::UpdateInstanceMask(int32_t handle, uint32_t mask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                                                         { "UpdateInstanceMask", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, mask);
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure::ClearInstances() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(), { "ClearInstances", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Rendering::RayTracingAccelerationStructure::Create(::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings desc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                                                         { "Create", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, desc);
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure::Destroy(::UnityEngine::Rendering::RayTracingAccelerationStructure* accelStruct) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                                                         { "Destroy", {}, { ::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, accelStruct);
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure::RemoveInstance_InstanceID(int32_t instanceID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(), { "RemoveInstance_InstanceID", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceID);
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure::UpdateInstanceTransform_Handle(int32_t handle, ::UnityEngine::Matrix4x4 matrix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                           { "UpdateInstanceTransform_Handle", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, matrix);
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure::UpdateInstanceMask_Handle(int32_t handle, uint32_t mask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                                                         { "UpdateInstanceMask_Handle", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, mask);
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure::UpdateInstanceID_Handle(int32_t handle, uint32_t id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                                                         { "UpdateInstanceID_Handle", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, id);
}
inline int32_t UnityEngine::Rendering::RayTracingAccelerationStructure::AddMeshInstance(::UnityEngine::Rendering::RayTracingMeshInstanceConfig config, ::UnityEngine::Matrix4x4 matrix,
                                                                                        ::UnityEngine::Matrix4x4* prevMatrix, uint32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                           { "AddMeshInstance",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RayTracingMeshInstanceConfig>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(),
                                                               ::i2c::type_of<::UnityEngine::Matrix4x4*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, config, matrix, prevMatrix, id);
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure::ClearInstances_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(), { "ClearInstances_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr UnityEngine::Rendering::RayTracingAccelerationStructure::Create_Injected(::by_ref<::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings> desc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                           { "Create_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, desc);
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure::Destroy_Injected(::System::IntPtr accelStruct) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(), { "Destroy_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, accelStruct);
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure::RemoveInstance_InstanceID_Injected(::System::IntPtr _unity_self, int32_t instanceID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                           { "RemoveInstance_InstanceID_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, instanceID);
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure::UpdateInstanceTransform_Handle_Injected(::System::IntPtr _unity_self, int32_t handle, ::by_ref<::UnityEngine::Matrix4x4> matrix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                          { "UpdateInstanceTransform_Handle_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, handle, matrix);
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure::UpdateInstanceMask_Handle_Injected(::System::IntPtr _unity_self, int32_t handle, uint32_t mask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                              { "UpdateInstanceMask_Handle_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, handle, mask);
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure::UpdateInstanceID_Handle_Injected(::System::IntPtr _unity_self, int32_t handle, uint32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                           { "UpdateInstanceID_Handle_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, handle, id);
}
inline int32_t UnityEngine::Rendering::RayTracingAccelerationStructure::AddMeshInstance_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::RayTracingMeshInstanceConfig> config,
                                                                                                 ::by_ref<::UnityEngine::Matrix4x4> matrix, ::UnityEngine::Matrix4x4* prevMatrix, uint32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                                                           { "AddMeshInstance_Injected",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RayTracingMeshInstanceConfig>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::UnityEngine::Matrix4x4*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, config, matrix, prevMatrix, id);
}
inline ::UnityEngine::Rendering::RayTracingAccelerationStructure*
UnityEngine::Rendering::RayTracingAccelerationStructure::New_ctor(::UnityEngine::Rendering::RayTracingAccelerationStructure_Settings settings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(settings));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::RayTracingAccelerationStructure::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::RayTracingAccelerationStructure::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructure::RayTracingAccelerationStructure() {}
