#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Rooms_def.hpp"
#include "Oculus/Platform/Models/zzzz__RoomInviteNotification_def.hpp"
#include "Oculus/Platform/Models/zzzz__RoomList_def.hpp"
#include "Oculus/Platform/Models/zzzz__Room_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
#include "Oculus/Platform/zzzz__RoomJoinPolicy_def.hpp"
#include "Oculus/Platform/zzzz__RoomMembershipLockStatus_def.hpp"
#include "Oculus/Platform/zzzz__RoomOptions_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Rooms.UpdateDataStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(uint64_t, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(
        &::Oculus::Platform::Rooms::UpdateDataStore)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x2720154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "UpdateDataStore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Rooms.SetRoomInviteNotificationCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::__Message_1__Callback<::StringW>*)>(
    &::Oculus::Platform::Rooms::SetRoomInviteNotificationCallback)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2720474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "SetRoomInviteNotificationCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Rooms.CreateAndJoinPrivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(::Oculus::Platform::RoomJoinPolicy, uint32_t, bool)>(&::Oculus::Platform::Rooms::CreateAndJoinPrivate)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x27204ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "CreateAndJoinPrivate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::RoomJoinPolicy>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Rooms.CreateAndJoinPrivate2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(::Oculus::Platform::RoomJoinPolicy, uint32_t, ::Oculus::Platform::RoomOptions*)>(
        &::Oculus::Platform::Rooms::CreateAndJoinPrivate2)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2720664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "CreateAndJoinPrivate2", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::RoomJoinPolicy>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::RoomOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Rooms.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(uint64_t)>(&::Oculus::Platform::Rooms::Get)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x27207f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Rooms.GetCurrent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)()>(&::Oculus::Platform::Rooms::GetCurrent)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2720950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "GetCurrent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Rooms.GetCurrentForUser
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(uint64_t)>(
    &::Oculus::Platform::Rooms::GetCurrentForUser)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2720aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "GetCurrentForUser", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Rooms.GetInvitableUsers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* (*)()>(
    &::Oculus::Platform::Rooms::GetInvitableUsers)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2720c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "GetInvitableUsers",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Rooms.GetInvitableUsers2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* (*)(::Oculus::Platform::RoomOptions*)>(
    &::Oculus::Platform::Rooms::GetInvitableUsers2)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2720d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "GetInvitableUsers2", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::RoomOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Rooms.GetModeratedRooms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::RoomList*>* (*)()>(
    &::Oculus::Platform::Rooms::GetModeratedRooms)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2720ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "GetModeratedRooms",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Rooms.InviteUser
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(uint64_t, ::StringW)>(
    &::Oculus::Platform::Rooms::InviteUser)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x272102c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "InviteUser", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Rooms.Join
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(uint64_t, bool)>(
    &::Oculus::Platform::Rooms::Join)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x272119c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "Join", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Rooms.Join2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(uint64_t, ::Oculus::Platform::RoomOptions*)>(
    &::Oculus::Platform::Rooms::Join2)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x272130c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "Join2", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::RoomOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Rooms.KickUser
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(uint64_t, uint64_t, int32_t)>(
    &::Oculus::Platform::Rooms::KickUser)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2721490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "KickUser", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Rooms.LaunchInvitableUserFlow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)(uint64_t)>(&::Oculus::Platform::Rooms::LaunchInvitableUserFlow)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2721608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "LaunchInvitableUserFlow", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Rooms.Leave
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(uint64_t)>(&::Oculus::Platform::Rooms::Leave)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2721754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "Leave", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Rooms.SetDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(uint64_t, ::StringW)>(
    &::Oculus::Platform::Rooms::SetDescription)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x27218b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "SetDescription", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Rooms.UpdateMembershipLockStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(uint64_t, ::Oculus::Platform::RoomMembershipLockStatus)>(&::Oculus::Platform::Rooms::UpdateMembershipLockStatus)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2721a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "UpdateMembershipLockStatus", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::RoomMembershipLockStatus>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Rooms.UpdateOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)(uint64_t, uint64_t)>(&::Oculus::Platform::Rooms::UpdateOwner)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2721b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "UpdateOwner", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Rooms.UpdatePrivateRoomJoinPolicy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(uint64_t, ::Oculus::Platform::RoomJoinPolicy)>(
    &::Oculus::Platform::Rooms::UpdatePrivateRoomJoinPolicy)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2721cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "UpdatePrivateRoomJoinPolicy", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::RoomJoinPolicy>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Rooms.SetRoomInviteAcceptedNotificationCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::__Message_1__Callback<::StringW>*)>(
    &::Oculus::Platform::Rooms::SetRoomInviteAcceptedNotificationCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2720478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "SetRoomInviteAcceptedNotificationCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Rooms.SetRoomInviteReceivedNotificationCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::RoomInviteNotification*>*)>(
    &::Oculus::Platform::Rooms::SetRoomInviteReceivedNotificationCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2721e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "SetRoomInviteReceivedNotificationCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::RoomInviteNotification*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Rooms.SetUpdateNotificationCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::Room*>*)>(
    &::Oculus::Platform::Rooms::SetUpdateNotificationCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2721ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "SetUpdateNotificationCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::Room*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Rooms.GetNextRoomListPage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::RoomList*>* (*)(::Oculus::Platform::Models::RoomList*)>(
    &::Oculus::Platform::Rooms::GetNextRoomListPage)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2721f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "GetNextRoomListPage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::RoomList*>::get() })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::UpdateDataStore(uint64_t roomID,
                                                                                                                  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "UpdateDataStore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>*, false>(nullptr, ___internal_method, roomID, data);
}
inline void Oculus::Platform::Rooms::SetRoomInviteNotificationCallback(::Oculus::Platform::__Message_1__Callback<::StringW>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "SetRoomInviteNotificationCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
/// @param subscribeToUpdates: bool (default: false)
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::CreateAndJoinPrivate(::Oculus::Platform::RoomJoinPolicy joinPolicy, uint32_t maxUsers,
                                                                                                                       bool subscribeToUpdates) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "CreateAndJoinPrivate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::RoomJoinPolicy>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>*, false>(nullptr, ___internal_method, joinPolicy, maxUsers, subscribeToUpdates);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::CreateAndJoinPrivate2(::Oculus::Platform::RoomJoinPolicy joinPolicy, uint32_t maxUsers,
                                                                                                                        ::Oculus::Platform::RoomOptions* roomOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "CreateAndJoinPrivate2", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::RoomJoinPolicy>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::RoomOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>*, false>(nullptr, ___internal_method, joinPolicy, maxUsers, roomOptions);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::Get(uint64_t roomID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>*, false>(nullptr, ___internal_method, roomID);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::GetCurrent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "GetCurrent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>*, false>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::GetCurrentForUser(uint64_t userID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "GetCurrentForUser", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>*, false>(nullptr, ___internal_method, userID);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* Oculus::Platform::Rooms::GetInvitableUsers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "GetInvitableUsers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>*, false>(nullptr, ___internal_method);
}
/// @param roomOptions: ::Oculus::Platform::RoomOptions* (default: nullptr)
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* Oculus::Platform::Rooms::GetInvitableUsers2(::Oculus::Platform::RoomOptions* roomOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "GetInvitableUsers2", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::RoomOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>*, false>(nullptr, ___internal_method, roomOptions);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::RoomList*>* Oculus::Platform::Rooms::GetModeratedRooms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "GetModeratedRooms",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::RoomList*>*, false>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::InviteUser(uint64_t roomID, ::StringW inviteToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "InviteUser", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>*, false>(nullptr, ___internal_method, roomID, inviteToken);
}
/// @param subscribeToUpdates: bool (default: false)
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::Join(uint64_t roomID, bool subscribeToUpdates) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "Join", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>*, false>(nullptr, ___internal_method, roomID, subscribeToUpdates);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::Join2(uint64_t roomID, ::Oculus::Platform::RoomOptions* roomOptions) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "Join2", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::RoomOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>*, false>(nullptr, ___internal_method, roomID, roomOptions);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::KickUser(uint64_t roomID, uint64_t userID, int32_t kickDurationSeconds) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "KickUser", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>*, false>(nullptr, ___internal_method, roomID, userID, kickDurationSeconds);
}
inline ::Oculus::Platform::Request* Oculus::Platform::Rooms::LaunchInvitableUserFlow(uint64_t roomID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "LaunchInvitableUserFlow", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*, false>(nullptr, ___internal_method, roomID);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::Leave(uint64_t roomID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "Leave", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>*, false>(nullptr, ___internal_method, roomID);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::SetDescription(uint64_t roomID, ::StringW description) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "SetDescription", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>*, false>(nullptr, ___internal_method, roomID, description);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::UpdateMembershipLockStatus(uint64_t roomID,
                                                                                                                             ::Oculus::Platform::RoomMembershipLockStatus membershipLockStatus) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "UpdateMembershipLockStatus", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::RoomMembershipLockStatus>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>*, false>(nullptr, ___internal_method, roomID, membershipLockStatus);
}
inline ::Oculus::Platform::Request* Oculus::Platform::Rooms::UpdateOwner(uint64_t roomID, uint64_t userID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "UpdateOwner", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*, false>(nullptr, ___internal_method, roomID, userID);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::UpdatePrivateRoomJoinPolicy(uint64_t roomID, ::Oculus::Platform::RoomJoinPolicy newJoinPolicy) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "UpdatePrivateRoomJoinPolicy", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::RoomJoinPolicy>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>*, false>(nullptr, ___internal_method, roomID, newJoinPolicy);
}
inline void Oculus::Platform::Rooms::SetRoomInviteAcceptedNotificationCallback(::Oculus::Platform::__Message_1__Callback<::StringW>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "SetRoomInviteAcceptedNotificationCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
inline void Oculus::Platform::Rooms::SetRoomInviteReceivedNotificationCallback(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::RoomInviteNotification*>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "SetRoomInviteReceivedNotificationCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::RoomInviteNotification*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
inline void Oculus::Platform::Rooms::SetUpdateNotificationCallback(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::Room*>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "SetUpdateNotificationCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::Room*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::RoomList*>* Oculus::Platform::Rooms::GetNextRoomListPage(::Oculus::Platform::Models::RoomList* list) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Rooms*>::get(), "GetNextRoomListPage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::RoomList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::RoomList*>*, false>(nullptr, ___internal_method, list);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Rooms::Rooms() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
