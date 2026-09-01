#pragma once
// IWYU pragma private; include "OVR\OpenVR\VREvent_t_Packed.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Data_t_impl.hpp"
#include "OVR/OpenVR/zzzz__VREvent_t_Packed_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_t_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::VREvent_t_Packed._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::VREvent_t_Packed::*)(::OVR::OpenVR::VREvent_t)>(&::OVR::OpenVR::VREvent_t_Packed::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e48110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::VREvent_t_Packed>(), { ".ctor", {}, { ::i2c::type_of<::OVR::OpenVR::VREvent_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::VREvent_t_Packed.Unpack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::VREvent_t_Packed::*)(::by_ref<::OVR::OpenVR::VREvent_t>)>(&::OVR::OpenVR::VREvent_t_Packed::Unpack)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e431b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::VREvent_t_Packed>(), { "Unpack", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::VREvent_t>>() } })));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::VREvent_t_Packed::_ctor(::OVR::OpenVR::VREvent_t unpacked) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::VREvent_t_Packed>(), { ".ctor", {}, { ::i2c::type_of<::OVR::OpenVR::VREvent_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, unpacked);
}
inline void OVR::OpenVR::VREvent_t_Packed::Unpack(::by_ref<::OVR::OpenVR::VREvent_t> unpacked) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::VREvent_t_Packed>(), { "Unpack", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::VREvent_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, unpacked);
}
// Ctor Parameters [CppParam { name: "eventType", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "trackedDeviceIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "eventAgeSeconds", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "::OVR::OpenVR::VREvent_Data_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_t_Packed::VREvent_t_Packed(uint32_t eventType, uint32_t trackedDeviceIndex, float_t eventAgeSeconds, ::OVR::OpenVR::VREvent_Data_t data) noexcept {
  this->eventType = eventType;
  this->trackedDeviceIndex = trackedDeviceIndex;
  this->eventAgeSeconds = eventAgeSeconds;
  this->data = data;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VREvent_t_Packed::VREvent_t_Packed() {}
