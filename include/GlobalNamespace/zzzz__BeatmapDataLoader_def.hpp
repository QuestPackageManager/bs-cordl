#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapDataLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__LoadBeatmapLevelDataResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataLoader)
namespace GlobalNamespace {
class BeatmapDataBasicInfo;
}
namespace GlobalNamespace {
class BeatmapDataCache;
}
namespace GlobalNamespace {
struct BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10;
}
namespace GlobalNamespace {
struct BeatmapDataLoader__LoadAndTransformAsync_d__13;
}
namespace GlobalNamespace {
struct BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5;
}
namespace GlobalNamespace {
struct BeatmapDataLoader__LoadBeatmapDataAsync_d__8;
}
namespace GlobalNamespace {
class BeatmapDataLoader___c;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
struct BeatmapLevelDataVersion;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevelsEntitlementModel;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class IEnvironmentInfo;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class IRefractorDebuggerSettings;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Version;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataLoader;
}
namespace GlobalNamespace {
class BeatmapDataLoader___c;
}
namespace GlobalNamespace {
struct BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10;
}
namespace GlobalNamespace {
struct BeatmapDataLoader__LoadAndTransformAsync_d__13;
}
namespace GlobalNamespace {
struct BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5;
}
namespace GlobalNamespace {
struct BeatmapDataLoader__LoadBeatmapDataAsync_d__8;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeatmapDataLoader*);
MARK_REF_T(::GlobalNamespace::BeatmapDataLoader___c*);
MARK_VAL_T(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10);
MARK_VAL_T(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13);
MARK_VAL_T(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5);
MARK_VAL_T(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapDataLoader*, "", "BeatmapDataLoader");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapDataLoader___c*, "", "BeatmapDataLoader/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10, "", "BeatmapDataLoader/<CreateOrGetTransformedBeatmapDataAsync>d__10");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13, "", "BeatmapDataLoader/<LoadAndTransformAsync>d__13");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5, "", "BeatmapDataLoader/<LoadBasicBeatmapDataAsync>d__5");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8, "", "BeatmapDataLoader/<LoadBeatmapDataAsync>d__8");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapDataLoader/<>c
class CORDL_TYPE BeatmapDataLoader___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::BeatmapDataLoader___c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0)) ::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>* __9__10_0;

  static inline ::GlobalNamespace::BeatmapDataLoader___c* New_ctor();

  /// @brief Method <CreateOrGetTransformedBeatmapDataAsync>b__10_0, addr 0x37120a4, size 0x28, virtual false, abstract: false, final false
  inline void _CreateOrGetTransformedBeatmapDataAsync_b__10_0(::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* t);

  /// @brief Method .ctor, addr 0x37120a0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::BeatmapDataLoader___c* getStaticF___9();

  static inline ::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>* getStaticF___9__10_0();

  static inline void setStaticF___9(::GlobalNamespace::BeatmapDataLoader___c* value);

  static inline void setStaticF___9__10_0(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader___c(BeatmapDataLoader___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader___c(BeatmapDataLoader___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14891 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BeatmapDataLoader___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapKey, BeatmapLevelDataVersion, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapDataLoader/<CreateOrGetTransformedBeatmapDataAsync>d__10
struct CORDL_TYPE BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x37120cc, size 0x8ec, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3712a78, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelDataVersion", ty:
  // "::System::Nullable_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapDataLoader*", modifiers: "",
  // def_value: None }, CppParam { name: "preloadedBeatmapLevelData", ty: "::GlobalNamespace::IBeatmapLevelData*", modifiers: "", def_value: None }, CppParam { name: "beatmapKey", ty:
  // "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: None }, CppParam { name: "useCache", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "beatmapLevel", ty:
  // "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "gameplayModifiers", ty: "::GlobalNamespace::GameplayModifiers*", modifiers: "", def_value: None }, CppParam
  // { name: "playerSpecificSettings", ty: "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: None }, CppParam { name: "targetEnvironmentInfo", ty:
  // "::UnityW<::GlobalNamespace::EnvironmentInfoSO>", modifiers: "", def_value: None }, CppParam { name: "originalEnvironmentInfo", ty: "::UnityW<::GlobalNamespace::EnvironmentInfoSO>", modifiers:
  // "", def_value: None }, CppParam { name: "screenDisplacementEffects", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None }]
  constexpr BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10(int32_t __1__state,
                                                                            ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder,
                                                                            ::System::Nullable_1<::GlobalNamespace::BeatmapLevelDataVersion> beatmapLevelDataVersion,
                                                                            ::GlobalNamespace::BeatmapDataLoader* __4__this, ::GlobalNamespace::IBeatmapLevelData* preloadedBeatmapLevelData,
                                                                            ::GlobalNamespace::BeatmapKey beatmapKey, bool useCache, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                            ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                                                            ::UnityW<::GlobalNamespace::EnvironmentInfoSO> targetEnvironmentInfo,
                                                                            ::UnityW<::GlobalNamespace::EnvironmentInfoSO> originalEnvironmentInfo, bool screenDisplacementEffects,
                                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion> __u__1,
                                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14892 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder;

  /// @brief Field beatmapLevelDataVersion, offset: 0x20, size: 0x8, def value: None
  ::System::Nullable_1<::GlobalNamespace::BeatmapLevelDataVersion> beatmapLevelDataVersion;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataLoader* __4__this;

  /// @brief Field preloadedBeatmapLevelData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelData* preloadedBeatmapLevelData;

  /// @brief Field beatmapKey, offset: 0x38, size: 0x10, def value: None
  ::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field useCache, offset: 0x48, size: 0x1, def value: None
  bool useCache;

  /// @brief Field beatmapLevel, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field gameplayModifiers, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Field playerSpecificSettings, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Field targetEnvironmentInfo, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentInfoSO> targetEnvironmentInfo;

  /// @brief Field originalEnvironmentInfo, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentInfoSO> originalEnvironmentInfo;

  /// @brief Field screenDisplacementEffects, offset: 0x78, size: 0x1, def value: None
  bool screenDisplacementEffects;

  /// @brief Field <>u__1, offset: 0x80, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion> __u__1;

  /// @brief Field <>u__2, offset: 0x88, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10, beatmapLevelDataVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10, preloadedBeatmapLevelData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10, beatmapKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10, useCache) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10, beatmapLevel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10, gameplayModifiers) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10, playerSpecificSettings) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10, targetEnvironmentInfo) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10, originalEnvironmentInfo) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10, screenDisplacementEffects) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10, __u__1) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10, __u__2) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10) == 0x90, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapKey, BeatmapLevelDataVersion, LoadBeatmapLevelDataResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapDataLoader/<LoadAndTransformAsync>d__13
struct CORDL_TYPE BeatmapDataLoader__LoadAndTransformAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3712af8, size 0x738, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x37133c4, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader__LoadAndTransformAsync_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None }, CppParam { name: "preloadedBeatmapLevelData", ty:
  // "::GlobalNamespace::IBeatmapLevelData*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapDataLoader*", modifiers: "", def_value: None }, CppParam {
  // name: "beatmapKey", ty: "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: None }, CppParam { name: "version", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "", def_value:
  // None }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "targetEnvironmentInfo", ty:
  // "::UnityW<::GlobalNamespace::EnvironmentInfoSO>", modifiers: "", def_value: None }, CppParam { name: "originalEnvironmentInfo", ty: "::UnityW<::GlobalNamespace::EnvironmentInfoSO>", modifiers:
  // "", def_value: None }, CppParam { name: "gameplayModifiers", ty: "::GlobalNamespace::GameplayModifiers*", modifiers: "", def_value: None }, CppParam { name: "playerSpecificSettings", ty:
  // "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: None }, CppParam { name: "screenDisplacementEffects", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None }]
  constexpr BeatmapDataLoader__LoadAndTransformAsync_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder,
                                                           ::GlobalNamespace::IBeatmapLevelData* preloadedBeatmapLevelData, ::GlobalNamespace::BeatmapDataLoader* __4__this,
                                                           ::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::BeatmapLevelDataVersion version, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                           ::UnityW<::GlobalNamespace::EnvironmentInfoSO> targetEnvironmentInfo, ::UnityW<::GlobalNamespace::EnvironmentInfoSO> originalEnvironmentInfo,
                                                           ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                                           bool screenDisplacementEffects, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__1,
                                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14893 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x88 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder;

  /// @brief Field preloadedBeatmapLevelData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelData* preloadedBeatmapLevelData;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataLoader* __4__this;

  /// @brief Field beatmapKey, offset: 0x30, size: 0x10, def value: None
  ::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field version, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapLevelDataVersion version;

  /// @brief Field beatmapLevel, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field targetEnvironmentInfo, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentInfoSO> targetEnvironmentInfo;

  /// @brief Field originalEnvironmentInfo, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentInfoSO> originalEnvironmentInfo;

  /// @brief Field gameplayModifiers, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Field playerSpecificSettings, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Field screenDisplacementEffects, offset: 0x70, size: 0x1, def value: None
  bool screenDisplacementEffects;

  /// @brief Field <>u__1, offset: 0x78, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__1;

  /// @brief Field <>u__2, offset: 0x80, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13, preloadedBeatmapLevelData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13, beatmapKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13, version) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13, beatmapLevel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13, targetEnvironmentInfo) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13, originalEnvironmentInfo) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13, gameplayModifiers) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13, playerSpecificSettings) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13, screenDisplacementEffects) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13, __u__1) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13, __u__2) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13) == 0x88, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapKey, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapDataLoader/<LoadBasicBeatmapDataAsync>d__5
struct CORDL_TYPE BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3713444, size 0x6c4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3713b08, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapDataBasicInfo*>", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelData", ty:
  // "::GlobalNamespace::IBeatmapLevelData*", modifiers: "", def_value: None }, CppParam { name: "beatmapKey", ty: "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: None }, CppParam { name:
  // "_beatmapJson_5__2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value:
  // None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Version*>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*>", modifiers: "", def_value: None }]
  constexpr BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapDataBasicInfo*> __t__builder,
                                                              ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::BeatmapKey beatmapKey, ::StringW _beatmapJson_5__2,
                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1,
                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Version*> __u__2,
                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*> __u__3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14894 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapDataBasicInfo*> __t__builder;

  /// @brief Field beatmapLevelData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData;

  /// @brief Field beatmapKey, offset: 0x28, size: 0x10, def value: None
  ::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field <beatmapJson>5__2, offset: 0x38, size: 0x8, def value: None
  ::StringW _beatmapJson_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Version*> __u__2;

  /// @brief Field <>u__3, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*> __u__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5, beatmapLevelData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5, beatmapKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5, _beatmapJson_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5, __u__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5, __u__3) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5) == 0x58, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapKey, BeatmapLevelDataVersion, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapDataLoader/<LoadBeatmapDataAsync>d__8
struct CORDL_TYPE BeatmapDataLoader__LoadBeatmapDataAsync_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3713b88, size 0xc34, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x37148f0, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader__LoadBeatmapDataAsync_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None }, CppParam { name: "playerSpecificSettings", ty:
  // "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: None }, CppParam { name: "beatmapKey", ty: "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: None }, CppParam {
  // name: "targetEnvironmentInfo", ty: "::GlobalNamespace::IEnvironmentInfo*", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelData", ty: "::GlobalNamespace::IBeatmapLevelData*",
  // modifiers: "", def_value: None }, CppParam { name: "startBpm", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "loadingForDesignatedEnvironment", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "beatmapLevelDataVersion", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "", def_value: None }, CppParam { name: "originalEnvironmentInfo", ty:
  // "::GlobalNamespace::IEnvironmentInfo*", modifiers: "", def_value: None }, CppParam { name: "gameplayModifiers", ty: "::GlobalNamespace::GameplayModifiers*", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::StringW>>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapData*>", modifiers: "", def_value: None }]
  constexpr BeatmapDataLoader__LoadBeatmapDataAsync_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder,
                                                         ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::BeatmapKey beatmapKey,
                                                         ::GlobalNamespace::IEnvironmentInfo* targetEnvironmentInfo, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, float_t startBpm,
                                                         bool loadingForDesignatedEnvironment, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                         ::GlobalNamespace::IEnvironmentInfo* originalEnvironmentInfo, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                         ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::StringW>> __u__1,
                                                         ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapData*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14895 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder;

  /// @brief Field playerSpecificSettings, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Field beatmapKey, offset: 0x28, size: 0x10, def value: None
  ::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field targetEnvironmentInfo, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IEnvironmentInfo* targetEnvironmentInfo;

  /// @brief Field beatmapLevelData, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData;

  /// @brief Field startBpm, offset: 0x48, size: 0x4, def value: None
  float_t startBpm;

  /// @brief Field loadingForDesignatedEnvironment, offset: 0x4c, size: 0x1, def value: None
  bool loadingForDesignatedEnvironment;

  /// @brief Field beatmapLevelDataVersion, offset: 0x50, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion;

  /// @brief Field originalEnvironmentInfo, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::IEnvironmentInfo* originalEnvironmentInfo;

  /// @brief Field gameplayModifiers, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Field <>u__1, offset: 0x68, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::StringW>> __u__1;

  /// @brief Field <>u__2, offset: 0x70, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapData*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8, playerSpecificSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8, beatmapKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8, targetEnvironmentInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8, beatmapLevelData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8, startBpm) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8, loadingForDesignatedEnvironment) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8, beatmapLevelDataVersion) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8, originalEnvironmentInfo) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8, gameplayModifiers) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8, __u__1) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8, __u__2) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8) == 0x78, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapDataLoader
class CORDL_TYPE BeatmapDataLoader : public ::System::Object {
public:
  // Declarations
  using _CreateOrGetTransformedBeatmapDataAsync_d__10 = ::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10;

  using _LoadAndTransformAsync_d__13 = ::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13;

  using _LoadBasicBeatmapDataAsync_d__5 = ::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5;

  using _LoadBeatmapDataAsync_d__8 = ::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8;

  using __c = ::GlobalNamespace::BeatmapDataLoader___c;

  /// @brief Field _beatmapLevelsEntitlementModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsEntitlementModel,
                      put = __cordl_internal_set__beatmapLevelsEntitlementModel)) ::GlobalNamespace::BeatmapLevelsEntitlementModel* _beatmapLevelsEntitlementModel;

  /// @brief Field _beatmapLevelsModel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _lastUsedBeatmapDataCache, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__lastUsedBeatmapDataCache, put = __cordl_internal_set__lastUsedBeatmapDataCache)) ::GlobalNamespace::BeatmapDataCache* _lastUsedBeatmapDataCache;

  /// @brief Field _refractorDebuggerSettings, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__refractorDebuggerSettings,
                      put = __cordl_internal_set__refractorDebuggerSettings)) ::GlobalNamespace::IRefractorDebuggerSettings* _refractorDebuggerSettings;

  /// @brief Method ClearLastUsedBeatmapCache, addr 0x3711ef8, size 0x8, virtual false, abstract: false, final false
  inline void ClearLastUsedBeatmapCache();

  /// @brief Method CreateOrGetTransformedBeatmapDataAsync, addr 0x3711ce8, size 0x14c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*
  CreateOrGetTransformedBeatmapDataAsync(::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                         ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::EnvironmentInfoSO* targetEnvironmentInfo,
                                         ::GlobalNamespace::EnvironmentInfoSO* originalEnvironmentInfo, bool useCache, bool screenDisplacementEffects,
                                         ::GlobalNamespace::IBeatmapLevelData* preloadedBeatmapLevelData, ::System::Nullable_1<::GlobalNamespace::BeatmapLevelDataVersion> beatmapLevelDataVersion);

  /// @brief Method IsCachedEntryStale, addr 0x3711e34, size 0xc4, virtual false, abstract: false, final false
  static inline bool IsCachedEntryStale(::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* task);

  /// @brief Method LoadAndTransformAsync, addr 0x3711f00, size 0x14c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*
  LoadAndTransformAsync(::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                        ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::EnvironmentInfoSO* targetEnvironmentInfo,
                        ::GlobalNamespace::EnvironmentInfoSO* originalEnvironmentInfo, ::GlobalNamespace::IBeatmapLevelData* preloadedBeatmapLevelData,
                        ::GlobalNamespace::BeatmapLevelDataVersion version, bool screenDisplacementEffects);

  /// @brief Method LoadBasicBeatmapData, addr 0x3711604, size 0xf4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataBasicInfo* LoadBasicBeatmapData(::StringW beatmapJson);

  /// @brief Method LoadBasicBeatmapData, addr 0x3711528, size 0xdc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataBasicInfo* LoadBasicBeatmapData(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method LoadBasicBeatmapDataAsync, addr 0x3711430, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>* LoadBasicBeatmapDataAsync(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData,
                                                                                                                 ::GlobalNamespace::BeatmapKey beatmapKey);

  /// @brief Method LoadBeatmapData, addr 0x371183c, size 0x4ac, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IReadonlyBeatmapData* LoadBeatmapData(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::BeatmapKey beatmapKey, float_t startBpm,
                                                                  bool loadingForDesignatedEnvironment, ::GlobalNamespace::IEnvironmentInfo* environmentInfo,
                                                                  ::GlobalNamespace::IEnvironmentInfo* lightshowEnvironmentInfo, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                                  ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);

  /// @brief Method LoadBeatmapDataAsync, addr 0x37116f8, size 0x144, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*
  LoadBeatmapDataAsync(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::BeatmapKey beatmapKey, float_t startBpm, bool loadingForDesignatedEnvironment,
                       ::GlobalNamespace::IEnvironmentInfo* targetEnvironmentInfo, ::GlobalNamespace::IEnvironmentInfo* originalEnvironmentInfo,
                       ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                       ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);

  static inline ::GlobalNamespace::BeatmapDataLoader* New_ctor(::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel,
                                                               ::GlobalNamespace::BeatmapLevelsEntitlementModel* beatmapLevelsEntitlementModel);

  constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel* const& __cordl_internal_get__beatmapLevelsEntitlementModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel*& __cordl_internal_get__beatmapLevelsEntitlementModel();

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::GlobalNamespace::BeatmapDataCache* const& __cordl_internal_get__lastUsedBeatmapDataCache() const;

  constexpr ::GlobalNamespace::BeatmapDataCache*& __cordl_internal_get__lastUsedBeatmapDataCache();

  constexpr ::GlobalNamespace::IRefractorDebuggerSettings* const& __cordl_internal_get__refractorDebuggerSettings() const;

  constexpr ::GlobalNamespace::IRefractorDebuggerSettings*& __cordl_internal_get__refractorDebuggerSettings();

  constexpr void __cordl_internal_set__beatmapLevelsEntitlementModel(::GlobalNamespace::BeatmapLevelsEntitlementModel* value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__lastUsedBeatmapDataCache(::GlobalNamespace::BeatmapDataCache* value);

  constexpr void __cordl_internal_set__refractorDebuggerSettings(::GlobalNamespace::IRefractorDebuggerSettings* value);

  /// @brief Method .ctor, addr 0x3711428, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel, ::GlobalNamespace::BeatmapLevelsEntitlementModel* beatmapLevelsEntitlementModel);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader(BeatmapDataLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader(BeatmapDataLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14896 };

  /// @brief Field _lastUsedBeatmapDataCache, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCache* ____lastUsedBeatmapDataCache;

  /// @brief Field _beatmapLevelsModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _beatmapLevelsEntitlementModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsEntitlementModel* ____beatmapLevelsEntitlementModel;

  /// @brief Field _refractorDebuggerSettings, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IRefractorDebuggerSettings* ____refractorDebuggerSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader, ____lastUsedBeatmapDataCache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader, ____beatmapLevelsModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader, ____beatmapLevelsEntitlementModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader, ____refractorDebuggerSettings) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapDataLoader) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
