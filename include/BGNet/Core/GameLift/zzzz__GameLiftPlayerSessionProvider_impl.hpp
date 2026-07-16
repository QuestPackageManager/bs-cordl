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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::*)()>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32beb38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c._GetAverageLatencies_b__25_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::*)(
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::_GetAverageLatencies_b__25_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32beb3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>(),
                                         { "<GetAverageLatencies>b__25_0", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c._GetAverageLatencies_b__25_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::*)(
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::_GetAverageLatencies_b__25_1)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32beb90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>(),
                                         { "<GetAverageLatencies>b__25_1", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c._GetAverageLatencies_b__25_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::*)(
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::_GetAverageLatencies_b__25_2)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x32bebd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>(),
                                         { "<GetAverageLatencies>b__25_2", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>>() } })));
    return ___internal_method;
  }
};
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::setStaticF___9(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c* value) {
  ::cordl_internals::setStaticField<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*, "<>9", ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>(
      std::forward<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>(value));
}
inline ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c* BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*, "<>9", ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>();
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::setStaticF___9__25_0(
    ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, bool>*, "<>9__25_0",
                                    ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, bool>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, bool>*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::getStaticF___9__25_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, bool>*, "<>9__25_0",
                                           ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>();
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::setStaticF___9__25_1(
    ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, ::StringW>*, "<>9__25_1",
                                    ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, ::StringW>*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::getStaticF___9__25_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, ::StringW>*, "<>9__25_1",
                                           ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>();
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::setStaticF___9__25_2(
    ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, int64_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, int64_t>*, "<>9__25_2",
                                    ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, int64_t>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, int64_t>*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::getStaticF___9__25_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, int64_t>*, "<>9__25_2",
                                           ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>();
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::_GetAverageLatencies_b__25_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*> kvp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>(),
                                       { "<GetAverageLatencies>b__25_0", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, kvp);
}
inline ::StringW
BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::_GetAverageLatencies_b__25_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*> kvp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>(),
                                       { "<GetAverageLatencies>b__25_1", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, kvp);
}
inline int64_t
BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::_GetAverageLatencies_b__25_2(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*> kvp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>(),
                                       { "<GetAverageLatencies>b__25_2", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, kvp);
}
inline ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c* BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*>());
}
// Ctor Parameters []
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c::GameLiftPlayerSessionProvider___c() {}
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23::*)()>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x15a4;
  constexpr static std::size_t addrs = 0x32bec38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32c01dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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
// name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_numAttempts_5__7",
// ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_getMatchmakingInstanceResponse_5__8", ty: "::BGNet::Core::GameLift::GetMultiplayerInstanceResponse", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__7__wrap8", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::PlayerSessionInfo*> __t__builder,
    ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* __4__this, ::GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider,
    ::System::Threading::CancellationToken cancellationToken, ::StringW userId, ::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask,
    ::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration, ::StringW secret, ::StringW code, ::System::Diagnostics::Stopwatch* _stopwatch_5__2, ::StringW _ticketId_5__3,
    ::StringW _placementId_5__4, ::StringW _graphAPIAccessToken_5__5, ::System::Nullable_1<::GlobalNamespace::AuthenticationToken_PlatformType> _userPlatform_5__6,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData> __u__1, int32_t _numAttempts_5__7,
    ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse _getMatchmakingInstanceResponse_5__8, int32_t __7__wrap8,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __u__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__3) noexcept {
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
  this->__u__1 = __u__1;
  this->_numAttempts_5__7 = _numAttempts_5__7;
  this->_getMatchmakingInstanceResponse_5__8 = _getMatchmakingInstanceResponse_5__8;
  this->__7__wrap8 = __7__wrap8;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__23() {}
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21::*)()>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x32c025c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x32c061c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetMultiplayerStatusData_d__21::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24::*)()>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x32c0688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32c0a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW,int64_t>>>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW, int64_t>>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__24() {}
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28::*)()>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x32c0a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32c0dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW,::System::Nullable_1<int64_t>>>>", modifiers: "", def_value: Some("{}") }]
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28::
    GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_d__28(
        int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* __4__this,
        ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW, ::System::Nullable_1<int64_t>>>> __u__1) noexcept {
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26::*)()>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26::MoveNext)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x32c0dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32c111c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__26::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29::*)()>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29::MoveNext)> {
  constexpr static std::size_t size = 0x9dc;
  constexpr static std::size_t addrs = 0x32c119c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32c1b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void
BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,::System::Nullable_1<int64_t>>>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__4__this", ty: "::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*", modifiers: "", def_value: Some("{}") }, CppParam { name: "awsRegion", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_stopwatch_5__2", ty: "::System::Diagnostics::Stopwatch*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_udpClient_5__3", ty:
// "::System::Net::Sockets::UdpClient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Sockets::UdpReceiveResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29::GameLiftPlayerSessionProvider__PingRegionUsingGameLiftUdpPingBeaconAsync_d__29(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW, ::System::Nullable_1<int64_t>>> __t__builder,
    ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* __4__this, ::StringW awsRegion, ::System::Diagnostics::Stopwatch* _stopwatch_5__2, ::System::Net::Sockets::UdpClient* _udpClient_5__3,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*>> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t> __u__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Sockets::UdpReceiveResult> __u__3) noexcept {
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(
    ::GlobalNamespace::INetworkConfig*, ::GlobalNamespace::IMultiplayerStatusModel*)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::_ctor)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x32bd8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::INetworkConfig*>(), ::i2c::type_of<::GlobalNamespace::IMultiplayerStatusModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.GetMultiplayerStatusData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)()>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetMultiplayerStatusData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x32bdc50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(), { "GetMultiplayerStatusData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.PollUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)()>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PollUpdate)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x32bdd00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(), { "PollUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.GetGameLiftPlayerSessionInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::PlayerSessionInfo*>* (
    ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(::GlobalNamespace::IAuthenticationTokenProvider*, ::StringW, ::GlobalNamespace::BeatmapLevelSelectionMask,
                                                               ::GlobalNamespace::GameplayServerConfiguration, ::StringW, ::StringW, ::System::Threading::CancellationToken)>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetGameLiftPlayerSessionInfo)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x32bdf34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(),
                                                             { "GetGameLiftPlayerSessionInfo",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::IAuthenticationTokenProvider*>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>(), ::i2c::type_of<::GlobalNamespace::GameplayServerConfiguration>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.PingAllAwsGameLiftRegions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)()>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingAllAwsGameLiftRegions)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x32bde90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(), { "PingAllAwsGameLiftRegions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.GetAverageLatencies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, int64_t>* (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)()>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetAverageLatencies)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x32be080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(), { "GetAverageLatencies", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.PingRegionAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, int64_t>>* (
    ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(::StringW)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingRegionAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x32be2e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(), { "PingRegionAsync", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.GetAwsGameLiftRegionEndpoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetAwsGameLiftRegionEndpoint)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x32be3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(), { "GetAwsGameLiftRegionEndpoint", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)()>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x32bddec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(), { "PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.PingRegionUsingGameLiftUdpPingBeaconAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, ::System::Nullable_1<int64_t>>>* (
    ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(::StringW)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingRegionUsingGameLiftUdpPingBeaconAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x32be428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(),
                                                                                           { "PingRegionUsingGameLiftUdpPingBeaconAsync", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.GetGameLiftUdpPingBeaconEndpoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetGameLiftUdpPingBeaconEndpoint)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x32be51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(), { "GetGameLiftUdpPingBeaconEndpoint", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.GetXPlatformAccessToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>* (
    ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(::GlobalNamespace::IAuthenticationTokenProvider*, ::System::Threading::CancellationToken, bool)>(
    &::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetXPlatformAccessToken)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x32be588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(),
                            { "GetXPlatformAccessToken",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::IAuthenticationTokenProvider*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)()>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::Dispose)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x32be6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider._PingAllAwsGameLiftRegions_b__24_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, int64_t>>* (
    ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(::StringW)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::_PingAllAwsGameLiftRegions_b__24_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32beadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(), { "<PingAllAwsGameLiftRegions>b__24_0", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider._PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_b__28_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, ::System::Nullable_1<int64_t>>>* (
    ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(::StringW)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::_PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_b__28_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32beae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(),
                                                                                           { "<PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons>b__28_0", {}, { ::i2c::type_of<::StringW>() } })));
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
  this->____udpPingEndpoints = value;
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
  this->____udpPingClients = value;
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
  this->____networkConfig = value;
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
  this->____graphAPIClient = value;
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
  this->____pingAverages = value;
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
  this->____multiplayerStatusModel = value;
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
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::setStaticF__awsGameLiftRegions(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "_awsGameLiftRegions", ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> BGNet::Core::GameLift::GameLiftPlayerSessionProvider::getStaticF__awsGameLiftRegions() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "_awsGameLiftRegions", ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>();
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::_ctor(::GlobalNamespace::INetworkConfig* networkConfig, ::GlobalNamespace::IMultiplayerStatusModel* multiplayerStatusModel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::INetworkConfig*>(), ::i2c::type_of<::GlobalNamespace::IMultiplayerStatusModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, networkConfig, multiplayerStatusModel);
}
inline ::System::Threading::Tasks::Task* BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetMultiplayerStatusData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(), { "GetMultiplayerStatusData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PollUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(), { "PollUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::PlayerSessionInfo*>* BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetGameLiftPlayerSessionInfo(
    ::GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider, ::StringW userId, ::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask,
    ::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration, ::StringW secret, ::StringW code, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(),
                                                           { "GetGameLiftPlayerSessionInfo",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::IAuthenticationTokenProvider*>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>(), ::i2c::type_of<::GlobalNamespace::GameplayServerConfiguration>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::PlayerSessionInfo*>*>(
      this, ___internal_method, authenticationTokenProvider, userId, beatmapLevelSelectionMask, gameplayServerConfiguration, secret, code, cancellationToken);
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingAllAwsGameLiftRegions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(), { "PingAllAwsGameLiftRegions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, int64_t>* BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetAverageLatencies() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(), { "GetAverageLatencies", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, int64_t>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, int64_t>>* BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingRegionAsync(::StringW awsRegion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(), { "PingRegionAsync", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, int64_t>>*>(this, ___internal_method, awsRegion);
}
inline ::StringW BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetAwsGameLiftRegionEndpoint(::StringW awsRegion) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(), { "GetAwsGameLiftRegionEndpoint", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, awsRegion);
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(), { "PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, ::System::Nullable_1<int64_t>>>*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingRegionUsingGameLiftUdpPingBeaconAsync(::StringW awsRegion) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(),
                                                                                         { "PingRegionUsingGameLiftUdpPingBeaconAsync", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, ::System::Nullable_1<int64_t>>>*>(this, ___internal_method, awsRegion);
}
inline ::StringW BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetGameLiftUdpPingBeaconEndpoint(::StringW awsRegion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(), { "GetGameLiftUdpPingBeaconEndpoint", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, awsRegion);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetXPlatformAccessToken(::GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider,
                                                                              ::System::Threading::CancellationToken cancellationToken, bool skipCache) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(),
                                       { "GetXPlatformAccessToken",
                                         {},
                                         { ::i2c::type_of<::GlobalNamespace::IAuthenticationTokenProvider*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>*>(this, ___internal_method, authenticationTokenProvider, cancellationToken,
                                                                                                                               skipCache);
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, int64_t>>* BGNet::Core::GameLift::GameLiftPlayerSessionProvider::_PingAllAwsGameLiftRegions_b__24_0(::StringW region) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(), { "<PingAllAwsGameLiftRegions>b__24_0", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, int64_t>>*>(this, ___internal_method, region);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, ::System::Nullable_1<int64_t>>>*
BGNet::Core::GameLift::GameLiftPlayerSessionProvider::_PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons_b__28_0(::StringW region) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(),
                                                                                         { "<PingAllAwsGameLiftRegionsUsingGameLiftUdpPingBeacons>b__28_0", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, ::System::Nullable_1<int64_t>>>*>(this, ___internal_method, region);
}
inline ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* BGNet::Core::GameLift::GameLiftPlayerSessionProvider::New_ctor(::GlobalNamespace::INetworkConfig* networkConfig,
                                                                                                                              ::GlobalNamespace::IMultiplayerStatusModel* multiplayerStatusModel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(networkConfig, multiplayerStatusModel));
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
