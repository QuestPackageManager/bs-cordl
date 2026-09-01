#pragma once
// IWYU pragma private; include "OVR\OpenVR\VRControllerState_t_Packed.hpp"
#include "OVR/OpenVR/zzzz__VRControllerAxis_t_impl.hpp"
#include "OVR/OpenVR/zzzz__VRControllerState_t_Packed_def.hpp"
#include "OVR/OpenVR/zzzz__VRControllerState_t_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::VRControllerState_t_Packed._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::VRControllerState_t_Packed::*)(::OVR::OpenVR::VRControllerState_t)>(&::OVR::OpenVR::VRControllerState_t_Packed::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e43440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::VRControllerState_t_Packed>(), { ".ctor", {}, { ::i2c::type_of<::OVR::OpenVR::VRControllerState_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::VRControllerState_t_Packed.Unpack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::VRControllerState_t_Packed::*)(::by_ref<::OVR::OpenVR::VRControllerState_t>)>(
    &::OVR::OpenVR::VRControllerState_t_Packed::Unpack)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e43484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::VRControllerState_t_Packed>(), { "Unpack", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::VRControllerState_t>>() } })));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::VRControllerState_t_Packed::_ctor(::OVR::OpenVR::VRControllerState_t unpacked) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::VRControllerState_t_Packed>(), { ".ctor", {}, { ::i2c::type_of<::OVR::OpenVR::VRControllerState_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, unpacked);
}
inline void OVR::OpenVR::VRControllerState_t_Packed::Unpack(::by_ref<::OVR::OpenVR::VRControllerState_t> unpacked) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::VRControllerState_t_Packed>(), { "Unpack", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::VRControllerState_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, unpacked);
}
// Ctor Parameters [CppParam { name: "unPacketNum", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ulButtonPressed", ty: "uint64_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "ulButtonTouched", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rAxis0", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "rAxis1", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rAxis2", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "rAxis3", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rAxis4", ty:
// "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VRControllerState_t_Packed::VRControllerState_t_Packed(uint32_t unPacketNum, uint64_t ulButtonPressed, uint64_t ulButtonTouched, ::OVR::OpenVR::VRControllerAxis_t rAxis0,
                                                                                ::OVR::OpenVR::VRControllerAxis_t rAxis1, ::OVR::OpenVR::VRControllerAxis_t rAxis2,
                                                                                ::OVR::OpenVR::VRControllerAxis_t rAxis3, ::OVR::OpenVR::VRControllerAxis_t rAxis4) noexcept {
  this->unPacketNum = unPacketNum;
  this->ulButtonPressed = ulButtonPressed;
  this->ulButtonTouched = ulButtonTouched;
  this->rAxis0 = rAxis0;
  this->rAxis1 = rAxis1;
  this->rAxis2 = rAxis2;
  this->rAxis3 = rAxis3;
  this->rAxis4 = rAxis4;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VRControllerState_t_Packed::VRControllerState_t_Packed() {}
