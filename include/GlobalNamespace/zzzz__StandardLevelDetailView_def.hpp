#pragma once
// IWYU pragma private; include "GlobalNamespace/StandardLevelDetailView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__LoadBeatmapLevelDataResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
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
class BeatmapLevel;
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
struct LoadBeatmapLevelDataResult;
}
namespace GlobalNamespace {
class LoadingControl;
}
namespace GlobalNamespace {
class PlayerData;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader__LevelDownloadingUpdate;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController__ContentType;
}
namespace GlobalNamespace {
struct __StandardLevelDetailView___CalculateAndSetContent_d__56;
}
namespace GlobalNamespace {
struct __StandardLevelDetailView___CheckIfBeatmapLevelDataExists_d__52;
}
namespace GlobalNamespace {
class __StandardLevelDetailView____c;
}
namespace GlobalNamespace {
class __StandardLevelDetailView____c__DisplayClass40_0;
}
namespace HMUI {
class ToggleBinder;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
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
namespace System::Threading {
class CancellationTokenSource;
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
class __StandardLevelDetailView____c;
}
namespace GlobalNamespace {
class __StandardLevelDetailView____c__DisplayClass40_0;
}
namespace GlobalNamespace {
struct __StandardLevelDetailView___CalculateAndSetContent_d__56;
}
namespace GlobalNamespace {
struct __StandardLevelDetailView___CheckIfBeatmapLevelDataExists_d__52;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelDetailView);
MARK_REF_PTR_T(::GlobalNamespace::__StandardLevelDetailView____c);
MARK_REF_PTR_T(::GlobalNamespace::__StandardLevelDetailView____c__DisplayClass40_0);
MARK_VAL_T(::GlobalNamespace::__StandardLevelDetailView___CalculateAndSetContent_d__56);
MARK_VAL_T(::GlobalNamespace::__StandardLevelDetailView___CheckIfBeatmapLevelDataExists_d__52);
// Type: ::<>c__DisplayClass40_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StandardLevelDetailView::<>c__DisplayClass40_0*
class CORDL_TYPE __StandardLevelDetailView____c__DisplayClass40_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field allowedBeatmapDifficultyMask, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_allowedBeatmapDifficultyMask,
                      put = __cordl_internal_set_allowedBeatmapDifficultyMask))::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask;

  static inline ::GlobalNamespace::__StandardLevelDetailView____c__DisplayClass40_0* New_ctor();

  /// @brief Method <SetContent>b__0, addr 0x26711a4, size 0x10, virtual false, abstract: false, final false
  inline bool _SetContent_b__0(::GlobalNamespace::BeatmapKey key);

  constexpr ::GlobalNamespace::BeatmapDifficultyMask const& __cordl_internal_get_allowedBeatmapDifficultyMask() const;

  constexpr ::GlobalNamespace::BeatmapDifficultyMask& __cordl_internal_get_allowedBeatmapDifficultyMask();

  constexpr void __cordl_internal_set_allowedBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask value);

  /// @brief Method .ctor, addr 0x267051c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StandardLevelDetailView____c__DisplayClass40_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__StandardLevelDetailView____c__DisplayClass40_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StandardLevelDetailView____c__DisplayClass40_0(__StandardLevelDetailView____c__DisplayClass40_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StandardLevelDetailView____c__DisplayClass40_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StandardLevelDetailView____c__DisplayClass40_0(__StandardLevelDetailView____c__DisplayClass40_0 const&) = delete;

  /// @brief Field allowedBeatmapDifficultyMask, offset: 0x10, size: 0x1, def value: None
  ::GlobalNamespace::BeatmapDifficultyMask ___allowedBeatmapDifficultyMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardLevelDetailView____c__DisplayClass40_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailView____c__DisplayClass40_0, ___allowedBeatmapDifficultyMask) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StandardLevelDetailView::<>c*
class CORDL_TYPE __StandardLevelDetailView____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__StandardLevelDetailView____c* __9;

  /// @brief Field <>9__40_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__40_1, put = setStaticF___9__40_1))::System::Func_2<::GlobalNamespace::BeatmapKey, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* __9__40_1;

  static inline ::GlobalNamespace::__StandardLevelDetailView____c* New_ctor();

  /// @brief Method <SetContent>b__40_1, addr 0x2671220, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> _SetContent_b__40_1(::GlobalNamespace::BeatmapKey key);

  /// @brief Method .ctor, addr 0x2671218, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__StandardLevelDetailView____c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::BeatmapKey, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* getStaticF___9__40_1();

  static inline void setStaticF___9(::GlobalNamespace::__StandardLevelDetailView____c* value);

  static inline void setStaticF___9__40_1(::System::Func_2<::GlobalNamespace::BeatmapKey, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StandardLevelDetailView____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__StandardLevelDetailView____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StandardLevelDetailView____c(__StandardLevelDetailView____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StandardLevelDetailView____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StandardLevelDetailView____c(__StandardLevelDetailView____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardLevelDetailView____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<CheckIfBeatmapLevelDataExists>d__52
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::StandardLevelDetailView::<CheckIfBeatmapLevelDataExists>d__52
struct CORDL_TYPE __StandardLevelDetailView___CheckIfBeatmapLevelDataExists_d__52 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2671228, size 0x390, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26715b8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StandardLevelDetailView___CheckIfBeatmapLevelDataExists_d__52();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::StandardLevelDetailView>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __StandardLevelDetailView___CheckIfBeatmapLevelDataExists_d__52(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                            ::UnityW<::GlobalNamespace::StandardLevelDetailView> __4__this,
                                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelDetailView> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardLevelDetailView___CheckIfBeatmapLevelDataExists_d__52, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailView___CheckIfBeatmapLevelDataExists_d__52, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailView___CheckIfBeatmapLevelDataExists_d__52, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailView___CheckIfBeatmapLevelDataExists_d__52, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailView___CheckIfBeatmapLevelDataExists_d__52, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<CalculateAndSetContent>d__56
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::StandardLevelDetailView::<CalculateAndSetContent>d__56
struct CORDL_TYPE __StandardLevelDetailView___CalculateAndSetContent_d__56 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26715c4, size 0x728, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2671cec, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StandardLevelDetailView___CalculateAndSetContent_d__56();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::StandardLevelDetailView>",
  // modifiers: "", def_value: None }, CppParam { name: "_beatmapLevelData_5__2", ty: "::GlobalNamespace::LoadBeatmapLevelDataResult", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*>", modifiers: "", def_value: None }]
  constexpr __StandardLevelDetailView___CalculateAndSetContent_d__56(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                     ::UnityW<::GlobalNamespace::StandardLevelDetailView> __4__this,
                                                                     ::GlobalNamespace::LoadBeatmapLevelDataResult _beatmapLevelData_5__2,
                                                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__1,
                                                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>> __u__2,
                                                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*> __u__3) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelDetailView> __4__this;

  /// @brief Field <beatmapLevelData>5__2, offset: 0x30, size: 0x10, def value: None
  ::GlobalNamespace::LoadBeatmapLevelDataResult _beatmapLevelData_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>> __u__2;

  /// @brief Field <>u__3, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*> __u__3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardLevelDetailView___CalculateAndSetContent_d__56, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailView___CalculateAndSetContent_d__56, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailView___CalculateAndSetContent_d__56, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailView___CalculateAndSetContent_d__56, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailView___CalculateAndSetContent_d__56, _beatmapLevelData_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailView___CalculateAndSetContent_d__56, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailView___CalculateAndSetContent_d__56, __u__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailView___CalculateAndSetContent_d__56, __u__3) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::StandardLevelDetailView
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 240, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StandardLevelDetailView*
class CORDL_TYPE StandardLevelDetailView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _CalculateAndSetContent_d__56 = ::GlobalNamespace::__StandardLevelDetailView___CalculateAndSetContent_d__56;

  using _CheckIfBeatmapLevelDataExists_d__52 = ::GlobalNamespace::__StandardLevelDetailView___CheckIfBeatmapLevelDataExists_d__52;

  using __c = ::GlobalNamespace::__StandardLevelDetailView____c;

  using __c__DisplayClass40_0 = ::GlobalNamespace::__StandardLevelDetailView____c__DisplayClass40_0;

  /// @brief Field _actionButton, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__actionButton, put = __cordl_internal_set__actionButton))::UnityW<::UnityEngine::UI::Button> _actionButton;

  /// @brief Field _actionButtonText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__actionButtonText, put = __cordl_internal_set__actionButtonText))::UnityW<::TMPro::TextMeshProUGUI> _actionButtonText;

  /// @brief Field _allowedBeatmapDifficultyMask, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get__allowedBeatmapDifficultyMask,
                      put = __cordl_internal_set__allowedBeatmapDifficultyMask))::GlobalNamespace::BeatmapDifficultyMask _allowedBeatmapDifficultyMask;

  /// @brief Field _audioClipAsyncLoader, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClipAsyncLoader, put = __cordl_internal_set__audioClipAsyncLoader))::GlobalNamespace::AudioClipAsyncLoader* _audioClipAsyncLoader;

  /// @brief Field _beatmapCharacteristicSegmentedControlController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristicSegmentedControlController, put = __cordl_internal_set__beatmapCharacteristicSegmentedControlController))::UnityW<
      ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController> _beatmapCharacteristicSegmentedControlController;

  /// @brief Field _beatmapDataLoader, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataLoader, put = __cordl_internal_set__beatmapDataLoader))::GlobalNamespace::BeatmapDataLoader* _beatmapDataLoader;

  /// @brief Field _beatmapDifficultySegmentedControlController, offset 0x48, size 0x8
  __declspec(property(
      get = __cordl_internal_get__beatmapDifficultySegmentedControlController,
      put = __cordl_internal_set__beatmapDifficultySegmentedControlController))::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController> _beatmapDifficultySegmentedControlController;

  /// @brief Field <beatmapKey>k__BackingField, offset 0xa0, size 0x18
  __declspec(property(get = __cordl_internal_get__beatmapKey_k__BackingField, put = __cordl_internal_set__beatmapKey_k__BackingField))::GlobalNamespace::BeatmapKey _beatmapKey_k__BackingField;

  /// @brief Field _beatmapLevel, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevel, put = __cordl_internal_set__beatmapLevel))::GlobalNamespace::BeatmapLevel* _beatmapLevel;

  /// @brief Field _beatmapLevelsModel, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel))::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _buttonsWrapper, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonsWrapper, put = __cordl_internal_set__buttonsWrapper))::UnityW<::UnityEngine::GameObject> _buttonsWrapper;

  /// @brief Field _cancellationTokenSource, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__cancellationTokenSource, put = __cordl_internal_set__cancellationTokenSource))::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _favoriteToggle, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__favoriteToggle, put = __cordl_internal_set__favoriteToggle))::UnityW<::UnityEngine::UI::Toggle> _favoriteToggle;

  /// @brief Field _levelBar, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__levelBar, put = __cordl_internal_set__levelBar))::UnityW<::GlobalNamespace::LevelBar> _levelBar;

  /// @brief Field _levelParamsPanel, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__levelParamsPanel, put = __cordl_internal_set__levelParamsPanel))::UnityW<::GlobalNamespace::LevelParamsPanel> _levelParamsPanel;

  /// @brief Field _levelParamsPanelCanvasGroup, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__levelParamsPanelCanvasGroup,
                      put = __cordl_internal_set__levelParamsPanelCanvasGroup))::UnityW<::UnityEngine::CanvasGroup> _levelParamsPanelCanvasGroup;

  /// @brief Field _levelParamsPanelCanvasGroupTween, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__levelParamsPanelCanvasGroupTween, put = __cordl_internal_set__levelParamsPanelCanvasGroupTween))::Tweening::Tween* _levelParamsPanelCanvasGroupTween;

  /// @brief Field _loadingControl, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__loadingControl, put = __cordl_internal_set__loadingControl))::UnityW<::GlobalNamespace::LoadingControl> _loadingControl;

  /// @brief Field _playerData, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__playerData, put = __cordl_internal_set__playerData))::GlobalNamespace::PlayerData* _playerData;

  /// @brief Field _practiceButton, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__practiceButton, put = __cordl_internal_set__practiceButton))::UnityW<::UnityEngine::UI::Button> _practiceButton;

  /// @brief Field _songLength, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__songLength, put = __cordl_internal_set__songLength))::System::Nullable_1<float_t> _songLength;

  /// @brief Field _toggleBinder, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__toggleBinder, put = __cordl_internal_set__toggleBinder))::HMUI::ToggleBinder* _toggleBinder;

  /// @brief Field _tweeningManager, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager))::UnityW<::Tweening::TimeTweeningManager> _tweeningManager;

  __declspec(property(get = get_actionButton))::UnityW<::UnityEngine::UI::Button> actionButton;

  __declspec(property(put = set_actionButtonText))::StringW actionButtonText;

  __declspec(property(get = get_beatmapKey, put = set_beatmapKey))::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field didChangeDifficultyBeatmapEvent, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangeDifficultyBeatmapEvent,
                      put = __cordl_internal_set_didChangeDifficultyBeatmapEvent))::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailView>>* didChangeDifficultyBeatmapEvent;

  /// @brief Field didFavoriteToggleChangeEvent, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_didFavoriteToggleChangeEvent,
                      put = __cordl_internal_set_didFavoriteToggleChangeEvent))::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>* didFavoriteToggleChangeEvent;

  __declspec(property(put = set_hidePracticeButton)) bool hidePracticeButton;

  __declspec(property(get = get_practiceButton))::UnityW<::UnityEngine::UI::Button> practiceButton;

  /// @brief Method Awake, addr 0x2670674, size 0x184, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CalculateAndSetContent, addr 0x26710c8, size 0x98, virtual false, abstract: false, final false
  inline void CalculateAndSetContent();

  /// @brief Method CheckIfBeatmapLevelDataExists, addr 0x26705d8, size 0x94, virtual false, abstract: false, final false
  inline void CheckIfBeatmapLevelDataExists();

  /// @brief Method ClearBeatmapLevel, addr 0x267066c, size 0x8, virtual false, abstract: false, final false
  inline void ClearBeatmapLevel();

  /// @brief Method ClearContent, addr 0x2670f98, size 0x74, virtual false, abstract: false, final false
  inline void ClearContent();

  /// @brief Method CreateBeatmapKey, addr 0x2670f18, size 0x48, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapKey CreateBeatmapKey();

  /// @brief Method HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic, addr 0x2670e8c, size 0x8c, virtual false, abstract: false, final false
  inline void HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController* controller,
                                                                                                  ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  /// @brief Method HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty, addr 0x2670e38, size 0x34, virtual false, abstract: false, final false
  inline void HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty(::GlobalNamespace::BeatmapDifficultySegmentedControlController* controller,
                                                                                   ::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method HandleBeatmapLevelsModelLevelDownloadingUpdate, addr 0x2670c6c, size 0x6c, virtual false, abstract: false, final false
  inline void HandleBeatmapLevelsModelLevelDownloadingUpdate(::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate levelDownloadingUpdate);

  /// @brief Method HandleDidPressRefreshButton, addr 0x2670e34, size 0x4, virtual false, abstract: false, final false
  inline void HandleDidPressRefreshButton();

  static inline ::GlobalNamespace::StandardLevelDetailView* New_ctor();

  /// @brief Method OnDestroy, addr 0x2670ab8, size 0x1b4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x2670960, size 0x158, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x26707f8, size 0x168, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RefreshContent, addr 0x2670524, size 0xb4, virtual false, abstract: false, final false
  inline void RefreshContent();

  /// @brief Method SetContent, addr 0x267100c, size 0xbc, virtual false, abstract: false, final false
  inline void SetContent();

  /// @brief Method SetContent, addr 0x26701f8, size 0x324, virtual false, abstract: false, final false
  inline void SetContent(::GlobalNamespace::BeatmapLevel* level, ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask,
                         ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* notAllowedCharacteristics,
                         ::GlobalNamespace::BeatmapDifficulty defaultDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO* defaultBeatmapCharacteristic, ::GlobalNamespace::PlayerData* playerData);

  /// @brief Method SetContentForBeatmapData, addr 0x2670f60, size 0x38, virtual false, abstract: false, final false
  inline void SetContentForBeatmapData();

  /// @brief Method ShowContent, addr 0x2670cd8, size 0x15c, virtual false, abstract: false, final false
  inline void ShowContent(::GlobalNamespace::__StandardLevelDetailViewController__ContentType contentType, float_t progress);

  /// @brief Method TriggerEvent, addr 0x2670e6c, size 0x20, virtual false, abstract: false, final false
  inline void TriggerEvent();

  /// @brief Method <Awake>b__42_0, addr 0x2671168, size 0x20, virtual false, abstract: false, final false
  inline void _Awake_b__42_0(bool _);

  /// @brief Method <CalculateAndSetContent>b__56_0, addr 0x2671188, size 0x1c, virtual false, abstract: false, final false
  inline void _CalculateAndSetContent_b__56_0(float_t value);

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__actionButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__actionButton();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__actionButtonText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__actionButtonText();

  constexpr ::GlobalNamespace::BeatmapDifficultyMask const& __cordl_internal_get__allowedBeatmapDifficultyMask() const;

  constexpr ::GlobalNamespace::BeatmapDifficultyMask& __cordl_internal_get__allowedBeatmapDifficultyMask();

  constexpr ::GlobalNamespace::AudioClipAsyncLoader*& __cordl_internal_get__audioClipAsyncLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioClipAsyncLoader*> const& __cordl_internal_get__audioClipAsyncLoader() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController> const& __cordl_internal_get__beatmapCharacteristicSegmentedControlController() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>& __cordl_internal_get__beatmapCharacteristicSegmentedControlController();

  constexpr ::GlobalNamespace::BeatmapDataLoader*& __cordl_internal_get__beatmapDataLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataLoader*> const& __cordl_internal_get__beatmapDataLoader() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController> const& __cordl_internal_get__beatmapDifficultySegmentedControlController() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>& __cordl_internal_get__beatmapDifficultySegmentedControlController();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get__beatmapKey_k__BackingField() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get__beatmapKey_k__BackingField();

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get__beatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevel*> const& __cordl_internal_get__beatmapLevel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__buttonsWrapper() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__buttonsWrapper();

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __cordl_internal_get__cancellationTokenSource() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__favoriteToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__favoriteToggle();

  constexpr ::UnityW<::GlobalNamespace::LevelBar> const& __cordl_internal_get__levelBar() const;

  constexpr ::UnityW<::GlobalNamespace::LevelBar>& __cordl_internal_get__levelBar();

  constexpr ::UnityW<::GlobalNamespace::LevelParamsPanel> const& __cordl_internal_get__levelParamsPanel() const;

  constexpr ::UnityW<::GlobalNamespace::LevelParamsPanel>& __cordl_internal_get__levelParamsPanel();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__levelParamsPanelCanvasGroup() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__levelParamsPanelCanvasGroup();

  constexpr ::Tweening::Tween*& __cordl_internal_get__levelParamsPanelCanvasGroupTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween*> const& __cordl_internal_get__levelParamsPanelCanvasGroupTween() const;

  constexpr ::UnityW<::GlobalNamespace::LoadingControl> const& __cordl_internal_get__loadingControl() const;

  constexpr ::UnityW<::GlobalNamespace::LoadingControl>& __cordl_internal_get__loadingControl();

  constexpr ::GlobalNamespace::PlayerData*& __cordl_internal_get__playerData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerData*> const& __cordl_internal_get__playerData() const;

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__practiceButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__practiceButton();

  constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get__songLength() const;

  constexpr ::System::Nullable_1<float_t>& __cordl_internal_get__songLength();

  constexpr ::HMUI::ToggleBinder*& __cordl_internal_get__toggleBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleBinder*> const& __cordl_internal_get__toggleBinder() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailView>>*& __cordl_internal_get_didChangeDifficultyBeatmapEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailView>>*> const& __cordl_internal_get_didChangeDifficultyBeatmapEvent() const;

  constexpr ::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>*& __cordl_internal_get_didFavoriteToggleChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>*> const& __cordl_internal_get_didFavoriteToggleChangeEvent() const;

  constexpr void __cordl_internal_set__actionButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__actionButtonText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__allowedBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask value);

  constexpr void __cordl_internal_set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value);

  constexpr void __cordl_internal_set__beatmapCharacteristicSegmentedControlController(::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController> value);

  constexpr void __cordl_internal_set__beatmapDataLoader(::GlobalNamespace::BeatmapDataLoader* value);

  constexpr void __cordl_internal_set__beatmapDifficultySegmentedControlController(::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController> value);

  constexpr void __cordl_internal_set__beatmapKey_k__BackingField(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set__beatmapLevel(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__buttonsWrapper(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__favoriteToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__levelBar(::UnityW<::GlobalNamespace::LevelBar> value);

  constexpr void __cordl_internal_set__levelParamsPanel(::UnityW<::GlobalNamespace::LevelParamsPanel> value);

  constexpr void __cordl_internal_set__levelParamsPanelCanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set__levelParamsPanelCanvasGroupTween(::Tweening::Tween* value);

  constexpr void __cordl_internal_set__loadingControl(::UnityW<::GlobalNamespace::LoadingControl> value);

  constexpr void __cordl_internal_set__playerData(::GlobalNamespace::PlayerData* value);

  constexpr void __cordl_internal_set__practiceButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__songLength(::System::Nullable_1<float_t> value);

  constexpr void __cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value);

  constexpr void __cordl_internal_set_didChangeDifficultyBeatmapEvent(::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailView>>* value);

  constexpr void __cordl_internal_set_didFavoriteToggleChangeEvent(::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>* value);

  /// @brief Method .ctor, addr 0x2671160, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didChangeDifficultyBeatmapEvent, addr 0x266fea8, size 0xb0, virtual false, abstract: false, final false
  inline void add_didChangeDifficultyBeatmapEvent(::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailView>>* value);

  /// @brief Method add_didFavoriteToggleChangeEvent, addr 0x2670008, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFavoriteToggleChangeEvent(::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>* value);

  /// @brief Method get_actionButton, addr 0x2670168, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Button> get_actionButton();

  /// @brief Method get_beatmapKey, addr 0x26701d0, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapKey get_beatmapKey();

  /// @brief Method get_practiceButton, addr 0x2670194, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Button> get_practiceButton();

  /// @brief Method remove_didChangeDifficultyBeatmapEvent, addr 0x266ff58, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didChangeDifficultyBeatmapEvent(::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailView>>* value);

  /// @brief Method remove_didFavoriteToggleChangeEvent, addr 0x26700b8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFavoriteToggleChangeEvent(::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>* value);

  /// @brief Method set_actionButtonText, addr 0x2670170, size 0x24, virtual false, abstract: false, final false
  inline void set_actionButtonText(::StringW value);

  /// @brief Method set_beatmapKey, addr 0x26701e4, size 0x14, virtual false, abstract: false, final false
  inline void set_beatmapKey(::GlobalNamespace::BeatmapKey value);

  /// @brief Method set_hidePracticeButton, addr 0x267019c, size 0x34, virtual false, abstract: false, final false
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

  /// @brief Field _actionButton, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____actionButton;

  /// @brief Field _actionButtonText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____actionButtonText;

  /// @brief Field _practiceButton, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____practiceButton;

  /// @brief Field _levelBar, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelBar> ____levelBar;

  /// @brief Field _levelParamsPanel, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelParamsPanel> ____levelParamsPanel;

  /// @brief Field _levelParamsPanelCanvasGroup, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____levelParamsPanelCanvasGroup;

  /// @brief Field _beatmapDifficultySegmentedControlController, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController> ____beatmapDifficultySegmentedControlController;

  /// @brief Field _beatmapCharacteristicSegmentedControlController, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController> ____beatmapCharacteristicSegmentedControlController;

  /// @brief Field _favoriteToggle, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____favoriteToggle;

  /// @brief Field _buttonsWrapper, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____buttonsWrapper;

  /// @brief Field _loadingControl, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LoadingControl> ____loadingControl;

  /// @brief Field _beatmapLevelsModel, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _beatmapDataLoader, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataLoader* ____beatmapDataLoader;

  /// @brief Field _audioClipAsyncLoader, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::AudioClipAsyncLoader* ____audioClipAsyncLoader;

  /// @brief Field _tweeningManager, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::Tweening::TimeTweeningManager> ____tweeningManager;

  /// @brief Field didChangeDifficultyBeatmapEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailView>>* ___didChangeDifficultyBeatmapEvent;

  /// @brief Field didFavoriteToggleChangeEvent, offset: 0x98, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>* ___didFavoriteToggleChangeEvent;

  /// @brief Field <beatmapKey>k__BackingField, offset: 0xa0, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ____beatmapKey_k__BackingField;

  /// @brief Field _beatmapLevel, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ____beatmapLevel;

  /// @brief Field _allowedBeatmapDifficultyMask, offset: 0xc0, size: 0x1, def value: None
  ::GlobalNamespace::BeatmapDifficultyMask ____allowedBeatmapDifficultyMask;

  /// @brief Field _playerData, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::PlayerData* ____playerData;

  /// @brief Field _toggleBinder, offset: 0xd0, size: 0x8, def value: None
  ::HMUI::ToggleBinder* ____toggleBinder;

  /// @brief Field _cancellationTokenSource, offset: 0xd8, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  /// @brief Field _levelParamsPanelCanvasGroupTween, offset: 0xe0, size: 0x8, def value: None
  ::Tweening::Tween* ____levelParamsPanelCanvasGroupTween;

  /// @brief Field _songLength, offset: 0xe8, size: 0x8, def value: None
  ::System::Nullable_1<float_t> ____songLength;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelDetailView, 0xf0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____actionButton) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____actionButtonText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____practiceButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____levelBar) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____levelParamsPanel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____levelParamsPanelCanvasGroup) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____beatmapDifficultySegmentedControlController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____beatmapCharacteristicSegmentedControlController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____favoriteToggle) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____buttonsWrapper) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____loadingControl) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____beatmapLevelsModel) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____beatmapDataLoader) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____audioClipAsyncLoader) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____tweeningManager) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ___didChangeDifficultyBeatmapEvent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ___didFavoriteToggleChangeEvent) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____beatmapKey_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____beatmapLevel) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____allowedBeatmapDifficultyMask) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____playerData) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____toggleBinder) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____cancellationTokenSource) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____levelParamsPanelCanvasGroupTween) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____songLength) == 0xe8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelDetailView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelDetailView*, "", "StandardLevelDetailView");
NEED_NO_BOX(::GlobalNamespace::__StandardLevelDetailView____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardLevelDetailView____c*, "", "StandardLevelDetailView/<>c");
NEED_NO_BOX(::GlobalNamespace::__StandardLevelDetailView____c__DisplayClass40_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardLevelDetailView____c__DisplayClass40_0*, "", "StandardLevelDetailView/<>c__DisplayClass40_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardLevelDetailView___CalculateAndSetContent_d__56, "", "StandardLevelDetailView/<CalculateAndSetContent>d__56");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardLevelDetailView___CheckIfBeatmapLevelDataExists_d__52, "", "StandardLevelDetailView/<CheckIfBeatmapLevelDataExists>d__52");
