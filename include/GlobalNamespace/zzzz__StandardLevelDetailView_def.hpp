#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IBeatmapDataBasicInfo_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StandardLevelDetailView)
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class LevelBar;
}
namespace GlobalNamespace {
class BeatmapDifficultySegmentedControlController;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class LevelParamsPanel;
}
namespace GlobalNamespace {
struct __StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSegmentedControlController;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace HMUI {
class ToggleBinder;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace GlobalNamespace {
class PlayerData;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace GlobalNamespace {
class IBeatmapDataBasicInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelDetailView;
}
namespace GlobalNamespace {
struct __StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelDetailView);
MARK_VAL_T(::GlobalNamespace::__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34);
// Type: ::<SetContentForBeatmapDataAsync>d__34
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3400)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(4258)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 886 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(5814)) CS Name:
// ::StandardLevelDetailView::<SetContentForBeatmapDataAsync>d__34
struct CORDL_TYPE __StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22ea818, size 0x584, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22ead9c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandardLevelDetailView*", modifiers: "",
  // def_value: None }, CppParam { name: "selectedDifficultyBeatmap", ty: "::GlobalNamespace::IDifficultyBeatmap*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo*>", modifiers: "", def_value: None }]
  constexpr __StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                            ::GlobalNamespace::StandardLevelDetailView* __4__this, ::GlobalNamespace::IDifficultyBeatmap* selectedDifficultyBeatmap,
                                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelDetailView* __4__this;

  /// @brief Field selectedDifficultyBeatmap, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IDifficultyBeatmap* selectedDifficultyBeatmap;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34, selectedDifficultyBeatmap) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::StandardLevelDetailView
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5815))
// CS Name: ::StandardLevelDetailView*
class CORDL_TYPE StandardLevelDetailView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _SetContentForBeatmapDataAsync_d__34 = ::GlobalNamespace::__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34;

  /// @brief Field _actionButton, offset 0x18, size 0x8
  __declspec(property(get = __get__actionButton, put = __set__actionButton))::UnityEngine::UI::Button* _actionButton;

  /// @brief Field _actionButtonText, offset 0x20, size 0x8
  __declspec(property(get = __get__actionButtonText, put = __set__actionButtonText))::TMPro::TextMeshProUGUI* _actionButtonText;

  /// @brief Field _practiceButton, offset 0x28, size 0x8
  __declspec(property(get = __get__practiceButton, put = __set__practiceButton))::UnityEngine::UI::Button* _practiceButton;

  /// @brief Field _levelBar, offset 0x30, size 0x8
  __declspec(property(get = __get__levelBar, put = __set__levelBar))::GlobalNamespace::LevelBar* _levelBar;

  /// @brief Field _levelParamsPanel, offset 0x38, size 0x8
  __declspec(property(get = __get__levelParamsPanel, put = __set__levelParamsPanel))::GlobalNamespace::LevelParamsPanel* _levelParamsPanel;

  /// @brief Field _beatmapDifficultySegmentedControlController, offset 0x40, size 0x8
  __declspec(property(get = __get__beatmapDifficultySegmentedControlController,
                      put = __set__beatmapDifficultySegmentedControlController))::GlobalNamespace::BeatmapDifficultySegmentedControlController* _beatmapDifficultySegmentedControlController;

  /// @brief Field _beatmapCharacteristicSegmentedControlController, offset 0x48, size 0x8
  __declspec(
      property(get = __get__beatmapCharacteristicSegmentedControlController,
               put = __set__beatmapCharacteristicSegmentedControlController))::GlobalNamespace::BeatmapCharacteristicSegmentedControlController* _beatmapCharacteristicSegmentedControlController;

  /// @brief Field _favoriteToggle, offset 0x50, size 0x8
  __declspec(property(get = __get__favoriteToggle, put = __set__favoriteToggle))::UnityEngine::UI::Toggle* _favoriteToggle;

  /// @brief Field didChangeDifficultyBeatmapEvent, offset 0x58, size 0x8
  __declspec(
      property(get = __get_didChangeDifficultyBeatmapEvent,
               put = __set_didChangeDifficultyBeatmapEvent))::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::GlobalNamespace::IDifficultyBeatmap*>* didChangeDifficultyBeatmapEvent;

  /// @brief Field didFavoriteToggleChangeEvent, offset 0x60, size 0x8
  __declspec(property(get = __get_didFavoriteToggleChangeEvent,
                      put = __set_didFavoriteToggleChangeEvent))::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::UnityEngine::UI::Toggle*>* didFavoriteToggleChangeEvent;

  /// @brief Field _level, offset 0x68, size 0x8
  __declspec(property(get = __get__level, put = __set__level))::GlobalNamespace::IBeatmapLevel* _level;

  /// @brief Field _playerData, offset 0x70, size 0x8
  __declspec(property(get = __get__playerData, put = __set__playerData))::GlobalNamespace::PlayerData* _playerData;

  /// @brief Field _selectedDifficultyBeatmap, offset 0x78, size 0x8
  __declspec(property(get = __get__selectedDifficultyBeatmap, put = __set__selectedDifficultyBeatmap))::GlobalNamespace::IDifficultyBeatmap* _selectedDifficultyBeatmap;

  /// @brief Field _toggleBinder, offset 0x80, size 0x8
  __declspec(property(get = __get__toggleBinder, put = __set__toggleBinder))::HMUI::ToggleBinder* _toggleBinder;

  __declspec(property(get = get_selectedDifficultyBeatmap))::GlobalNamespace::IDifficultyBeatmap* selectedDifficultyBeatmap;

  __declspec(property(get = get_actionButton))::UnityEngine::UI::Button* actionButton;

  __declspec(property(put = set_actionButtonText))::StringW actionButtonText;

  __declspec(property(get = get_practiceButton))::UnityEngine::UI::Button* practiceButton;

  __declspec(property(put = set_hidePracticeButton)) bool hidePracticeButton;

  constexpr ::UnityEngine::UI::Button*& __get__actionButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__actionButton() const;

  constexpr void __set__actionButton(::UnityEngine::UI::Button* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__actionButtonText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__actionButtonText() const;

  constexpr void __set__actionButtonText(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::UI::Button*& __get__practiceButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__practiceButton() const;

  constexpr void __set__practiceButton(::UnityEngine::UI::Button* value);

  constexpr ::GlobalNamespace::LevelBar*& __get__levelBar();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelBar*> const& __get__levelBar() const;

  constexpr void __set__levelBar(::GlobalNamespace::LevelBar* value);

  constexpr ::GlobalNamespace::LevelParamsPanel*& __get__levelParamsPanel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelParamsPanel*> const& __get__levelParamsPanel() const;

  constexpr void __set__levelParamsPanel(::GlobalNamespace::LevelParamsPanel* value);

  constexpr ::GlobalNamespace::BeatmapDifficultySegmentedControlController*& __get__beatmapDifficultySegmentedControlController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDifficultySegmentedControlController*> const& __get__beatmapDifficultySegmentedControlController() const;

  constexpr void __set__beatmapDifficultySegmentedControlController(::GlobalNamespace::BeatmapDifficultySegmentedControlController* value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*& __get__beatmapCharacteristicSegmentedControlController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*> const& __get__beatmapCharacteristicSegmentedControlController() const;

  constexpr void __set__beatmapCharacteristicSegmentedControlController(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController* value);

  constexpr ::UnityEngine::UI::Toggle*& __get__favoriteToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__favoriteToggle() const;

  constexpr void __set__favoriteToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::GlobalNamespace::IDifficultyBeatmap*>*& __get_didChangeDifficultyBeatmapEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::GlobalNamespace::IDifficultyBeatmap*>*> const&
  __get_didChangeDifficultyBeatmapEvent() const;

  constexpr void __set_didChangeDifficultyBeatmapEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::GlobalNamespace::IDifficultyBeatmap*>* value);

  constexpr ::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::UnityEngine::UI::Toggle*>*& __get_didFavoriteToggleChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::UnityEngine::UI::Toggle*>*> const& __get_didFavoriteToggleChangeEvent() const;

  constexpr void __set_didFavoriteToggleChangeEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::UnityEngine::UI::Toggle*>* value);

  constexpr ::GlobalNamespace::IBeatmapLevel*& __get__level();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevel*> const& __get__level() const;

  constexpr void __set__level(::GlobalNamespace::IBeatmapLevel* value);

  constexpr ::GlobalNamespace::PlayerData*& __get__playerData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerData*> const& __get__playerData() const;

  constexpr void __set__playerData(::GlobalNamespace::PlayerData* value);

  constexpr ::GlobalNamespace::IDifficultyBeatmap*& __get__selectedDifficultyBeatmap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> const& __get__selectedDifficultyBeatmap() const;

  constexpr void __set__selectedDifficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap* value);

  constexpr ::HMUI::ToggleBinder*& __get__toggleBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleBinder*> const& __get__toggleBinder() const;

  constexpr void __set__toggleBinder(::HMUI::ToggleBinder* value);

  /// @brief Method add_didChangeDifficultyBeatmapEvent, addr 0x22e9ad4, size 0xb0, virtual false, abstract: false, final false
  inline void add_didChangeDifficultyBeatmapEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::GlobalNamespace::IDifficultyBeatmap*>* value);

  /// @brief Method remove_didChangeDifficultyBeatmapEvent, addr 0x22e9b84, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didChangeDifficultyBeatmapEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::GlobalNamespace::IDifficultyBeatmap*>* value);

  /// @brief Method add_didFavoriteToggleChangeEvent, addr 0x22e9c34, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFavoriteToggleChangeEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::UnityEngine::UI::Toggle*>* value);

  /// @brief Method remove_didFavoriteToggleChangeEvent, addr 0x22e9ce4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFavoriteToggleChangeEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::UnityEngine::UI::Toggle*>* value);

  /// @brief Method get_selectedDifficultyBeatmap, addr 0x22e9d94, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IDifficultyBeatmap* get_selectedDifficultyBeatmap();

  /// @brief Method get_actionButton, addr 0x22e9d9c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::Button* get_actionButton();

  /// @brief Method set_actionButtonText, addr 0x22e9da4, size 0x24, virtual false, abstract: false, final false
  inline void set_actionButtonText(::StringW value);

  /// @brief Method get_practiceButton, addr 0x22e9dc8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::Button* get_practiceButton();

  /// @brief Method set_hidePracticeButton, addr 0x22e9dd0, size 0x34, virtual false, abstract: false, final false
  inline void set_hidePracticeButton(bool value);

  /// @brief Method SetContent, addr 0x22e9e04, size 0x308, virtual false, abstract: false, final false
  inline void SetContent(::GlobalNamespace::IBeatmapLevel* level, ::GlobalNamespace::BeatmapDifficulty defaultDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO* defaultBeatmapCharacteristic,
                         ::GlobalNamespace::PlayerData* playerData);

  /// @brief Method Awake, addr 0x22ea290, size 0x184, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OnDestroy, addr 0x22ea414, size 0x178, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty, addr 0x22ea58c, size 0x38, virtual false, abstract: false, final false
  inline void HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty(::GlobalNamespace::BeatmapDifficultySegmentedControlController* controller,
                                                                                   ::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic, addr 0x22ea5c4, size 0x184, virtual false, abstract: false, final false
  inline void HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController* controller,
                                                                                                  ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  /// @brief Method RefreshContent, addr 0x22ea10c, size 0x184, virtual false, abstract: false, final false
  inline void RefreshContent();

  /// @brief Method SetContentForBeatmapDataAsync, addr 0x22ea748, size 0x9c, virtual false, abstract: false, final false
  inline void SetContentForBeatmapDataAsync(::GlobalNamespace::IDifficultyBeatmap* selectedDifficultyBeatmap);

  /// @brief Method ClearContent, addr 0x22ea7e4, size 0x8, virtual false, abstract: false, final false
  inline void ClearContent();

  static inline ::GlobalNamespace::StandardLevelDetailView* New_ctor();

  /// @brief Method .ctor, addr 0x22ea7ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Awake>b__29_0, addr 0x22ea7f4, size 0x24, virtual false, abstract: false, final false
  inline void _Awake_b__29_0(bool on);

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelDetailView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelDetailView(StandardLevelDetailView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelDetailView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelDetailView(StandardLevelDetailView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelDetailView();

public:
  /// @brief Field _actionButton, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____actionButton;

  /// @brief Field _actionButtonText, offset: 0x20, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____actionButtonText;

  /// @brief Field _practiceButton, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____practiceButton;

  /// @brief Field _levelBar, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::LevelBar* ____levelBar;

  /// @brief Field _levelParamsPanel, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::LevelParamsPanel* ____levelParamsPanel;

  /// @brief Field _beatmapDifficultySegmentedControlController, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDifficultySegmentedControlController* ____beatmapDifficultySegmentedControlController;

  /// @brief Field _beatmapCharacteristicSegmentedControlController, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController* ____beatmapCharacteristicSegmentedControlController;

  /// @brief Field _favoriteToggle, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____favoriteToggle;

  /// @brief Field didChangeDifficultyBeatmapEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::GlobalNamespace::IDifficultyBeatmap*>* ___didChangeDifficultyBeatmapEvent;

  /// @brief Field didFavoriteToggleChangeEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::StandardLevelDetailView*, ::UnityEngine::UI::Toggle*>* ___didFavoriteToggleChangeEvent;

  /// @brief Field _level, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevel* ____level;

  /// @brief Field _playerData, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::PlayerData* ____playerData;

  /// @brief Field _selectedDifficultyBeatmap, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::IDifficultyBeatmap* ____selectedDifficultyBeatmap;

  /// @brief Field _toggleBinder, offset: 0x80, size: 0x8, def value: None
  ::HMUI::ToggleBinder* ____toggleBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelDetailView, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____actionButton) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____actionButtonText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____practiceButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____levelBar) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____levelParamsPanel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____beatmapDifficultySegmentedControlController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____beatmapCharacteristicSegmentedControlController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____favoriteToggle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ___didChangeDifficultyBeatmapEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ___didFavoriteToggleChangeEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____level) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____playerData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____selectedDifficultyBeatmap) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelDetailView, ____toggleBinder) == 0x80, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelDetailView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelDetailView*, "", "StandardLevelDetailView");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34, "", "StandardLevelDetailView/<SetContentForBeatmapDataAsync>d__34");
