#pragma once
// IWYU pragma private; include "OVR\OpenVR\CVRNotifications.hpp"
#include "OVR/OpenVR/zzzz__IVRNotifications_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVR/OpenVR/zzzz__CVRNotifications_def.hpp"
#include "OVR/OpenVR/zzzz__EVRNotificationError_def.hpp"
#include "OVR/OpenVR/zzzz__EVRNotificationStyle_def.hpp"
#include "OVR/OpenVR/zzzz__EVRNotificationType_def.hpp"
#include "OVR/OpenVR/zzzz__NotificationBitmap_t_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::CVRNotifications._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRNotifications::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRNotifications::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5e46c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRNotifications*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRNotifications.CreateNotification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRNotificationError (::OVR::OpenVR::CVRNotifications::*)(
    uint64_t, uint64_t, ::OVR::OpenVR::EVRNotificationType, ::StringW, ::OVR::OpenVR::EVRNotificationStyle, ::by_ref<::OVR::OpenVR::NotificationBitmap_t>, ::by_ref<uint32_t>)>(
    &::OVR::OpenVR::CVRNotifications::CreateNotification)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e46d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRNotifications*>(),
                            { "CreateNotification",
                              {},
                              { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::EVRNotificationType>(), ::i2c::type_of<::StringW>(),
                                ::i2c::type_of<::OVR::OpenVR::EVRNotificationStyle>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::NotificationBitmap_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRNotifications.RemoveNotification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRNotificationError (::OVR::OpenVR::CVRNotifications::*)(uint32_t)>(&::OVR::OpenVR::CVRNotifications::RemoveNotification)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e46d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRNotifications*>(), { "RemoveNotification", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::OVR::OpenVR::IVRNotifications& OVR::OpenVR::CVRNotifications::__cordl_internal_get_FnTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr ::OVR::OpenVR::IVRNotifications const& OVR::OpenVR::CVRNotifications::__cordl_internal_get_FnTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr void OVR::OpenVR::CVRNotifications::__cordl_internal_set_FnTable(::OVR::OpenVR::IVRNotifications value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FnTable = value;
}
inline void OVR::OpenVR::CVRNotifications::_ctor(::System::IntPtr pInterface) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRNotifications*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pInterface);
}
inline ::OVR::OpenVR::EVRNotificationError OVR::OpenVR::CVRNotifications::CreateNotification(uint64_t ulOverlayHandle, uint64_t ulUserValue, ::OVR::OpenVR::EVRNotificationType type, ::StringW pchText,
                                                                                             ::OVR::OpenVR::EVRNotificationStyle style, ::by_ref<::OVR::OpenVR::NotificationBitmap_t> pImage,
                                                                                             ::by_ref<uint32_t> pNotificationId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRNotifications*>(),
                          { "CreateNotification",
                            {},
                            { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::OVR::OpenVR::EVRNotificationType>(), ::i2c::type_of<::StringW>(),
                              ::i2c::type_of<::OVR::OpenVR::EVRNotificationStyle>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::NotificationBitmap_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRNotificationError>(this, ___internal_method, ulOverlayHandle, ulUserValue, type, pchText, style, pImage, pNotificationId);
}
inline ::OVR::OpenVR::EVRNotificationError OVR::OpenVR::CVRNotifications::RemoveNotification(uint32_t notificationId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRNotifications*>(), { "RemoveNotification", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRNotificationError>(this, ___internal_method, notificationId);
}
inline ::OVR::OpenVR::CVRNotifications* OVR::OpenVR::CVRNotifications::New_ctor(::System::IntPtr pInterface) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::CVRNotifications*>(pInterface));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRNotifications::CVRNotifications() {}
