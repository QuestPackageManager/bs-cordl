#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LevelFilter_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SearchFilterParamsViewController)
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
class BeatmapDifficultyDropdown;
}
namespace GlobalNamespace {
struct LevelFilter;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class SongPacksDropdown;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace GlobalNamespace {
class BeatmapCharacteristicsDropdown;
}
namespace GlobalNamespace {
class PlayerSensitivityDropdown;
}
namespace GlobalNamespace {
class FormattedFloatListSettingsController;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
// Forward declare root types
namespace GlobalNamespace {
class SearchFilterParamsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SearchFilterParamsViewController);
// Type: ::SearchFilterParamsViewController
// SizeInfo { instance_size: 328, native_size: -1, calculated_instance_size: 328, calculated_native_size: 328, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605)), TypeDefinitionIndex(TypeDefinitionIndex(4402))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5673))
// CS Name: ::SearchFilterParamsViewController*
class CORDL_TYPE SearchFilterParamsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _filterByOwnedToggle, offset 0x70, size 0x8
  __declspec(property(get = __get__filterByOwnedToggle, put = __set__filterByOwnedToggle))::UnityEngine::UI::Toggle* _filterByOwnedToggle;

  /// @brief Field _filterByNotOwnedToggle, offset 0x78, size 0x8
  __declspec(property(get = __get__filterByNotOwnedToggle, put = __set__filterByNotOwnedToggle))::UnityEngine::UI::Toggle* _filterByNotOwnedToggle;

  /// @brief Field _filterByCharacteristicToggle, offset 0x80, size 0x8
  __declspec(property(get = __get__filterByCharacteristicToggle, put = __set__filterByCharacteristicToggle))::UnityEngine::UI::Toggle* _filterByCharacteristicToggle;

  /// @brief Field _beatmapCharacteristicsDropdown, offset 0x88, size 0x8
  __declspec(property(get = __get__beatmapCharacteristicsDropdown, put = __set__beatmapCharacteristicsDropdown))::GlobalNamespace::BeatmapCharacteristicsDropdown* _beatmapCharacteristicsDropdown;

  /// @brief Field _filterByDifficultyToggle, offset 0x90, size 0x8
  __declspec(property(get = __get__filterByDifficultyToggle, put = __set__filterByDifficultyToggle))::UnityEngine::UI::Toggle* _filterByDifficultyToggle;

  /// @brief Field _beatmapDifficultyDropdown, offset 0x98, size 0x8
  __declspec(property(get = __get__beatmapDifficultyDropdown, put = __set__beatmapDifficultyDropdown))::GlobalNamespace::BeatmapDifficultyDropdown* _beatmapDifficultyDropdown;

  /// @brief Field _filterBySongPacksToggle, offset 0xa0, size 0x8
  __declspec(property(get = __get__filterBySongPacksToggle, put = __set__filterBySongPacksToggle))::UnityEngine::UI::Toggle* _filterBySongPacksToggle;

  /// @brief Field _songPacksDropdown, offset 0xa8, size 0x8
  __declspec(property(get = __get__songPacksDropdown, put = __set__songPacksDropdown))::GlobalNamespace::SongPacksDropdown* _songPacksDropdown;

  /// @brief Field _filterByNotPlayedYetToggle, offset 0xb0, size 0x8
  __declspec(property(get = __get__filterByNotPlayedYetToggle, put = __set__filterByNotPlayedYetToggle))::UnityEngine::UI::Toggle* _filterByNotPlayedYetToggle;

  /// @brief Field _filterByMinBpmToggle, offset 0xb8, size 0x8
  __declspec(property(get = __get__filterByMinBpmToggle, put = __set__filterByMinBpmToggle))::UnityEngine::UI::Toggle* _filterByMinBpmToggle;

  /// @brief Field _minBpmController, offset 0xc0, size 0x8
  __declspec(property(get = __get__minBpmController, put = __set__minBpmController))::GlobalNamespace::FormattedFloatListSettingsController* _minBpmController;

  /// @brief Field _filterByMaxBpmToggle, offset 0xc8, size 0x8
  __declspec(property(get = __get__filterByMaxBpmToggle, put = __set__filterByMaxBpmToggle))::UnityEngine::UI::Toggle* _filterByMaxBpmToggle;

  /// @brief Field _maxBpmController, offset 0xd0, size 0x8
  __declspec(property(get = __get__maxBpmController, put = __set__maxBpmController))::GlobalNamespace::FormattedFloatListSettingsController* _maxBpmController;

  /// @brief Field _filterBySensitivity, offset 0xd8, size 0x8
  __declspec(property(get = __get__filterBySensitivity, put = __set__filterBySensitivity))::GlobalNamespace::PlayerSensitivityDropdown* _filterBySensitivity;

  /// @brief Field _okButton, offset 0xe0, size 0x8
  __declspec(property(get = __get__okButton, put = __set__okButton))::UnityEngine::UI::Button* _okButton;

  /// @brief Field _playerDataModel, offset 0xe8, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _currentSearchFilter, offset 0xf0, size 0x50
  __declspec(property(get = __get__currentSearchFilter, put = __set__currentSearchFilter))::GlobalNamespace::LevelFilter _currentSearchFilter;

  /// @brief Field didFinishEvent, offset 0x140, size 0x8
  __declspec(property(get = __get_didFinishEvent, put = __set_didFinishEvent))::System::Action_2<::GlobalNamespace::SearchFilterParamsViewController*, ::GlobalNamespace::LevelFilter>* didFinishEvent;

  constexpr ::UnityEngine::UI::Toggle*& __get__filterByOwnedToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__filterByOwnedToggle() const;

  constexpr void __set__filterByOwnedToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::UnityEngine::UI::Toggle*& __get__filterByNotOwnedToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__filterByNotOwnedToggle() const;

  constexpr void __set__filterByNotOwnedToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::UnityEngine::UI::Toggle*& __get__filterByCharacteristicToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__filterByCharacteristicToggle() const;

  constexpr void __set__filterByCharacteristicToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicsDropdown*& __get__beatmapCharacteristicsDropdown();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicsDropdown*> const& __get__beatmapCharacteristicsDropdown() const;

  constexpr void __set__beatmapCharacteristicsDropdown(::GlobalNamespace::BeatmapCharacteristicsDropdown* value);

  constexpr ::UnityEngine::UI::Toggle*& __get__filterByDifficultyToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__filterByDifficultyToggle() const;

  constexpr void __set__filterByDifficultyToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::GlobalNamespace::BeatmapDifficultyDropdown*& __get__beatmapDifficultyDropdown();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDifficultyDropdown*> const& __get__beatmapDifficultyDropdown() const;

  constexpr void __set__beatmapDifficultyDropdown(::GlobalNamespace::BeatmapDifficultyDropdown* value);

  constexpr ::UnityEngine::UI::Toggle*& __get__filterBySongPacksToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__filterBySongPacksToggle() const;

  constexpr void __set__filterBySongPacksToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::GlobalNamespace::SongPacksDropdown*& __get__songPacksDropdown();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPacksDropdown*> const& __get__songPacksDropdown() const;

  constexpr void __set__songPacksDropdown(::GlobalNamespace::SongPacksDropdown* value);

  constexpr ::UnityEngine::UI::Toggle*& __get__filterByNotPlayedYetToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__filterByNotPlayedYetToggle() const;

  constexpr void __set__filterByNotPlayedYetToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::UnityEngine::UI::Toggle*& __get__filterByMinBpmToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__filterByMinBpmToggle() const;

  constexpr void __set__filterByMinBpmToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::GlobalNamespace::FormattedFloatListSettingsController*& __get__minBpmController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FormattedFloatListSettingsController*> const& __get__minBpmController() const;

  constexpr void __set__minBpmController(::GlobalNamespace::FormattedFloatListSettingsController* value);

  constexpr ::UnityEngine::UI::Toggle*& __get__filterByMaxBpmToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__filterByMaxBpmToggle() const;

  constexpr void __set__filterByMaxBpmToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::GlobalNamespace::FormattedFloatListSettingsController*& __get__maxBpmController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FormattedFloatListSettingsController*> const& __get__maxBpmController() const;

  constexpr void __set__maxBpmController(::GlobalNamespace::FormattedFloatListSettingsController* value);

  constexpr ::GlobalNamespace::PlayerSensitivityDropdown*& __get__filterBySensitivity();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSensitivityDropdown*> const& __get__filterBySensitivity() const;

  constexpr void __set__filterBySensitivity(::GlobalNamespace::PlayerSensitivityDropdown* value);

  constexpr ::UnityEngine::UI::Button*& __get__okButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__okButton() const;

  constexpr void __set__okButton(::UnityEngine::UI::Button* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::GlobalNamespace::LevelFilter& __get__currentSearchFilter();

  constexpr ::GlobalNamespace::LevelFilter const& __get__currentSearchFilter() const;

  constexpr void __set__currentSearchFilter(::GlobalNamespace::LevelFilter value);

  constexpr ::System::Action_2<::GlobalNamespace::SearchFilterParamsViewController*, ::GlobalNamespace::LevelFilter>*& __get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::SearchFilterParamsViewController*, ::GlobalNamespace::LevelFilter>*> const& __get_didFinishEvent() const;

  constexpr void __set_didFinishEvent(::System::Action_2<::GlobalNamespace::SearchFilterParamsViewController*, ::GlobalNamespace::LevelFilter>* value);

  /// @brief Method add_didFinishEvent, addr 0x22c28b0, size 0xb4, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_2<::GlobalNamespace::SearchFilterParamsViewController*, ::GlobalNamespace::LevelFilter>* value);

  /// @brief Method remove_didFinishEvent, addr 0x22c2964, size 0xb4, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_2<::GlobalNamespace::SearchFilterParamsViewController*, ::GlobalNamespace::LevelFilter>* value);

  /// @brief Method Setup, addr 0x22c2a18, size 0x30, virtual false, abstract: false, final false
  inline void Setup(ByRef<::GlobalNamespace::LevelFilter> filter);

  /// @brief Method DidActivate, addr 0x22c2dec, size 0x260, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x22c304c, size 0x1c8, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method OkButtonPressed, addr 0x22c3214, size 0x1d8, virtual false, abstract: false, final false
  inline void OkButtonPressed();

  /// @brief Method MinBpmControllerValueDidChange, addr 0x22c33ec, size 0x88, virtual false, abstract: false, final false
  inline void MinBpmControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* minBpmController, float_t value);

  /// @brief Method MaxBpmControllerValueDidChange, addr 0x22c3474, size 0x88, virtual false, abstract: false, final false
  inline void MaxBpmControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* maxBpmController, float_t value);

  /// @brief Method HandleFilterByOwnedValueValueChanged, addr 0x22c34fc, size 0x2c, virtual false, abstract: false, final false
  inline void HandleFilterByOwnedValueValueChanged(bool isOn);

  /// @brief Method HandleFilterByNotOwnedValueValueChanged, addr 0x22c3528, size 0x2c, virtual false, abstract: false, final false
  inline void HandleFilterByNotOwnedValueValueChanged(bool isOn);

  /// @brief Method Refresh, addr 0x22c2a48, size 0x3a4, virtual false, abstract: false, final false
  inline void Refresh(ByRef<::GlobalNamespace::LevelFilter> filter);

  static inline ::GlobalNamespace::SearchFilterParamsViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22c3554, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SearchFilterParamsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SearchFilterParamsViewController(SearchFilterParamsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SearchFilterParamsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SearchFilterParamsViewController(SearchFilterParamsViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SearchFilterParamsViewController();

public:
  /// @brief Field _filterByOwnedToggle, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____filterByOwnedToggle;

  /// @brief Field _filterByNotOwnedToggle, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____filterByNotOwnedToggle;

  /// @brief Field _filterByCharacteristicToggle, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____filterByCharacteristicToggle;

  /// @brief Field _beatmapCharacteristicsDropdown, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicsDropdown* ____beatmapCharacteristicsDropdown;

  /// @brief Field _filterByDifficultyToggle, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____filterByDifficultyToggle;

  /// @brief Field _beatmapDifficultyDropdown, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDifficultyDropdown* ____beatmapDifficultyDropdown;

  /// @brief Field _filterBySongPacksToggle, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____filterBySongPacksToggle;

  /// @brief Field _songPacksDropdown, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::SongPacksDropdown* ____songPacksDropdown;

  /// @brief Field _filterByNotPlayedYetToggle, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____filterByNotPlayedYetToggle;

  /// @brief Field _filterByMinBpmToggle, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____filterByMinBpmToggle;

  /// @brief Field _minBpmController, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::FormattedFloatListSettingsController* ____minBpmController;

  /// @brief Field _filterByMaxBpmToggle, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____filterByMaxBpmToggle;

  /// @brief Field _maxBpmController, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::FormattedFloatListSettingsController* ____maxBpmController;

  /// @brief Field _filterBySensitivity, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSensitivityDropdown* ____filterBySensitivity;

  /// @brief Field _okButton, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____okButton;

  /// @brief Field _playerDataModel, offset: 0xe8, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field _currentSearchFilter, offset: 0xf0, size: 0x50, def value: None
  ::GlobalNamespace::LevelFilter ____currentSearchFilter;

  /// @brief Field didFinishEvent, offset: 0x140, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::SearchFilterParamsViewController*, ::GlobalNamespace::LevelFilter>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SearchFilterParamsViewController, 0x148>, "Size mismatch!");

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

static_assert(offsetof(::GlobalNamespace::SearchFilterParamsViewController, ____okButton) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SearchFilterParamsViewController, ____playerDataModel) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SearchFilterParamsViewController, ____currentSearchFilter) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SearchFilterParamsViewController, ___didFinishEvent) == 0x140, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SearchFilterParamsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SearchFilterParamsViewController*, "", "SearchFilterParamsViewController");
