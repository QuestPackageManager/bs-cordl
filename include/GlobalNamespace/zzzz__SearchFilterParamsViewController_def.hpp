#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LevelFilter_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SearchFilterParamsViewController)
namespace GlobalNamespace {
class BeatmapCharacteristicsDropdown;
}
namespace GlobalNamespace {
class BeatmapDifficultyDropdown;
}
namespace GlobalNamespace {
class FormattedFloatListSettingsController;
}
namespace GlobalNamespace {
struct LevelFilter;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class PlayerSensitivityDropdown;
}
namespace GlobalNamespace {
class SongPacksDropdown;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SearchFilterParamsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SearchFilterParamsViewController);
// Type: ::SearchFilterParamsViewController
// SizeInfo { instance_size: 336, native_size: -1, calculated_instance_size: 336, calculated_native_size: 336, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SearchFilterParamsViewController*
class CORDL_TYPE SearchFilterParamsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _beatmapCharacteristicsDropdown, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristicsDropdown,
                      put = __cordl_internal_set__beatmapCharacteristicsDropdown))::UnityW<::GlobalNamespace::BeatmapCharacteristicsDropdown> _beatmapCharacteristicsDropdown;

  /// @brief Field _beatmapDifficultyDropdown, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDifficultyDropdown,
                      put = __cordl_internal_set__beatmapDifficultyDropdown))::UnityW<::GlobalNamespace::BeatmapDifficultyDropdown> _beatmapDifficultyDropdown;

  /// @brief Field _currentSearchFilter, offset 0xf8, size 0x50
  __declspec(property(get = __cordl_internal_get__currentSearchFilter, put = __cordl_internal_set__currentSearchFilter))::GlobalNamespace::LevelFilter _currentSearchFilter;

  /// @brief Field _filterByCharacteristicToggle, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__filterByCharacteristicToggle,
                      put = __cordl_internal_set__filterByCharacteristicToggle))::UnityW<::UnityEngine::UI::Toggle> _filterByCharacteristicToggle;

  /// @brief Field _filterByDifficultyToggle, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__filterByDifficultyToggle, put = __cordl_internal_set__filterByDifficultyToggle))::UnityW<::UnityEngine::UI::Toggle> _filterByDifficultyToggle;

  /// @brief Field _filterByMaxBpmToggle, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__filterByMaxBpmToggle, put = __cordl_internal_set__filterByMaxBpmToggle))::UnityW<::UnityEngine::UI::Toggle> _filterByMaxBpmToggle;

  /// @brief Field _filterByMinBpmToggle, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__filterByMinBpmToggle, put = __cordl_internal_set__filterByMinBpmToggle))::UnityW<::UnityEngine::UI::Toggle> _filterByMinBpmToggle;

  /// @brief Field _filterByNotOwnedToggle, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__filterByNotOwnedToggle, put = __cordl_internal_set__filterByNotOwnedToggle))::UnityW<::UnityEngine::UI::Toggle> _filterByNotOwnedToggle;

  /// @brief Field _filterByNotPlayedYetToggle, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__filterByNotPlayedYetToggle, put = __cordl_internal_set__filterByNotPlayedYetToggle))::UnityW<::UnityEngine::UI::Toggle> _filterByNotPlayedYetToggle;

  /// @brief Field _filterByOwnedToggle, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__filterByOwnedToggle, put = __cordl_internal_set__filterByOwnedToggle))::UnityW<::UnityEngine::UI::Toggle> _filterByOwnedToggle;

  /// @brief Field _filterBySensitivity, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__filterBySensitivity, put = __cordl_internal_set__filterBySensitivity))::UnityW<::GlobalNamespace::PlayerSensitivityDropdown> _filterBySensitivity;

  /// @brief Field _filterBySongPacksToggle, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__filterBySongPacksToggle, put = __cordl_internal_set__filterBySongPacksToggle))::UnityW<::UnityEngine::UI::Toggle> _filterBySongPacksToggle;

  /// @brief Field _forcedSensitivityOptionNotice, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__forcedSensitivityOptionNotice,
                      put = __cordl_internal_set__forcedSensitivityOptionNotice))::UnityW<::UnityEngine::GameObject> _forcedSensitivityOptionNotice;

  /// @brief Field _maxBpmController, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__maxBpmController, put = __cordl_internal_set__maxBpmController))::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> _maxBpmController;

  /// @brief Field _minBpmController, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__minBpmController, put = __cordl_internal_set__minBpmController))::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> _minBpmController;

  /// @brief Field _okButton, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__okButton, put = __cordl_internal_set__okButton))::UnityW<::UnityEngine::UI::Button> _okButton;

  /// @brief Field _playerDataModel, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _songPacksDropdown, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__songPacksDropdown, put = __cordl_internal_set__songPacksDropdown))::UnityW<::GlobalNamespace::SongPacksDropdown> _songPacksDropdown;

  /// @brief Field didFinishEvent, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent,
                      put = __cordl_internal_set_didFinishEvent))::System::Action_2<::UnityW<::GlobalNamespace::SearchFilterParamsViewController>, ::GlobalNamespace::LevelFilter>* didFinishEvent;

  /// @brief Method DidActivate, addr 0x255250c, size 0x260, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x255276c, size 0x1c8, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleFilterByNotOwnedValueValueChanged, addr 0x2552c48, size 0x2c, virtual false, abstract: false, final false
  inline void HandleFilterByNotOwnedValueValueChanged(bool isOn);

  /// @brief Method HandleFilterByOwnedValueValueChanged, addr 0x2552c1c, size 0x2c, virtual false, abstract: false, final false
  inline void HandleFilterByOwnedValueValueChanged(bool isOn);

  /// @brief Method MaxBpmControllerValueDidChange, addr 0x2552b94, size 0x88, virtual false, abstract: false, final false
  inline void MaxBpmControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* maxBpmController, float_t value);

  /// @brief Method MinBpmControllerValueDidChange, addr 0x2552b0c, size 0x88, virtual false, abstract: false, final false
  inline void MinBpmControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* minBpmController, float_t value);

  static inline ::GlobalNamespace::SearchFilterParamsViewController* New_ctor();

  /// @brief Method OkButtonPressed, addr 0x2552934, size 0x1d8, virtual false, abstract: false, final false
  inline void OkButtonPressed();

  /// @brief Method Refresh, addr 0x2552164, size 0x3a8, virtual false, abstract: false, final false
  inline void Refresh(ByRef<::GlobalNamespace::LevelFilter> filter);

  /// @brief Method Setup, addr 0x2552134, size 0x30, virtual false, abstract: false, final false
  inline void Setup(ByRef<::GlobalNamespace::LevelFilter> filter);

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicsDropdown> const& __cordl_internal_get__beatmapCharacteristicsDropdown() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicsDropdown>& __cordl_internal_get__beatmapCharacteristicsDropdown();

  constexpr ::UnityW<::GlobalNamespace::BeatmapDifficultyDropdown> const& __cordl_internal_get__beatmapDifficultyDropdown() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapDifficultyDropdown>& __cordl_internal_get__beatmapDifficultyDropdown();

  constexpr ::GlobalNamespace::LevelFilter const& __cordl_internal_get__currentSearchFilter() const;

  constexpr ::GlobalNamespace::LevelFilter& __cordl_internal_get__currentSearchFilter();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__filterByCharacteristicToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__filterByCharacteristicToggle();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__filterByDifficultyToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__filterByDifficultyToggle();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__filterByMaxBpmToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__filterByMaxBpmToggle();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__filterByMinBpmToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__filterByMinBpmToggle();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__filterByNotOwnedToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__filterByNotOwnedToggle();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__filterByNotPlayedYetToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__filterByNotPlayedYetToggle();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__filterByOwnedToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__filterByOwnedToggle();

  constexpr ::UnityW<::GlobalNamespace::PlayerSensitivityDropdown> const& __cordl_internal_get__filterBySensitivity() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerSensitivityDropdown>& __cordl_internal_get__filterBySensitivity();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__filterBySongPacksToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__filterBySongPacksToggle();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__forcedSensitivityOptionNotice() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__forcedSensitivityOptionNotice();

  constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> const& __cordl_internal_get__maxBpmController() const;

  constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>& __cordl_internal_get__maxBpmController();

  constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> const& __cordl_internal_get__minBpmController() const;

  constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>& __cordl_internal_get__minBpmController();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__okButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__okButton();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::SongPacksDropdown> const& __cordl_internal_get__songPacksDropdown() const;

  constexpr ::UnityW<::GlobalNamespace::SongPacksDropdown>& __cordl_internal_get__songPacksDropdown();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::SearchFilterParamsViewController>, ::GlobalNamespace::LevelFilter>*& __cordl_internal_get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::SearchFilterParamsViewController>, ::GlobalNamespace::LevelFilter>*> const&
  __cordl_internal_get_didFinishEvent() const;

  constexpr void __cordl_internal_set__beatmapCharacteristicsDropdown(::UnityW<::GlobalNamespace::BeatmapCharacteristicsDropdown> value);

  constexpr void __cordl_internal_set__beatmapDifficultyDropdown(::UnityW<::GlobalNamespace::BeatmapDifficultyDropdown> value);

  constexpr void __cordl_internal_set__currentSearchFilter(::GlobalNamespace::LevelFilter value);

  constexpr void __cordl_internal_set__filterByCharacteristicToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__filterByDifficultyToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__filterByMaxBpmToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__filterByMinBpmToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__filterByNotOwnedToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__filterByNotPlayedYetToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__filterByOwnedToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__filterBySensitivity(::UnityW<::GlobalNamespace::PlayerSensitivityDropdown> value);

  constexpr void __cordl_internal_set__filterBySongPacksToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__forcedSensitivityOptionNotice(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__maxBpmController(::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> value);

  constexpr void __cordl_internal_set__minBpmController(::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> value);

  constexpr void __cordl_internal_set__okButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__songPacksDropdown(::UnityW<::GlobalNamespace::SongPacksDropdown> value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::SearchFilterParamsViewController>, ::GlobalNamespace::LevelFilter>* value);

  /// @brief Method .ctor, addr 0x2552c74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x2551fcc, size 0xb4, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::SearchFilterParamsViewController>, ::GlobalNamespace::LevelFilter>* value);

  /// @brief Method remove_didFinishEvent, addr 0x2552080, size 0xb4, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::SearchFilterParamsViewController>, ::GlobalNamespace::LevelFilter>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SearchFilterParamsViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SearchFilterParamsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SearchFilterParamsViewController(SearchFilterParamsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SearchFilterParamsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SearchFilterParamsViewController(SearchFilterParamsViewController const&) = delete;

  /// @brief Field _filterByOwnedToggle, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____filterByOwnedToggle;

  /// @brief Field _filterByNotOwnedToggle, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____filterByNotOwnedToggle;

  /// @brief Field _filterByCharacteristicToggle, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____filterByCharacteristicToggle;

  /// @brief Field _beatmapCharacteristicsDropdown, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicsDropdown> ____beatmapCharacteristicsDropdown;

  /// @brief Field _filterByDifficultyToggle, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____filterByDifficultyToggle;

  /// @brief Field _beatmapDifficultyDropdown, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapDifficultyDropdown> ____beatmapDifficultyDropdown;

  /// @brief Field _filterBySongPacksToggle, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____filterBySongPacksToggle;

  /// @brief Field _songPacksDropdown, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongPacksDropdown> ____songPacksDropdown;

  /// @brief Field _filterByNotPlayedYetToggle, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____filterByNotPlayedYetToggle;

  /// @brief Field _filterByMinBpmToggle, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____filterByMinBpmToggle;

  /// @brief Field _minBpmController, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> ____minBpmController;

  /// @brief Field _filterByMaxBpmToggle, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____filterByMaxBpmToggle;

  /// @brief Field _maxBpmController, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> ____maxBpmController;

  /// @brief Field _filterBySensitivity, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerSensitivityDropdown> ____filterBySensitivity;

  /// @brief Field _forcedSensitivityOptionNotice, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____forcedSensitivityOptionNotice;

  /// @brief Field _okButton, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____okButton;

  /// @brief Field _playerDataModel, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _currentSearchFilter, offset: 0xf8, size: 0x50, def value: None
  ::GlobalNamespace::LevelFilter ____currentSearchFilter;

  /// @brief Field didFinishEvent, offset: 0x148, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::SearchFilterParamsViewController>, ::GlobalNamespace::LevelFilter>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SearchFilterParamsViewController, 0x150>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SearchFilterParamsViewController, ____filterByOwnedToggle) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SearchFilterParamsViewController, ____filterByNotOwnedToggle) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SearchFilterParamsViewController, ____filterByCharacteristicToggle) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SearchFilterParamsViewController, ____beatmapCharacteristicsDropdown) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SearchFilterParamsViewController, ____filterByDifficultyToggle) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SearchFilterParamsViewController, ____beatmapDifficultyDropdown) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SearchFilterParamsViewController, ____filterBySongPacksToggle) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SearchFilterParamsViewController, ____songPacksDropdown) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SearchFilterParamsViewController, ____filterByNotPlayedYetToggle) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SearchFilterParamsViewController, ____filterByMinBpmToggle) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SearchFilterParamsViewController, ____minBpmController) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SearchFilterParamsViewController, ____filterByMaxBpmToggle) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SearchFilterParamsViewController, ____maxBpmController) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SearchFilterParamsViewController, ____filterBySensitivity) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SearchFilterParamsViewController, ____forcedSensitivityOptionNotice) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SearchFilterParamsViewController, ____okButton) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SearchFilterParamsViewController, ____playerDataModel) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SearchFilterParamsViewController, ____currentSearchFilter) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SearchFilterParamsViewController, ___didFinishEvent) == 0x148, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SearchFilterParamsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SearchFilterParamsViewController*, "", "SearchFilterParamsViewController");
