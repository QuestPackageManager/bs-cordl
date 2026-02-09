#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRNotifications.hpp"
#include "OVR/OpenVR/zzzz__IVRNotifications_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVR/OpenVR/zzzz__CVRNotifications_def.hpp"
#include "OVR/OpenVR/zzzz__EVRNotificationError_def.hpp"
#include "OVR/OpenVR/zzzz__EVRNotificationStyle_def.hpp"
#include "OVR/OpenVR/zzzz__EVRNotificationType_def.hpp"
#include "OVR/OpenVR/zzzz__NotificationBitmap_t_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::CVRNotifications._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRNotifications::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRNotifications::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5c98c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRNotifications*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRNotifications.CreateNotification
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRNotificationError (::OVR::OpenVR::CVRNotifications::*)(uint64_t, uint64_t, ::OVR::OpenVR::EVRNotificationType, ::StringW, ::OVR::OpenVR::EVRNotificationStyle, ::ByRef<::OVR::OpenVR::NotificationBitmap_t>, ::ByRef<uint32_t>)>(&::OVR::OpenVR::CVRNotifications::CreateNotification)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5c98d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRNotifications*>::get(),
                        "CreateNotification",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRNotificationType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRNotificationStyle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::NotificationBitmap_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRNotifications.RemoveNotification
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRNotificationError (::OVR::OpenVR::CVRNotifications::*)(uint32_t)>(&::OVR::OpenVR::CVRNotifications::RemoveNotification)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c98d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRNotifications*>::get(),
                        "RemoveNotification",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::OVR::OpenVR::IVRNotifications& OVR::OpenVR::CVRNotifications::__cordl_internal_get_FnTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FnTable;
}
constexpr ::OVR::OpenVR::IVRNotifications const& OVR::OpenVR::CVRNotifications::__cordl_internal_get_FnTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FnTable;
}
constexpr void OVR::OpenVR::CVRNotifications::__cordl_internal_set_FnTable(::OVR::OpenVR::IVRNotifications  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FnTable = value;
}
inline void OVR::OpenVR::CVRNotifications::_ctor(::System::IntPtr  pInterface)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRNotifications*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pInterface);
}
inline ::OVR::OpenVR::EVRNotificationError OVR::OpenVR::CVRNotifications::CreateNotification(uint64_t  ulOverlayHandle, uint64_t  ulUserValue, ::OVR::OpenVR::EVRNotificationType  type, ::StringW  pchText, ::OVR::OpenVR::EVRNotificationStyle  style, ::ByRef<::OVR::OpenVR::NotificationBitmap_t>  pImage, ::ByRef<uint32_t>  pNotificationId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRNotifications*>::get(),
                        "CreateNotification",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRNotificationType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRNotificationStyle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::NotificationBitmap_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRNotificationError, false>(this, ___internal_method, ulOverlayHandle, ulUserValue, type, pchText, style, pImage, pNotificationId);
}
inline ::OVR::OpenVR::EVRNotificationError OVR::OpenVR::CVRNotifications::RemoveNotification(uint32_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRNotifications*>::get(),
                        "RemoveNotification",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRNotificationError, false>(this, ___internal_method, notificationId);
}
inline ::OVR::OpenVR::CVRNotifications* OVR::OpenVR::CVRNotifications::New_ctor(::System::IntPtr  pInterface)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::CVRNotifications*>(pInterface));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRNotifications::CVRNotifications()   {
}
