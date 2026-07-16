#pragma once
// IWYU pragma private; include "Unity/XR/OpenVR/ViveLighthouse.hpp"
#include "UnityEngine/InputSystem/zzzz__TrackedDevice_impl.hpp"
#include "Unity/XR/OpenVR/zzzz__ViveLighthouse_def.hpp"
//  Writing Method size for method: ::Unity::XR::OpenVR::ViveLighthouse._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::ViveLighthouse::*)()>(&::Unity::XR::OpenVR::ViveLighthouse::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64cb7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::ViveLighthouse*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::XR::OpenVR::ViveLighthouse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::ViveLighthouse*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::XR::OpenVR::ViveLighthouse* Unity::XR::OpenVR::ViveLighthouse::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::OpenVR::ViveLighthouse*>());
}
// Ctor Parameters []
constexpr ::Unity::XR::OpenVR::ViveLighthouse::ViveLighthouse() {}
