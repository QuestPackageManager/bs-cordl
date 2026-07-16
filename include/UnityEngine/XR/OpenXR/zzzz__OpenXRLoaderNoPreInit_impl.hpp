#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRLoaderNoPreInit.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRLoaderBase_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRLoaderNoPreInit_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit::*)()>(&::UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x69eed98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit* UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit::OpenXRLoaderNoPreInit() {}
