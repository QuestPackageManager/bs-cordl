#pragma once
// IWYU pragma private; include "UnityEngine\XR\OpenXR\NativeTypes\XrResultExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrResultExtensions_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrResult_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrResultExtensions.IsSuccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrResult)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrResultExtensions::IsSuccess)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69f6e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResultExtensions*>(),
                                                                                           { "IsSuccess", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrResultExtensions.IsUnqualifiedSuccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrResult)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrResultExtensions::IsUnqualifiedSuccess)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69f6e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResultExtensions*>(),
                                                                                           { "IsUnqualifiedSuccess", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrResultExtensions.IsError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrResult)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrResultExtensions::IsError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69f6e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResultExtensions*>(),
                                                                                           { "IsError", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::OpenXR::NativeTypes::XrResultExtensions::IsSuccess(::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrResult) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResultExtensions*>(),
                                                                                         { "IsSuccess", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, xrResult);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::XrResultExtensions::IsUnqualifiedSuccess(::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrResult) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResultExtensions*>(),
                                                                                         { "IsUnqualifiedSuccess", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, xrResult);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::XrResultExtensions::IsError(::UnityEngine::XR::OpenXR::NativeTypes::XrResult xrResult) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResultExtensions*>(),
                                                                                         { "IsError", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, xrResult);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrResultExtensions::XrResultExtensions() {}
