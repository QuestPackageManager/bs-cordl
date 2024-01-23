#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRNotifications_def.hpp"
#include "OVR/OpenVR/zzzz__EVRNotificationError_def.hpp"
#include "OVR/OpenVR/zzzz__EVRNotificationStyle_def.hpp"
#include "OVR/OpenVR/zzzz__EVRNotificationType_def.hpp"
#include "OVR/OpenVR/zzzz__IVRNotifications_def.hpp"
#include "OVR/OpenVR/zzzz__NotificationBitmap_t_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::__IVRNotifications___CreateNotification._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRNotifications___CreateNotification::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRNotifications___CreateNotification::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27ea9ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___CreateNotification*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRNotifications___CreateNotification.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRNotificationError (::OVR::OpenVR::__IVRNotifications___CreateNotification::*)(
    uint64_t, uint64_t, ::OVR::OpenVR::EVRNotificationType, ::StringW, ::OVR::OpenVR::EVRNotificationStyle, ByRef<::OVR::OpenVR::NotificationBitmap_t>, ByRef<uint32_t>)>(
    &::OVR::OpenVR::__IVRNotifications___CreateNotification::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27eaa70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___CreateNotification*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___CreateNotification*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRNotifications___CreateNotification.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRNotifications___CreateNotification::*)(uint64_t, uint64_t, ::OVR::OpenVR::EVRNotificationType, ::StringW, ::OVR::OpenVR::EVRNotificationStyle,
                                                               ByRef<::OVR::OpenVR::NotificationBitmap_t>, ByRef<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVRNotifications___CreateNotification::BeginInvoke)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x27eaa88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___CreateNotification*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___CreateNotification*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRNotifications___CreateNotification.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRNotificationError (::OVR::OpenVR::__IVRNotifications___CreateNotification::*)(
    ByRef<::OVR::OpenVR::NotificationBitmap_t>, ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRNotifications___CreateNotification::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x27eabe4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___CreateNotification*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___CreateNotification*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRNotifications___CreateNotification* OVR::OpenVR::__IVRNotifications___CreateNotification::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRNotifications___CreateNotification*>(object, method));
}
inline void OVR::OpenVR::__IVRNotifications___CreateNotification::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___CreateNotification*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRNotificationError OVR::OpenVR::__IVRNotifications___CreateNotification::Invoke(uint64_t ulOverlayHandle, uint64_t ulUserValue, ::OVR::OpenVR::EVRNotificationType type,
                                                                                                        ::StringW pchText, ::OVR::OpenVR::EVRNotificationStyle style,
                                                                                                        ByRef<::OVR::OpenVR::NotificationBitmap_t> pImage, ByRef<uint32_t> pNotificationId) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___CreateNotification*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRNotificationError, false>(this, ___internal_method, ulOverlayHandle, ulUserValue, type, pchText, style, pImage, pNotificationId);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRNotifications___CreateNotification::BeginInvoke(uint64_t ulOverlayHandle, uint64_t ulUserValue, ::OVR::OpenVR::EVRNotificationType type,
                                                                                                 ::StringW pchText, ::OVR::OpenVR::EVRNotificationStyle style,
                                                                                                 ByRef<::OVR::OpenVR::NotificationBitmap_t> pImage, ByRef<uint32_t> pNotificationId,
                                                                                                 ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___CreateNotification*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, ulUserValue, type, pchText, style, pImage, pNotificationId, callback, object);
}
inline ::OVR::OpenVR::EVRNotificationError OVR::OpenVR::__IVRNotifications___CreateNotification::EndInvoke(ByRef<::OVR::OpenVR::NotificationBitmap_t> pImage, ByRef<uint32_t> pNotificationId,
                                                                                                           ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___CreateNotification*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRNotificationError, false>(this, ___internal_method, pImage, pNotificationId, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRNotifications___CreateNotification::__IVRNotifications___CreateNotification() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRNotifications___RemoveNotification._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRNotifications___RemoveNotification::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRNotifications___RemoveNotification::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27eac18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___RemoveNotification*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRNotifications___RemoveNotification.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRNotificationError (::OVR::OpenVR::__IVRNotifications___RemoveNotification::*)(uint32_t)>(
    &::OVR::OpenVR::__IVRNotifications___RemoveNotification::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27eacdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___RemoveNotification*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___RemoveNotification*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRNotifications___RemoveNotification.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRNotifications___RemoveNotification::*)(uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRNotifications___RemoveNotification::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x27eacf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___RemoveNotification*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___RemoveNotification*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRNotifications___RemoveNotification.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRNotificationError (::OVR::OpenVR::__IVRNotifications___RemoveNotification::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRNotifications___RemoveNotification::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27ead74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___RemoveNotification*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___RemoveNotification*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRNotifications___RemoveNotification* OVR::OpenVR::__IVRNotifications___RemoveNotification::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVRNotifications___RemoveNotification*>(object, method));
}
inline void OVR::OpenVR::__IVRNotifications___RemoveNotification::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___RemoveNotification*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRNotificationError OVR::OpenVR::__IVRNotifications___RemoveNotification::Invoke(uint32_t notificationId) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___RemoveNotification*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRNotificationError, false>(this, ___internal_method, notificationId);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRNotifications___RemoveNotification::BeginInvoke(uint32_t notificationId, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___RemoveNotification*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, notificationId, callback, object);
}
inline ::OVR::OpenVR::EVRNotificationError OVR::OpenVR::__IVRNotifications___RemoveNotification::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___RemoveNotification*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRNotificationError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRNotifications___RemoveNotification::__IVRNotifications___RemoveNotification() {}
// Ctor Parameters [CppParam { name: "CreateNotification", ty: "::OVR::OpenVR::__IVRNotifications___CreateNotification*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "RemoveNotification", ty: "::OVR::OpenVR::__IVRNotifications___RemoveNotification*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::OVR::OpenVR::IVRNotifications::IVRNotifications(::OVR::OpenVR::__IVRNotifications___CreateNotification* CreateNotification,
                                                            ::OVR::OpenVR::__IVRNotifications___RemoveNotification* RemoveNotification) noexcept {
  this->CreateNotification = CreateNotification;
  this->RemoveNotification = RemoveNotification;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRNotifications::IVRNotifications() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
