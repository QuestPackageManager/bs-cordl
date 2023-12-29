#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MissionSelectionMapViewController)
namespace HMUI {
class ScrollView;
}
namespace GlobalNamespace {
struct __MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15;
}
namespace GlobalNamespace {
class MissionNodeVisualController;
}
namespace GlobalNamespace {
class MissionNodeSelectionManager;
}
namespace GlobalNamespace {
class MissionNode;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class MissionMapAnimationController;
}
namespace GlobalNamespace {
class __MissionSelectionMapViewController____c__DisplayClass15_0;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelModel;
}
namespace GlobalNamespace {
class AudioClipAsyncLoader;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace UnityEngine {
class AudioClip;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionSelectionMapViewController;
}
namespace GlobalNamespace {
class __MissionSelectionMapViewController____c__DisplayClass15_0;
}
namespace GlobalNamespace {
struct __MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionSelectionMapViewController);
MARK_REF_PTR_T(::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0);
MARK_VAL_T(::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15);
// Type: ::<>c__DisplayClass15_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5802))
// CS Name: ::MissionSelectionMapViewController::<>c__DisplayClass15_0*
class CORDL_TYPE __MissionSelectionMapViewController____c__DisplayClass15_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MissionSelectionMapViewController* __4__this;

  /// @brief Field level, offset 0x18, size 0x8
  __declspec(property(get = __get_level, put = __set_level))::GlobalNamespace::IPreviewBeatmapLevel* level;

  constexpr ::GlobalNamespace::MissionSelectionMapViewController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionSelectionMapViewController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MissionSelectionMapViewController* value);

  constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& __get_level();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& __get_level() const;

  constexpr void __set_level(::GlobalNamespace::IPreviewBeatmapLevel* value);

  static inline ::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0* New_ctor();

  /// @brief Method .ctor addr 0x2188de4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <SongPlayerCrossfadeToLevelAsync>b__0 addr 0x2188dec size 0x2c virtual false final false
  inline void _SongPlayerCrossfadeToLevelAsync_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__MissionSelectionMapViewController____c__DisplayClass15_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissionSelectionMapViewController____c__DisplayClass15_0(__MissionSelectionMapViewController____c__DisplayClass15_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissionSelectionMapViewController____c__DisplayClass15_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissionSelectionMapViewController____c__DisplayClass15_0(__MissionSelectionMapViewController____c__DisplayClass15_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionSelectionMapViewController____c__DisplayClass15_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::MissionSelectionMapViewController* _____4__this;

  /// @brief Field level, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* ___level;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0, ___level) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<SongPlayerCrossfadeToLevelAsync>d__15
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3389)), TypeDefinitionIndex(TypeDefinitionIndex(15614)), TypeDefinitionIndex(TypeDefinitionIndex(3395)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 280 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(5803)) CS Name:
// ::MissionSelectionMapViewController::<SongPlayerCrossfadeToLevelAsync>d__15
struct CORDL_TYPE __MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2188e18 size 0x49c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x21892b4 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MissionSelectionMapViewController*",
  // modifiers: "", def_value: None }, CppParam { name: "level", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty:
  // "::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0*", modifiers: "", def_value: None }, CppParam { name: "_musicVolume_5__2", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>", modifiers: "", def_value: None }]
  constexpr __MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                        ::GlobalNamespace::MissionSelectionMapViewController* __4__this, ::GlobalNamespace::IPreviewBeatmapLevel* level,
                                                                                        ::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0* __8__1,
                                                                                        float_t _musicVolume_5__2,
                                                                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MissionSelectionMapViewController* __4__this;

  /// @brief Field level, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* level;

  /// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0* __8__1;

  /// @brief Field <musicVolume>5__2, offset: 0x40, size: 0x4, def value: None
  float_t _musicVolume_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15, level) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15, __8__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15, _musicVolume_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15, __u__1) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MissionSelectionMapViewController
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13722))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5804))
// CS Name: ::MissionSelectionMapViewController*
class CORDL_TYPE MissionSelectionMapViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using _SongPlayerCrossfadeToLevelAsync_d__15 = ::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15;

  using __c__DisplayClass15_0 = ::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0;

  /// @brief Field _mapScrollView, offset 0x70, size 0x8
  __declspec(property(get = __get__mapScrollView, put = __set__mapScrollView))::HMUI::ScrollView* _mapScrollView;

  /// @brief Field _missionNodeSelectionManager, offset 0x78, size 0x8
  __declspec(property(get = __get__missionNodeSelectionManager, put = __set__missionNodeSelectionManager))::GlobalNamespace::MissionNodeSelectionManager* _missionNodeSelectionManager;

  /// @brief Field _missionMapAnimationController, offset 0x80, size 0x8
  __declspec(property(get = __get__missionMapAnimationController, put = __set__missionMapAnimationController))::GlobalNamespace::MissionMapAnimationController* _missionMapAnimationController;

  /// @brief Field _songPreviewPlayer, offset 0x88, size 0x8
  __declspec(property(get = __get__songPreviewPlayer, put = __set__songPreviewPlayer))::GlobalNamespace::SongPreviewPlayer* _songPreviewPlayer;

  /// @brief Field _perceivedLoudnessPerLevelModel, offset 0x90, size 0x8
  __declspec(property(get = __get__perceivedLoudnessPerLevelModel, put = __set__perceivedLoudnessPerLevelModel))::GlobalNamespace::PerceivedLoudnessPerLevelModel* _perceivedLoudnessPerLevelModel;

  /// @brief Field _audioClipAsyncLoader, offset 0x98, size 0x8
  __declspec(property(get = __get__audioClipAsyncLoader, put = __set__audioClipAsyncLoader))::GlobalNamespace::AudioClipAsyncLoader* _audioClipAsyncLoader;

  /// @brief Field didSelectMissionLevelEvent, offset 0xa0, size 0x8
  __declspec(property(get = __get_didSelectMissionLevelEvent,
                      put = __set_didSelectMissionLevelEvent))::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*, ::GlobalNamespace::MissionNode*>* didSelectMissionLevelEvent;

  /// @brief Field _selectedMissionNode, offset 0xa8, size 0x8
  __declspec(property(get = __get__selectedMissionNode, put = __set__selectedMissionNode))::GlobalNamespace::MissionNode* _selectedMissionNode;

  __declspec(property(get = get_animatedUpdateIsRequired)) bool animatedUpdateIsRequired;

  constexpr ::HMUI::ScrollView*& __get__mapScrollView();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ScrollView*> const& __get__mapScrollView() const;

  constexpr void __set__mapScrollView(::HMUI::ScrollView* value);

  constexpr ::GlobalNamespace::MissionNodeSelectionManager*& __get__missionNodeSelectionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNodeSelectionManager*> const& __get__missionNodeSelectionManager() const;

  constexpr void __set__missionNodeSelectionManager(::GlobalNamespace::MissionNodeSelectionManager* value);

  constexpr ::GlobalNamespace::MissionMapAnimationController*& __get__missionMapAnimationController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionMapAnimationController*> const& __get__missionMapAnimationController() const;

  constexpr void __set__missionMapAnimationController(::GlobalNamespace::MissionMapAnimationController* value);

  constexpr ::GlobalNamespace::SongPreviewPlayer*& __get__songPreviewPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPreviewPlayer*> const& __get__songPreviewPlayer() const;

  constexpr void __set__songPreviewPlayer(::GlobalNamespace::SongPreviewPlayer* value);

  constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel*& __get__perceivedLoudnessPerLevelModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PerceivedLoudnessPerLevelModel*> const& __get__perceivedLoudnessPerLevelModel() const;

  constexpr void __set__perceivedLoudnessPerLevelModel(::GlobalNamespace::PerceivedLoudnessPerLevelModel* value);

  constexpr ::GlobalNamespace::AudioClipAsyncLoader*& __get__audioClipAsyncLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioClipAsyncLoader*> const& __get__audioClipAsyncLoader() const;

  constexpr void __set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value);

  constexpr ::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*, ::GlobalNamespace::MissionNode*>*& __get_didSelectMissionLevelEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*, ::GlobalNamespace::MissionNode*>*> const&
  __get_didSelectMissionLevelEvent() const;

  constexpr void __set_didSelectMissionLevelEvent(::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*, ::GlobalNamespace::MissionNode*>* value);

  constexpr ::GlobalNamespace::MissionNode*& __get__selectedMissionNode();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNode*> const& __get__selectedMissionNode() const;

  constexpr void __set__selectedMissionNode(::GlobalNamespace::MissionNode* value);

  /// @brief Method add_didSelectMissionLevelEvent addr 0x21888a0 size 0xb0 virtual false final false
  inline void add_didSelectMissionLevelEvent(::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*, ::GlobalNamespace::MissionNode*>* value);

  /// @brief Method remove_didSelectMissionLevelEvent addr 0x2188950 size 0xb0 virtual false final false
  inline void remove_didSelectMissionLevelEvent(::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*, ::GlobalNamespace::MissionNode*>* value);

  /// @brief Method get_animatedUpdateIsRequired addr 0x2188a00 size 0x1c virtual false final false
  inline bool get_animatedUpdateIsRequired();

  /// @brief Method DidActivate addr 0x2188a1c size 0x144 virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate addr 0x2188b60 size 0x130 virtual true final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleMissionNodeSelectionManagerDidSelectMissionNode addr 0x2188c90 size 0x6c virtual false final false
  inline void HandleMissionNodeSelectionManagerDidSelectMissionNode(::GlobalNamespace::MissionNodeVisualController* missionNodeVisualController);

  /// @brief Method SongPlayerCrossfadeToLevelAsync addr 0x2188cfc size 0xa0 virtual false final false
  inline void SongPlayerCrossfadeToLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel* level);

  /// @brief Method ShowMissionClearedAnimation addr 0x2188d9c size 0x24 virtual false final false
  inline void ShowMissionClearedAnimation(::System::Action* finishCallback);

  /// @brief Method DeselectSelectedNode addr 0x2188dc0 size 0x1c virtual false final false
  inline void DeselectSelectedNode();

  static inline ::GlobalNamespace::MissionSelectionMapViewController* New_ctor();

  /// @brief Method .ctor addr 0x2188ddc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionSelectionMapViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionSelectionMapViewController(MissionSelectionMapViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionSelectionMapViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionSelectionMapViewController(MissionSelectionMapViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionSelectionMapViewController();

public:
  /// @brief Field _mapScrollView, offset: 0x70, size: 0x8, def value: None
  ::HMUI::ScrollView* ____mapScrollView;

  /// @brief Field _missionNodeSelectionManager, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::MissionNodeSelectionManager* ____missionNodeSelectionManager;

  /// @brief Field _missionMapAnimationController, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::MissionMapAnimationController* ____missionMapAnimationController;

  /// @brief Field _songPreviewPlayer, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::SongPreviewPlayer* ____songPreviewPlayer;

  /// @brief Field _perceivedLoudnessPerLevelModel, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::PerceivedLoudnessPerLevelModel* ____perceivedLoudnessPerLevelModel;

  /// @brief Field _audioClipAsyncLoader, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::AudioClipAsyncLoader* ____audioClipAsyncLoader;

  /// @brief Field didSelectMissionLevelEvent, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*, ::GlobalNamespace::MissionNode*>* ___didSelectMissionLevelEvent;

  /// @brief Field _selectedMissionNode, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::MissionNode* ____selectedMissionNode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionSelectionMapViewController, 0xb0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionSelectionMapViewController, ____mapScrollView) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionSelectionMapViewController, ____missionNodeSelectionManager) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionSelectionMapViewController, ____missionMapAnimationController) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionSelectionMapViewController, ____songPreviewPlayer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionSelectionMapViewController, ____perceivedLoudnessPerLevelModel) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionSelectionMapViewController, ____audioClipAsyncLoader) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionSelectionMapViewController, ___didSelectMissionLevelEvent) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionSelectionMapViewController, ____selectedMissionNode) == 0xa8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionSelectionMapViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionSelectionMapViewController*, "", "MissionSelectionMapViewController");
NEED_NO_BOX(::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0*, "", "MissionSelectionMapViewController/<>c__DisplayClass15_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15, "", "MissionSelectionMapViewController/<SongPlayerCrossfadeToLevelAsync>d__15");
