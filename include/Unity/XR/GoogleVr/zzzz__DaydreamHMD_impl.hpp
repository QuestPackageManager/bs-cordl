#pragma once
// IWYU pragma private; include "Unity/XR/GoogleVr/DaydreamHMD.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRHMD_impl.hpp"
#include "Unity/XR/GoogleVr/zzzz__DaydreamHMD_def.hpp"
//  Writing Method size for method: ::Unity::XR::GoogleVr::DaydreamHMD._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::GoogleVr::DaydreamHMD::*)()>(&::Unity::XR::GoogleVr::DaydreamHMD::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64ccc44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::GoogleVr::DaydreamHMD*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::XR::GoogleVr::DaydreamHMD::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::GoogleVr::DaydreamHMD*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::XR::GoogleVr::DaydreamHMD* Unity::XR::GoogleVr::DaydreamHMD::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::GoogleVr::DaydreamHMD*>());
}
// Ctor Parameters []
constexpr ::Unity::XR::GoogleVr::DaydreamHMD::DaydreamHMD() {}
