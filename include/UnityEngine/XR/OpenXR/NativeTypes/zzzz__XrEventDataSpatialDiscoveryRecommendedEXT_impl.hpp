#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrEventDataSpatialDiscoveryRecommendedEXT.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrEventDataSpatialDiscoveryRecommendedEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType (
    ::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT::*)()>(&::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e42ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT.get_next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT::get_next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e42adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT>(), { "get_next", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT.get_spatialContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT::get_spatialContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e42ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT>(), { "get_spatialContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT::*)(void*, uint64_t)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e42aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e42b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT::get_type() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType>(*this, ___internal_method);
}
inline void* UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT::get_next() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT>(), { "get_next", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
inline uint64_t UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT::get_spatialContext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT>(), { "get_spatialContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT::_ctor(void* next, uint64_t spatialContext) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, next, spatialContext);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT::_ctor(uint64_t spatialContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, spatialContext);
}
// Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "_next_k__BackingField", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_spatialContext_k__BackingField", ty: "uint64_t", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT::XrEventDataSpatialDiscoveryRecommendedEXT(
    ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField, uint64_t _spatialContext_k__BackingField) noexcept {
  this->_type_k__BackingField = _type_k__BackingField;
  this->_next_k__BackingField = _next_k__BackingField;
  this->_spatialContext_k__BackingField = _spatialContext_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataSpatialDiscoveryRecommendedEXT::XrEventDataSpatialDiscoveryRecommendedEXT() {}
