#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRDisplaySubsystemDescriptor.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystemDescriptor_1_impl.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystemDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::XRDisplaySubsystemDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::XRDisplaySubsystemDescriptor::*)()>(&::UnityEngine::XR::XRDisplaySubsystemDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e35af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::XRDisplaySubsystemDescriptor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::XRDisplaySubsystemDescriptor* UnityEngine::XR::XRDisplaySubsystemDescriptor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::XRDisplaySubsystemDescriptor::XRDisplaySubsystemDescriptor() {}
