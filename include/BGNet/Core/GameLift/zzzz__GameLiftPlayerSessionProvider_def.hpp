#pragma once
// IWYU pragma private; include "BGNet/Core/GameLift/GameLiftPlayerSessionProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGNet/Core/GameLift/zzzz__GetMultiplayerInstanceResponse_def.hpp"
#include "BGNet/Core/GameLift/zzzz__IGameLiftPlayerSessionProvider_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameLiftPlayerSessionProvider)
namespace BGNet::Core::GameLift {
struct GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15;
}
namespace BGNet::Core::GameLift {
struct GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16;
}
namespace BGNet::Core::GameLift {
struct GameLiftPlayerSessionProvider__PingRegionAsync_d__18;
}
namespace BGNet::Core::GameLift {
class GameLiftPlayerSessionProvider___c;
}
namespace BGNet::Core::GameLift {
class PlayerSessionInfo;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
class GraphAPIClient;
}
namespace GlobalNamespace {
class IAuthenticationTokenProvider;
}
namespace GlobalNamespace {
class INetworkConfig;
}
namespace GlobalNamespace {
class RollingAverage;
}
namespace GlobalNamespace {
struct XPlatformAccessTokenData;
}
namespace GlobalNamespace {
class XPlatformAuthFeatureFlag;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace BGNet::Core::GameLift {
class GameLiftPlayerSessionProvider;
}
namespace BGNet::Core::GameLift {
class GameLiftPlayerSessionProvider___c;
}
namespace BGNet::Core::GameLift {
struct GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15;
}
namespace BGNet::Core::GameLift {
struct GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16;
}
namespace BGNet::Core::GameLift {
struct GameLiftPlayerSessionProvider__PingRegionAsync_d__18;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider);
MARK_REF_PTR_T(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c);
MARK_VAL_T(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15);
MARK_VAL_T(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16);
MARK_VAL_T(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__18);
// Dependencies System.Object
namespace BGNet::Core::GameLift {
// Is value type: false
// CS Name: BGNet.Core.GameLift.GameLiftPlayerSessionProvider/<>c
class CORDL_TYPE GameLiftPlayerSessionProvider___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c* __9;

  /// @brief Field <>9__17_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_0,
                      put = setStaticF___9__17_0)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, bool>* __9__17_0;

  /// @brief Field <>9__17_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_1,
                      put = setStaticF___9__17_1)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, ::StringW>* __9__17_1;

  /// @brief Field <>9__17_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_2,
                      put = setStaticF___9__17_2)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, int64_t>* __9__17_2;

  static inline ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c* New_ctor();

  /// @brief Method <GetAverageLatencies>b__17_0, addr 0x22ea714, size 0x48, virtual false, abstract: false, final false
  inline bool _GetAverageLatencies_b__17_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*> kvp);

  /// @brief Method <GetAverageLatencies>b__17_1, addr 0x22ea75c, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW _GetAverageLatencies_b__17_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*> kvp);

  /// @brief Method <GetAverageLatencies>b__17_2, addr 0x22ea798, size 0x5c, virtual false, abstract: false, final false
  inline int64_t _GetAverageLatencies_b__17_2(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*> kvp);

  /// @brief Method .ctor, addr 0x22ea70c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c* getStaticF___9();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, bool>* getStaticF___9__17_0();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, ::StringW>* getStaticF___9__17_1();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, int64_t>* getStaticF___9__17_2();

  static inline void setStaticF___9(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c* value);

  static inline void setStaticF___9__17_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, bool>* value);

  static inline void setStaticF___9__17_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, ::StringW>* value);

  static inline void setStaticF___9__17_2(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, int64_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameLiftPlayerSessionProvider___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameLiftPlayerSessionProvider___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameLiftPlayerSessionProvider___c(GameLiftPlayerSessionProvider___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameLiftPlayerSessionProvider___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameLiftPlayerSessionProvider___c(GameLiftPlayerSessionProvider___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15014 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c, 0x10>, "Size mismatch!");

} // namespace BGNet::Core::GameLift
// Dependencies AuthenticationToken, AuthenticationToken::Platform, BGNet.Core.GameLift.GetMultiplayerInstanceResponse, BeatmapLevelSelectionMask, GameplayServerConfiguration, System.Nullable`1<T>,
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken, XPlatformAccessTokenData
namespace BGNet::Core::GameLift {
// Is value type: true
// CS Name: BGNet.Core.GameLift.GameLiftPlayerSessionProvider/<GetGameLiftPlayerSessionInfo>d__15
struct CORDL_TYPE GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22ea7f4, size 0x1a3c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22ec28c, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::PlayerSessionInfo*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*", modifiers: "", def_value: None }, CppParam { name: "authenticationTokenProvider", ty:
  // "::GlobalNamespace::IAuthenticationTokenProvider*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value:
  // None }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelSelectionMask", ty: "::GlobalNamespace::BeatmapLevelSelectionMask", modifiers:
  // "", def_value: None }, CppParam { name: "gameplayServerConfiguration", ty: "::GlobalNamespace::GameplayServerConfiguration", modifiers: "", def_value: None }, CppParam { name: "secret", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "code", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_stopwatch_5__2", ty:
  // "::System::Diagnostics::Stopwatch*", modifiers: "", def_value: None }, CppParam { name: "_ticketId_5__3", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_placementId_5__4",
  // ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_xPlatformAccessToken_5__5", ty: "::GlobalNamespace::XPlatformAccessTokenData", modifiers: "", def_value: None }, CppParam {
  // name: "_graphAPIAccessToken_5__6", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_userPlatform_5__7", ty:
  // "::System::Nullable_1<::GlobalNamespace::AuthenticationToken_Platform>", modifiers: "", def_value: None }, CppParam { name: "_singleUsePlatformAuthToken_5__8", ty:
  // "::System::Nullable_1<::GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: None }, CppParam { name: "_numAttempts_5__9", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "_getMatchmakingInstanceResponse_5__10", ty: "::BGNet::Core::GameLift::GetMultiplayerInstanceResponse", modifiers: "", def_value: None },
  // CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap10", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__4", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::PlayerSessionInfo*> __t__builder,
      ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* __4__this, ::GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider,
      ::System::Threading::CancellationToken cancellationToken, ::StringW userId, ::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask,
      ::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration, ::StringW secret, ::StringW code, ::System::Diagnostics::Stopwatch* _stopwatch_5__2, ::StringW _ticketId_5__3,
      ::StringW _placementId_5__4, ::GlobalNamespace::XPlatformAccessTokenData _xPlatformAccessToken_5__5, ::StringW _graphAPIAccessToken_5__6,
      ::System::Nullable_1<::GlobalNamespace::AuthenticationToken_Platform> _userPlatform_5__7, ::System::Nullable_1<::GlobalNamespace::AuthenticationToken> _singleUsePlatformAuthToken_5__8,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData> __u__1, int32_t _numAttempts_5__9,
      ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse _getMatchmakingInstanceResponse_5__10, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken> __u__2,
      int32_t __7__wrap10, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __u__3,
      ::System::Runtime::CompilerServices::TaskAwaiter __u__4) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15015 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x158 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::PlayerSessionInfo*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* __4__this;

  /// @brief Field authenticationTokenProvider, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field userId, offset: 0x38, size: 0x8, def value: None
  ::StringW userId;

  /// @brief Field beatmapLevelSelectionMask, offset: 0x40, size: 0x28, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask;

  /// @brief Field gameplayServerConfiguration, offset: 0x68, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration;

  /// @brief Field secret, offset: 0x80, size: 0x8, def value: None
  ::StringW secret;

  /// @brief Field code, offset: 0x88, size: 0x8, def value: None
  ::StringW code;

  /// @brief Field <stopwatch>5__2, offset: 0x90, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* _stopwatch_5__2;

  /// @brief Field <ticketId>5__3, offset: 0x98, size: 0x8, def value: None
  ::StringW _ticketId_5__3;

  /// @brief Field <placementId>5__4, offset: 0xa0, size: 0x8, def value: None
  ::StringW _placementId_5__4;

  /// @brief Field <xPlatformAccessToken>5__5, offset: 0xa8, size: 0x10, def value: None
  ::GlobalNamespace::XPlatformAccessTokenData _xPlatformAccessToken_5__5;

  /// @brief Field <graphAPIAccessToken>5__6, offset: 0xb8, size: 0x8, def value: None
  ::StringW _graphAPIAccessToken_5__6;

  /// @brief Field <userPlatform>5__7, offset: 0xc0, size: 0x2, def value: None
  ::System::Nullable_1<::GlobalNamespace::AuthenticationToken_Platform> _userPlatform_5__7;

  /// @brief Field <singleUsePlatformAuthToken>5__8, offset: 0xc8, size: 0x28, def value: None
  ::System::Nullable_1<::GlobalNamespace::AuthenticationToken> _singleUsePlatformAuthToken_5__8;

  /// @brief Field <>u__1, offset: 0xf0, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData> __u__1;

  /// @brief Field <numAttempts>5__9, offset: 0xf8, size: 0x4, def value: None
  int32_t _numAttempts_5__9;

  /// @brief Field <getMatchmakingInstanceResponse>5__10, offset: 0x100, size: 0x38, def value: None
  ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse _getMatchmakingInstanceResponse_5__10;

  /// @brief Field <>u__2, offset: 0x138, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken> __u__2;

  /// @brief Field <>7__wrap10, offset: 0x140, size: 0x4, def value: None
  int32_t __7__wrap10;

  /// @brief Field <>u__3, offset: 0x148, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __u__3;

  /// @brief Field <>u__4, offset: 0x150, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15, authenticationTokenProvider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15, userId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15, beatmapLevelSelectionMask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15, gameplayServerConfiguration) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15, secret) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15, code) == 0x88, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15, _stopwatch_5__2) == 0x90, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15, _ticketId_5__3) == 0x98, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15, _placementId_5__4) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15, _xPlatformAccessToken_5__5) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15, _graphAPIAccessToken_5__6) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15, _userPlatform_5__7) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15, _singleUsePlatformAuthToken_5__8) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15, __u__1) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15, _numAttempts_5__9) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15, _getMatchmakingInstanceResponse_5__10) == 0x100, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15, __u__2) == 0x138, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15, __7__wrap10) == 0x140, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15, __u__3) == 0x148, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15, __u__4) == 0x150, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15, 0x158>, "Size mismatch!");

} // namespace BGNet::Core::GameLift
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace BGNet::Core::GameLift {
// Is value type: true
// CS Name: BGNet.Core.GameLift.GameLiftPlayerSessionProvider/<PingAllAwsGameLiftRegions>d__16
struct CORDL_TYPE GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22ec308, size 0x35c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22ec664, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW,int64_t>,::Array<::System::ValueTuple_2<::StringW,int64_t>>*>>", modifiers: "", def_value: None }]
  constexpr GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW, int64_t>, ::Array<::System::ValueTuple_2<::StringW, int64_t>>*>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15016 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW, int64_t>, ::Array<::System::ValueTuple_2<::StringW, int64_t>>*>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16, 0x38>, "Size mismatch!");

} // namespace BGNet::Core::GameLift
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>,
// System.ValueTuple`2<T1, T2>
namespace BGNet::Core::GameLift {
// Is value type: true
// CS Name: BGNet.Core.GameLift.GameLiftPlayerSessionProvider/<PingRegionAsync>d__18
struct CORDL_TYPE GameLiftPlayerSessionProvider__PingRegionAsync_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22ec670, size 0x340, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22ec9b0, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameLiftPlayerSessionProvider__PingRegionAsync_d__18();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,int64_t>>", modifiers: "", def_value: None }, CppParam { name: "awsRegion", ty: "::StringW",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>", modifiers: "", def_value: None }]
  constexpr GameLiftPlayerSessionProvider__PingRegionAsync_d__18(int32_t __1__state,
                                                                 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW, int64_t>> __t__builder,
                                                                 ::StringW awsRegion, ::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15017 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW, int64_t>> __t__builder;

  /// @brief Field awsRegion, offset: 0x20, size: 0x8, def value: None
  ::StringW awsRegion;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__18, awsRegion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__18, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__18, 0x30>, "Size mismatch!");

} // namespace BGNet::Core::GameLift
// Dependencies BGNet.Core.GameLift.IGameLiftPlayerSessionProvider, IPollable, System.Object
namespace BGNet::Core::GameLift {
// Is value type: false
// CS Name: BGNet.Core.GameLift.GameLiftPlayerSessionProvider
class CORDL_TYPE GameLiftPlayerSessionProvider : public ::System::Object {
public:
  // Declarations
  using _GetGameLiftPlayerSessionInfo_d__15 = ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15;

  using _PingAllAwsGameLiftRegions_d__16 = ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16;

  using _PingRegionAsync_d__18 = ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__18;

  using __c = ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c;

  /// @brief Field _awsGameLiftRegions, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__awsGameLiftRegions, put = setStaticF__awsGameLiftRegions)) ::ArrayW<::StringW, ::Array<::StringW>*> _awsGameLiftRegions;

  /// @brief Field _graphAPIClient, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__graphAPIClient, put = __cordl_internal_set__graphAPIClient)) ::GlobalNamespace::GraphAPIClient* _graphAPIClient;

  /// @brief Field _lastPingTime, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__lastPingTime, put = __cordl_internal_set__lastPingTime)) int64_t _lastPingTime;

  /// @brief Field _networkConfig, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__networkConfig, put = __cordl_internal_set__networkConfig)) ::GlobalNamespace::INetworkConfig* _networkConfig;

  /// @brief Field _pingAverages, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__pingAverages,
                      put = __cordl_internal_set__pingAverages)) ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RollingAverage*>* _pingAverages;

  /// @brief Field _pingCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__pingCount, put = __cordl_internal_set__pingCount)) int32_t _pingCount;

  /// @brief Field _xPlatformAuthFeatureFlag, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__xPlatformAuthFeatureFlag,
                      put = __cordl_internal_set__xPlatformAuthFeatureFlag)) ::GlobalNamespace::XPlatformAuthFeatureFlag* _xPlatformAuthFeatureFlag;

  /// @brief Convert operator to "::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider"
  constexpr operator ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPollable"
  constexpr operator ::GlobalNamespace::IPollable*() noexcept;

  /// @brief Method GetAverageLatencies, addr 0x22e9f44, size 0x244, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, int64_t>* GetAverageLatencies();

  /// @brief Method GetAwsGameLiftRegionEndpoint, addr 0x22ea26c, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW GetAwsGameLiftRegionEndpoint(::StringW awsRegion);

  /// @brief Method GetGameLiftPlayerSessionInfo, addr 0x22e9df8, size 0x14c, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::PlayerSessionInfo*>*
  GetGameLiftPlayerSessionInfo(::GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider, ::StringW userId, ::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask,
                               ::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration, ::StringW secret, ::StringW code, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetXPlatformAccessToken, addr 0x22ea2d8, size 0x168, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>* GetXPlatformAccessToken(::GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider,
                                                                                                                  ::System::Threading::CancellationToken cancellationToken, bool skipCache);

  static inline ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* New_ctor(::GlobalNamespace::INetworkConfig* networkConfig,
                                                                                 ::GlobalNamespace::XPlatformAuthFeatureFlag* xPlatformAuthFeatureFlag);

  /// @brief Method PingAllAwsGameLiftRegions, addr 0x22e9d68, size 0x90, virtual false, abstract: false, final false
  inline void PingAllAwsGameLiftRegions();

  /// @brief Method PingRegionAsync, addr 0x22ea188, size 0xe4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, int64_t>>* PingRegionAsync(::StringW awsRegion);

  /// @brief Method PollUpdate, addr 0x22e9cac, size 0xbc, virtual true, abstract: false, final true
  inline void PollUpdate();

  /// @brief Method <PingAllAwsGameLiftRegions>b__16_0, addr 0x22ea6ac, size 0x4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, int64_t>>* _PingAllAwsGameLiftRegions_b__16_0(::StringW region);

  constexpr ::GlobalNamespace::GraphAPIClient* const& __cordl_internal_get__graphAPIClient() const;

  constexpr ::GlobalNamespace::GraphAPIClient*& __cordl_internal_get__graphAPIClient();

  constexpr int64_t const& __cordl_internal_get__lastPingTime() const;

  constexpr int64_t& __cordl_internal_get__lastPingTime();

  constexpr ::GlobalNamespace::INetworkConfig* const& __cordl_internal_get__networkConfig() const;

  constexpr ::GlobalNamespace::INetworkConfig*& __cordl_internal_get__networkConfig();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RollingAverage*>* const& __cordl_internal_get__pingAverages() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RollingAverage*>*& __cordl_internal_get__pingAverages();

  constexpr int32_t const& __cordl_internal_get__pingCount() const;

  constexpr int32_t& __cordl_internal_get__pingCount();

  constexpr ::GlobalNamespace::XPlatformAuthFeatureFlag* const& __cordl_internal_get__xPlatformAuthFeatureFlag() const;

  constexpr ::GlobalNamespace::XPlatformAuthFeatureFlag*& __cordl_internal_get__xPlatformAuthFeatureFlag();

  constexpr void __cordl_internal_set__graphAPIClient(::GlobalNamespace::GraphAPIClient* value);

  constexpr void __cordl_internal_set__lastPingTime(int64_t value);

  constexpr void __cordl_internal_set__networkConfig(::GlobalNamespace::INetworkConfig* value);

  constexpr void __cordl_internal_set__pingAverages(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RollingAverage*>* value);

  constexpr void __cordl_internal_set__pingCount(int32_t value);

  constexpr void __cordl_internal_set__xPlatformAuthFeatureFlag(::GlobalNamespace::XPlatformAuthFeatureFlag* value);

  /// @brief Method .ctor, addr 0x22e9b14, size 0x198, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::INetworkConfig* networkConfig, ::GlobalNamespace::XPlatformAuthFeatureFlag* xPlatformAuthFeatureFlag);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF__awsGameLiftRegions();

  /// @brief Convert to "::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider"
  constexpr ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* i___BGNet__Core__GameLift__IGameLiftPlayerSessionProvider() noexcept;

  /// @brief Convert to "::GlobalNamespace::IPollable"
  constexpr ::GlobalNamespace::IPollable* i___GlobalNamespace__IPollable() noexcept;

  static inline void setStaticF__awsGameLiftRegions(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameLiftPlayerSessionProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameLiftPlayerSessionProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameLiftPlayerSessionProvider(GameLiftPlayerSessionProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameLiftPlayerSessionProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameLiftPlayerSessionProvider(GameLiftPlayerSessionProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15018 };

  /// @brief Field kCancelMatchmakingRequestTimeoutSeconds offset 0xffffffff size 0x4
  static constexpr int32_t kCancelMatchmakingRequestTimeoutSeconds{ static_cast<int32_t>(0x5) };

  /// @brief Field kCancelMatchmakingTicketPath offset 0xffffffff size 0x8
  static constexpr ::ConstString kCancelMatchmakingTicketPath{ u"beat_saber_multiplayer_cancel_matchmaking_ticket" };

  /// @brief Field kGetMatchmakingInstancePath offset 0xffffffff size 0x8
  static constexpr ::ConstString kGetMatchmakingInstancePath{ u"beat_saber_get_multiplayer_instance" };

  /// @brief Field kMatchmakingTimeoutMs offset 0xffffffff size 0x4
  static constexpr int32_t kMatchmakingTimeoutMs{ static_cast<int32_t>(0x1d4c0) };

  /// @brief Field kMaxPingCount offset 0xffffffff size 0x4
  static constexpr int32_t kMaxPingCount{ static_cast<int32_t>(0xa) };

  /// @brief Field kPingFrequencyMs offset 0xffffffff size 0x4
  static constexpr int32_t kPingFrequencyMs{ static_cast<int32_t>(0xbb8) };

  /// @brief Field _networkConfig, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::INetworkConfig* ____networkConfig;

  /// @brief Field _graphAPIClient, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::GraphAPIClient* ____graphAPIClient;

  /// @brief Field _xPlatformAuthFeatureFlag, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::XPlatformAuthFeatureFlag* ____xPlatformAuthFeatureFlag;

  /// @brief Field _pingAverages, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RollingAverage*>* ____pingAverages;

  /// @brief Field _pingCount, offset: 0x30, size: 0x4, def value: None
  int32_t ____pingCount;

  /// @brief Field _lastPingTime, offset: 0x38, size: 0x8, def value: None
  int64_t ____lastPingTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider, ____networkConfig) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider, ____graphAPIClient) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider, ____xPlatformAuthFeatureFlag) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider, ____pingAverages) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider, ____pingCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider, ____lastPingTime) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider, 0x40>, "Size mismatch!");

} // namespace BGNet::Core::GameLift
NEED_NO_BOX(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*, "BGNet.Core.GameLift", "GameLiftPlayerSessionProvider");
NEED_NO_BOX(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider___c*, "BGNet.Core.GameLift", "GameLiftPlayerSessionProvider/<>c");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__GetGameLiftPlayerSessionInfo_d__15, "BGNet.Core.GameLift",
                       "GameLiftPlayerSessionProvider/<GetGameLiftPlayerSessionInfo>d__15");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingAllAwsGameLiftRegions_d__16, "BGNet.Core.GameLift",
                       "GameLiftPlayerSessionProvider/<PingAllAwsGameLiftRegions>d__16");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider__PingRegionAsync_d__18, "BGNet.Core.GameLift", "GameLiftPlayerSessionProvider/<PingRegionAsync>d__18");
