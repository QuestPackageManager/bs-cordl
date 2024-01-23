#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGNet/Core/GameLift/zzzz__GetMultiplayerInstanceResponse_def.hpp"
#include "BGNet/Core/GameLift/zzzz__PlayerSessionInfo_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameLiftPlayerSessionProvider)
namespace BGNet::Core::GameLift {
struct GetMultiplayerInstanceResponse;
}
namespace BGNet::Core::GameLift {
class IGameLiftPlayerSessionProvider;
}
namespace BGNet::Core::GameLift {
class PlayerSessionInfo;
}
namespace BGNet::Core::GameLift {
struct __GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14;
}
namespace BGNet::Core::GameLift {
struct __GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15;
}
namespace BGNet::Core::GameLift {
struct __GameLiftPlayerSessionProvider___PingRegionAsync_d__17;
}
namespace BGNet::Core::GameLift {
class __GameLiftPlayerSessionProvider____c;
}
namespace GlobalNamespace {
struct AuthenticationToken;
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
class IPollable;
}
namespace GlobalNamespace {
class RollingAverage;
}
namespace GlobalNamespace {
class XPlatformAccessTokenData;
}
namespace GlobalNamespace {
class XPlatformAuthFeatureFlag;
}
namespace GlobalNamespace {
struct __AuthenticationToken__Platform;
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
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
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
template <typename T> struct Nullable_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace BGNet::Core::GameLift {
class GameLiftPlayerSessionProvider;
}
namespace BGNet::Core::GameLift {
class __GameLiftPlayerSessionProvider____c;
}
namespace BGNet::Core::GameLift {
struct __GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14;
}
namespace BGNet::Core::GameLift {
struct __GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15;
}
namespace BGNet::Core::GameLift {
struct __GameLiftPlayerSessionProvider___PingRegionAsync_d__17;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider);
MARK_REF_PTR_T(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c);
MARK_VAL_T(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14);
MARK_VAL_T(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15);
MARK_VAL_T(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17);
// Type: ::<GetGameLiftPlayerSessionInfo>d__14
// SizeInfo { instance_size: 336, native_size: -1, calculated_instance_size: 336, calculated_native_size: 352, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::GameLift {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2448)), TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3393)),
// TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(12681)), TypeDefinitionIndex(TypeDefinitionIndex(12682)),
// TypeDefinitionIndex(TypeDefinitionIndex(12686)), TypeDefinitionIndex(TypeDefinitionIndex(12758)), TypeDefinitionIndex(TypeDefinitionIndex(12925)), TypeDefinitionIndex(TypeDefinitionIndex(13011)),
// TypeDefinitionIndex(TypeDefinitionIndex(13013)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 876 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(2448), inst: 4764 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 95 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3394), inst: 876 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 902 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3402), inst: 897 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(13005)) CS Name: ::GameLiftPlayerSessionProvider::<GetGameLiftPlayerSessionInfo>d__14
struct CORDL_TYPE __GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0xe5ef24, size 0x16e8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xe60668, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::PlayerSessionInfo*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*", modifiers: "", def_value: None }, CppParam { name: "authenticationTokenProvider", ty:
  // "::GlobalNamespace::IAuthenticationTokenProvider*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value:
  // None }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelSelectionMask", ty: "::GlobalNamespace::BeatmapLevelSelectionMask", modifiers:
  // "", def_value: None }, CppParam { name: "gameplayServerConfiguration", ty: "::GlobalNamespace::GameplayServerConfiguration", modifiers: "", def_value: None }, CppParam { name: "secret", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "code", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_stopwatch_5__2", ty:
  // "::System::Diagnostics::Stopwatch*", modifiers: "", def_value: None }, CppParam { name: "_ticketId_5__3", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_placementId_5__4",
  // ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_xPlatformAccessToken_5__5", ty: "::GlobalNamespace::XPlatformAccessTokenData*", modifiers: "", def_value: None }, CppParam {
  // name: "_graphAPIAccessToken_5__6", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_userPlatform_5__7", ty:
  // "::System::Nullable_1<::GlobalNamespace::__AuthenticationToken__Platform>", modifiers: "", def_value: None }, CppParam { name: "_singleUsePlatformAuthToken_5__8", ty:
  // "::System::Nullable_1<::GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: None }, CppParam { name: "_numAttempts_5__9", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>", modifiers: "", def_value: None }, CppParam { name:
  // "_getMatchmakingInstanceResponse_5__10", ty: "::BGNet::Core::GameLift::GetMultiplayerInstanceResponse", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap10", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>", modifiers: "", def_value: None },
  // CppParam { name: "__u__4", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::PlayerSessionInfo*> __t__builder,
      ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* __4__this, ::GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider,
      ::System::Threading::CancellationToken cancellationToken, ::StringW userId, ::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask,
      ::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration, ::StringW secret, ::StringW code, ::System::Diagnostics::Stopwatch* _stopwatch_5__2, ::StringW _ticketId_5__3,
      ::StringW _placementId_5__4, ::GlobalNamespace::XPlatformAccessTokenData* _xPlatformAccessToken_5__5, ::StringW _graphAPIAccessToken_5__6,
      ::System::Nullable_1<::GlobalNamespace::__AuthenticationToken__Platform> _userPlatform_5__7, ::System::Nullable_1<::GlobalNamespace::AuthenticationToken> _singleUsePlatformAuthToken_5__8,
      int32_t _numAttempts_5__9, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*> __u__1,
      ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse _getMatchmakingInstanceResponse_5__10, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken> __u__2,
      int32_t __7__wrap10, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __u__3,
      ::System::Runtime::CompilerServices::TaskAwaiter __u__4) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14();

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

  /// @brief Field <xPlatformAccessToken>5__5, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::XPlatformAccessTokenData* _xPlatformAccessToken_5__5;

  /// @brief Field <graphAPIAccessToken>5__6, offset: 0xb0, size: 0x8, def value: None
  ::StringW _graphAPIAccessToken_5__6;

  /// @brief Field <userPlatform>5__7, offset: 0xb8, size: 0x2, def value: None
  ::System::Nullable_1<::GlobalNamespace::__AuthenticationToken__Platform> _userPlatform_5__7;

  /// @brief Field <singleUsePlatformAuthToken>5__8, offset: 0xc0, size: 0x28, def value: None
  ::System::Nullable_1<::GlobalNamespace::AuthenticationToken> _singleUsePlatformAuthToken_5__8;

  /// @brief Field <numAttempts>5__9, offset: 0xe8, size: 0x4, def value: None
  int32_t _numAttempts_5__9;

  /// @brief Field <>u__1, offset: 0xf0, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*> __u__1;

  /// @brief Field <getMatchmakingInstanceResponse>5__10, offset: 0xf8, size: 0x38, def value: None
  ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse _getMatchmakingInstanceResponse_5__10;

  /// @brief Field <>u__2, offset: 0x130, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken> __u__2;

  /// @brief Field <>7__wrap10, offset: 0x138, size: 0x4, def value: None
  int32_t __7__wrap10;

  /// @brief Field <>u__3, offset: 0x140, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __u__3;

  /// @brief Field <>u__4, offset: 0x148, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__4;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x150 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, 0x150>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, authenticationTokenProvider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, userId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, beatmapLevelSelectionMask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, gameplayServerConfiguration) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, secret) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, code) == 0x88, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, _stopwatch_5__2) == 0x90, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, _ticketId_5__3) == 0x98, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, _placementId_5__4) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, _xPlatformAccessToken_5__5) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, _graphAPIAccessToken_5__6) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, _userPlatform_5__7) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, _singleUsePlatformAuthToken_5__8) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, _numAttempts_5__9) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, __u__1) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, _getMatchmakingInstanceResponse_5__10) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, __u__2) == 0x130, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, __7__wrap10) == 0x138, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, __u__3) == 0x140, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, __u__4) == 0x148, "Offset mismatch!");

} // namespace BGNet::Core::GameLift
// Type: ::<PingAllAwsGameLiftRegions>d__15
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::GameLift {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2507)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(3400)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2507), inst: 601 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 5060 })] Self:
// TypeDefinitionIndex(TypeDefinitionIndex(13006)) CS Name: ::GameLiftPlayerSessionProvider::<PingAllAwsGameLiftRegions>d__15
struct CORDL_TYPE __GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0xe606c0, size 0x368, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xe60a28, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW,int64_t>,::Array<::System::ValueTuple_2<::StringW,int64_t>>*>>", modifiers: "", def_value: None }]
  constexpr __GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW, int64_t>, ::Array<::System::ValueTuple_2<::StringW, int64_t>>*>> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW, int64_t>, ::Array<::System::ValueTuple_2<::StringW, int64_t>>*>> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15, 0x38>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15, __u__1) == 0x30, "Offset mismatch!");

} // namespace BGNet::Core::GameLift
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGNet::Core::GameLift {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13007))
// CS Name: ::GameLiftPlayerSessionProvider::<>c*
class CORDL_TYPE __GameLiftPlayerSessionProvider____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c* __9;

  /// @brief Field <>9__16_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__16_0,
                             put = setStaticF___9__16_0))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, bool>* __9__16_0;

  /// @brief Field <>9__16_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__16_1,
                             put = setStaticF___9__16_1))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, ::StringW>* __9__16_1;

  /// @brief Field <>9__16_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__16_2,
                             put = setStaticF___9__16_2))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, int64_t>* __9__16_2;

  static inline void setStaticF___9(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c* value);

  static inline ::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c* getStaticF___9();

  static inline void setStaticF___9__16_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, bool>* value);

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, bool>* getStaticF___9__16_0();

  static inline void setStaticF___9__16_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, ::StringW>* value);

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, ::StringW>* getStaticF___9__16_1();

  static inline void setStaticF___9__16_2(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, int64_t>* value);

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*>, int64_t>* getStaticF___9__16_2();

  static inline ::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c* New_ctor();

  /// @brief Method .ctor, addr 0xe60a98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetAverageLatencies>b__16_0, addr 0xe60aa0, size 0x48, virtual false, abstract: false, final false
  inline bool _GetAverageLatencies_b__16_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*> kvp);

  /// @brief Method <GetAverageLatencies>b__16_1, addr 0xe60ae8, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW _GetAverageLatencies_b__16_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*> kvp);

  /// @brief Method <GetAverageLatencies>b__16_2, addr 0xe60b24, size 0x5c, virtual false, abstract: false, final false
  inline int64_t _GetAverageLatencies_b__16_2(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::RollingAverage*> kvp);

  // Ctor Parameters [CppParam { name: "", ty: "__GameLiftPlayerSessionProvider____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameLiftPlayerSessionProvider____c(__GameLiftPlayerSessionProvider____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameLiftPlayerSessionProvider____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameLiftPlayerSessionProvider____c(__GameLiftPlayerSessionProvider____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameLiftPlayerSessionProvider____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c, 0x10>, "Size mismatch!");

} // namespace BGNet::Core::GameLift
// Type: ::<PingRegionAsync>d__17
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::GameLift {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2507)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(3402)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2507), inst: 601 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 333 }),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 869 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(13008)) CS Name:
// ::GameLiftPlayerSessionProvider::<PingRegionAsync>d__17
struct CORDL_TYPE __GameLiftPlayerSessionProvider___PingRegionAsync_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0xe60b80, size 0x2ec, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xe60e6c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,int64_t>>", modifiers: "", def_value: None }, CppParam { name: "awsRegion", ty: "::StringW",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>", modifiers: "", def_value: None }]
  constexpr __GameLiftPlayerSessionProvider___PingRegionAsync_d__17(int32_t __1__state,
                                                                    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW, int64_t>> __t__builder,
                                                                    ::StringW awsRegion, ::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameLiftPlayerSessionProvider___PingRegionAsync_d__17();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW, int64_t>> __t__builder;

  /// @brief Field awsRegion, offset: 0x20, size: 0x8, def value: None
  ::StringW awsRegion;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17, 0x30>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17, awsRegion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17, __u__1) == 0x28, "Offset mismatch!");

} // namespace BGNet::Core::GameLift
// Type: BGNet.Core.GameLift::GameLiftPlayerSessionProvider
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::GameLift {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13009))
// CS Name: ::BGNet.Core.GameLift::GameLiftPlayerSessionProvider*
class CORDL_TYPE GameLiftPlayerSessionProvider : public ::System::Object {
public:
  // Declarations
  using _PingRegionAsync_d__17 = ::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17;

  using __c = ::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c;

  using _PingAllAwsGameLiftRegions_d__15 = ::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15;

  using _GetGameLiftPlayerSessionInfo_d__14 = ::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14;

  /// @brief Field _networkConfig, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__networkConfig, put = __cordl_internal_set__networkConfig))::GlobalNamespace::INetworkConfig* _networkConfig;

  /// @brief Field _graphAPIClient, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__graphAPIClient, put = __cordl_internal_set__graphAPIClient))::GlobalNamespace::GraphAPIClient* _graphAPIClient;

  /// @brief Field _xPlatformAuthFeatureFlag, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__xPlatformAuthFeatureFlag,
                      put = __cordl_internal_set__xPlatformAuthFeatureFlag))::GlobalNamespace::XPlatformAuthFeatureFlag* _xPlatformAuthFeatureFlag;

  /// @brief Field _pingAverages, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__pingAverages,
                      put = __cordl_internal_set__pingAverages))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RollingAverage*>* _pingAverages;

  /// @brief Field _pingCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__pingCount, put = __cordl_internal_set__pingCount)) int32_t _pingCount;

  /// @brief Field _lastPingTime, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__lastPingTime, put = __cordl_internal_set__lastPingTime)) int64_t _lastPingTime;

  /// @brief Field _awsGameLiftRegions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__awsGameLiftRegions, put = setStaticF__awsGameLiftRegions))::ArrayW<::StringW, ::Array<::StringW>*> _awsGameLiftRegions;

  /// @brief Convert operator to "::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider"
  constexpr operator ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*() noexcept;

  /// @brief Convert to "::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider"
  constexpr ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* i___BGNet__Core__GameLift__IGameLiftPlayerSessionProvider() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPollable"
  constexpr operator ::GlobalNamespace::IPollable*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IPollable"
  constexpr ::GlobalNamespace::IPollable* i___GlobalNamespace__IPollable() noexcept;

  constexpr ::GlobalNamespace::INetworkConfig*& __cordl_internal_get__networkConfig();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkConfig*> const& __cordl_internal_get__networkConfig() const;

  constexpr void __cordl_internal_set__networkConfig(::GlobalNamespace::INetworkConfig* value);

  constexpr ::GlobalNamespace::GraphAPIClient*& __cordl_internal_get__graphAPIClient();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GraphAPIClient*> const& __cordl_internal_get__graphAPIClient() const;

  constexpr void __cordl_internal_set__graphAPIClient(::GlobalNamespace::GraphAPIClient* value);

  constexpr ::GlobalNamespace::XPlatformAuthFeatureFlag*& __cordl_internal_get__xPlatformAuthFeatureFlag();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::XPlatformAuthFeatureFlag*> const& __cordl_internal_get__xPlatformAuthFeatureFlag() const;

  constexpr void __cordl_internal_set__xPlatformAuthFeatureFlag(::GlobalNamespace::XPlatformAuthFeatureFlag* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RollingAverage*>*& __cordl_internal_get__pingAverages();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RollingAverage*>*> const& __cordl_internal_get__pingAverages() const;

  constexpr void __cordl_internal_set__pingAverages(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RollingAverage*>* value);

  constexpr int32_t& __cordl_internal_get__pingCount();

  constexpr int32_t const& __cordl_internal_get__pingCount() const;

  constexpr void __cordl_internal_set__pingCount(int32_t value);

  constexpr int64_t& __cordl_internal_get__lastPingTime();

  constexpr int64_t const& __cordl_internal_get__lastPingTime() const;

  constexpr void __cordl_internal_set__lastPingTime(int64_t value);

  static inline void setStaticF__awsGameLiftRegions(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF__awsGameLiftRegions();

  static inline ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* New_ctor(::GlobalNamespace::INetworkConfig* networkConfig,
                                                                                 ::GlobalNamespace::XPlatformAuthFeatureFlag* xPlatformAuthFeatureFlag);

  /// @brief Method .ctor, addr 0xe5e1bc, size 0x1a4, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::INetworkConfig* networkConfig, ::GlobalNamespace::XPlatformAuthFeatureFlag* xPlatformAuthFeatureFlag);

  /// @brief Method PollUpdate, addr 0xe5e360, size 0xc0, virtual true, abstract: false, final true
  inline void PollUpdate();

  /// @brief Method GetGameLiftPlayerSessionInfo, addr 0xe5e4b4, size 0x158, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::PlayerSessionInfo*>*
  GetGameLiftPlayerSessionInfo(::GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider, ::StringW userId, ::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask,
                               ::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration, ::StringW secret, ::StringW code, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method PingAllAwsGameLiftRegions, addr 0xe5e420, size 0x94, virtual false, abstract: false, final false
  inline void PingAllAwsGameLiftRegions();

  /// @brief Method GetAverageLatencies, addr 0xe5e60c, size 0x24c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, int64_t>* GetAverageLatencies();

  /// @brief Method PingRegionAsync, addr 0xe5e858, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, int64_t>>* PingRegionAsync(::StringW awsRegion);

  /// @brief Method GetAwsGameLiftRegionEndpoint, addr 0xe5e948, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW GetAwsGameLiftRegionEndpoint(::StringW awsRegion);

  /// @brief Method GetXPlatformAccessToken, addr 0xe5e9b4, size 0x16c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* GetXPlatformAccessToken(::GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider,
                                                                                                                   ::System::Threading::CancellationToken cancellationToken, bool skipCache);

  /// @brief Method <PingAllAwsGameLiftRegions>b__15_0, addr 0xe5ef20, size 0x4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, int64_t>>* _PingAllAwsGameLiftRegions_b__15_0(::StringW region);

  // Ctor Parameters [CppParam { name: "", ty: "GameLiftPlayerSessionProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameLiftPlayerSessionProvider(GameLiftPlayerSessionProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameLiftPlayerSessionProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameLiftPlayerSessionProvider(GameLiftPlayerSessionProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameLiftPlayerSessionProvider();

public:
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

  /// @brief Field kMatchmakingTimeoutMs offset 0xffffffff size 0x4
  static constexpr int32_t kMatchmakingTimeoutMs{ static_cast<int32_t>(0x1d4c0) };

  /// @brief Field kPingFrequencyMs offset 0xffffffff size 0x4
  static constexpr int32_t kPingFrequencyMs{ static_cast<int32_t>(0xbb8) };

  /// @brief Field kMaxPingCount offset 0xffffffff size 0x4
  static constexpr int32_t kMaxPingCount{ static_cast<int32_t>(0xa) };

  /// @brief Field kGetMatchmakingInstancePath offset 0xffffffff size 0x8
  static constexpr ::ConstString kGetMatchmakingInstancePath{ u"beat_saber_get_multiplayer_instance" };

  /// @brief Field kCancelMatchmakingTicketPath offset 0xffffffff size 0x8
  static constexpr ::ConstString kCancelMatchmakingTicketPath{ u"beat_saber_multiplayer_cancel_matchmaking_ticket" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider, 0x40>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider, ____networkConfig) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider, ____graphAPIClient) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider, ____xPlatformAuthFeatureFlag) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider, ____pingAverages) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider, ____pingCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider, ____lastPingTime) == 0x38, "Offset mismatch!");

} // namespace BGNet::Core::GameLift
NEED_NO_BOX(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*, "BGNet.Core.GameLift", "GameLiftPlayerSessionProvider");
NEED_NO_BOX(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c*, "BGNet.Core.GameLift", "GameLiftPlayerSessionProvider/<>c");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, "BGNet.Core.GameLift",
                       "GameLiftPlayerSessionProvider/<GetGameLiftPlayerSessionInfo>d__14");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15, "BGNet.Core.GameLift",
                       "GameLiftPlayerSessionProvider/<PingAllAwsGameLiftRegions>d__15");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17, "BGNet.Core.GameLift", "GameLiftPlayerSessionProvider/<PingRegionAsync>d__17");
