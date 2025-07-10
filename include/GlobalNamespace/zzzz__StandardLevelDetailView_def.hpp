#pragma once
// IWYU pragma private; include "GlobalNamespace/StandardLevelDetailView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__LoadBeatmapLevelDataResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StandardLevelDetailView)
namespace GlobalNamespace {
class AudioClipAsyncLoader;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSegmentedControlController;
}
namespace GlobalNamespace {
class BeatmapDataBasicInfo;
}
namespace GlobalNamespace {
class BeatmapDataLoader;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
class BeatmapDifficultySegmentedControlController;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
struct BeatmapLevelLoader_LevelDownloadingUpdate;
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
class LevelBar;
}
namespace GlobalNamespace {
class LevelParamsPanel;
}
namespace GlobalNamespace {
class LoadingControl;
}
namespace GlobalNamespace {
class PlayerData;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace GlobalNamespace {
struct StandardLevelDetailViewController_ContentType;
}
namespace GlobalNamespace {
struct StandardLevelDetailView__CalculateAndSetContentAsync_d__63;
}
namespace GlobalNamespace {
struct StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__58;
}
namespace GlobalNamespace {
struct StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__57;
}
namespace GlobalNamespace {
struct StandardLevelDetailView__SetBeatmapLevelVersions_d__64;
}
namespace GlobalNamespace {
class StandardLevelDetailView___c;
}
namespace GlobalNamespace {
class StandardLevelDetailView___c__DisplayClass45_0;
}
namespace HMUI {
class ToggleBinder;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace Tweening {
class Tween;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelDetailView;
}
namespace GlobalNamespace {
class StandardLevelDetailView___c;
}
namespace GlobalNamespace {
class StandardLevelDetailView___c__DisplayClass45_0;
}
namespace GlobalNamespace {
struct StandardLevelDetailView__CalculateAndSetContentAsync_d__63;
}
namespace GlobalNamespace {
struct StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__58;
}
namespace GlobalNamespace {
struct StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__57;
}
namespace GlobalNamespace {
struct StandardLevelDetailView__SetBeatmapLevelVersions_d__64;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelDetailView);
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelDetailView___c);
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelDetailView___c__DisplayClass45_0);
MARK_VAL_T(::GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__63);
MARK_VAL_T(::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__58);
MARK_VAL_T(::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__57);
MARK_VAL_T(::GlobalNamespace::StandardLevelDetailView__SetBeatmapLevelVersions_d__64);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: StandardLevelDetailView/<>c
class CORDL_TYPE StandardLevelDetailView___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::StandardLevelDetailView___c* __9;

  /// @brief Field <>9__45_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__45_1, put = setStaticF___9__45_1)) ::System::Func_2<::GlobalNamespace::BeatmapKey, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* __9__45_1;

  static inline ::GlobalNamespace::StandardLevelDetailView___c* New_ctor();

  /// @brief Method <SetContent>b__45_1, addr 0x3b71718, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> _SetContent_b__45_1(::GlobalNamespace::BeatmapKey key);

  /// @brief Method .ctor, addr 0x3b71710, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::StandardLevelDetailView___c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::BeatmapKey, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* getStaticF___9__45_1();

  static inline void setStaticF___9(::GlobalNamespace::StandardLevelDetailView___c* value);

  static inline void setStaticF___9__45_1(::System::Func_2<::GlobalNamespace::BeatmapKey, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelDetailView___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelDetailView___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelDetailView___c(StandardLevelDetailView___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelDetailView___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelDetailView___c(StandardLevelDetailView___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5395 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelDetailView___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapDifficultyMask, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: StandardLevelDetailView/<>c__DisplayClass45_0
class CORDL_TYPE StandardLevelDetailView___c__DisplayClass45_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field allowedBeatmapDifficultyMask, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_allowedBeatmapDifficultyMask,
                      put = __cordl_internal_set_allowedBeatmapDifficultyMask)) ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask;

  static inline ::GlobalNamespace::StandardLevelDetailView___c__DisplayClass45_0* New_ctor();

  /// @brief Method <SetContent>b__0, addr 0x3b71720, size 0x10, virtual false, abstract: false, final false
  inline bool _SetContent_b__0(::GlobalNamespace::BeatmapKey key);

  constexpr ::GlobalNamespace::BeatmapDifficultyMask const& __cordl_internal_get_allowedBeatmapDifficultyMask() const;

  constexpr ::GlobalNamespace::BeatmapDifficultyMask& __cordl_internal_get_allowedBeatmapDifficultyMask();

  constexpr void __cordl_internal_set_allowedBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask value);

  /// @brief Method .ctor, addr 0x3b7079c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelDetailView___c__DisplayClass45_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelDetailView___c__DisplayClass45_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelDetailView___c__DisplayClass45_0(StandardLevelDetailView___c__DisplayClass45_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelDetailView___c__DisplayClass45_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelDetailView___c__DisplayClass45_0(StandardLevelDetailView___c__DisplayClass45_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5396 };

  /// @brief Field allowedBeatmapDifficultyMask, offset: 0x10, size: 0x1, def value: None
  ::GlobalNamespace::BeatmapDifficultyMask ___allowedBeatmapDifficultyMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView___c__DisplayClass45_0, ___allowedBeatmapDifficultyMask) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelDetailView___c__DisplayClass45_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapKey, BeatmapLevelDataVersion, LoadBeatmapLevelDataResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: StandardLevelDetailView/<CalculateAndSetContentAsync>d__63
struct CORDL_TYPE StandardLevelDetailView__CalculateAndSetContentAsync_d__63 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3b71730, size 0x784, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3b71eb4, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelDetailView__CalculateAndSetContentAsync_d__63();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::StandardLevelDetailView>",
  // modifiers: "", def_value: None }, CppParam { name: "beatmapKey", ty: "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_beatmapLevelData_5__2", ty: "::GlobalNamespace::LoadBeatmapLevelDataResult", modifiers: "",
  // def_value: None }, CppParam { name: "_songLength_5__3", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>>", modifiers: "", def_value: None }, CppParam { name: "__u__4", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*>", modifiers: "", def_value: None }]
  constexpr StandardLevelDetailView__CalculateAndSetContentAsync_d__63(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                       ::UnityW<::GlobalNamespace::StandardLevelDetailView> __4__this, ::GlobalNamespace::BeatmapKey beatmapKey,
                                                                       ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::LoadBeatmapLevelDataResult _beatmapLevelData_5__2,
                                                                       float_t _songLength_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion> __u__1,
                                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__2,
                                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>> __u__3,
                                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*> __u__4) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5397 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelDetailView> __4__this;

  /// @brief Field beatmapKey, offset: 0x28, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <beatmapLevelData>5__2, offset: 0x48, size: 0x10, def value: None
  ::GlobalNamespace::LoadBeatmapLevelDataResult _beatmapLevelData_5__2;

  /// @brief Field <songLength>5__3, offset: 0x58, size: 0x4, def value: None
  float_t _songLength_5__3;

  /// @brief Field <>u__1, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion> __u__1;

  /// @brief Field <>u__2, offset: 0x68, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__2;

  /// @brief Field <>u__3, offset: 0x70, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>> __u__3;

  /// @brief Field <>u__4, offset: 0x78, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*> __u__4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__63, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__63, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__63, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__63, beatmapKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__63, cancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__63, _beatmapLevelData_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__63, _songLength_5__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__63, __u__1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__63, __u__2) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__63, __u__3) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__63, __u__4) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__63, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: StandardLevelDetailView/<CheckIfBeatmapLevelDataExists>d__57
struct CORDL_TYPE StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__57 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3b71f1c, size 0x2a4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3b721c0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__57();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::StandardLevelDetailView>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__57(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                         ::UnityW<::GlobalNamespace::StandardLevelDetailView> __4__this,
                                                                         ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5398 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelDetailView> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__57, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__57, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__57, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__57, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__57, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapLevelDataVersion, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: StandardLevelDetailView/<CheckIfBeatmapLevelDataExistsAsync>d__58
struct CORDL_TYPE StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__58 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3b721cc, size 0x544, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3b72710, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__58();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::StandardLevelDetailView>",
  // modifiers: "", def_value: None }, CppParam { name: "beatmapLevelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__58(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                              ::UnityW<::GlobalNamespace::StandardLevelDetailView> __4__this, ::StringW beatmapLevelId,
                                                                              ::System::Threading::CancellationToken cancellationToken,
                                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion> __u__1,
                                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5399 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelDetailView> __4__this;

  /// @brief Field beatmapLevelId, offset: 0x28, size: 0x8, def value: None
  ::StringW beatmapLevelId;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion> __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__58, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__58, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__58, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__58, beatmapLevelId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__58, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__58, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__58, __u__2) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__58, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapLevelDataVersion, LoadBeatmapLevelDataResult, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: StandardLevelDetailView/<SetBeatmapLevelVersions>d__64
struct CORDL_TYPE StandardLevelDetailView__SetBeatmapLevelVersions_d__64 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3b72778, size 0x5bc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3b72d34, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelDetailView__SetBeatmapLevelVersions_d__64();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::StandardLevelDetailView>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: None
  // }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: None }]
  constexpr StandardLevelDetailView__SetBeatmapLevelVersions_d__64(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                   ::UnityW<::GlobalNamespace::StandardLevelDetailView> __4__this,
                                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion> __u__1,
                                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5400 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelDetailView> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion> __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView__SetBeatmapLevelVersions_d__64, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView__SetBeatmapLevelVersions_d__64, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView__SetBeatmapLevelVersions_d__64, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView__SetBeatmapLevelVersions_d__64, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView__SetBeatmapLevelVersions_d__64, __u__2) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelDetailView__SetBeatmapLevelVersions_d__64, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapDifficultyMask, BeatmapKey, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: StandardLevelDetailView
class CORDL_TYPE StandardLevelDetailView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _CalculateAndSetContentAsync_d__63 = ::GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__63;

  using _CheckIfBeatmapLevelDataExistsAsync_d__58 = ::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__58;

  using _CheckIfBeatmapLevelDataExists_d__57 = ::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__57;

  using _SetBeatmapLevelVersions_d__64 = ::GlobalNamespace::StandardLevelDetailView__SetBeatmapLevelVersions_d__64;

  using __c = ::GlobalNamespace::StandardLevelDetailView___c;

  using __c__DisplayClass45_0 = ::GlobalNamespace::StandardLevelDetailView___c__DisplayClass45_0;

  /// @brief Field _actionButton, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__actionButton, put = __cordl_internal_set__actionButton)) ::UnityW<::UnityEngine::UI::Button> _actionButton;

  /// @brief Field _actionButtonText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__actionButtonText, put = __cordl_internal_set__actionButtonText)) ::UnityW<::TMPro::TextMeshProUGUI> _actionButtonText;

  /// @brief Field _allowedBeatmapDifficultyMask, offset 0xf0, size 0x1
  __declspec(property(get = __cordl_internal_get__allowedBeatmapDifficultyMask,
                      put = __cordl_internal_set__allowedBeatmapDifficultyMask)) ::GlobalNamespace::BeatmapDifficultyMask _allowedBeatmapDifficultyMask;

  /// @brief Field _audioClipAsyncLoader, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClipAsyncLoader, put = __cordl_internal_set__audioClipAsyncLoader)) ::GlobalNamespace::AudioClipAsyncLoader* _audioClipAsyncLoader;

  /// @brief Field _beatmapCharacteristicSegmentedControlController, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristicSegmentedControlController,
                      put = __cordl_internal_set__beatmapCharacteristicSegmentedControlController)) ::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>
      _beatmapCharacteristicSegmentedControlController;

  /// @brief Field _beatmapDataLoader, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataLoader, put = __cordl_internal_set__beatmapDataLoader)) ::GlobalNamespace::BeatmapDataLoader* _beatmapDataLoader;

  /// @brief Field _beatmapDifficultySegmentedControlController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDifficultySegmentedControlController,
                      put = __cordl_internal_set__beatmapDifficultySegmentedControlController)) ::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>
      _beatmapDifficultySegmentedControlController;

  /// @brief Field <beatmapKey>k__BackingField, offset 0xd0, size 0x18
  __declspec(property(get = __cordl_internal_get__beatmapKey_k__BackingField, put = __cordl_internal_set__beatmapKey_k__BackingField)) ::GlobalNamespace::BeatmapKey _beatmapKey_k__BackingField;

  /// @brief Field _beatmapLevel, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevel, put = __cordl_internal_set__beatmapLevel)) ::GlobalNamespace::BeatmapLevel* _beatmapLevel;

  /// @brief Field _beatmapLevelDataVersionText, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelDataVersionText, put = __cordl_internal_set__beatmapLevelDataVersionText)) ::UnityW<::TMPro::TextMeshProUGUI>
      _beatmapLevelDataVersionText;

  /// @brief Field _beatmapLevelVersionText, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelVersionText, put = __cordl_internal_set__beatmapLevelVersionText)) ::UnityW<::TMPro::TextMeshProUGUI> _beatmapLevelVersionText;

  /// @brief Field _beatmapLevelVersionsWrapper, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelVersionsWrapper, put = __cordl_internal_set__beatmapLevelVersionsWrapper)) ::UnityW<::UnityEngine::GameObject>
      _beatmapLevelVersionsWrapper;

  /// @brief Field _beatmapLevelsEntitlementModel, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsEntitlementModel,
                      put = __cordl_internal_set__beatmapLevelsEntitlementModel)) ::GlobalNamespace::BeatmapLevelsEntitlementModel* _beatmapLevelsEntitlementModel;

  /// @brief Field _beatmapLevelsModel, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _buttonsWrapper, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonsWrapper, put = __cordl_internal_set__buttonsWrapper)) ::UnityW<::UnityEngine::GameObject> _buttonsWrapper;

  /// @brief Field _cancellationTokenSource, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__cancellationTokenSource, put = __cordl_internal_set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _checkExistsCancellationTokenSource, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__checkExistsCancellationTokenSource,
                      put = __cordl_internal_set__checkExistsCancellationTokenSource)) ::System::Threading::CancellationTokenSource* _checkExistsCancellationTokenSource;

  /// @brief Field _favoriteToggle, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__favoriteToggle, put = __cordl_internal_set__favoriteToggle)) ::UnityW<::UnityEngine::UI::Toggle> _favoriteToggle;

  /// @brief Field _levelBar, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__levelBar, put = __cordl_internal_set__levelBar)) ::UnityW<::GlobalNamespace::LevelBar> _levelBar;

  /// @brief Field _levelParamsPanel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__levelParamsPanel, put = __cordl_internal_set__levelParamsPanel)) ::UnityW<::GlobalNamespace::LevelParamsPanel> _levelParamsPanel;

  /// @brief Field _levelParamsPanelCanvasGroup, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__levelParamsPanelCanvasGroup, put = __cordl_internal_set__levelParamsPanelCanvasGroup)) ::UnityW<::UnityEngine::CanvasGroup>
      _levelParamsPanelCanvasGroup;

  /// @brief Field _levelParamsPanelCanvasGroupTween, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__levelParamsPanelCanvasGroupTween, put = __cordl_internal_set__levelParamsPanelCanvasGroupTween)) ::Tweening::Tween* _levelParamsPanelCanvasGroupTween;

  /// @brief Field _loadingControl, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__loadingControl, put = __cordl_internal_set__loadingControl)) ::UnityW<::GlobalNamespace::LoadingControl> _loadingControl;

  /// @brief Field _playerData, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__playerData, put = __cordl_internal_set__playerData)) ::GlobalNamespace::PlayerData* _playerData;

  /// @brief Field _practiceButton, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__practiceButton, put = __cordl_internal_set__practiceButton)) ::UnityW<::UnityEngine::UI::Button> _practiceButton;

  /// @brief Field _settingsManager, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _toggleBinder, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__toggleBinder, put = __cordl_internal_set__toggleBinder)) ::HMUI::ToggleBinder* _toggleBinder;

  /// @brief Field _tweeningManager, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager)) ::UnityW<::Tweening::TimeTweeningManager> _tweeningManager;

  __declspec(property(get = get_actionButton)) ::UnityW<::UnityEngine::UI::Button> actionButton;

  __declspec(property(put = set_actionButtonText)) ::StringW actionButtonText;

  __declspec(property(get = get_beatmapKey, put = set_beatmapKey)) ::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field didChangeDifficultyBeatmapEvent, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangeDifficultyBeatmapEvent,
                      put = __cordl_internal_set_didChangeDifficultyBeatmapEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailView>>* didChangeDifficultyBeatmapEvent;

  /// @brief Field didFavoriteToggleChangeEvent, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_didFavoriteToggleChangeEvent,
                      put = __cordl_internal_set_didFavoriteToggleChangeEvent)) ::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>* didFavoriteToggleChangeEvent;

  __declspec(property(put = set_hidePracticeButton)) bool hidePracticeButton;

  __declspec(property(get = get_practiceButton)) ::UnityW<::UnityEngine::UI::Button> practiceButton;

  /// @brief Method Awake, addr 0x3b70834, size 0x180, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CalculateAndSetContent, addr 0x3b71354, size 0x118, virtual false, abstract: false, final false
  inline void CalculateAndSetContent();

  /// @brief Method CalculateAndSetContentAsync, addr 0x3b71588, size 0xe8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* CalculateAndSetContentAsync(::GlobalNamespace::BeatmapKey beatmapKey, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method CheckIfBeatmapLevelDataExists, addr 0x3b707a4, size 0x90, virtual false, abstract: false, final false
  inline void CheckIfBeatmapLevelDataExists();

  /// @brief Method CheckIfBeatmapLevelDataExistsAsync, addr 0x3b71154, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* CheckIfBeatmapLevelDataExistsAsync(::StringW beatmapLevelId, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ClearBeatmapLevel, addr 0x3b66c14, size 0x8, virtual false, abstract: false, final false
  inline void ClearBeatmapLevel();

  /// @brief Method ClearContent, addr 0x3b7122c, size 0x9c, virtual false, abstract: false, final false
  inline void ClearContent();

  /// @brief Method CreateBeatmapKey, addr 0x3b710d8, size 0x44, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapKey CreateBeatmapKey();

  /// @brief Method HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic, addr 0x3b7104c, size 0x8c, virtual false, abstract: false, final false
  inline void HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController* controller,
                                                                                                  ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  /// @brief Method HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty, addr 0x3b70ff8, size 0x34, virtual false, abstract: false, final false
  inline void HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty(::GlobalNamespace::BeatmapDifficultySegmentedControlController* controller,
                                                                                   ::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method HandleBeatmapLevelsModelLevelDownloadingUpdate, addr 0x3b70e34, size 0x64, virtual false, abstract: false, final false
  inline void HandleBeatmapLevelsModelLevelDownloadingUpdate(::GlobalNamespace::BeatmapLevelLoader_LevelDownloadingUpdate levelDownloadingUpdate);

  /// @brief Method HandleDidPressRefreshButton, addr 0x3b70ff4, size 0x4, virtual false, abstract: false, final false
  inline void HandleDidPressRefreshButton();

  static inline ::GlobalNamespace::StandardLevelDetailView* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b70c88, size 0x1ac, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x3b70b30, size 0x158, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3b709b4, size 0x17c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RefreshContent, addr 0x3b66b3c, size 0xb8, virtual false, abstract: false, final false
  inline void RefreshContent();

  /// @brief Method SetBeatmapLevelVersions, addr 0x3b714fc, size 0x8c, virtual false, abstract: false, final false
  inline void SetBeatmapLevelVersions();

  /// @brief Method SetContent, addr 0x3b712c8, size 0x8c, virtual false, abstract: false, final false
  inline void SetContent();

  /// @brief Method SetContent, addr 0x3b67120, size 0x314, virtual false, abstract: false, final false
  inline void SetContent(::GlobalNamespace::BeatmapLevel* level, ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask,
                         ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* notAllowedCharacteristics,
                         ::GlobalNamespace::BeatmapDifficulty defaultDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO* defaultBeatmapCharacteristic, ::GlobalNamespace::PlayerData* playerData);

  /// @brief Method SetContentForBeatmapData, addr 0x3b7111c, size 0x38, virtual false, abstract: false, final false
  inline void SetContentForBeatmapData();

  /// @brief Method SetData, addr 0x3b7146c, size 0x90, virtual false, abstract: false, final false
  inline void SetData(int32_t notesCount, int32_t obstaclesCount, int32_t bombsCount, float_t songLength);

  /// @brief Method ShowContent, addr 0x3b70e98, size 0x15c, virtual false, abstract: false, final false
  inline void ShowContent(::GlobalNamespace::StandardLevelDetailViewController_ContentType contentType, float_t progress);

  /// @brief Method TriggerEvent, addr 0x3b7102c, size 0x20, virtual false, abstract: false, final false
  inline void TriggerEvent();

  /// @brief Method <Awake>b__47_0, addr 0x3b71678, size 0x20, virtual false, abstract: false, final false
  inline void _Awake_b__47_0(bool _);

  /// @brief Method <CalculateAndSetContentAsync>b__63_0, addr 0x3b71698, size 0x1c, virtual false, abstract: false, final false
  inline void _CalculateAndSetContentAsync_b__63_0(float_t value);

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__actionButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__actionButton();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__actionButtonText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__actionButtonText();

  constexpr ::GlobalNamespace::BeatmapDifficultyMask const& __cordl_internal_get__allowedBeatmapDifficultyMask() const;

  constexpr ::GlobalNamespace::BeatmapDifficultyMask& __cordl_internal_get__allowedBeatmapDifficultyMask();

  constexpr ::GlobalNamespace::AudioClipAsyncLoader* const& __cordl_internal_get__audioClipAsyncLoader() const;

  constexpr ::GlobalNamespace::AudioClipAsyncLoader*& __cordl_internal_get__audioClipAsyncLoader();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController> const& __cordl_internal_get__beatmapCharacteristicSegmentedControlController() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>& __cordl_internal_get__beatmapCharacteristicSegmentedControlController();

  constexpr ::GlobalNamespace::BeatmapDataLoader* const& __cordl_internal_get__beatmapDataLoader() const;

  constexpr ::GlobalNamespace::BeatmapDataLoader*& __cordl_internal_get__beatmapDataLoader();

  constexpr ::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController> const& __cordl_internal_get__beatmapDifficultySegmentedControlController() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>& __cordl_internal_get__beatmapDifficultySegmentedControlController();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get__beatmapKey_k__BackingField() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get__beatmapKey_k__BackingField();

  constexpr ::GlobalNamespace::BeatmapLevel* const& __cordl_internal_get__beatmapLevel() const;

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get__beatmapLevel();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__beatmapLevelDataVersionText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__beatmapLevelDataVersionText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__beatmapLevelVersionText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__beatmapLevelVersionText();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__beatmapLevelVersionsWrapper() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__beatmapLevelVersionsWrapper();

  constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel* const& __cordl_internal_get__beatmapLevelsEntitlementModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel*& __cordl_internal_get__beatmapLevelsEntitlementModel();

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__buttonsWrapper() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__buttonsWrapper();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__cancellationTokenSource() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__checkExistsCancellationTokenSource() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__checkExistsCancellationTokenSource();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__favoriteToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__favoriteToggle();

  constexpr ::UnityW<::GlobalNamespace::LevelBar> const& __cordl_internal_get__levelBar() const;

  constexpr ::UnityW<::GlobalNamespace::LevelBar>& __cordl_internal_get__levelBar();

  constexpr ::UnityW<::GlobalNamespace::LevelParamsPanel> const& __cordl_internal_get__levelParamsPanel() const;

  constexpr ::UnityW<::GlobalNamespace::LevelParamsPanel>& __cordl_internal_get__levelParamsPanel();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__levelParamsPanelCanvasGroup() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__levelParamsPanelCanvasGroup();

  constexpr ::Tweening::Tween* const& __cordl_internal_get__levelParamsPanelCanvasGroupTween() const;

  constexpr ::Tweening::Tween*& __cordl_internal_get__levelParamsPanelCanvasGroupTween();

  constexpr ::UnityW<::GlobalNamespace::LoadingControl> const& __cordl_internal_get__loadingControl() const;

  constexpr ::UnityW<::GlobalNamespace::LoadingControl>& __cordl_internal_get__loadingControl();

  constexpr ::GlobalNamespace::PlayerData* const& __cordl_internal_get__playerData() const;

  constexpr ::GlobalNamespace::PlayerData*& __cordl_internal_get__playerData();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__practiceButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__practiceButton();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr ::HMUI::ToggleBinder* const& __cordl_internal_get__toggleBinder() const;

  constexpr ::HMUI::ToggleBinder*& __cordl_internal_get__toggleBinder();

  constexpr ::UnityW<::Tweening::TimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailView>>* const& __cordl_internal_get_didChangeDifficultyBeatmapEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailView>>*& __cordl_internal_get_didChangeDifficultyBeatmapEvent();

  constexpr ::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>* const& __cordl_internal_get_didFavoriteToggleChangeEvent() const;

  constexpr ::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>*& __cordl_internal_get_didFavoriteToggleChangeEvent();

  constexpr void __cordl_internal_set__actionButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__actionButtonText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__allowedBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask value);

  constexpr void __cordl_internal_set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value);

  constexpr void __cordl_internal_set__beatmapCharacteristicSegmentedControlController(::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController> value);

  constexpr void __cordl_internal_set__beatmapDataLoader(::GlobalNamespace::BeatmapDataLoader* value);

  constexpr void __cordl_internal_set__beatmapDifficultySegmentedControlController(::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController> value);

  constexpr void __cordl_internal_set__beatmapKey_k__BackingField(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set__beatmapLevel(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set__beatmapLevelDataVersionText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__beatmapLevelVersionText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__beatmapLevelVersionsWrapper(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__beatmapLevelsEntitlementModel(::GlobalNamespace::BeatmapLevelsEntitlementModel* value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__buttonsWrapper(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__checkExistsCancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__favoriteToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__levelBar(::UnityW<::GlobalNamespace::LevelBar> value);

  constexpr void __cordl_internal_set__levelParamsPanel(::UnityW<::GlobalNamespace::LevelParamsPanel> value);

  constexpr void __cordl_internal_set__levelParamsPanelCanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set__levelParamsPanelCanvasGroupTween(::Tweening::Tween* value);

  constexpr void __cordl_internal_set__loadingControl(::UnityW<::GlobalNamespace::LoadingControl> value);

  constexpr void __cordl_internal_set__playerData(::GlobalNamespace::PlayerData* value);

  constexpr void __cordl_internal_set__practiceButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value);

  constexpr void __cordl_internal_set_didChangeDifficultyBeatmapEvent(::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailView>>* value);

  constexpr void __cordl_internal_set_didFavoriteToggleChangeEvent(::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>* value);

  /// @brief Method .ctor, addr 0x3b71670, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didChangeDifficultyBeatmapEvent, addr 0x3b67908, size 0xb0, virtual false, abstract: false, final false
  inline void add_didChangeDifficultyBeatmapEvent(::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailView>>* value);

  /// @brief Method add_didFavoriteToggleChangeEvent, addr 0x3b679b8, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFavoriteToggleChangeEvent(::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>* value);

  /// @brief Method get_actionButton, addr 0x3b70764, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Button> get_actionButton();

  /// @brief Method get_beatmapKey, addr 0x3b70774, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapKey get_beatmapKey();

  /// @brief Method get_practiceButton, addr 0x3b7076c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Button> get_practiceButton();

  /// @brief Method remove_didChangeDifficultyBeatmapEvent, addr 0x3b67c50, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didChangeDifficultyBeatmapEvent(::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailView>>* value);

  /// @brief Method remove_didFavoriteToggleChangeEvent, addr 0x3b67d00, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFavoriteToggleChangeEvent(::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>* value);

  /// @brief Method set_actionButtonText, addr 0x3b66670, size 0x24, virtual false, abstract: false, final false
  inline void set_actionButtonText(::StringW value);

  /// @brief Method set_beatmapKey, addr 0x3b70788, size 0x14, virtual false, abstract: false, final false
  inline void set_beatmapKey(::GlobalNamespace::BeatmapKey value);

  /// @brief Method set_hidePracticeButton, addr 0x3b6663c, size 0x34, virtual false, abstract: false, final false
  inline void set_hidePracticeButton(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelDetailView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelDetailView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelDetailView(StandardLevelDetailView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelDetailView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelDetailView(StandardLevelDetailView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5401 };

  /// @brief Field _actionButton, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____actionButton;

  /// @brief Field _actionButtonText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____actionButtonText;

  /// @brief Field _practiceButton, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____practiceButton;

  /// @brief Field _levelBar, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelBar> ____levelBar;

  /// @brief Field _levelParamsPanel, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelParamsPanel> ____levelParamsPanel;

  /// @brief Field _levelParamsPanelCanvasGroup, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____levelParamsPanelCanvasGroup;

  /// @brief Field _beatmapDifficultySegmentedControlController, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController> ____beatmapDifficultySegmentedControlController;

  /// @brief Field _beatmapCharacteristicSegmentedControlController, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController> ____beatmapCharacteristicSegmentedControlController;

  /// @brief Field _favoriteToggle, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____favoriteToggle;

  /// @brief Field _buttonsWrapper, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____buttonsWrapper;

  /// @brief Field _loadingControl, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LoadingControl> ____loadingControl;

  /// @brief Field _beatmapLevelVersionsWrapper, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____beatmapLevelVersionsWrapper;

  /// @brief Field _beatmapLevelVersionText, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____beatmapLevelVersionText;

  /// @brief Field _beatmapLevelDataVersionText, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____beatmapLevelDataVersionText;

  /// @brief Field _beatmapLevelsModel, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _beatmapDataLoader, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataLoader* ____beatmapDataLoader;

  /// @brief Field _audioClipAsyncLoader, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::AudioClipAsyncLoader* ____audioClipAsyncLoader;

  /// @brief Field _tweeningManager, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::Tweening::TimeTweeningManager> ____tweeningManager;

  /// @brief Field _settingsManager, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _beatmapLevelsEntitlementModel, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsEntitlementModel* ____beatmapLevelsEntitlementModel;

  /// @brief Field didChangeDifficultyBeatmapEvent, offset: 0xc0, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailView>>* ___didChangeDifficultyBeatmapEvent;

  /// @brief Field didFavoriteToggleChangeEvent, offset: 0xc8, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>* ___didFavoriteToggleChangeEvent;

  /// @brief Field <beatmapKey>k__BackingField, offset: 0xd0, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ____beatmapKey_k__BackingField;

  /// @brief Field _beatmapLevel, offset: 0xe8, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ____beatmapLevel;

  /// @brief Field _allowedBeatmapDifficultyMask, offset: 0xf0, size: 0x1, def value: None
  ::GlobalNamespace::BeatmapDifficultyMask ____allowedBeatmapDifficultyMask;

  /// @brief Field _playerData, offset: 0xf8, size: 0x8, def value: None
  ::GlobalNamespace::PlayerData* ____playerData;

  /// @brief Field _toggleBinder, offset: 0x100, size: 0x8, def value: None
  ::HMUI::ToggleBinder* ____toggleBinder;

  /// @brief Field _cancellationTokenSource, offset: 0x108, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  /// @brief Field _checkExistsCancellationTokenSource, offset: 0x110, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____checkExistsCancellationTokenSource;

  /// @brief Field _levelParamsPanelCanvasGroupTween, offset: 0x118, size: 0x8, def value: None
  ::Tweening::Tween* ____levelParamsPanelCanvasGroupTween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____actionButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____actionButtonText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____practiceButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____levelBar) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____levelParamsPanel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____levelParamsPanelCanvasGroup) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____beatmapDifficultySegmentedControlController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____beatmapCharacteristicSegmentedControlController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____favoriteToggle) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____buttonsWrapper) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____loadingControl) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____beatmapLevelVersionsWrapper) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____beatmapLevelVersionText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____beatmapLevelDataVersionText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____beatmapLevelsModel) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____beatmapDataLoader) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____audioClipAsyncLoader) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____tweeningManager) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____settingsManager) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____beatmapLevelsEntitlementModel) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ___didChangeDifficultyBeatmapEvent) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ___didFavoriteToggleChangeEvent) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____beatmapKey_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____beatmapLevel) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____allowedBeatmapDifficultyMask) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____playerData) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____toggleBinder) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____cancellationTokenSource) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____checkExistsCancellationTokenSource) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____levelParamsPanelCanvasGroupTween) == 0x118, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelDetailView, 0x120>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelDetailView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelDetailView*, "", "StandardLevelDetailView");
NEED_NO_BOX(::GlobalNamespace::StandardLevelDetailView___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelDetailView___c*, "", "StandardLevelDetailView/<>c");
NEED_NO_BOX(::GlobalNamespace::StandardLevelDetailView___c__DisplayClass45_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelDetailView___c__DisplayClass45_0*, "", "StandardLevelDetailView/<>c__DisplayClass45_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__63, "", "StandardLevelDetailView/<CalculateAndSetContentAsync>d__63");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__58, "", "StandardLevelDetailView/<CheckIfBeatmapLevelDataExistsAsync>d__58");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__57, "", "StandardLevelDetailView/<CheckIfBeatmapLevelDataExists>d__57");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelDetailView__SetBeatmapLevelVersions_d__64, "", "StandardLevelDetailView/<SetBeatmapLevelVersions>d__64");
