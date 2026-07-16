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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a73178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0._LaunchFriendsInvitePanelAsync_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*)>(
        &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::_LaunchFriendsInvitePanelAsync_b__0)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5a73bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0*>(),
                                         { "<LaunchFriendsInvitePanelAsync>b__0", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>() } })));
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
  this->___tcs = value;
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::_LaunchFriendsInvitePanelAsync_b__0(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>* message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0*>(),
                                       { "<LaunchFriendsInvitePanelAsync>b__0", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass21_0::FriendsMatchmaking___c__DisplayClass21_0() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a732ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0._LaunchRosterPanelAsync_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::*)(::Oculus::Platform::Message*)>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::_LaunchRosterPanelAsync_b__0)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5a73c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0*>(),
                                                                                           { "<LaunchRosterPanelAsync>b__0", {}, { ::i2c::type_of<::Oculus::Platform::Message*>() } })));
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
  this->___tcs = value;
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::_LaunchRosterPanelAsync_b__0(::Oculus::Platform::Message* message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0*>(),
                                                                                         { "<LaunchRosterPanelAsync>b__0", {}, { ::i2c::type_of<::Oculus::Platform::Message*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass23_0::FriendsMatchmaking___c__DisplayClass23_0() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a7366c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0._ClearGroupPresence_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::*)(::Oculus::Platform::Message*)>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::_ClearGroupPresence_b__0)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5a73d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0*>(),
                                                                                           { "<ClearGroupPresence>b__0", {}, { ::i2c::type_of<::Oculus::Platform::Message*>() } })));
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
  this->___tcs = value;
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::_ClearGroupPresence_b__0(::Oculus::Platform::Message* message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0*>(),
                                                                                         { "<ClearGroupPresence>b__0", {}, { ::i2c::type_of<::Oculus::Platform::Message*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass28_0::FriendsMatchmaking___c__DisplayClass28_0() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a737a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0._SetGroupPresence_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::*)(::Oculus::Platform::Message*)>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::_SetGroupPresence_b__0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5a73e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0*>(),
                                                                                           { "<SetGroupPresence>b__0", {}, { ::i2c::type_of<::Oculus::Platform::Message*>() } })));
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
  this->___tcs = value;
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::_SetGroupPresence_b__0(::Oculus::Platform::Message* message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0*>(),
                                                                                         { "<SetGroupPresence>b__0", {}, { ::i2c::type_of<::Oculus::Platform::Message*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking___c__DisplayClass29_0::FriendsMatchmaking___c__DisplayClass29_0() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5a73ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a74158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__JoinRoom_d__25::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31::MoveNext)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5a741c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a74414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnJoinIntentReceived_d__31::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5a7441c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a745b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__OnRoomOperationResult_d__24::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x5a745bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a748d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking__RegisterGameRoom_d__27::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::get_DestinationApi)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a72744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), { "get_DestinationApi", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.set_DestinationApi
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(::StringW)>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::set_DestinationApi)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a7274c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), { "set_DestinationApi", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.get_InviteMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::get_InviteMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a72754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), { "get_InviteMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.set_InviteMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(::StringW)>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::set_InviteMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a7275c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), { "set_InviteMessage", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.get_MaxRetries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::get_MaxRetries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a72764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), { "get_MaxRetries", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.set_MaxRetries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(uint32_t)>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::set_MaxRetries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a7276c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), { "set_MaxRetries", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::Awake)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5a72774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnEnable)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5a72c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnDisable)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5a72e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.LaunchFriendsInvitePanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::LaunchFriendsInvitePanel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a72ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), { "LaunchFriendsInvitePanel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.LaunchFriendsInvitePanelAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>* (
    ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(::Oculus::Platform::InviteOptions*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::LaunchFriendsInvitePanelAsync)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5a72ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                                                                                           { "LaunchFriendsInvitePanelAsync", {}, { ::i2c::type_of<::Oculus::Platform::InviteOptions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.LaunchRosterPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::LaunchRosterPanel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a7317c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), { "LaunchRosterPanel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.LaunchRosterPanelAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>* (
    ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(::Oculus::Platform::RosterOptions*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::LaunchRosterPanelAsync)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5a73184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                                                                                           { "LaunchRosterPanelAsync", {}, { ::i2c::type_of<::Oculus::Platform::RosterOptions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.OnRoomOperationResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(
    ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnRoomOperationResult)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5a732f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.JoinRoom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(::StringW, ::StringW)>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::JoinRoom)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5a733ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.ClearGroupPresenceCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::ClearGroupPresenceCallback)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a73470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.RegisterGameRoom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(::StringW, ::StringW)>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::RegisterGameRoom)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5a735a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                                                                                           { "RegisterGameRoom", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.ClearGroupPresence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>* (*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::ClearGroupPresence)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5a73474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), { "ClearGroupPresence", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.SetGroupPresence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>* (*)(::Oculus::Platform::GroupPresenceOptions*)>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::SetGroupPresence)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5a73670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                                                                                           { "SetGroupPresence", {}, { ::i2c::type_of<::Oculus::Platform::GroupPresenceOptions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.OnEntitlementFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo)>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnEntitlementFinished)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5a737ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                                                             { "OnEntitlementFinished", {}, { ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.OnJoinIntentReceived
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnJoinIntentReceived)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a738d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.OnInvitationsSent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnInvitationsSent)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5a7397c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                                                { "OnInvitationsSent", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.OnLeaveIntentNotification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*)>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnLeaveIntentNotification)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5a739ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                                                { "OnLeaveIntentNotification", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking.GetGroupPresenceOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::GroupPresenceOptions* (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)(::StringW, ::StringW)>(
    &::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::GetGroupPresenceOptions)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5a73a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a73b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), { ".ctor", {}, {} })));
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
  this->___destinationApi = value;
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
  this->___inviteMessage = value;
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
  this->___onMatchRequestFound = value;
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
  this->___onInvitationsSent = value;
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
  this->___onLeaveIntentReceived = value;
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
  this->____customMatchmaking = value;
}
inline ::StringW Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::get_DestinationApi() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), { "get_DestinationApi", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::set_DestinationApi(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), { "set_DestinationApi", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::get_InviteMessage() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), { "get_InviteMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::set_InviteMessage(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), { "set_InviteMessage", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::get_MaxRetries() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), { "get_MaxRetries", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::set_MaxRetries(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), { "set_MaxRetries", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::LaunchFriendsInvitePanel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), { "LaunchFriendsInvitePanel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>*
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::LaunchFriendsInvitePanelAsync(::Oculus::Platform::InviteOptions* inviteOptions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                                                                                         { "LaunchFriendsInvitePanelAsync", {}, { ::i2c::type_of<::Oculus::Platform::InviteOptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>*>(this, ___internal_method,
                                                                                                                                                                      inviteOptions);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::LaunchRosterPanel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), { "LaunchRosterPanel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>*
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::LaunchRosterPanelAsync(::Oculus::Platform::RosterOptions* rosterOptions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                                                                                         { "LaunchRosterPanelAsync", {}, { ::i2c::type_of<::Oculus::Platform::RosterOptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>*>(this, ___internal_method, rosterOptions);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnRoomOperationResult(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::System::Threading::Tasks::Task* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::JoinRoom(::StringW roomId, ::StringW roomPassword) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, roomId, roomPassword);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::ClearGroupPresenceCallback() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::RegisterGameRoom(::StringW roomId, ::StringW roomPassword) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                                                                                         { "RegisterGameRoom", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, roomId, roomPassword);
}
inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::ClearGroupPresence() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), { "ClearGroupPresence", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>*
Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::SetGroupPresence(::Oculus::Platform::GroupPresenceOptions* groupPresenceOptions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                                                                                         { "SetGroupPresence", {}, { ::i2c::type_of<::Oculus::Platform::GroupPresenceOptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>*>(nullptr, ___internal_method, groupPresenceOptions);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnEntitlementFinished(::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo info) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                                                                                         { "OnEntitlementFinished", {}, { ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnJoinIntentReceived(::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>* message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnInvitationsSent(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>* message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                                              { "OnInvitationsSent", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::OnLeaveIntentNotification(::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>* message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(),
                                              { "OnLeaveIntentNotification", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::Oculus::Platform::GroupPresenceOptions* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::GetGroupPresenceOptions(::StringW roomId, ::StringW roomPassword) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::GroupPresenceOptions*>(this, ___internal_method, roomId, roomPassword);
}
inline void Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking* Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking::FriendsMatchmaking() {}
