#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataLoader.hpp"
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
struct BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9;
}
namespace GlobalNamespace {
struct BeatmapDataLoader__LoadAndTransformAsync_d__12;
}
namespace GlobalNamespace {
struct BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5;
}
namespace GlobalNamespace {
struct BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6;
}
namespace GlobalNamespace {
struct BeatmapDataLoader__LoadBeatmapDataAsync_d__7;
}
namespace GlobalNamespace {
struct BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8;
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
class BeatmapLightEventConverterNoConvert;
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
struct BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9;
}
namespace GlobalNamespace {
struct BeatmapDataLoader__LoadAndTransformAsync_d__12;
}
namespace GlobalNamespace {
struct BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5;
}
namespace GlobalNamespace {
struct BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6;
}
namespace GlobalNamespace {
struct BeatmapDataLoader__LoadBeatmapDataAsync_d__7;
}
namespace GlobalNamespace {
struct BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeatmapDataLoader*);
MARK_REF_T(::GlobalNamespace::BeatmapDataLoader___c*);
MARK_VAL_T(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9);
MARK_VAL_T(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12);
MARK_VAL_T(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5);
MARK_VAL_T(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6);
MARK_VAL_T(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7);
MARK_VAL_T(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapDataLoader*, "", "BeatmapDataLoader");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapDataLoader___c*, "", "BeatmapDataLoader/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9, "", "BeatmapDataLoader/<CreateOrGetTransformedBeatmapDataAsync>d__9");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12, "", "BeatmapDataLoader/<LoadAndTransformAsync>d__12");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5, "", "BeatmapDataLoader/<LoadBasicBeatmapDataAsync>d__5");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6, "", "BeatmapDataLoader/<LoadBasicBeatmapDataAsync>d__6");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7, "", "BeatmapDataLoader/<LoadBeatmapDataAsync>d__7");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8, "", "BeatmapDataLoader/<LoadBeatmapDataFromJsonAsync>d__8");
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapDataLoader/<>c
class CORDL_TYPE BeatmapDataLoader___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::BeatmapDataLoader___c* __9;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_0, put = setStaticF___9__9_0)) ::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>* __9__9_0;

  static inline ::GlobalNamespace::BeatmapDataLoader___c* New_ctor();

  /// @brief Method <CreateOrGetTransformedBeatmapDataAsync>b__9_0, addr 0x399afe8, size 0x28, virtual false, abstract: false, final false
  inline void _CreateOrGetTransformedBeatmapDataAsync_b__9_0(/* [Nullable(new[] { 0, 2 })] */ ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* t);

  /// @brief Method .ctor, addr 0x399afe4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::BeatmapDataLoader___c* getStaticF___9();

  static inline ::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>* getStaticF___9__9_0();

  static inline void setStaticF___9(::GlobalNamespace::BeatmapDataLoader___c* value);

  static inline void setStaticF___9__9_0(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader___c(BeatmapDataLoader___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader___c(BeatmapDataLoader___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15130 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BeatmapDataLoader___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies BeatmapKey, BeatmapLevelDataVersion, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapDataLoader/<CreateOrGetTransformedBeatmapDataAsync>d__9
struct CORDL_TYPE BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x399b010, size 0x8b4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x399b8c4, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "beatmapLevelDataVersion", ty: "::System::Nullable_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::BeatmapDataLoader*", modifiers: "", def_value: None, comment: None }, CppParam { name: "preloadedBeatmapLevelData", ty: "::GlobalNamespace::IBeatmapLevelData*", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "beatmapKey", ty: "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: None, comment: None }, CppParam { name: "useCache", ty: "bool",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "gameplayModifiers", ty: "::GlobalNamespace::GameplayModifiers*", modifiers: "", def_value: None, comment: None }, CppParam { name: "playerSpecificSettings", ty:
  // "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: None, comment: None }, CppParam { name: "targetEnvironmentInfo", ty: "::UnityW<::GlobalNamespace::EnvironmentInfoSO>",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "originalEnvironmentInfo", ty: "::UnityW<::GlobalNamespace::EnvironmentInfoSO>", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "screenDisplacementEffects", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None, comment: None }]
  constexpr BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9(int32_t __1__state,
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15131 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// [Nullable(0)]
  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder;

  /// @brief Field beatmapLevelDataVersion, offset: 0x20, size: 0x8, def value: None
  ::System::Nullable_1<::GlobalNamespace::BeatmapLevelDataVersion> beatmapLevelDataVersion;

  /// [Nullable(0)]
  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataLoader* __4__this;

  /// [Nullable(0)]
  /// @brief Field preloadedBeatmapLevelData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelData* preloadedBeatmapLevelData;

  /// @brief Field beatmapKey, offset: 0x38, size: 0x10, def value: None
  ::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field useCache, offset: 0x48, size: 0x1, def value: None
  bool useCache;

  /// [Nullable(0)]
  /// @brief Field beatmapLevel, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// [Nullable(0)]
  /// @brief Field gameplayModifiers, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// [Nullable(0)]
  /// @brief Field playerSpecificSettings, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  /// [Nullable(0)]
  /// @brief Field targetEnvironmentInfo, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentInfoSO> targetEnvironmentInfo;

  /// [Nullable(0)]
  /// @brief Field originalEnvironmentInfo, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentInfoSO> originalEnvironmentInfo;

  /// @brief Field screenDisplacementEffects, offset: 0x78, size: 0x1, def value: None
  bool screenDisplacementEffects;

  /// [Nullable(0)]
  /// @brief Field <>u__1, offset: 0x80, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion> __u__1;

  /// [Nullable(new[] { 0, 2 })]
  /// @brief Field <>u__2, offset: 0x88, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9, beatmapLevelDataVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9, preloadedBeatmapLevelData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9, beatmapKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9, useCache) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9, beatmapLevel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9, gameplayModifiers) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9, playerSpecificSettings) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9, targetEnvironmentInfo) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9, originalEnvironmentInfo) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9, screenDisplacementEffects) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9, __u__1) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9, __u__2) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9) == 0x90, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies BeatmapKey, BeatmapLevelDataVersion, LoadBeatmapLevelDataResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapDataLoader/<LoadAndTransformAsync>d__12
struct CORDL_TYPE BeatmapDataLoader__LoadAndTransformAsync_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x399b944, size 0x738, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x399c210, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader__LoadAndTransformAsync_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "preloadedBeatmapLevelData", ty: "::GlobalNamespace::IBeatmapLevelData*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::BeatmapDataLoader*", modifiers: "", def_value: None, comment: None }, CppParam { name: "beatmapKey", ty: "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "version", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "", def_value: None, comment: None }, CppParam { name: "beatmapLevel", ty:
  // "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "targetEnvironmentInfo", ty: "::UnityW<::GlobalNamespace::EnvironmentInfoSO>", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "originalEnvironmentInfo", ty: "::UnityW<::GlobalNamespace::EnvironmentInfoSO>", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "gameplayModifiers", ty: "::GlobalNamespace::GameplayModifiers*", modifiers: "", def_value: None, comment: None }, CppParam { name: "playerSpecificSettings", ty:
  // "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: None, comment: None }, CppParam { name: "screenDisplacementEffects", ty: "bool", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None, comment: None }]
  constexpr BeatmapDataLoader__LoadAndTransformAsync_d__12(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder,
                                                           ::GlobalNamespace::IBeatmapLevelData* preloadedBeatmapLevelData, ::GlobalNamespace::BeatmapDataLoader* __4__this,
                                                           ::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::BeatmapLevelDataVersion version, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                           ::UnityW<::GlobalNamespace::EnvironmentInfoSO> targetEnvironmentInfo, ::UnityW<::GlobalNamespace::EnvironmentInfoSO> originalEnvironmentInfo,
                                                           ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                                           bool screenDisplacementEffects, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__1,
                                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15132 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x88 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// [Nullable(0)]
  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder;

  /// [Nullable(0)]
  /// @brief Field preloadedBeatmapLevelData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelData* preloadedBeatmapLevelData;

  /// [Nullable(0)]
  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataLoader* __4__this;

  /// @brief Field beatmapKey, offset: 0x30, size: 0x10, def value: None
  ::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field version, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapLevelDataVersion version;

  /// [Nullable(0)]
  /// @brief Field beatmapLevel, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// [Nullable(0)]
  /// @brief Field targetEnvironmentInfo, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentInfoSO> targetEnvironmentInfo;

  /// [Nullable(0)]
  /// @brief Field originalEnvironmentInfo, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentInfoSO> originalEnvironmentInfo;

  /// [Nullable(0)]
  /// @brief Field gameplayModifiers, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// [Nullable(0)]
  /// @brief Field playerSpecificSettings, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Field screenDisplacementEffects, offset: 0x70, size: 0x1, def value: None
  bool screenDisplacementEffects;

  /// [Nullable(0)]
  /// @brief Field <>u__1, offset: 0x78, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__1;

  /// [Nullable(new[] { 0, 2 })]
  /// @brief Field <>u__2, offset: 0x80, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12, preloadedBeatmapLevelData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12, beatmapKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12, version) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12, beatmapLevel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12, targetEnvironmentInfo) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12, originalEnvironmentInfo) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12, gameplayModifiers) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12, playerSpecificSettings) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12, screenDisplacementEffects) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12, __u__1) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12, __u__2) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12) == 0x88, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies BeatmapKey, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapDataLoader/<LoadBasicBeatmapDataAsync>d__5
struct CORDL_TYPE BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x399c290, size 0x3d0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x399c660, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapDataBasicInfo*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "beatmapLevelData",
  // ty: "::GlobalNamespace::IBeatmapLevelData*", modifiers: "", def_value: None, comment: None }, CppParam { name: "beatmapKey", ty: "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapDataLoader*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*>", modifiers: "", def_value: None, comment: None }]
  constexpr BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapDataBasicInfo*> __t__builder,
                                                              ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::BeatmapKey beatmapKey,
                                                              ::GlobalNamespace::BeatmapDataLoader* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1,
                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15133 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// [Nullable(0)]
  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapDataBasicInfo*> __t__builder;

  /// [Nullable(0)]
  /// @brief Field beatmapLevelData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData;

  /// @brief Field beatmapKey, offset: 0x28, size: 0x10, def value: None
  ::GlobalNamespace::BeatmapKey beatmapKey;

  /// [Nullable(0)]
  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataLoader* __4__this;

  /// [Nullable(new[] { 0, 2 })]
  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  /// [Nullable(new[] { 0, 2 })]
  /// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5, beatmapLevelData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5, beatmapKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5, __u__2) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5) == 0x50, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapDataLoader/<LoadBasicBeatmapDataAsync>d__6
struct CORDL_TYPE BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x399c6e0, size 0x53c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x399cc1c, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapDataBasicInfo*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "beatmapJson", ty:
  // "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Version*>", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*>", modifiers: "", def_value: None, comment: None
  // }]
  constexpr BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapDataBasicInfo*> __t__builder,
                                                              ::StringW beatmapJson, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Version*> __u__1,
                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15134 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// [Nullable(0)]
  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapDataBasicInfo*> __t__builder;

  /// [Nullable(0)]
  /// @brief Field beatmapJson, offset: 0x20, size: 0x8, def value: None
  ::StringW beatmapJson;

  /// [Nullable(0)]
  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Version*> __u__1;

  /// [Nullable(new[] { 0, 2 })]
  /// @brief Field <>u__2, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6, beatmapJson) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6, __u__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies BeatmapKey, BeatmapLevelDataVersion, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapDataLoader/<LoadBeatmapDataAsync>d__7
struct CORDL_TYPE BeatmapDataLoader__LoadBeatmapDataAsync_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x399cc9c, size 0x9cc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x399d79c, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader__LoadBeatmapDataAsync_d__7();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "playerSpecificSettings", ty: "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: None, comment: None }, CppParam { name: "beatmapKey", ty: "::GlobalNamespace::BeatmapKey",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "targetEnvironmentInfo", ty: "::GlobalNamespace::IEnvironmentInfo*", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "beatmapLevelData", ty: "::GlobalNamespace::IBeatmapLevelData*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapDataLoader*",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "startBpm", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "loadingForDesignatedEnvironment",
  // ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "originalEnvironmentInfo", ty: "::GlobalNamespace::IEnvironmentInfo*", modifiers: "", def_value: None, comment: None
  // }, CppParam { name: "beatmapLevelDataVersion", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "", def_value: None, comment: None }, CppParam { name: "gameplayModifiers", ty:
  // "::GlobalNamespace::GameplayModifiers*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::StringW>>",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "",
  // def_value: None, comment: None }]
  constexpr BeatmapDataLoader__LoadBeatmapDataAsync_d__7(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder,
                                                         ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::BeatmapKey beatmapKey,
                                                         ::GlobalNamespace::IEnvironmentInfo* targetEnvironmentInfo, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData,
                                                         ::GlobalNamespace::BeatmapDataLoader* __4__this, float_t startBpm, bool loadingForDesignatedEnvironment,
                                                         ::GlobalNamespace::IEnvironmentInfo* originalEnvironmentInfo, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                         ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::StringW>> __u__1,
                                                         ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15135 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// [Nullable(0)]
  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder;

  /// [Nullable(0)]
  /// @brief Field playerSpecificSettings, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Field beatmapKey, offset: 0x28, size: 0x10, def value: None
  ::GlobalNamespace::BeatmapKey beatmapKey;

  /// [Nullable(0)]
  /// @brief Field targetEnvironmentInfo, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IEnvironmentInfo* targetEnvironmentInfo;

  /// [Nullable(0)]
  /// @brief Field beatmapLevelData, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData;

  /// [Nullable(0)]
  /// @brief Field <>4__this, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataLoader* __4__this;

  /// @brief Field startBpm, offset: 0x50, size: 0x4, def value: None
  float_t startBpm;

  /// @brief Field loadingForDesignatedEnvironment, offset: 0x54, size: 0x1, def value: None
  bool loadingForDesignatedEnvironment;

  /// [Nullable(0)]
  /// @brief Field originalEnvironmentInfo, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::IEnvironmentInfo* originalEnvironmentInfo;

  /// @brief Field beatmapLevelDataVersion, offset: 0x60, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion;

  /// [Nullable(0)]
  /// @brief Field gameplayModifiers, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// [Nullable(0)]
  /// @brief Field <>u__1, offset: 0x70, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::StringW>> __u__1;

  /// [Nullable(new[] { 0, 2 })]
  /// @brief Field <>u__2, offset: 0x78, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7, playerSpecificSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7, beatmapKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7, targetEnvironmentInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7, beatmapLevelData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7, __4__this) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7, startBpm) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7, loadingForDesignatedEnvironment) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7, originalEnvironmentInfo) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7, beatmapLevelDataVersion) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7, gameplayModifiers) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7, __u__1) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7, __u__2) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7) == 0x80, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies BeatmapKey, BeatmapLevelDataVersion, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapDataLoader/<LoadBeatmapDataFromJsonAsync>d__8
struct CORDL_TYPE BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x399d81c, size 0x5f8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x399de14, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "beatmapJson", ty:
  // "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "defaultLightshowDataJson", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "beatmapKey", ty: "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: None, comment: None }, CppParam { name: "startBpm", ty: "float_t", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "loadingForDesignatedEnvironment", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "targetEnvironmentInfo", ty:
  // "::GlobalNamespace::IEnvironmentInfo*", modifiers: "", def_value: None, comment: None }, CppParam { name: "beatmapLevelDataVersion", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "playerSpecificSettings", ty: "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "audioDataJson", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "lightshowDataJson", ty: "::StringW", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "originalEnvironmentInfo", ty: "::GlobalNamespace::IEnvironmentInfo*", modifiers: "", def_value: None, comment: None }, CppParam { name: "gameplayModifiers", ty:
  // "::GlobalNamespace::GameplayModifiers*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_lightEventConverter_5__2", ty:
  // "::GlobalNamespace::BeatmapLightEventConverterNoConvert*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_beatmapData_5__3", ty: "::GlobalNamespace::BeatmapData*", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Version*>", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapData*>", modifiers: "", def_value: None, comment: None }]
  constexpr BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder, ::StringW beatmapJson,
      ::StringW defaultLightshowDataJson, ::GlobalNamespace::BeatmapKey beatmapKey, float_t startBpm, bool loadingForDesignatedEnvironment, ::GlobalNamespace::IEnvironmentInfo* targetEnvironmentInfo,
      ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::StringW audioDataJson, ::StringW lightshowDataJson,
      ::GlobalNamespace::IEnvironmentInfo* originalEnvironmentInfo, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
      ::GlobalNamespace::BeatmapLightEventConverterNoConvert* _lightEventConverter_5__2, ::GlobalNamespace::BeatmapData* _beatmapData_5__3,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Version*> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapData*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15136 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa0 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// [Nullable(0)]
  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder;

  /// [Nullable(0)]
  /// @brief Field beatmapJson, offset: 0x20, size: 0x8, def value: None
  ::StringW beatmapJson;

  /// [Nullable(0)]
  /// @brief Field defaultLightshowDataJson, offset: 0x28, size: 0x8, def value: None
  ::StringW defaultLightshowDataJson;

  /// @brief Field beatmapKey, offset: 0x30, size: 0x10, def value: None
  ::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field startBpm, offset: 0x40, size: 0x4, def value: None
  float_t startBpm;

  /// @brief Field loadingForDesignatedEnvironment, offset: 0x44, size: 0x1, def value: None
  bool loadingForDesignatedEnvironment;

  /// [Nullable(0)]
  /// @brief Field targetEnvironmentInfo, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IEnvironmentInfo* targetEnvironmentInfo;

  /// @brief Field beatmapLevelDataVersion, offset: 0x50, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion;

  /// [Nullable(0)]
  /// @brief Field playerSpecificSettings, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  /// [Nullable(0)]
  /// @brief Field audioDataJson, offset: 0x60, size: 0x8, def value: None
  ::StringW audioDataJson;

  /// [Nullable(0)]
  /// @brief Field lightshowDataJson, offset: 0x68, size: 0x8, def value: None
  ::StringW lightshowDataJson;

  /// [Nullable(0)]
  /// @brief Field originalEnvironmentInfo, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::IEnvironmentInfo* originalEnvironmentInfo;

  /// [Nullable(0)]
  /// @brief Field gameplayModifiers, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// [Nullable(0)]
  /// @brief Field <lightEventConverter>5__2, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLightEventConverterNoConvert* _lightEventConverter_5__2;

  /// [Nullable(0)]
  /// @brief Field <beatmapData>5__3, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapData* _beatmapData_5__3;

  /// [Nullable(0)]
  /// @brief Field <>u__1, offset: 0x90, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Version*> __u__1;

  /// [Nullable(new[] { 0, 2 })]
  /// @brief Field <>u__2, offset: 0x98, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapData*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8, beatmapJson) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8, defaultLightshowDataJson) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8, beatmapKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8, startBpm) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8, loadingForDesignatedEnvironment) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8, targetEnvironmentInfo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8, beatmapLevelDataVersion) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8, playerSpecificSettings) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8, audioDataJson) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8, lightshowDataJson) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8, originalEnvironmentInfo) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8, gameplayModifiers) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8, _lightEventConverter_5__2) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8, _beatmapData_5__3) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8, __u__1) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8, __u__2) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8) == 0xa0, "Size mismatch!");

} // namespace GlobalNamespace
// [NullableContext(2)]
// [Nullable(0)]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapDataLoader
class CORDL_TYPE BeatmapDataLoader : public ::System::Object {
public:
  // Declarations
  using _CreateOrGetTransformedBeatmapDataAsync_d__9 = ::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9;

  using _LoadAndTransformAsync_d__12 = ::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12;

  using _LoadBasicBeatmapDataAsync_d__5 = ::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5;

  using _LoadBasicBeatmapDataAsync_d__6 = ::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6;

  using _LoadBeatmapDataAsync_d__7 = ::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7;

  using _LoadBeatmapDataFromJsonAsync_d__8 = ::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8;

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

  /// @brief Method ClearLastUsedBeatmapCache, addr 0x399ae3c, size 0x8, virtual false, abstract: false, final false
  inline void ClearLastUsedBeatmapCache();

  /// [NullableContext(1)]
  /// [AsyncStateMachine(typeof(BeatmapDataLoader::<CreateOrGetTransformedBeatmapDataAsync>d__9))]
  /// @brief Method CreateOrGetTransformedBeatmapDataAsync, addr 0x399ac2c, size 0x14c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*
  CreateOrGetTransformedBeatmapDataAsync(::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                         ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::EnvironmentInfoSO* targetEnvironmentInfo,
                                         ::GlobalNamespace::EnvironmentInfoSO* originalEnvironmentInfo, bool useCache, bool screenDisplacementEffects,
                                         /* [Nullable(2)] */ ::GlobalNamespace::IBeatmapLevelData* preloadedBeatmapLevelData,
                                         ::System::Nullable_1<::GlobalNamespace::BeatmapLevelDataVersion> beatmapLevelDataVersion);

  /// @brief Method IsCachedEntryStale, addr 0x399ad78, size 0xc4, virtual false, abstract: false, final false
  static inline bool IsCachedEntryStale(/* [Nullable(new[] { 1, 2 })] */ ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* task);

  /// [NullableContext(1)]
  /// [AsyncStateMachine(typeof(BeatmapDataLoader::<LoadAndTransformAsync>d__12))]
  /// @brief Method LoadAndTransformAsync, addr 0x399ae44, size 0x14c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*
  LoadAndTransformAsync(::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                        ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::EnvironmentInfoSO* targetEnvironmentInfo,
                        ::GlobalNamespace::EnvironmentInfoSO* originalEnvironmentInfo, /* [Nullable(2)] */ ::GlobalNamespace::IBeatmapLevelData* preloadedBeatmapLevelData,
                        ::GlobalNamespace::BeatmapLevelDataVersion version, bool screenDisplacementEffects);

  /// [AsyncStateMachine(typeof(BeatmapDataLoader::<LoadBasicBeatmapDataAsync>d__6))]
  /// @brief Method LoadBasicBeatmapDataAsync, addr 0x399a898, size 0xe0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>* LoadBasicBeatmapDataAsync(::StringW beatmapJson);

  /// [NullableContext(1)]
  /// [AsyncStateMachine(typeof(BeatmapDataLoader::<LoadBasicBeatmapDataAsync>d__5))]
  /// @brief Method LoadBasicBeatmapDataAsync, addr 0x399a794, size 0x104, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>* LoadBasicBeatmapDataAsync(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData,
                                                                                                                 ::GlobalNamespace::BeatmapKey beatmapKey);

  /// [AsyncStateMachine(typeof(BeatmapDataLoader::<LoadBeatmapDataAsync>d__7))]
  /// @brief Method LoadBeatmapDataAsync, addr 0x399a978, size 0x154, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*
  LoadBeatmapDataAsync(/* [Nullable(1)] */ ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::BeatmapKey beatmapKey, float_t startBpm, bool loadingForDesignatedEnvironment,
                       ::GlobalNamespace::IEnvironmentInfo* targetEnvironmentInfo, ::GlobalNamespace::IEnvironmentInfo* originalEnvironmentInfo,
                       ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                       ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);

  /// [AsyncStateMachine(typeof(BeatmapDataLoader::<LoadBeatmapDataFromJsonAsync>d__8))]
  /// @brief Method LoadBeatmapDataFromJsonAsync, addr 0x399aacc, size 0x160, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*
  LoadBeatmapDataFromJsonAsync(::StringW audioDataJson, ::StringW beatmapJson, ::StringW lightshowDataJson, ::StringW defaultLightshowDataJson, ::GlobalNamespace::BeatmapKey beatmapKey,
                               float_t startBpm, bool loadingForDesignatedEnvironment, ::GlobalNamespace::IEnvironmentInfo* targetEnvironmentInfo,
                               ::GlobalNamespace::IEnvironmentInfo* originalEnvironmentInfo, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                               ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);

  /// @brief [Inject]
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

  /// [Inject]
  /// @brief Method .ctor, addr 0x399a78c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel, ::GlobalNamespace::BeatmapLevelsEntitlementModel* beatmapLevelsEntitlementModel);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoader(BeatmapDataLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoader", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoader(BeatmapDataLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15137 };

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
