#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialEntityFromIdCreateInfoEXT.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialEntityFromIdCreateInfoEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e436ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT.get_next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT::get_next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e436f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT>(), { "get_next", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT.get_entityId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT::get_entityId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e436fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT>(), { "get_entityId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT::*)(void*, uint64_t)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e43704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e3fa3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT::get_type() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType>(*this, ___internal_method);
}
inline void* UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT::get_next() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT>(), { "get_next", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
inline uint64_t UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT::get_entityId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT>(), { "get_entityId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT::_ctor(void* next, uint64_t entityId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, next, entityId);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT::_ctor(uint64_t entityId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, entityId);
}
// Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "_next_k__BackingField", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_entityId_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}"),
// comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT::XrSpatialEntityFromIdCreateInfoEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField,
                                                                                                                         void* _next_k__BackingField, uint64_t _entityId_k__BackingField) noexcept {
  this->_type_k__BackingField = _type_k__BackingField;
  this->_next_k__BackingField = _next_k__BackingField;
  this->_entityId_k__BackingField = _entityId_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityFromIdCreateInfoEXT::XrSpatialEntityFromIdCreateInfoEXT() {}
