#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRNotifications.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRNotifications_def.hpp"
#include "OVR/OpenVR/zzzz__EVRNotificationError_def.hpp"
#include "OVR/OpenVR/zzzz__EVRNotificationStyle_def.hpp"
#include "OVR/OpenVR/zzzz__EVRNotificationType_def.hpp"
#include "OVR/OpenVR/zzzz__IVRNotifications_def.hpp"
#include "OVR/OpenVR/zzzz__NotificationBitmap_t_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::IVRNotifications__CreateNotification._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRNotifications__CreateNotification::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRNotifications__CreateNotification::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3c370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRNotifications__CreateNotification*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRNotifications__CreateNotification.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRNotificationError (::OVR::OpenVR::IVRNotifications__CreateNotification::*)(
    uint64_t, uint64_t, ::OVR::OpenVR::EVRNotificationType, ::StringW, ::OVR::OpenVR::EVRNotificationStyle, ::by_ref<::OVR::OpenVR::NotificationBitmap_t>, ::by_ref<uint32_t>)>(
    &::OVR::OpenVR::IVRNotifications__CreateNotification::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e3c3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRNotifications__CreateNotification*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRNotifications__CreateNotification*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRNotifications__CreateNotification.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRNotifications__CreateNotification::*)(uint64_t, uint64_t, ::OVR::OpenVR::EVRNotificationType, ::StringW, ::OVR::OpenVR::EVRNotificationStyle,
                                                            ::by_ref<::OVR::OpenVR::NotificationBitmap_t>, ::by_ref<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRNotifications__CreateNotification::BeginInvoke)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5e3c3f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRNotifications__CreateNotification*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRNotifications__CreateNotification*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRNotifications__CreateNotification.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRNotificationError (::OVR::OpenVR::IVRNotifications__CreateNotification::*)(
    ::by_ref<::OVR::OpenVR::NotificationBitmap_t>, ::by_ref<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRNotifications__CreateNotification::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e3c534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRNotifications__CreateNotification*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRNotifications__CreateNotification*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRNotifications__CreateNotification::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRNotifications__CreateNotification*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRNotificationError OVR::OpenVR::IVRNotifications__CreateNotification::Invoke(uint64_t ulOverlayHandle, uint64_t ulUserValue, ::OVR::OpenVR::EVRNotificationType type,
                                                                                                     ::StringW pchText, ::OVR::OpenVR::EVRNotificationStyle style,
                                                                                                     ::by_ref<::OVR::OpenVR::NotificationBitmap_t> pImage, ::by_ref<uint32_t> pNotificationId) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRNotifications__CreateNotification*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRNotificationError>(this, ___internal_method, ulOverlayHandle, ulUserValue, type, pchText, style, pImage, pNotificationId);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRNotifications__CreateNotification::BeginInvoke(uint64_t ulOverlayHandle, uint64_t ulUserValue, ::OVR::OpenVR::EVRNotificationType type,
                                                                                              ::StringW pchText, ::OVR::OpenVR::EVRNotificationStyle style,
                                                                                              ::by_ref<::OVR::OpenVR::NotificationBitmap_t> pImage, ::by_ref<uint32_t> pNotificationId,
                                                                                              ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRNotifications__CreateNotification*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, ulOverlayHandle, ulUserValue, type, pchText, style, pImage, pNotificationId, callback, object);
}
inline ::OVR::OpenVR::EVRNotificationError OVR::OpenVR::IVRNotifications__CreateNotification::EndInvoke(::by_ref<::OVR::OpenVR::NotificationBitmap_t> pImage, ::by_ref<uint32_t> pNotificationId,
                                                                                                        ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRNotifications__CreateNotification*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRNotificationError>(this, ___internal_method, pImage, pNotificationId, result);
}
inline ::OVR::OpenVR::IVRNotifications__CreateNotification* OVR::OpenVR::IVRNotifications__CreateNotification::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRNotifications__CreateNotification*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRNotifications__CreateNotification::IVRNotifications__CreateNotification() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRNotifications__RemoveNotification._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRNotifications__RemoveNotification::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRNotifications__RemoveNotification::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3c564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRNotifications__RemoveNotification*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRNotifications__RemoveNotification.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRNotificationError (::OVR::OpenVR::IVRNotifications__RemoveNotification::*)(uint32_t)>(
    &::OVR::OpenVR::IVRNotifications__RemoveNotification::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3c5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRNotifications__RemoveNotification*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRNotifications__RemoveNotification*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRNotifications__RemoveNotification.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRNotifications__RemoveNotification::*)(uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRNotifications__RemoveNotification::BeginInvoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e3c5e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRNotifications__RemoveNotification*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRNotifications__RemoveNotification*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRNotifications__RemoveNotification.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRNotificationError (::OVR::OpenVR::IVRNotifications__RemoveNotification::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRNotifications__RemoveNotification::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3c63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRNotifications__RemoveNotification*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRNotifications__RemoveNotification*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRNotifications__RemoveNotification::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRNotifications__RemoveNotification*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRNotificationError OVR::OpenVR::IVRNotifications__RemoveNotification::Invoke(uint32_t notificationId) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRNotifications__RemoveNotification*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRNotificationError>(this, ___internal_method, notificationId);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRNotifications__RemoveNotification::BeginInvoke(uint32_t notificationId, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRNotifications__RemoveNotification*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, notificationId, callback, object);
}
inline ::OVR::OpenVR::EVRNotificationError OVR::OpenVR::IVRNotifications__RemoveNotification::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRNotifications__RemoveNotification*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRNotificationError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRNotifications__RemoveNotification* OVR::OpenVR::IVRNotifications__RemoveNotification::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRNotifications__RemoveNotification*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRNotifications__RemoveNotification::IVRNotifications__RemoveNotification() {}
// Ctor Parameters [CppParam { name: "CreateNotification", ty: "::OVR::OpenVR::IVRNotifications__CreateNotification*", modifiers: "", def_value: Some("{}") }, CppParam { name: "RemoveNotification",
// ty: "::OVR::OpenVR::IVRNotifications__RemoveNotification*", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::IVRNotifications::IVRNotifications(::OVR::OpenVR::IVRNotifications__CreateNotification* CreateNotification,
                                                            ::OVR::OpenVR::IVRNotifications__RemoveNotification* RemoveNotification) noexcept {
  this->CreateNotification = CreateNotification;
  this->RemoveNotification = RemoveNotification;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRNotifications::IVRNotifications() {}
