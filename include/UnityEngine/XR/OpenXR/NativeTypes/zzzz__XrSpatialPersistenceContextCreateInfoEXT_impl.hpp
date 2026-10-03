#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialPersistenceContextCreateInfoEXT.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialPersistenceScopeEXT_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialPersistenceContextCreateInfoEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialPersistenceScopeEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e44d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT.get_next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT::get_next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e44d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT>(), { "get_next", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT.get_scope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT (
    ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT::*)()>(&::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT::get_scope)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e44d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT>(), { "get_scope", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT::*)(
    void*, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e44d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT>(),
                                                             { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT::*)(
    ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e40d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT::get_type() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType>(*this, ___internal_method);
}
inline void* UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT::get_next() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT>(), { "get_next", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT::get_scope() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT>(), { "get_scope", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT>(*this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT::_ctor(void* next, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT scope) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT>(),
                                                           { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, next, scope);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT::_ctor(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT scope) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, scope);
}
// Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "_next_k__BackingField", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_scope_k__BackingField", ty:
// "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT::XrSpatialPersistenceContextCreateInfoEXT(
    ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField,
    ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT _scope_k__BackingField) noexcept {
  this->_type_k__BackingField = _type_k__BackingField;
  this->_next_k__BackingField = _next_k__BackingField;
  this->_scope_k__BackingField = _scope_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextCreateInfoEXT::XrSpatialPersistenceContextCreateInfoEXT() {}
