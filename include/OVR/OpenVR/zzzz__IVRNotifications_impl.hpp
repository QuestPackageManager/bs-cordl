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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRNotifications__CreateNotification::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRNotifications__CreateNotification::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x406bfac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRNotifications__CreateNotification*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRNotifications__CreateNotification.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRNotificationError (::OVR::OpenVR::IVRNotifications__CreateNotification::*)(
    uint64_t, uint64_t, ::OVR::OpenVR::EVRNotificationType, ::StringW, ::OVR::OpenVR::EVRNotificationStyle, ::ByRef<::OVR::OpenVR::NotificationBitmap_t>, ::ByRef<uint32_t>)>(
    &::OVR::OpenVR::IVRNotifications__CreateNotification::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x406c038;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRNotifications__CreateNotification*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRNotifications__CreateNotification*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRNotifications__CreateNotification.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRNotifications__CreateNotification::*)(uint64_t, uint64_t, ::OVR::OpenVR::EVRNotificationType, ::StringW, ::OVR::OpenVR::EVRNotificationStyle,
                                                            ::ByRef<::OVR::OpenVR::NotificationBitmap_t>, ::ByRef<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRNotifications__CreateNotification::BeginInvoke)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x406c050;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRNotifications__CreateNotification*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRNotifications__CreateNotification*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRNotifications__CreateNotification.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRNotificationError (::OVR::OpenVR::IVRNotifications__CreateNotification::*)(
    ::ByRef<::OVR::OpenVR::NotificationBitmap_t>, ::ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRNotifications__CreateNotification::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x406c1b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRNotifications__CreateNotification*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRNotifications__CreateNotification*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRNotifications__CreateNotification::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRNotifications__CreateNotification*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRNotificationError OVR::OpenVR::IVRNotifications__CreateNotification::Invoke(uint64_t ulOverlayHandle, uint64_t ulUserValue, ::OVR::OpenVR::EVRNotificationType type,
                                                                                                     ::StringW pchText, ::OVR::OpenVR::EVRNotificationStyle style,
                                                                                                     ::ByRef<::OVR::OpenVR::NotificationBitmap_t> pImage, ::ByRef<uint32_t> pNotificationId) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRNotifications__CreateNotification*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRNotificationError, false>(this, ___internal_method, ulOverlayHandle, ulUserValue, type, pchText, style, pImage, pNotificationId);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRNotifications__CreateNotification::BeginInvoke(uint64_t ulOverlayHandle, uint64_t ulUserValue, ::OVR::OpenVR::EVRNotificationType type,
                                                                                              ::StringW pchText, ::OVR::OpenVR::EVRNotificationStyle style,
                                                                                              ::ByRef<::OVR::OpenVR::NotificationBitmap_t> pImage, ::ByRef<uint32_t> pNotificationId,
                                                                                              ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRNotifications__CreateNotification*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, ulUserValue, type, pchText, style, pImage, pNotificationId, callback, object);
}
inline ::OVR::OpenVR::EVRNotificationError OVR::OpenVR::IVRNotifications__CreateNotification::EndInvoke(::ByRef<::OVR::OpenVR::NotificationBitmap_t> pImage, ::ByRef<uint32_t> pNotificationId,
                                                                                                        ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRNotifications__CreateNotification*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRNotificationError, false>(this, ___internal_method, pImage, pNotificationId, result);
}
inline ::OVR::OpenVR::IVRNotifications__CreateNotification* OVR::OpenVR::IVRNotifications__CreateNotification::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRNotifications__CreateNotification*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRNotifications__CreateNotification::IVRNotifications__CreateNotification() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRNotifications__RemoveNotification._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRNotifications__RemoveNotification::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRNotifications__RemoveNotification::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x406c1e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRNotifications__RemoveNotification*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRNotifications__RemoveNotification.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRNotificationError (::OVR::OpenVR::IVRNotifications__RemoveNotification::*)(uint32_t)>(
    &::OVR::OpenVR::IVRNotifications__RemoveNotification::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406c274;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRNotifications__RemoveNotification*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRNotifications__RemoveNotification*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRNotifications__RemoveNotification.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRNotifications__RemoveNotification::*)(uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRNotifications__RemoveNotification::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x406c288;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRNotifications__RemoveNotification*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRNotifications__RemoveNotification*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRNotifications__RemoveNotification.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRNotificationError (::OVR::OpenVR::IVRNotifications__RemoveNotification::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRNotifications__RemoveNotification::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406c30c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRNotifications__RemoveNotification*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRNotifications__RemoveNotification*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRNotifications__RemoveNotification::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRNotifications__RemoveNotification*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRNotificationError OVR::OpenVR::IVRNotifications__RemoveNotification::Invoke(uint32_t notificationId) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRNotifications__RemoveNotification*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRNotificationError, false>(this, ___internal_method, notificationId);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRNotifications__RemoveNotification::BeginInvoke(uint32_t notificationId, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRNotifications__RemoveNotification*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, notificationId, callback, object);
}
inline ::OVR::OpenVR::EVRNotificationError OVR::OpenVR::IVRNotifications__RemoveNotification::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRNotifications__RemoveNotification*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRNotificationError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRNotifications__RemoveNotification* OVR::OpenVR::IVRNotifications__RemoveNotification::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRNotifications__RemoveNotification*>(object, method));
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
