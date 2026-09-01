#pragma once
// IWYU pragma private; include "OVR\OpenVR\CVRExtendedDisplay.hpp"
#include "OVR/OpenVR/zzzz__IVRExtendedDisplay_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVR/OpenVR/zzzz__CVRExtendedDisplay_def.hpp"
#include "OVR/OpenVR/zzzz__EVREye_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::CVRExtendedDisplay._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRExtendedDisplay::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRExtendedDisplay::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5e43d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRExtendedDisplay*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRExtendedDisplay.GetWindowBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRExtendedDisplay::*)(::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>)>(
    &::OVR::OpenVR::CVRExtendedDisplay::GetWindowBounds)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e43e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::OVR::OpenVR::CVRExtendedDisplay*>(),
            { "GetWindowBounds", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRExtendedDisplay.GetEyeOutputViewport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRExtendedDisplay::*)(::OVR::OpenVR::EVREye, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>,
                                                                                                   ::by_ref<uint32_t>)>(&::OVR::OpenVR::CVRExtendedDisplay::GetEyeOutputViewport)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e43e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRExtendedDisplay*>(),
                                                             { "GetEyeOutputViewport",
                                                               {},
                                                               { ::i2c::type_of<::OVR::OpenVR::EVREye>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(),
                                                                 ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRExtendedDisplay.GetDXGIOutputInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRExtendedDisplay::*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(&::OVR::OpenVR::CVRExtendedDisplay::GetDXGIOutputInfo)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e43eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRExtendedDisplay*>(),
                                                                                           { "GetDXGIOutputInfo", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::OVR::OpenVR::IVRExtendedDisplay& OVR::OpenVR::CVRExtendedDisplay::__cordl_internal_get_FnTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr ::OVR::OpenVR::IVRExtendedDisplay const& OVR::OpenVR::CVRExtendedDisplay::__cordl_internal_get_FnTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr void OVR::OpenVR::CVRExtendedDisplay::__cordl_internal_set_FnTable(::OVR::OpenVR::IVRExtendedDisplay value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FnTable = value;
}
inline void OVR::OpenVR::CVRExtendedDisplay::_ctor(::System::IntPtr pInterface) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRExtendedDisplay*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pInterface);
}
inline void OVR::OpenVR::CVRExtendedDisplay::GetWindowBounds(::by_ref<int32_t> pnX, ::by_ref<int32_t> pnY, ::by_ref<uint32_t> pnWidth, ::by_ref<uint32_t> pnHeight) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::OVR::OpenVR::CVRExtendedDisplay*>(),
          { "GetWindowBounds", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pnX, pnY, pnWidth, pnHeight);
}
inline void OVR::OpenVR::CVRExtendedDisplay::GetEyeOutputViewport(::OVR::OpenVR::EVREye eEye, ::by_ref<uint32_t> pnX, ::by_ref<uint32_t> pnY, ::by_ref<uint32_t> pnWidth, ::by_ref<uint32_t> pnHeight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRExtendedDisplay*>(),
                                                           { "GetEyeOutputViewport",
                                                             {},
                                                             { ::i2c::type_of<::OVR::OpenVR::EVREye>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(),
                                                               ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eEye, pnX, pnY, pnWidth, pnHeight);
}
inline void OVR::OpenVR::CVRExtendedDisplay::GetDXGIOutputInfo(::by_ref<int32_t> pnAdapterIndex, ::by_ref<int32_t> pnAdapterOutputIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRExtendedDisplay*>(),
                                                                                         { "GetDXGIOutputInfo", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pnAdapterIndex, pnAdapterOutputIndex);
}
inline ::OVR::OpenVR::CVRExtendedDisplay* OVR::OpenVR::CVRExtendedDisplay::New_ctor(::System::IntPtr pInterface) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::CVRExtendedDisplay*>(pInterface));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRExtendedDisplay::CVRExtendedDisplay() {}
