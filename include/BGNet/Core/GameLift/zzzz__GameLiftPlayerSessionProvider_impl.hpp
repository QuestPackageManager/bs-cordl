#pragma once
// IWYU pragma private; include "BGNet/Core/GameLift/GameLiftPlayerSessionProvider.hpp"
#include "BGNet/Core/GameLift/zzzz__GetMultiplayerInstanceResponse_impl.hpp"
#include "BGNet/Core/GameLift/zzzz__IGameLiftPlayerSessionProvider_impl.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_impl.hpp"
#include "GlobalNamespace/zzzz__IPollable_impl.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "BGNet/Core/GameLift/zzzz__GameLiftPlayerSessionProvider_def.hpp"
#include "BGNet/Core/GameLift/zzzz__GameLiftPlayerSessionProvider_def.hpp"
#include "BGNet/Core/GameLift/zzzz__PlayerSessionInfo_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__GraphAPIClient_def.hpp"
#include "GlobalNamespace/zzzz__IAuthenticationTokenProvider_def.hpp"
#include "GlobalNamespace/zzzz__INetworkConfig_def.hpp"
#include "GlobalNamespace/zzzz__RollingAverage_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAuthFeatureFlag_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::*)()>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ee1bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c._GetAverageLatencies_b__17_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::*)(
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::_GetAverageLatencies_b__17_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22ee1c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get(), "<GetAverageLatencies>b__17_0",
                                   std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c._GetAverageLatencies_b__17_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::*)(
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::_GetAverageLatencies_b__17_1)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x22ee20c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get(), "<GetAverageLatencies>b__17_1",
                                   std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c._GetAverageLatencies_b__17_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::*)(
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::_GetAverageLatencies_b__17_2)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x22ee248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get(), "<GetAverageLatencies>b__17_2",
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
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::setStaticF___9__17_0(
    ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, bool>*, "<>9__17_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, bool>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, bool>*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::getStaticF___9__17_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, bool>*, "<>9__17_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get>();
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::setStaticF___9__17_1(
    ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, ::StringW>*, "<>9__17_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, ::StringW>*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::getStaticF___9__17_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, ::StringW>*, "<>9__17_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get>();
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::setStaticF___9__17_2(
    ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, int64_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, int64_t>*, "<>9__17_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, int64_t>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, int64_t>*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::getStaticF___9__17_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, int64_t>*, "<>9__17_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get>();
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::_GetAverageLatencies_b__17_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*> kvp) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get(), "<GetAverageLatencies>b__17_0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, kvp);
}
inline ::StringW
BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::_GetAverageLatencies_b__17_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*> kvp) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get(), "<GetAverageLatencies>b__17_1",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, kvp);
}
inline int64_t
BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::_GetAverageLatencies_b__17_2(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*> kvp) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>::get(), "<GetAverageLatencies>b__17_2",
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
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15::*)()>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x1a3c;
  constexpr static std::size_t addrs = 0x22ee2a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22efd3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15>::get(), "MoveNext",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
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
// def_value: Some("{}") }, CppParam { name: "_placementId_5__4", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_xPlatformAccessToken_5__5", ty:
// "::GlobalNamespace::XPlatformAccessTokenData", modifiers: "", def_value: Some("{}") }, CppParam { name: "_graphAPIAccessToken_5__6", ty: "::StringW", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_userPlatform_5__7", ty: "::System::Nullable_1<::GlobalNamespace::AuthenticationToken_Platform>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_singleUsePlatformAuthToken_5__8", ty: "::System::Nullable_1<::GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_numAttempts_5__9", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_getMatchmakingInstanceResponse_5__10", ty: "::BGNet::Core::GameLift::GetMultiplayerInstanceResponse", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__7__wrap10", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__4", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::PlayerSessionInfo*> __t__builder,
    ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* __4__this, ::GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider,
    ::System::Threading::CancellationToken cancellationToken, ::StringW userId, ::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask,
    ::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration, ::StringW secret, ::StringW code, ::System::Diagnostics::Stopwatch* _stopwatch_5__2, ::StringW _ticketId_5__3,
    ::StringW _placementId_5__4, ::GlobalNamespace::XPlatformAccessTokenData _xPlatformAccessToken_5__5, ::StringW _graphAPIAccessToken_5__6,
    ::System::Nullable_1<::GlobalNamespace::AuthenticationToken_Platform> _userPlatform_5__7, ::System::Nullable_1<::GlobalNamespace::AuthenticationToken> _singleUsePlatformAuthToken_5__8,
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
  this->_xPlatformAccessToken_5__5 = _xPlatformAccessToken_5__5;
  this->_graphAPIAccessToken_5__6 = _graphAPIAccessToken_5__6;
  this->_userPlatform_5__7 = _userPlatform_5__7;
  this->_singleUsePlatformAuthToken_5__8 = _singleUsePlatformAuthToken_5__8;
  this->__u__1 = __u__1;
  this->_numAttempts_5__9 = _numAttempts_5__9;
  this->_getMatchmakingInstanceResponse_5__10 = _getMatchmakingInstanceResponse_5__10;
  this->__u__2 = __u__2;
  this->__7__wrap10 = __7__wrap10;
  this->__u__3 = __u__3;
  this->__u__4 = __u__4;
}
// Ctor Parameters []
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15() {}
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16::*)()>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x22efdb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22f0114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW,int64_t>,::Array<::System::ValueTuple_2<::StringW,int64_t>>*>>", modifiers: "", def_value: Some("{}")
// }]
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW, int64_t>, ::Array<::System::ValueTuple_2<::StringW, int64_t>>*>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16() {}
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__18.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__18::*)()>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x22f0120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__18>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__18.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__18::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22f0460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__18>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__18::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__18>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__18>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__18::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,int64_t>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "awsRegion", ty: "::StringW",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__18::GameLiftPlayerSessionProvider__PingRegionAsync_d__18(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW, int64_t>> __t__builder, ::StringW awsRegion,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->awsRegion = awsRegion;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__18::GameLiftPlayerSessionProvider__PingRegionAsync_d__18() {}
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(
    ::GlobalNamespace::INetworkConfig*, ::GlobalNamespace::XPlatformAuthFeatureFlag*)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x22ed5c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::XPlatformAuthFeatureFlag*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.PollUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)()>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PollUpdate)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x22ed75c;

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
  constexpr static std::size_t addrs = 0x22ed8a8;

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
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x22ed818;

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
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x22ed9f4;

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
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x22edc38;

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
  constexpr static std::size_t addrs = 0x22edd1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(), "GetAwsGameLiftRegionEndpoint",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.GetXPlatformAccessToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>* (
    ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(::GlobalNamespace::IAuthenticationTokenProvider*, ::System::Threading::CancellationToken, bool)>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetXPlatformAccessToken)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x22edd88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(), "GetXPlatformAccessToken", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAuthenticationTokenProvider*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider._PingAllAwsGameLiftRegions_b__16_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, int64_t>>* (
    ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(::StringW)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::_PingAllAwsGameLiftRegions_b__16_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22ee15c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(), "<PingAllAwsGameLiftRegions>b__16_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
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
constexpr ::GlobalNamespace::XPlatformAuthFeatureFlag*& BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_get__xPlatformAuthFeatureFlag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xPlatformAuthFeatureFlag;
}
constexpr ::GlobalNamespace::XPlatformAuthFeatureFlag* const& BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_get__xPlatformAuthFeatureFlag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xPlatformAuthFeatureFlag;
}
constexpr void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__cordl_internal_set__xPlatformAuthFeatureFlag(::GlobalNamespace::XPlatformAuthFeatureFlag* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____xPlatformAuthFeatureFlag)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::setStaticF__awsGameLiftRegions(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "_awsGameLiftRegions",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> BGNet::Core::GameLift::GameLiftPlayerSessionProvider::getStaticF__awsGameLiftRegions() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "_awsGameLiftRegions",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get>();
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::_ctor(::GlobalNamespace::INetworkConfig* networkConfig, ::GlobalNamespace::XPlatformAuthFeatureFlag* xPlatformAuthFeatureFlag) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::XPlatformAuthFeatureFlag*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, networkConfig, xPlatformAuthFeatureFlag);
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
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, int64_t>>* BGNet::Core::GameLift::GameLiftPlayerSessionProvider::_PingAllAwsGameLiftRegions_b__16_0(::StringW region) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(), "<PingAllAwsGameLiftRegions>b__16_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, int64_t>>*, false>(this, ___internal_method, region);
}
inline ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* BGNet::Core::GameLift::GameLiftPlayerSessionProvider::New_ctor(::GlobalNamespace::INetworkConfig* networkConfig,
                                                                                                                              ::GlobalNamespace::XPlatformAuthFeatureFlag* xPlatformAuthFeatureFlag) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(networkConfig, xPlatformAuthFeatureFlag));
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
// Ctor Parameters []
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GameLiftPlayerSessionProvider() {}
