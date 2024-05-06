#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MissionSelectionMapViewController)
namespace GlobalNamespace {
class AudioClipAsyncLoader;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class MissionMapAnimationController;
}
namespace GlobalNamespace {
class MissionNodeSelectionManager;
}
namespace GlobalNamespace {
class MissionNodeVisualController;
}
namespace GlobalNamespace {
class MissionNode;
}
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelModel;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
namespace GlobalNamespace {
struct __MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__16;
}
namespace GlobalNamespace {
class __MissionSelectionMapViewController____c__DisplayClass16_0;
}
namespace HMUI {
class ScrollView;
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
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionSelectionMapViewController;
}
namespace GlobalNamespace {
class __MissionSelectionMapViewController____c__DisplayClass16_0;
}
namespace GlobalNamespace {
struct __MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__16;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionSelectionMapViewController);
MARK_REF_PTR_T(::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass16_0);
MARK_VAL_T(::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__16);
// Type: ::<>c__DisplayClass16_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionSelectionMapViewController::<>c__DisplayClass16_0*
class CORDL_TYPE __MissionSelectionMapViewController____c__DisplayClass16_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MissionSelectionMapViewController> __4__this;

  /// @brief Field level, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_level, put = __cordl_internal_set_level))::GlobalNamespace::BeatmapLevel* level;

  static inline ::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass16_0* New_ctor();

  /// @brief Method <SongPlayerCrossfadeToLevelAsync>b__0, addr 0x26501d8, size 0x28, virtual false, abstract: false, final false
  inline void _SongPlayerCrossfadeToLevelAsync_b__0();

  constexpr ::UnityW<::GlobalNamespace::MissionSelectionMapViewController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MissionSelectionMapViewController>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get_level();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevel*> const& __cordl_internal_get_level() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MissionSelectionMapViewController> value);

  constexpr void __cordl_internal_set_level(::GlobalNamespace::BeatmapLevel* value);

  /// @brief Method .ctor, addr 0x26501d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionSelectionMapViewController____c__DisplayClass16_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MissionSelectionMapViewController____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissionSelectionMapViewController____c__DisplayClass16_0(__MissionSelectionMapViewController____c__DisplayClass16_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissionSelectionMapViewController____c__DisplayClass16_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissionSelectionMapViewController____c__DisplayClass16_0(__MissionSelectionMapViewController____c__DisplayClass16_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionSelectionMapViewController> _____4__this;

  /// @brief Field level, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ___level;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass16_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass16_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass16_0, ___level) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<SongPlayerCrossfadeToLevelAsync>d__16
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MissionSelectionMapViewController::<SongPlayerCrossfadeToLevelAsync>d__16
struct CORDL_TYPE __MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2650200, size 0x324, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2650524, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__16();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::GlobalNamespace::MissionSelectionMapViewController>", modifiers: "", def_value: None }, CppParam { name: "level", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value:
  // None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass16_0*", modifiers: "", def_value: None }, CppParam { name: "_musicVolume_5__2",
  // ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>>", modifiers: "", def_value:
  // None }]
  constexpr __MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__16(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                        ::UnityW<::GlobalNamespace::MissionSelectionMapViewController> __4__this,
                                                                                        ::GlobalNamespace::BeatmapLevel* level,
                                                                                        ::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass16_0* __8__1,
                                                                                        float_t _musicVolume_5__2,
                                                                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionSelectionMapViewController> __4__this;

  /// @brief Field level, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* level;

  /// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass16_0* __8__1;

  /// @brief Field <musicVolume>5__2, offset: 0x40, size: 0x4, def value: None
  float_t _musicVolume_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__16, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__16, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__16, level) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__16, __8__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__16, _musicVolume_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__16, __u__1) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MissionSelectionMapViewController
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionSelectionMapViewController*
class CORDL_TYPE MissionSelectionMapViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using _SongPlayerCrossfadeToLevelAsync_d__16 = ::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__16;

  using __c__DisplayClass16_0 = ::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass16_0;

  /// @brief Field _audioClipAsyncLoader, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClipAsyncLoader, put = __cordl_internal_set__audioClipAsyncLoader))::GlobalNamespace::AudioClipAsyncLoader* _audioClipAsyncLoader;

  /// @brief Field _beatmapLevelsModel, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel))::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _mapScrollView, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__mapScrollView, put = __cordl_internal_set__mapScrollView))::UnityW<::HMUI::ScrollView> _mapScrollView;

  /// @brief Field _missionMapAnimationController, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__missionMapAnimationController,
                      put = __cordl_internal_set__missionMapAnimationController))::UnityW<::GlobalNamespace::MissionMapAnimationController> _missionMapAnimationController;

  /// @brief Field _missionNodeSelectionManager, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__missionNodeSelectionManager,
                      put = __cordl_internal_set__missionNodeSelectionManager))::UnityW<::GlobalNamespace::MissionNodeSelectionManager> _missionNodeSelectionManager;

  /// @brief Field _perceivedLoudnessPerLevelModel, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__perceivedLoudnessPerLevelModel,
                      put = __cordl_internal_set__perceivedLoudnessPerLevelModel))::GlobalNamespace::PerceivedLoudnessPerLevelModel* _perceivedLoudnessPerLevelModel;

  /// @brief Field _selectedMissionNode, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedMissionNode, put = __cordl_internal_set__selectedMissionNode))::UnityW<::GlobalNamespace::MissionNode> _selectedMissionNode;

  /// @brief Field _songPreviewPlayer, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__songPreviewPlayer, put = __cordl_internal_set__songPreviewPlayer))::UnityW<::GlobalNamespace::SongPreviewPlayer> _songPreviewPlayer;

  __declspec(property(get = get_animatedUpdateIsRequired)) bool animatedUpdateIsRequired;

  /// @brief Field didSelectMissionLevelEvent, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectMissionLevelEvent,
                      put = __cordl_internal_set_didSelectMissionLevelEvent))::System::Action_2<::UnityW<::GlobalNamespace::MissionSelectionMapViewController>,
                                                                                                ::UnityW<::GlobalNamespace::MissionNode>>* didSelectMissionLevelEvent;

  /// @brief Method DeselectSelectedNode, addr 0x26501ac, size 0x1c, virtual false, abstract: false, final false
  inline void DeselectSelectedNode();

  /// @brief Method DidActivate, addr 0x264fde4, size 0x144, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x264ff28, size 0x130, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleMissionNodeSelectionManagerDidSelectMissionNode, addr 0x2650058, size 0x90, virtual false, abstract: false, final false
  inline void HandleMissionNodeSelectionManagerDidSelectMissionNode(::GlobalNamespace::MissionNodeVisualController* missionNodeVisualController);

  static inline ::GlobalNamespace::MissionSelectionMapViewController* New_ctor();

  /// @brief Method ShowMissionClearedAnimation, addr 0x2650188, size 0x24, virtual false, abstract: false, final false
  inline void ShowMissionClearedAnimation(::System::Action* finishCallback);

  /// @brief Method SongPlayerCrossfadeToLevelAsync, addr 0x26500e8, size 0xa0, virtual false, abstract: false, final false
  inline void SongPlayerCrossfadeToLevelAsync(::GlobalNamespace::BeatmapLevel* level);

  constexpr ::GlobalNamespace::AudioClipAsyncLoader*& __cordl_internal_get__audioClipAsyncLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioClipAsyncLoader*> const& __cordl_internal_get__audioClipAsyncLoader() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::UnityW<::HMUI::ScrollView> const& __cordl_internal_get__mapScrollView() const;

  constexpr ::UnityW<::HMUI::ScrollView>& __cordl_internal_get__mapScrollView();

  constexpr ::UnityW<::GlobalNamespace::MissionMapAnimationController> const& __cordl_internal_get__missionMapAnimationController() const;

  constexpr ::UnityW<::GlobalNamespace::MissionMapAnimationController>& __cordl_internal_get__missionMapAnimationController();

  constexpr ::UnityW<::GlobalNamespace::MissionNodeSelectionManager> const& __cordl_internal_get__missionNodeSelectionManager() const;

  constexpr ::UnityW<::GlobalNamespace::MissionNodeSelectionManager>& __cordl_internal_get__missionNodeSelectionManager();

  constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel*& __cordl_internal_get__perceivedLoudnessPerLevelModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PerceivedLoudnessPerLevelModel*> const& __cordl_internal_get__perceivedLoudnessPerLevelModel() const;

  constexpr ::UnityW<::GlobalNamespace::MissionNode> const& __cordl_internal_get__selectedMissionNode() const;

  constexpr ::UnityW<::GlobalNamespace::MissionNode>& __cordl_internal_get__selectedMissionNode();

  constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer> const& __cordl_internal_get__songPreviewPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer>& __cordl_internal_get__songPreviewPlayer();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MissionSelectionMapViewController>, ::UnityW<::GlobalNamespace::MissionNode>>*& __cordl_internal_get_didSelectMissionLevelEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::MissionSelectionMapViewController>, ::UnityW<::GlobalNamespace::MissionNode>>*> const&
  __cordl_internal_get_didSelectMissionLevelEvent() const;

  constexpr void __cordl_internal_set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__mapScrollView(::UnityW<::HMUI::ScrollView> value);

  constexpr void __cordl_internal_set__missionMapAnimationController(::UnityW<::GlobalNamespace::MissionMapAnimationController> value);

  constexpr void __cordl_internal_set__missionNodeSelectionManager(::UnityW<::GlobalNamespace::MissionNodeSelectionManager> value);

  constexpr void __cordl_internal_set__perceivedLoudnessPerLevelModel(::GlobalNamespace::PerceivedLoudnessPerLevelModel* value);

  constexpr void __cordl_internal_set__selectedMissionNode(::UnityW<::GlobalNamespace::MissionNode> value);

  constexpr void __cordl_internal_set__songPreviewPlayer(::UnityW<::GlobalNamespace::SongPreviewPlayer> value);

  constexpr void __cordl_internal_set_didSelectMissionLevelEvent(::System::Action_2<::UnityW<::GlobalNamespace::MissionSelectionMapViewController>, ::UnityW<::GlobalNamespace::MissionNode>>* value);

  /// @brief Method .ctor, addr 0x26501c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSelectMissionLevelEvent, addr 0x264fc68, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectMissionLevelEvent(::System::Action_2<::UnityW<::GlobalNamespace::MissionSelectionMapViewController>, ::UnityW<::GlobalNamespace::MissionNode>>* value);

  /// @brief Method get_animatedUpdateIsRequired, addr 0x264fdc8, size 0x1c, virtual false, abstract: false, final false
  inline bool get_animatedUpdateIsRequired();

  /// @brief Method remove_didSelectMissionLevelEvent, addr 0x264fd18, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectMissionLevelEvent(::System::Action_2<::UnityW<::GlobalNamespace::MissionSelectionMapViewController>, ::UnityW<::GlobalNamespace::MissionNode>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionSelectionMapViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionSelectionMapViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionSelectionMapViewController(MissionSelectionMapViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionSelectionMapViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionSelectionMapViewController(MissionSelectionMapViewController const&) = delete;

  /// @brief Field _mapScrollView, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::HMUI::ScrollView> ____mapScrollView;

  /// @brief Field _missionNodeSelectionManager, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionNodeSelectionManager> ____missionNodeSelectionManager;

  /// @brief Field _missionMapAnimationController, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionMapAnimationController> ____missionMapAnimationController;

  /// @brief Field _songPreviewPlayer, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongPreviewPlayer> ____songPreviewPlayer;

  /// @brief Field _perceivedLoudnessPerLevelModel, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::PerceivedLoudnessPerLevelModel* ____perceivedLoudnessPerLevelModel;

  /// @brief Field _audioClipAsyncLoader, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::AudioClipAsyncLoader* ____audioClipAsyncLoader;

  /// @brief Field _beatmapLevelsModel, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field didSelectMissionLevelEvent, offset: 0xa8, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::MissionSelectionMapViewController>, ::UnityW<::GlobalNamespace::MissionNode>>* ___didSelectMissionLevelEvent;

  /// @brief Field _selectedMissionNode, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionNode> ____selectedMissionNode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionSelectionMapViewController, 0xb8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionSelectionMapViewController, ____mapScrollView) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionSelectionMapViewController, ____missionNodeSelectionManager) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionSelectionMapViewController, ____missionMapAnimationController) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionSelectionMapViewController, ____songPreviewPlayer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionSelectionMapViewController, ____perceivedLoudnessPerLevelModel) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionSelectionMapViewController, ____audioClipAsyncLoader) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionSelectionMapViewController, ____beatmapLevelsModel) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionSelectionMapViewController, ___didSelectMissionLevelEvent) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionSelectionMapViewController, ____selectedMissionNode) == 0xb0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionSelectionMapViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionSelectionMapViewController*, "", "MissionSelectionMapViewController");
NEED_NO_BOX(::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass16_0*, "", "MissionSelectionMapViewController/<>c__DisplayClass16_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__16, "", "MissionSelectionMapViewController/<SongPlayerCrossfadeToLevelAsync>d__16");
