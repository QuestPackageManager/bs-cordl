#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialPersistenceContextResultEXTExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialPersistenceContextResultEXTExtensions_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialPersistenceContextResultEXT_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXTExtensions.IsSuccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXTExtensions::IsSuccess)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e445f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXTExtensions*>(),
                                                             { "IsSuccess", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXTExtensions.IsError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXTExtensions::IsError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e445fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXTExtensions*>(),
                                                             { "IsError", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXTExtensions::IsSuccess(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXTExtensions*>(),
                                                           { "IsSuccess", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXTExtensions::IsError(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXTExtensions*>(),
                                                           { "IsError", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXTExtensions::XrSpatialPersistenceContextResultEXTExtensions() {}
