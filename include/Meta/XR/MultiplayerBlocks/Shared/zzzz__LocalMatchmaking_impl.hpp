#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/LocalMatchmaking.hpp"
#include "GlobalNamespace/zzzz__OVRColocationSession_impl.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__LocalMatchmaking_def.hpp"
#include "GlobalNamespace/zzzz__OVRColocationSession_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__LocalMatchmaking_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__HostOrJoinSessionAutomatically_d__14.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__HostOrJoinSessionAutomatically_d__14::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__HostOrJoinSessionAutomatically_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x58c7f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__HostOrJoinSessionAutomatically_d__14>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__HostOrJoinSessionAutomatically_d__14.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__HostOrJoinSessionAutomatically_d__14::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__HostOrJoinSessionAutomatically_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c81d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__HostOrJoinSessionAutomatically_d__14>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__HostOrJoinSessionAutomatically_d__14::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__HostOrJoinSessionAutomatically_d__14>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__HostOrJoinSessionAutomatically_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__HostOrJoinSessionAutomatically_d__14>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__HostOrJoinSessionAutomatically_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__HostOrJoinSessionAutomatically_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__HostOrJoinSessionAutomatically_d__14::LocalMatchmaking__HostOrJoinSessionAutomatically_d__14(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__HostOrJoinSessionAutomatically_d__14::LocalMatchmaking__HostOrJoinSessionAutomatically_d__14() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__OnColocationSessionFound_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__OnColocationSessionFound_d__16::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__OnColocationSessionFound_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x58c81dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__OnColocationSessionFound_d__16>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__OnColocationSessionFound_d__16.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__OnColocationSessionFound_d__16::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__OnColocationSessionFound_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c8504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__OnColocationSessionFound_d__16>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__OnColocationSessionFound_d__16::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__OnColocationSessionFound_d__16>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__OnColocationSessionFound_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__OnColocationSessionFound_d__16>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__OnColocationSessionFound_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__OnColocationSessionFound_d__16::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking>", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "::GlobalNamespace::OVRColocationSession_Data", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__OnColocationSessionFound_d__16::LocalMatchmaking__OnColocationSessionFound_d__16(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking> __4__this,
    ::GlobalNamespace::OVRColocationSession_Data data,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->data = data;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__OnColocationSessionFound_d__16::LocalMatchmaking__OnColocationSessionFound_d__16() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAdvertisingColocationSession_d__17.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAdvertisingColocationSession_d__17::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAdvertisingColocationSession_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x58c850c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAdvertisingColocationSession_d__17>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAdvertisingColocationSession_d__17.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAdvertisingColocationSession_d__17::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAdvertisingColocationSession_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c8a3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAdvertisingColocationSession_d__17>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAdvertisingColocationSession_d__17::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAdvertisingColocationSession_d__17>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAdvertisingColocationSession_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAdvertisingColocationSession_d__17>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAdvertisingColocationSession_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAdvertisingColocationSession_d__17::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Guid,::GlobalNamespace::OVRColocationSession_Result>>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAdvertisingColocationSession_d__17::LocalMatchmaking__StartAdvertisingColocationSession_d__17(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::ArrayW<uint8_t, ::Array<uint8_t>*> data,
    ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Guid, ::GlobalNamespace::OVRColocationSession_Result>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->data = data;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAdvertisingColocationSession_d__17::LocalMatchmaking__StartAdvertisingColocationSession_d__17() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsGuest_d__13.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsGuest_d__13::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsGuest_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x58c8a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsGuest_d__13>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsGuest_d__13.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsGuest_d__13::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsGuest_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58c8d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsGuest_d__13>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsGuest_d__13::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsGuest_d__13>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsGuest_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsGuest_d__13>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsGuest_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsGuest_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking>", modifiers: "", def_value: Some("{}") }, CppParam { name: "stopAfterTimeout", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsGuest_d__13::LocalMatchmaking__StartAsGuest_d__13(int32_t __1__state,
                                                                                                                            ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                                                            ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking> __4__this,
                                                                                                                            bool stopAfterTimeout,
                                                                                                                            ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->stopAfterTimeout = stopAfterTimeout;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsGuest_d__13::LocalMatchmaking__StartAsGuest_d__13() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsHost_d__12.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsHost_d__12::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsHost_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x58c8de0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsHost_d__12>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsHost_d__12.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsHost_d__12::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsHost_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58c9058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsHost_d__12>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsHost_d__12::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsHost_d__12>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsHost_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsHost_d__12>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsHost_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsHost_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsHost_d__12::LocalMatchmaking__StartAsHost_d__12(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartAsHost_d__12::LocalMatchmaking__StartAsHost_d__12() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartDiscoveringColocationSessions_d__19.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartDiscoveringColocationSessions_d__19::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartDiscoveringColocationSessions_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x58c90c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartDiscoveringColocationSessions_d__19>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartDiscoveringColocationSessions_d__19.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartDiscoveringColocationSessions_d__19::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartDiscoveringColocationSessions_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c94f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartDiscoveringColocationSessions_d__19>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartDiscoveringColocationSessions_d__19::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartDiscoveringColocationSessions_d__19>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartDiscoveringColocationSessions_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartDiscoveringColocationSessions_d__19>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartDiscoveringColocationSessions_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartDiscoveringColocationSessions_d__19::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "onGroupFound", ty:
// "::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>>", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartDiscoveringColocationSessions_d__19::LocalMatchmaking__StartDiscoveringColocationSessions_d__19(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>* onGroupFound,
    ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->onGroupFound = onGroupFound;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StartDiscoveringColocationSessions_d__19::LocalMatchmaking__StartDiscoveringColocationSessions_d__19() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopAdvertisingColocationSession_d__18.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopAdvertisingColocationSession_d__18::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopAdvertisingColocationSession_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x58c9500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopAdvertisingColocationSession_d__18>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopAdvertisingColocationSession_d__18.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopAdvertisingColocationSession_d__18::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopAdvertisingColocationSession_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c981c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopAdvertisingColocationSession_d__18>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopAdvertisingColocationSession_d__18::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopAdvertisingColocationSession_d__18>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopAdvertisingColocationSession_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopAdvertisingColocationSession_d__18>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopAdvertisingColocationSession_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopAdvertisingColocationSession_d__18::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>>", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopAdvertisingColocationSession_d__18::LocalMatchmaking__StopAdvertisingColocationSession_d__18(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
    ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopAdvertisingColocationSession_d__18::LocalMatchmaking__StopAdvertisingColocationSession_d__18() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopDiscoveringColocationSessions_d__20.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopDiscoveringColocationSessions_d__20::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopDiscoveringColocationSessions_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x58c9824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopDiscoveringColocationSessions_d__20>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopDiscoveringColocationSessions_d__20.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopDiscoveringColocationSessions_d__20::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopDiscoveringColocationSessions_d__20::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c9b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopDiscoveringColocationSessions_d__20>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopDiscoveringColocationSessions_d__20::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopDiscoveringColocationSessions_d__20>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopDiscoveringColocationSessions_d__20::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopDiscoveringColocationSessions_d__20>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopDiscoveringColocationSessions_d__20::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopDiscoveringColocationSessions_d__20::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "onGroupFound", ty:
// "::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>>", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopDiscoveringColocationSessions_d__20::LocalMatchmaking__StopDiscoveringColocationSessions_d__20(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>* onGroupFound,
    ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->onGroupFound = onGroupFound;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking__StopDiscoveringColocationSessions_d__20::LocalMatchmaking__StopDiscoveringColocationSessions_d__20() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::Awake)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x58c73f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(),
                                                                               "Awake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::OnEnable)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x58c74c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(),
                                                                               "OnEnable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::OnDisable)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x58c75f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(),
                                                                               "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::Start)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58c7728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(),
                                                                               "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.StartAsHost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::StartAsHost)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x58c77dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(),
                                                                               "StartAsHost", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.StartAsGuest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::*)(bool)>(
    &::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::StartAsGuest)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x58c788c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(), "StartAsGuest",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.HostOrJoinSessionAutomatically
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::HostOrJoinSessionAutomatically)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58c7738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(),
                                                                               "HostOrJoinSessionAutomatically", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.OnRoomCreationFinished
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::*)(
    ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult)>(&::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::OnRoomCreationFinished)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x58c7954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(), "OnRoomCreationFinished", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.OnColocationSessionFound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::*)(::GlobalNamespace::OVRColocationSession_Data)>(
    &::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::OnColocationSessionFound)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c7aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(), "OnColocationSessionFound", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRColocationSession_Data>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.StartAdvertisingColocationSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::StartAdvertisingColocationSession)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x58c7a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(), "StartAdvertisingColocationSession",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.StopAdvertisingColocationSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::StopAdvertisingColocationSession)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58c7b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(),
                                                 "StopAdvertisingColocationSession", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.StartDiscoveringColocationSessions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*)>(
    &::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::StartDiscoveringColocationSessions)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x58c7c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(), "StartDiscoveringColocationSessions",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.StopDiscoveringColocationSessions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*)>(
    &::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::StopDiscoveringColocationSessions)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x58c7ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(), "StopDiscoveringColocationSessions",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking.ReportDiscoverEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRColocationSession_Data)>(
    &::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::ReportDiscoverEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58c7d48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(), "ReportDiscoverEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRColocationSession_Data>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58c7dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::__cordl_internal_get_automaticHostOrJoin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___automaticHostOrJoin;
}
constexpr bool const& Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::__cordl_internal_get_automaticHostOrJoin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___automaticHostOrJoin;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::__cordl_internal_set_automaticHostOrJoin(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___automaticHostOrJoin = value;
}
constexpr int32_t& Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::__cordl_internal_get_timeDiscoveringInSec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeDiscoveringInSec;
}
constexpr int32_t const& Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::__cordl_internal_get_timeDiscoveringInSec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeDiscoveringInSec;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::__cordl_internal_set_timeDiscoveringInSec(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timeDiscoveringInSec = value;
}
constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking>& Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::__cordl_internal_get__customMatchmaking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customMatchmaking;
}
constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking> const& Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::__cordl_internal_get__customMatchmaking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customMatchmaking;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::__cordl_internal_set__customMatchmaking(::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____customMatchmaking)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::__cordl_internal_get__discoveredLocalSessionAsGuest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____discoveredLocalSessionAsGuest;
}
constexpr bool const& Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::__cordl_internal_get__discoveredLocalSessionAsGuest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____discoveredLocalSessionAsGuest;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::__cordl_internal_set__discoveredLocalSessionAsGuest(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____discoveredLocalSessionAsGuest = value;
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::setStaticF_OnSessionCreateSucceeded(::UnityEngine::Events::UnityEvent_1<::System::Guid>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent_1<::System::Guid>*, "OnSessionCreateSucceeded",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get>(
      std::forward<::UnityEngine::Events::UnityEvent_1<::System::Guid>*>(value));
}
inline ::UnityEngine::Events::UnityEvent_1<::System::Guid>* Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::getStaticF_OnSessionCreateSucceeded() {
  return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent_1<::System::Guid>*, "OnSessionCreateSucceeded",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get>();
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::setStaticF_OnSessionCreateFailed(::UnityEngine::Events::UnityEvent_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent_1<::StringW>*, "OnSessionCreateFailed",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get>(
      std::forward<::UnityEngine::Events::UnityEvent_1<::StringW>*>(value));
}
inline ::UnityEngine::Events::UnityEvent_1<::StringW>* Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::getStaticF_OnSessionCreateFailed() {
  return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent_1<::StringW>*, "OnSessionCreateFailed",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get>();
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::setStaticF_OnSessionDiscoverSucceeded(::UnityEngine::Events::UnityEvent_1<::System::Guid>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent_1<::System::Guid>*, "OnSessionDiscoverSucceeded",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get>(
      std::forward<::UnityEngine::Events::UnityEvent_1<::System::Guid>*>(value));
}
inline ::UnityEngine::Events::UnityEvent_1<::System::Guid>* Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::getStaticF_OnSessionDiscoverSucceeded() {
  return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent_1<::System::Guid>*, "OnSessionDiscoverSucceeded",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get>();
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::setStaticF_OnSessionDiscoverFailed(::UnityEngine::Events::UnityEvent_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent_1<::StringW>*, "OnSessionDiscoverFailed",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get>(
      std::forward<::UnityEngine::Events::UnityEvent_1<::StringW>*>(value));
}
inline ::UnityEngine::Events::UnityEvent_1<::StringW>* Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::getStaticF_OnSessionDiscoverFailed() {
  return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent_1<::StringW>*, "OnSessionDiscoverFailed",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get>();
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(),
                                                                             "Awake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(),
                                                                             "OnEnable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(),
                                                                             "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(),
                                                                             "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::StartAsHost() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(),
                                                                             "StartAsHost", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::StartAsGuest(bool stopAfterTimeout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(), "StartAsGuest",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, stopAfterTimeout);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::HostOrJoinSessionAutomatically() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(),
                                                                             "HostOrJoinSessionAutomatically", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::OnRoomCreationFinished(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(), "OnRoomCreationFinished", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_RoomOperationResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::OnColocationSessionFound(::GlobalNamespace::OVRColocationSession_Data data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(), "OnColocationSessionFound", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRColocationSession_Data>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::StartAdvertisingColocationSession(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(), "StartAdvertisingColocationSession",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::StopAdvertisingColocationSession() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(),
                                                                             "StopAdvertisingColocationSession", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::StartDiscoveringColocationSessions(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>* onGroupFound) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(), "StartDiscoveringColocationSessions",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, onGroupFound);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::StopDiscoveringColocationSessions(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>* onGroupFound) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(), "StopDiscoveringColocationSessions",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, onGroupFound);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::ReportDiscoverEvent(::GlobalNamespace::OVRColocationSession_Data data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(), "ReportDiscoverEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRColocationSession_Data>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data);
}
inline void Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking* Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking::LocalMatchmaking() {}
