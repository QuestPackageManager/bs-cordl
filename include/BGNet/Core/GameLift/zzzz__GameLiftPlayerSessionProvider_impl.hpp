#pragma once
// IWYU pragma private; include "BGNet/Core/GameLift/GameLiftPlayerSessionProvider.hpp"
#include "BGNet/Core/GameLift/zzzz__GetMultiplayerInstanceResponse_impl.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_impl.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_impl.hpp"
#include "System/Net/Sockets/zzzz__UdpReceiveResult_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "BGNet/Core/GameLift/zzzz__GameLiftPlayerSessionProvider_def.hpp"
#include "BGNet/Core/GameLift/zzzz__GameLiftPlayerSessionProvider_def.hpp"
#include "BGNet/Core/GameLift/zzzz__IGameLiftPlayerSessionProvider_def.hpp"
#include "BGNet/Core/GameLift/zzzz__PlayerSessionInfo_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__GraphAPIClient_def.hpp"
#include "GlobalNamespace/zzzz__IAuthenticationTokenProvider_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerStatusModel_def.hpp"
#include "GlobalNamespace/zzzz__INetworkConfig_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusData_def.hpp"
#include "GlobalNamespace/zzzz__RollingAverage_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Net/Sockets/zzzz__UdpClient_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::*)()>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31ba544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c._GetAverageLatencies_b__25_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::*)(
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::_GetAverageLatencies_b__25_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x31ba548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get(), "<GetAverageLatencies>b__25_0",
                                   std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c._GetAverageLatencies_b__25_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::*)(
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::_GetAverageLatencies_b__25_1)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x31ba59c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get(), "<GetAverageLatencies>b__25_1",
                                   std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c._GetAverageLatencies_b__25_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::*)(
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::_GetAverageLatencies_b__25_2)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x31ba5e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get(), "<GetAverageLatencies>b__25_2",
                                   std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>>::get() })));
    return ___internal_method;
  }
};
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::setStaticF___9(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c* value) {
  ::cordl_internals::setStaticField<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get>(
      std::forward<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>(value));
}
inline ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c* BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get>();
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::setStaticF___9__25_0(
    ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, bool>*, "<>9__25_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, bool>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, bool>*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::getStaticF___9__25_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, bool>*, "<>9__25_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get>();
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::setStaticF___9__25_1(
    ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, ::StringW>*, "<>9__25_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, ::StringW>*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::getStaticF___9__25_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, ::StringW>*, "<>9__25_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get>();
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::setStaticF___9__25_2(
    ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, int64_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, int64_t>*, "<>9__25_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, int64_t>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, int64_t>*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::getStaticF___9__25_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, int64_t>*, "<>9__25_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get>();
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::_GetAverageLatencies_b__25_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*> kvp) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get(), "<GetAverageLatencies>b__25_0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, kvp);
}
inline ::StringW
BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::_GetAverageLatencies_b__25_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*> kvp) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get(), "<GetAverageLatencies>b__25_1",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, kvp);
}
inline int64_t
BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::_GetAverageLatencies_b__25_2(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*> kvp) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get(), "<GetAverageLatencies>b__25_2",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, kvp);
}
inline ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c* BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>());
}
// Ctor Parameters []
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::GameLiftPlayerSessionProvider___c() {}
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23::*)()>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x1b10;
  constexpr static std::size_t addrs = 0x31ba644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x31bc154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23>::get(), "MoveNext",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::PlayerSessionInfo*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*", modifiers: "", def_value: Some("{}") }, CppParam { name: "authenticationTokenProvider", ty:
// "::GlobalNamespace::IAuthenticationTokenProvider*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevelSelectionMask", ty:
// "::GlobalNamespace::BeatmapLevelSelectionMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "gameplayServerConfiguration", ty: "::GlobalNamespace::GameplayServerConfiguration",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "secret", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "code", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_stopwatch_5__2", ty: "::System::Diagnostics::Stopwatch*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ticketId_5__3", ty: "::StringW", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_placementId_5__4", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_graphAPIAccessToken_5__5", ty: "::StringW", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_userPlatform_5__6", ty: "::System::Nullable_1<::GlobalNamespace::AuthenticationToken_PlatformType>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "_singleUsePlatformAuthToken_5__7", ty: "::System::Nullable_1<::GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_xPlatformAccessToken_5__8",
// ty: "::GlobalNamespace::XPlatformAccessTokenData", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_numAttempts_5__9", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_getMatchmakingInstanceResponse_5__10", ty: "::BGNet::Core::GameLift::GetMultiplayerInstanceResponse", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__7__wrap10", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__4", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::PlayerSessionInfo*> __t__builder,
    ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* __4__this, ::GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider,
    ::System::Threading::CancellationToken cancellationToken, ::StringW userId, ::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask,
    ::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration, ::StringW secret, ::StringW code, ::System::Diagnostics::Stopwatch* _stopwatch_5__2, ::StringW _ticketId_5__3,
    ::StringW _placementId_5__4, ::StringW _graphAPIAccessToken_5__5, ::System::Nullable_1<::GlobalNamespace::AuthenticationToken_PlatformType> _userPlatform_5__6,
    ::System::Nullable_1<::GlobalNamespace::AuthenticationToken> _singleUsePlatformAuthToken_5__7, ::GlobalNamespace::XPlatformAccessTokenData _xPlatformAccessToken_5__8,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData> __u__1, int32_t _numAttempts_5__9,
    ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse _getMatchmakingInstanceResponse_5__10, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken> __u__2,
    int32_t __7__wrap10, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __u__3,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__4) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->authenticationTokenProvider = authenticationTokenProvider;
  this->cancellationToken = cancellationToken;
  this->userId = userId;
  this->beatmapLevelSelectionMask = beatmapLevelSelectionMask;
  this->gameplayServerConfiguration = gameplayServerConfiguration;
  this->secret = secret;
  this->code = code;
  this->_stopwatch_5__2 = _stopwatch_5__2;
  this->_ticketId_5__3 = _ticketId_5__3;
  this->_placementId_5__4 = _placementId_5__4;
  this->_graphAPIAccessToken_5__5 = _graphAPIAccessToken_5__5;
  this->_userPlatform_5__6 = _userPlatform_5__6;
  this->_singleUsePlatformAuthToken_5__7 = _singleUsePlatformAuthToken_5__7;
  this->_xPlatformAccessToken_5__8 = _xPlatformAccessToken_5__8;
  this->__u__1 = __u__1;
  this->_numAttempts_5__9 = _numAttempts_5__9;
  this->_getMatchmakingInstanceResponse_5__10 = _getMatchmakingInstanceResponse_5__10;
  this->__u__2 = __u__2;
  this->__7__wrap10 = __7__wrap10;
  this->__u__3 = __u__3;
  this->__u__4 = __u__4;
}
// Ctor Parameters []
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23() {}
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21::*)()>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x31bc1d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x31bc594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerStatusData*>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerStatusData*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21() {}
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24::*)()>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x31bc600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31bc98c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW,int64_t>,::Array<::System::ValueTuple_2<::StringW,int64_t>>*>>", modifiers: "", def_value: Some("{}")
// }]
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW, int64_t>, ::Array<::System::ValueTuple_2<::StringW, int64_t>>*>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24() {}
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28::*)()>(
        &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x31bc994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28>::get(), "MoveNext",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
        &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31bcd48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28>::get(),
        "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28>::get(), "MoveNext",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28>::get(),
      "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW,::System::Nullable_1<int64_t>>,::Array<::System::ValueTuple_2<::StringW,::System::Nullable_1<int64_t>>>*>>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28::
    GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28(
        int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* __4__this,
        ::System::Runtime::CompilerServices::TaskAwaiter_1<
            ::ArrayW<::System::ValueTuple_2<::StringW, ::System::Nullable_1<int64_t>>, ::Array<::System::ValueTuple_2<::StringW, ::System::Nullable_1<int64_t>>>*>>
            __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28::
    GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28() {}
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26::*)()>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26::MoveNext)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x31bcd50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x31bd090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,int64_t>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "awsRegion", ty: "::StringW",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26::GameLiftPlayerSessionProvider__PingRegionAsync_d__26(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW, int64_t>> __t__builder, ::StringW awsRegion,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->awsRegion = awsRegion;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26::GameLiftPlayerSessionProvider__PingRegionAsync_d__26() {}
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29::*)()>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29::MoveNext)> {
  constexpr static std::size_t size = 0x9d8;
  constexpr static std::size_t addrs = 0x31bd110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29>::get(), "MoveNext",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x31bdae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29>::get(), "SetStateMachine",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29>::get(),
                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29>::get(),
                                 "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,::System::Nullable_1<int64_t>>>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__4__this", ty: "::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*", modifiers: "", def_value: Some("{}") }, CppParam { name: "awsRegion", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_stopwatch_5__2", ty: "::System::Diagnostics::Stopwatch*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_udpClient_5__3", ty:
// "::System::Net::Sockets::UdpClient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Sockets::UdpReceiveResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW, ::System::Nullable_1<int64_t>>> __t__builder,
    ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* __4__this, ::StringW awsRegion, ::System::Diagnostics::Stopwatch* _stopwatch_5__2, ::System::Net::Sockets::UdpClient* _udpClient_5__3,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t> __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Sockets::UdpReceiveResult> __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->awsRegion = awsRegion;
  this->_stopwatch_5__2 = _stopwatch_5__2;
  this->_udpClient_5__3 = _udpClient_5__3;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29() {}
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(
    ::GlobalNamespace::INetworkConfig*, ::GlobalNamespace::IMultiplayerStatusModel*)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::_ctor)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x31b92b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerStatusModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.GetMultiplayerStatusData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)()>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetMultiplayerStatusData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x31b965c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                                                                               "GetMultiplayerStatusData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.PollUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)()>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PollUpdate)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x31b970c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                                                                               "PollUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.GetGameLiftPlayerSessionInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::PlayerSessionInfo*>* (
    ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(::GlobalNamespace::IAuthenticationTokenProvider*, ::StringW, ::GlobalNamespace::BeatmapLevelSelectionMask,
                                                               ::GlobalNamespace::GameplayServerConfiguration, ::StringW, ::StringW, ::System::Threading::CancellationToken)>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetGameLiftPlayerSessionInfo)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x31b9940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(), "GetGameLiftPlayerSessionInfo",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAuthenticationTokenProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.PingAllAwsGameLiftRegions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)()>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingAllAwsGameLiftRegions)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x31b989c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                                                                               "PingAllAwsGameLiftRegions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.GetAverageLatencies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, int64_t>* (
    ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)()>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetAverageLatencies)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x31b9a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                                                                               "GetAverageLatencies", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.PingRegionAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, int64_t>>* (
    ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(::StringW)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingRegionAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x31b9cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(), "PingRegionAsync",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.GetAwsGameLiftRegionEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetAwsGameLiftRegionEndpoint)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x31b9dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(), "GetAwsGameLiftRegionEndpoint",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)()>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x31b97f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                                                 "PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.PingRegionUsingGameLiftUdpPingBeaconAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, ::System::Nullable_1<int64_t>>>* (
    ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(::StringW)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingRegionUsingGameLiftUdpPingBeaconAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x31b9e34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(), "PingRegionUsingGameLiftUdpPingBeaconAsync",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.GetGameLiftUdpPingBeaconEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetGameLiftUdpPingBeaconEndpoint)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x31b9f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(), "GetGameLiftUdpPingBeaconEndpoint",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.GetXPlatformAccessToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>* (
    ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(::GlobalNamespace::IAuthenticationTokenProvider*, ::System::Threading::CancellationToken, bool)>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetXPlatformAccessToken)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x31b9f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(), "GetXPlatformAccessToken", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAuthenticationTokenProvider*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)()>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::Dispose)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x31ba0f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider._PingAllAwsGameLiftRegions_b__24_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, int64_t>>* (
    ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(::StringW)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::_PingAllAwsGameLiftRegions_b__24_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31ba4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(), "<PingAllAwsGameLiftRegions>b__24_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider._PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_b__28_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, ::System::Nullable_1<int64_t>>>* (
    ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(::StringW)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::_PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_b__28_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31ba4ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                                                                               "<PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons>b__28_0", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::IPEndPoint*>*& BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_get__udpPingEndpoints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____udpPingEndpoints;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::IPEndPoint*>* const&
BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_get__udpPingEndpoints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____udpPingEndpoints;
}
constexpr void
BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_set__udpPingEndpoints(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::IPEndPoint*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____udpPingEndpoints)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::Sockets::UdpClient*>*& BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_get__udpPingClients() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____udpPingClients;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::Sockets::UdpClient*>* const&
BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_get__udpPingClients() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____udpPingClients;
}
constexpr void
BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_set__udpPingClients(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::Sockets::UdpClient*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____udpPingClients)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::INetworkConfig*& BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_get__networkConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr ::GlobalNamespace::INetworkConfig* const& BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_get__networkConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_set__networkConfig(::GlobalNamespace::INetworkConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____networkConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GraphAPIClient*& BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_get__graphAPIClient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphAPIClient;
}
constexpr ::GlobalNamespace::GraphAPIClient* const& BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_get__graphAPIClient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphAPIClient;
}
constexpr void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_set__graphAPIClient(::GlobalNamespace::GraphAPIClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____graphAPIClient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RollingAverage*>*& BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_get__pingAverages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pingAverages;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RollingAverage*>* const&
BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_get__pingAverages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pingAverages;
}
constexpr void
BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_set__pingAverages(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RollingAverage*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pingAverages)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IMultiplayerStatusModel*& BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_get__multiplayerStatusModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerStatusModel;
}
constexpr ::GlobalNamespace::IMultiplayerStatusModel* const& BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_get__multiplayerStatusModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerStatusModel;
}
constexpr void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_set__multiplayerStatusModel(::GlobalNamespace::IMultiplayerStatusModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerStatusModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_get__disposeInitiated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposeInitiated;
}
constexpr bool const& BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_get__disposeInitiated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposeInitiated;
}
constexpr void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_set__disposeInitiated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposeInitiated = value;
}
constexpr int32_t& BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_get__pingCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pingCount;
}
constexpr int32_t const& BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_get__pingCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pingCount;
}
constexpr void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_set__pingCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pingCount = value;
}
constexpr int64_t& BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_get__lastPingTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPingTime;
}
constexpr int64_t const& BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_get__lastPingTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPingTime;
}
constexpr void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_set__lastPingTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastPingTime = value;
}
constexpr bool& BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_get__multiplayerStatusDataFetched() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerStatusDataFetched;
}
constexpr bool const& BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_get__multiplayerStatusDataFetched() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerStatusDataFetched;
}
constexpr void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_set__multiplayerStatusDataFetched(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerStatusDataFetched = value;
}
constexpr bool& BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_get__useGameLiftUdpPingBeacons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useGameLiftUdpPingBeacons;
}
constexpr bool const& BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_get__useGameLiftUdpPingBeacons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useGameLiftUdpPingBeacons;
}
constexpr void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_set__useGameLiftUdpPingBeacons(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useGameLiftUdpPingBeacons = value;
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::setStaticF__awsGameLiftRegions(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "_awsGameLiftRegions",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> BGNet::Core::GameLift::GameLiftPlayerSessionProvider::getStaticF__awsGameLiftRegions() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "_awsGameLiftRegions",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get>();
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::_ctor(::GlobalNamespace::INetworkConfig* networkConfig, ::GlobalNamespace::IMultiplayerStatusModel* multiplayerStatusModel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerStatusModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, networkConfig, multiplayerStatusModel);
}
inline ::System::Threading::Tasks::Task* BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetMultiplayerStatusData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                                                                             "GetMultiplayerStatusData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PollUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                                                                             "PollUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::PlayerSessionInfo*>* BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetGameLiftPlayerSessionInfo(
    ::GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider, ::StringW userId, ::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask,
    ::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration, ::StringW secret, ::StringW code, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(), "GetGameLiftPlayerSessionInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAuthenticationTokenProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::PlayerSessionInfo*>*, false>(
      this, ___internal_method, authenticationTokenProvider, userId, beatmapLevelSelectionMask, gameplayServerConfiguration, secret, code, cancellationToken);
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingAllAwsGameLiftRegions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                                                                             "PingAllAwsGameLiftRegions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, int64_t>* BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetAverageLatencies() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                                                                             "GetAverageLatencies", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, int64_t>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, int64_t>>* BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingRegionAsync(::StringW awsRegion) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(), "PingRegionAsync",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, int64_t>>*, false>(this, ___internal_method, awsRegion);
}
inline ::StringW BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetAwsGameLiftRegionEndpoint(::StringW awsRegion) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(), "GetAwsGameLiftRegionEndpoint",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, awsRegion);
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                                               "PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, ::System::Nullable_1<int64_t>>>*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingRegionUsingGameLiftUdpPingBeaconAsync(::StringW awsRegion) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(), "PingRegionUsingGameLiftUdpPingBeaconAsync",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, ::System::Nullable_1<int64_t>>>*, false>(this, ___internal_method, awsRegion);
}
inline ::StringW BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetGameLiftUdpPingBeaconEndpoint(::StringW awsRegion) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(), "GetGameLiftUdpPingBeaconEndpoint",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, awsRegion);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetXPlatformAccessToken(::GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider,
                                                                              ::System::Threading::CancellationToken cancellationToken, bool skipCache) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(), "GetXPlatformAccessToken", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAuthenticationTokenProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>*, false>(this, ___internal_method, authenticationTokenProvider,
                                                                                                                                      cancellationToken, skipCache);
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, int64_t>>* BGNet::Core::GameLift::GameLiftPlayerSessionProvider::_PingAllAwsGameLiftRegions_b__24_0(::StringW region) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(), "<PingAllAwsGameLiftRegions>b__24_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, int64_t>>*, false>(this, ___internal_method, region);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, ::System::Nullable_1<int64_t>>>*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider::_PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_b__28_0(::StringW region) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                                                                             "<PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons>b__28_0", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, ::System::Nullable_1<int64_t>>>*, false>(this, ___internal_method, region);
}
inline ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* BGNet::Core::GameLift::GameLiftPlayerSessionProvider::New_ctor(::GlobalNamespace::INetworkConfig* networkConfig,
                                                                                                                              ::GlobalNamespace::IMultiplayerStatusModel* multiplayerStatusModel) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(networkConfig, multiplayerStatusModel));
}
/// @brief Convert operator to "::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider"
constexpr BGNet::Core::GameLift::GameLiftPlayerSessionProvider::operator ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*() noexcept {
  return static_cast<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider"
constexpr ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* BGNet::Core::GameLift::GameLiftPlayerSessionProvider::i___BGNet__Core__GameLift__IGameLiftPlayerSessionProvider() noexcept {
  return static_cast<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPollable"
constexpr BGNet::Core::GameLift::GameLiftPlayerSessionProvider::operator ::GlobalNamespace::IPollable*() noexcept {
  return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPollable"
constexpr ::GlobalNamespace::IPollable* BGNet::Core::GameLift::GameLiftPlayerSessionProvider::i___GlobalNamespace__IPollable() noexcept {
  return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr BGNet::Core::GameLift::GameLiftPlayerSessionProvider::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* BGNet::Core::GameLift::GameLiftPlayerSessionProvider::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GameLiftPlayerSessionProvider() {}
