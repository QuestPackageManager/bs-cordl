#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialEntityUnpersistInfoEXT.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrUuid_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialEntityUnpersistInfoEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrUuid_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e44fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT.get_next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT::get_next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e44fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT>(), { "get_next", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT.get_persistUuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT::get_persistUuid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e44fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT>(), { "get_persistUuid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT::*)(void*, ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e44fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT>(),
                                                             { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT::*)(::UnityEngine::XR::OpenXR::NativeTypes::XrUuid)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e4146c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT::get_type() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType>(*this, ___internal_method);
}
inline void* UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT::get_next() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT>(), { "get_next", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT::get_persistUuid() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT>(), { "get_persistUuid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>(*this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT::_ctor(void* next, ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid persistUuid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT>(),
                                                           { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, next, persistUuid);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT::_ctor(::UnityEngine::XR::OpenXR::NativeTypes::XrUuid persistUuid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, persistUuid);
}
// Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "_next_k__BackingField", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_persistUuid_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrUuid",
// modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT::XrSpatialEntityUnpersistInfoEXT(
    ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField, ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid _persistUuid_k__BackingField) noexcept {
  this->_type_k__BackingField = _type_k__BackingField;
  this->_next_k__BackingField = _next_k__BackingField;
  this->_persistUuid_k__BackingField = _persistUuid_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityUnpersistInfoEXT::XrSpatialEntityUnpersistInfoEXT() {}
