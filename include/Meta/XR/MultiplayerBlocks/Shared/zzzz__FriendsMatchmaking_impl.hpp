#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/FriendsMatchmaking.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__FriendsMatchmaking_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__FriendsMatchmaking_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__PlatformInfo_def.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceJoinIntent_def.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceLeaveIntent_def.hpp"
#include "Oculus/Platform/Models/zzzz__InvitePanelResultInfo_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchInvitePanelFlowResult_def.hpp"
#include "Oculus/Platform/zzzz__GroupPresenceOptions_def.hpp"
#include "Oculus/Platform/zzzz__InviteOptions_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "Oculus/Platform/zzzz__RosterOptions_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58c5c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0._LaunchFriendsInvitePanelAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*)>(
        &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::_LaunchFriendsInvitePanelAsync_b__0)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x58c6664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0*>::get(), "<LaunchFriendsInvitePanelAsync>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>*&
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::__cordl_internal_get_tcs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>* const&
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::__cordl_internal_get_tcs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::__cordl_internal_set_tcs(
    ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tcs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::_LaunchFriendsInvitePanelAsync_b__0(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0*>::get(), "<LaunchFriendsInvitePanelAsync>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::FriendsMatchmaking___c__DisplayClass21_0() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58c5da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0._LaunchRosterPanelAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::*)(
    ::Oculus::Platform::Message*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::_LaunchRosterPanelAsync_b__0)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x58c674c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0*>::get(), "<LaunchRosterPanelAsync>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::__cordl_internal_get_tcs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>* const&
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::__cordl_internal_get_tcs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
constexpr void
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tcs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::_LaunchRosterPanelAsync_b__0(::Oculus::Platform::Message* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0*>::get(), "<LaunchRosterPanelAsync>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::FriendsMatchmaking___c__DisplayClass23_0() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58c6120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0._ClearGroupPresence_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::*)(
    ::Oculus::Platform::Message*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::_ClearGroupPresence_b__0)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x58c6834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0*>::get(), "<ClearGroupPresence>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::__cordl_internal_get_tcs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>* const&
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::__cordl_internal_get_tcs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
constexpr void
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tcs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::_ClearGroupPresence_b__0(::Oculus::Platform::Message* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0*>::get(), "<ClearGroupPresence>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::FriendsMatchmaking___c__DisplayClass28_0() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58c625c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0._SetGroupPresence_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::*)(
    ::Oculus::Platform::Message*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::_SetGroupPresence_b__0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58c691c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0*>::get(), "<SetGroupPresence>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::__cordl_internal_get_tcs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>* const&
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::__cordl_internal_get_tcs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
constexpr void
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tcs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::_SetGroupPresence_b__0(::Oculus::Platform::Message* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0*>::get(), "<SetGroupPresence>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::FriendsMatchmaking___c__DisplayClass29_0() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x58c6980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58c6c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking>", modifiers: "", def_value: Some("{}") }, CppParam { name: "roomId", ty: "::StringW", modifiers: "", def_value: Some("{}") },
// CppParam { name: "roomPassword", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25::FriendsMatchmaking__JoinRoom_d__25(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking> __4__this, ::StringW roomId,
    ::StringW roomPassword, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->roomId = roomId;
  this->roomPassword = roomPassword;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25::FriendsMatchmaking__JoinRoom_d__25() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31::MoveNext)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x58c6c78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c6ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "message", ty:
// "::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31::FriendsMatchmaking__OnJoinIntentReceived_d__31(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>* message,
    ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->message = message;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31::FriendsMatchmaking__OnJoinIntentReceived_d__31() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x58c6ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c7068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "result", ty:
// "::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24::FriendsMatchmaking__OnRoomOperationResult_d__24(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult result,
    ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->result = result;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24::FriendsMatchmaking__OnRoomOperationResult_d__24() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x58c7070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58c7384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking>", modifiers: "", def_value: Some("{}") }, CppParam { name: "roomId", ty: "::StringW", modifiers: "", def_value: Some("{}") },
// CppParam { name: "roomPassword", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_i_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27::FriendsMatchmaking__RegisterGameRoom_d__27(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking> __4__this, ::StringW roomId,
    ::StringW roomPassword, int32_t _i_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->roomId = roomId;
  this->roomPassword = roomPassword;
  this->_i_5__2 = _i_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27::FriendsMatchmaking__RegisterGameRoom_d__27() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.get_DestinationApi
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::get_DestinationApi)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c51f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "get_DestinationApi",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.set_DestinationApi
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(::StringW)>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::set_DestinationApi)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c5200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "set_DestinationApi",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.get_InviteMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::get_InviteMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c5208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "get_InviteMessage",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.set_InviteMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(::StringW)>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::set_InviteMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c5210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "set_InviteMessage",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.get_MaxRetries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::get_MaxRetries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c5218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "get_MaxRetries",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.set_MaxRetries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(uint32_t)>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::set_MaxRetries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c5220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "set_MaxRetries",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::Awake)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x58c5228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "Awake",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnEnable)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x58c56dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "OnEnable",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnDisable)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x58c58c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "OnDisable",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.LaunchFriendsInvitePanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::LaunchFriendsInvitePanel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c5aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "LaunchFriendsInvitePanel",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.LaunchFriendsInvitePanelAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>* (
        ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(::Oculus::Platform::InviteOptions*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::LaunchFriendsInvitePanelAsync)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x58c5aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "LaunchFriendsInvitePanelAsync",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::InviteOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.LaunchRosterPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::LaunchRosterPanel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c5c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "LaunchRosterPanel",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.LaunchRosterPanelAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>* (
    ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(::Oculus::Platform::RosterOptions*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::LaunchRosterPanelAsync)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x58c5c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "LaunchRosterPanelAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::RosterOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.OnRoomOperationResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(
    ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnRoomOperationResult)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x58c5da4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.JoinRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(::StringW, ::StringW)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::JoinRoom)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x58c5e60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.ClearGroupPresenceCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::ClearGroupPresenceCallback)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58c5f24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.RegisterGameRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(::StringW, ::StringW)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::RegisterGameRoom)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x58c6058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "RegisterGameRoom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.ClearGroupPresence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>* (*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::ClearGroupPresence)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x58c5f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "ClearGroupPresence",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.SetGroupPresence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>* (*)(::Oculus::Platform::GroupPresenceOptions*)>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::SetGroupPresence)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x58c6124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "SetGroupPresence", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::GroupPresenceOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.OnEntitlementFinished
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(
    ::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnEntitlementFinished)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x58c6260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "OnEntitlementFinished", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.OnJoinIntentReceived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnJoinIntentReceived)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x58c6384;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.OnInvitationsSent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnInvitationsSent)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x58c6430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "OnInvitationsSent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.OnLeaveIntentNotification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnLeaveIntentNotification)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x58c64a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "OnLeaveIntentNotification",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.GetGroupPresenceOptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::GroupPresenceOptions* (
    ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(::StringW, ::StringW)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::GetGroupPresenceOptions)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x58c6510;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58c65f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get_destinationApi() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationApi;
}
constexpr ::StringW const& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get_destinationApi() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationApi;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_set_destinationApi(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___destinationApi)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get_inviteMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inviteMessage;
}
constexpr ::StringW const& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get_inviteMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inviteMessage;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_set_inviteMessage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inviteMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get_maxRetries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxRetries;
}
constexpr uint32_t const& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get_maxRetries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxRetries;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_set_maxRetries(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxRetries = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>*&
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get_onMatchRequestFound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onMatchRequestFound;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>* const&
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get_onMatchRequestFound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onMatchRequestFound;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_set_onMatchRequestFound(
    ::UnityEngine::Events::UnityEvent_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onMatchRequestFound)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*>*&
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get_onInvitationsSent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onInvitationsSent;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*>* const&
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get_onInvitationsSent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onInvitationsSent;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_set_onInvitationsSent(
    ::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onInvitationsSent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*>*&
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get_onLeaveIntentReceived() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onLeaveIntentReceived;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*>* const&
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get_onLeaveIntentReceived() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onLeaveIntentReceived;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_set_onLeaveIntentReceived(
    ::UnityEngine::Events::UnityEvent_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onLeaveIntentReceived)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking>& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get__customMatchmaking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customMatchmaking;
}
constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking> const& Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_get__customMatchmaking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customMatchmaking;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::__cordl_internal_set__customMatchmaking(::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____customMatchmaking)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::get_DestinationApi() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(),
                                                                             "get_DestinationApi", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::set_DestinationApi(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "set_DestinationApi",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::get_InviteMessage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(),
                                                                             "get_InviteMessage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::set_InviteMessage(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "set_InviteMessage",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline uint32_t Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::get_MaxRetries() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(),
                                                                             "get_MaxRetries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::set_MaxRetries(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "set_MaxRetries",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(),
                                                                             "Awake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(),
                                                                             "OnEnable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(),
                                                                             "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::LaunchFriendsInvitePanel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(),
                                                                             "LaunchFriendsInvitePanel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>*
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::LaunchFriendsInvitePanelAsync(::Oculus::Platform::InviteOptions* inviteOptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "LaunchFriendsInvitePanelAsync",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::InviteOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>*, false>(this, ___internal_method,
                                                                                                                                                                             inviteOptions);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::LaunchRosterPanel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(),
                                                                             "LaunchRosterPanel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>*
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::LaunchRosterPanelAsync(::Oculus::Platform::RosterOptions* rosterOptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "LaunchRosterPanelAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::RosterOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>*, false>(this, ___internal_method, rosterOptions);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnRoomOperationResult(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::System::Threading::Tasks::Task* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::JoinRoom(::StringW roomId, ::StringW roomPassword) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, roomId, roomPassword);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::ClearGroupPresenceCallback() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::RegisterGameRoom(::StringW roomId, ::StringW roomPassword) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "RegisterGameRoom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, roomId, roomPassword);
}
inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::ClearGroupPresence() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(),
                                                                             "ClearGroupPresence", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>*, false>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>*
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::SetGroupPresence(::Oculus::Platform::GroupPresenceOptions* groupPresenceOptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "SetGroupPresence", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::GroupPresenceOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>*, false>(nullptr, ___internal_method, groupPresenceOptions);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnEntitlementFinished(::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "OnEntitlementFinished", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnJoinIntentReceived(::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>* message) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnInvitationsSent(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "OnInvitationsSent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnLeaveIntentNotification(::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), "OnLeaveIntentNotification", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::Oculus::Platform::GroupPresenceOptions* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::GetGroupPresenceOptions(::StringW roomId, ::StringW roomPassword) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::GroupPresenceOptions*, false>(this, ___internal_method, roomId, roomPassword);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::FriendsMatchmaking() {}
