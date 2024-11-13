#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSettingsPanelController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ArcVisibilityType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerSettingsPanelController)
namespace GlobalNamespace {
class ArcVisibilityTypeSettingsDropdown;
}
namespace GlobalNamespace {
struct ArcVisibilityType;
}
namespace GlobalNamespace {
class EnvironmentEffectsFilterPresetDropdown;
}
namespace GlobalNamespace {
struct EnvironmentEffectsFilterPreset;
}
namespace GlobalNamespace {
class EventBinder;
}
namespace GlobalNamespace {
class FormattedFloatListSettingsController;
}
namespace GlobalNamespace {
class IRefreshable;
}
namespace GlobalNamespace {
class NoteJumpDurationTypeSettingsDropdown;
}
namespace GlobalNamespace {
struct NoteJumpDurationTypeSettings;
}
namespace GlobalNamespace {
class NoteJumpStartBeatOffsetDropdown;
}
namespace GlobalNamespace {
class PlayerData;
}
namespace GlobalNamespace {
class PlayerHeightSettingsController;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
struct __PlayerSettingsPanelController__PlayerSettingsPanelLayout;
}
namespace HMUI {
class ToggleBinder;
}
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct __PlayerSettingsPanelController__PlayerSettingsPanelLayout;
}
namespace GlobalNamespace {
class PlayerSettingsPanelController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSettingsPanelController);
// Type: ::PlayerSettingsPanelLayout
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerSettingsPanelController::PlayerSettingsPanelLayout
struct CORDL_TYPE __PlayerSettingsPanelController__PlayerSettingsPanelLayout {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PlayerSettingsPanelController__PlayerSettingsPanelLayout_Unwrapped
  enum struct ____PlayerSettingsPanelController__PlayerSettingsPanelLayout_Unwrapped : int32_t {
    __E_All = static_cast<int32_t>(0x0),
    __E_Singleplayer = static_cast<int32_t>(0x1),
    __E_Multiplayer = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PlayerSettingsPanelController__PlayerSettingsPanelLayout_Unwrapped() const noexcept {
    return static_cast<____PlayerSettingsPanelController__PlayerSettingsPanelLayout_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSettingsPanelController__PlayerSettingsPanelLayout();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlayerSettingsPanelController__PlayerSettingsPanelLayout(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field All value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout const All;

  /// @brief Field Multiplayer value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout const Multiplayer;

  /// @brief Field Singleplayer value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout const Singleplayer;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4876 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerSettingsPanelController
// SizeInfo { instance_size: 288, native_size: -1, calculated_instance_size: 288, calculated_native_size: 288, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerSettingsPanelController*
class CORDL_TYPE PlayerSettingsPanelController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using PlayerSettingsPanelLayout = ::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout;

  /// @brief Field _adaptiveSfxToggle, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__adaptiveSfxToggle, put = __cordl_internal_set__adaptiveSfxToggle)) ::UnityW<::UnityEngine::UI::Toggle> _adaptiveSfxToggle;

  /// @brief Field _advanceHudToggle, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__advanceHudToggle, put = __cordl_internal_set__advanceHudToggle)) ::UnityW<::UnityEngine::UI::Toggle> _advanceHudToggle;

  /// @brief Field _arcHapticFeedbackCanvasGroup, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__arcHapticFeedbackCanvasGroup, put = __cordl_internal_set__arcHapticFeedbackCanvasGroup)) ::UnityW<::UnityEngine::CanvasGroup>
      _arcHapticFeedbackCanvasGroup;

  /// @brief Field _arcVisibilityWarning, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__arcVisibilityWarning, put = __cordl_internal_set__arcVisibilityWarning)) ::UnityW<::UnityEngine::GameObject> _arcVisibilityWarning;

  /// @brief Field _arcsHapticFeedbackToggle, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__arcsHapticFeedbackToggle, put = __cordl_internal_set__arcsHapticFeedbackToggle)) ::UnityW<::UnityEngine::UI::Toggle> _arcsHapticFeedbackToggle;

  /// @brief Field _arcsVisibilityTypeSettingsDropdown, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__arcsVisibilityTypeSettingsDropdown,
                      put = __cordl_internal_set__arcsVisibilityTypeSettingsDropdown)) ::UnityW<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown>
      _arcsVisibilityTypeSettingsDropdown;

  /// @brief Field _autoRestartToggle, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__autoRestartToggle, put = __cordl_internal_set__autoRestartToggle)) ::UnityW<::UnityEngine::UI::Toggle> _autoRestartToggle;

  /// @brief Field _automaticPlayerHeightToggle, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__automaticPlayerHeightToggle, put = __cordl_internal_set__automaticPlayerHeightToggle)) ::UnityW<::UnityEngine::UI::Toggle>
      _automaticPlayerHeightToggle;

  /// @brief Field _currentArcType, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get__currentArcType, put = __cordl_internal_set__currentArcType)) ::GlobalNamespace::ArcVisibilityType _currentArcType;

  /// @brief Field _dirty, offset 0x110, size 0x1
  __declspec(property(get = __cordl_internal_get__dirty, put = __cordl_internal_set__dirty)) bool _dirty;

  /// @brief Field _environmentEffectsFilterDefaultPresetDropdown, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentEffectsFilterDefaultPresetDropdown,
                      put = __cordl_internal_set__environmentEffectsFilterDefaultPresetDropdown)) ::UnityW<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown>
      _environmentEffectsFilterDefaultPresetDropdown;

  /// @brief Field _environmentEffectsFilterExpertPlusPresetDropdown, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentEffectsFilterExpertPlusPresetDropdown,
                      put = __cordl_internal_set__environmentEffectsFilterExpertPlusPresetDropdown)) ::UnityW<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown>
      _environmentEffectsFilterExpertPlusPresetDropdown;

  /// @brief Field _eventBinder, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__eventBinder, put = __cordl_internal_set__eventBinder)) ::GlobalNamespace::EventBinder* _eventBinder;

  /// @brief Field _headsetHapticIntensityController, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__headsetHapticIntensityController,
                      put = __cordl_internal_set__headsetHapticIntensityController)) ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>
      _headsetHapticIntensityController;

  /// @brief Field _hideNoteSpawnEffectToggle, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__hideNoteSpawnEffectToggle, put = __cordl_internal_set__hideNoteSpawnEffectToggle)) ::UnityW<::UnityEngine::UI::Toggle> _hideNoteSpawnEffectToggle;

  /// @brief Field _leftHandedToggle, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__leftHandedToggle, put = __cordl_internal_set__leftHandedToggle)) ::UnityW<::UnityEngine::UI::Toggle> _leftHandedToggle;

  /// @brief Field _noTextsAndHudsToggle, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__noTextsAndHudsToggle, put = __cordl_internal_set__noTextsAndHudsToggle)) ::UnityW<::UnityEngine::UI::Toggle> _noTextsAndHudsToggle;

  /// @brief Field _noteJumpDurationTypeSettingsDropdown, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__noteJumpDurationTypeSettingsDropdown,
                      put = __cordl_internal_set__noteJumpDurationTypeSettingsDropdown)) ::UnityW<::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown>
      _noteJumpDurationTypeSettingsDropdown;

  /// @brief Field _noteJumpFixedDurationSettingsCanvasGroup, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__noteJumpFixedDurationSettingsCanvasGroup, put = __cordl_internal_set__noteJumpFixedDurationSettingsCanvasGroup)) ::UnityW<::UnityEngine::CanvasGroup>
      _noteJumpFixedDurationSettingsCanvasGroup;

  /// @brief Field _noteJumpFixedDurationSettingsController, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__noteJumpFixedDurationSettingsController,
                      put = __cordl_internal_set__noteJumpFixedDurationSettingsController)) ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>
      _noteJumpFixedDurationSettingsController;

  /// @brief Field _noteJumpStartBeatOffsetCanvasGroup, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__noteJumpStartBeatOffsetCanvasGroup, put = __cordl_internal_set__noteJumpStartBeatOffsetCanvasGroup)) ::UnityW<::UnityEngine::CanvasGroup>
      _noteJumpStartBeatOffsetCanvasGroup;

  /// @brief Field _noteJumpStartBeatOffsetDropdown, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__noteJumpStartBeatOffsetDropdown,
                      put = __cordl_internal_set__noteJumpStartBeatOffsetDropdown)) ::UnityW<::GlobalNamespace::NoteJumpStartBeatOffsetDropdown>
      _noteJumpStartBeatOffsetDropdown;

  /// @brief Field _playerData, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__playerData, put = __cordl_internal_set__playerData)) ::GlobalNamespace::PlayerData* _playerData;

  /// @brief Field _playerHeightSettingsCanvasGroup, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__playerHeightSettingsCanvasGroup, put = __cordl_internal_set__playerHeightSettingsCanvasGroup)) ::UnityW<::UnityEngine::CanvasGroup>
      _playerHeightSettingsCanvasGroup;

  /// @brief Field _playerHeightSettingsController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__playerHeightSettingsController,
                      put = __cordl_internal_set__playerHeightSettingsController)) ::UnityW<::GlobalNamespace::PlayerHeightSettingsController>
      _playerHeightSettingsController;

  /// @brief Field _playerSpecificSettings, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__playerSpecificSettings, put = __cordl_internal_set__playerSpecificSettings)) ::GlobalNamespace::PlayerSpecificSettings* _playerSpecificSettings;

  /// @brief Field _reduceDebrisToggle, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__reduceDebrisToggle, put = __cordl_internal_set__reduceDebrisToggle)) ::UnityW<::UnityEngine::UI::Toggle> _reduceDebrisToggle;

  /// @brief Field _refreshed, offset 0x111, size 0x1
  __declspec(property(get = __cordl_internal_get__refreshed, put = __cordl_internal_set__refreshed)) bool _refreshed;

  /// @brief Field _saberTrailIntensitySettingsController, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__saberTrailIntensitySettingsController,
                      put = __cordl_internal_set__saberTrailIntensitySettingsController)) ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>
      _saberTrailIntensitySettingsController;

  /// @brief Field _sfxVolumeSettingsController, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__sfxVolumeSettingsController,
                      put = __cordl_internal_set__sfxVolumeSettingsController)) ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>
      _sfxVolumeSettingsController;

  /// @brief Field _singleplayerOnlyCanvasGroup, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__singleplayerOnlyCanvasGroup, put = __cordl_internal_set__singleplayerOnlyCanvasGroup)) ::UnityW<::UnityEngine::CanvasGroup>
      _singleplayerOnlyCanvasGroup;

  /// @brief Field _toggleBinder, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__toggleBinder, put = __cordl_internal_set__toggleBinder)) ::HMUI::ToggleBinder* _toggleBinder;

  /// @brief Field didChangePlayerSettingsEvent, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangePlayerSettingsEvent, put = __cordl_internal_set_didChangePlayerSettingsEvent)) ::System::Action* didChangePlayerSettingsEvent;

  __declspec(property(get = get_playerSpecificSettings)) ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Convert operator to "::GlobalNamespace::IRefreshable"
  constexpr operator ::GlobalNamespace::IRefreshable*() noexcept;

  /// @brief Method Awake, addr 0x3bb3124, size 0x58, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleAdvancedHudToggleChanged, addr 0x3bb37e0, size 0x50, virtual false, abstract: false, final false
  inline void HandleAdvancedHudToggleChanged(bool on);

  /// @brief Method HandleArcVisibilityDropdownDidSelectCellWithIdx, addr 0x3bb36cc, size 0x60, virtual false, abstract: false, final false
  inline void HandleArcVisibilityDropdownDidSelectCellWithIdx(int32_t idx, ::GlobalNamespace::ArcVisibilityType arcVisibilityType);

  /// @brief Method HandleHeadsetHapticIntensityControllerValueDidChange, addr 0x3bb3774, size 0x24, virtual false, abstract: false, final false
  inline void HandleHeadsetHapticIntensityControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* settingsController, float_t value);

  /// @brief Method HandleLightReductionAmountSelected, addr 0x3bb37bc, size 0x24, virtual false, abstract: false, final false
  inline void HandleLightReductionAmountSelected(int32_t obj, ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterPreset);

  /// @brief Method HandleNoTextsAndHudsToggleChanged, addr 0x3bb3890, size 0x50, virtual false, abstract: false, final false
  inline void HandleNoTextsAndHudsToggleChanged(bool on);

  /// @brief Method HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx, addr 0x3bb3830, size 0x3c, virtual false, abstract: false, final false
  inline void HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx(int32_t idx, ::GlobalNamespace::NoteJumpDurationTypeSettings noteJumpDurationTypeSettings);

  /// @brief Method HandleNoteJumpFixedDurationSettingsControllerValueDidChange, addr 0x3bb386c, size 0x24, virtual false, abstract: false, final false
  inline void HandleNoteJumpFixedDurationSettingsControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* formattedFloatListSettingsController, float_t value);

  /// @brief Method HandleNoteJumpStartBeatOffsetPositionSelected, addr 0x3bb3798, size 0x24, virtual false, abstract: false, final false
  inline void HandleNoteJumpStartBeatOffsetPositionSelected(int32_t idx, float_t startBeatOffset);

  /// @brief Method HandlePlayerHeightSettingsControllerValueDidChange, addr 0x3bb3750, size 0x24, virtual false, abstract: false, final false
  inline void HandlePlayerHeightSettingsControllerValueDidChange(float_t value);

  /// @brief Method HandleSFXVolumeSettingsControllerValueDidChange, addr 0x3bb3684, size 0x24, virtual false, abstract: false, final false
  inline void HandleSFXVolumeSettingsControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* settingsController, float_t value);

  /// @brief Method HandleSaberTrailIntensitySettingsControllerValueDidChange, addr 0x3bb372c, size 0x24, virtual false, abstract: false, final false
  inline void HandleSaberTrailIntensitySettingsControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* settingsController, float_t value);

  static inline ::GlobalNamespace::PlayerSettingsPanelController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3bb3564, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x3bb352c, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3bb317c, size 0x3b0, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Refresh, addr 0x3bb2bbc, size 0x348, virtual true, abstract: false, final true
  inline void Refresh();

  /// @brief Method RefreshArcsWarning, addr 0x3bb35a4, size 0xe0, virtual false, abstract: false, final false
  inline void RefreshArcsWarning(::GlobalNamespace::ArcVisibilityType arcVisibilityType, bool forceRebuild);

  /// @brief Method RefreshNoteJumpUI, addr 0x3bb3568, size 0x3c, virtual false, abstract: false, final false
  inline void RefreshNoteJumpUI(::GlobalNamespace::NoteJumpDurationTypeSettings noteJumpDurationTypeSettings);

  /// @brief Method SetData, addr 0x3bb1ff4, size 0x24, virtual false, abstract: false, final false
  inline void SetData(::GlobalNamespace::PlayerData* playerData);

  /// @brief Method SetIsDirty, addr 0x3bb36a8, size 0x24, virtual false, abstract: false, final false
  inline void SetIsDirty();

  /// @brief Method SetLayout, addr 0x3bb1844, size 0x24, virtual false, abstract: false, final false
  inline void SetLayout(::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout layout);

  /// @brief Method SetSectionDisabled, addr 0x3bb30bc, size 0x68, virtual false, abstract: false, final false
  inline void SetSectionDisabled(::UnityEngine::CanvasGroup* sectionCanvasGroup, bool disable);

  /// @brief Method UnsubscribeAllUICallbacks, addr 0x3bb3530, size 0x34, virtual false, abstract: false, final false
  inline void UnsubscribeAllUICallbacks();

  /// @brief Method <OnEnable>b__42_0, addr 0x3bb3940, size 0x24, virtual false, abstract: false, final false
  inline void _OnEnable_b__42_0(bool on);

  /// @brief Method <OnEnable>b__42_1, addr 0x3bb3964, size 0x24, virtual false, abstract: false, final false
  inline void _OnEnable_b__42_1(bool on);

  /// @brief Method <OnEnable>b__42_2, addr 0x3bb3988, size 0x24, virtual false, abstract: false, final false
  inline void _OnEnable_b__42_2(bool on);

  /// @brief Method <OnEnable>b__42_3, addr 0x3bb39ac, size 0x24, virtual false, abstract: false, final false
  inline void _OnEnable_b__42_3(bool on);

  /// @brief Method <OnEnable>b__42_4, addr 0x3bb39d0, size 0x24, virtual false, abstract: false, final false
  inline void _OnEnable_b__42_4(bool on);

  /// @brief Method <OnEnable>b__42_5, addr 0x3bb39f4, size 0x44, virtual false, abstract: false, final false
  inline void _OnEnable_b__42_5(bool on);

  /// @brief Method <OnEnable>b__42_6, addr 0x3bb3a38, size 0x24, virtual false, abstract: false, final false
  inline void _OnEnable_b__42_6(bool on);

  /// @brief Method <OnEnable>b__42_7, addr 0x3bb3a5c, size 0x3ac, virtual false, abstract: false, final false
  inline void _OnEnable_b__42_7();

  /// @brief Method <OnEnable>b__42_8, addr 0x3bb3e08, size 0x4d8, virtual false, abstract: false, final false
  inline void _OnEnable_b__42_8();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__adaptiveSfxToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__adaptiveSfxToggle();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__advanceHudToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__advanceHudToggle();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__arcHapticFeedbackCanvasGroup() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__arcHapticFeedbackCanvasGroup();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__arcVisibilityWarning() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__arcVisibilityWarning();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__arcsHapticFeedbackToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__arcsHapticFeedbackToggle();

  constexpr ::UnityW<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown> const& __cordl_internal_get__arcsVisibilityTypeSettingsDropdown() const;

  constexpr ::UnityW<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown>& __cordl_internal_get__arcsVisibilityTypeSettingsDropdown();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__autoRestartToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__autoRestartToggle();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__automaticPlayerHeightToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__automaticPlayerHeightToggle();

  constexpr ::GlobalNamespace::ArcVisibilityType const& __cordl_internal_get__currentArcType() const;

  constexpr ::GlobalNamespace::ArcVisibilityType& __cordl_internal_get__currentArcType();

  constexpr bool const& __cordl_internal_get__dirty() const;

  constexpr bool& __cordl_internal_get__dirty();

  constexpr ::UnityW<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown> const& __cordl_internal_get__environmentEffectsFilterDefaultPresetDropdown() const;

  constexpr ::UnityW<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown>& __cordl_internal_get__environmentEffectsFilterDefaultPresetDropdown();

  constexpr ::UnityW<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown> const& __cordl_internal_get__environmentEffectsFilterExpertPlusPresetDropdown() const;

  constexpr ::UnityW<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown>& __cordl_internal_get__environmentEffectsFilterExpertPlusPresetDropdown();

  constexpr ::GlobalNamespace::EventBinder*& __cordl_internal_get__eventBinder();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EventBinder*> const& __cordl_internal_get__eventBinder() const;

  constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> const& __cordl_internal_get__headsetHapticIntensityController() const;

  constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>& __cordl_internal_get__headsetHapticIntensityController();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__hideNoteSpawnEffectToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__hideNoteSpawnEffectToggle();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__leftHandedToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__leftHandedToggle();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__noTextsAndHudsToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__noTextsAndHudsToggle();

  constexpr ::UnityW<::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown> const& __cordl_internal_get__noteJumpDurationTypeSettingsDropdown() const;

  constexpr ::UnityW<::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown>& __cordl_internal_get__noteJumpDurationTypeSettingsDropdown();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__noteJumpFixedDurationSettingsCanvasGroup() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__noteJumpFixedDurationSettingsCanvasGroup();

  constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> const& __cordl_internal_get__noteJumpFixedDurationSettingsController() const;

  constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>& __cordl_internal_get__noteJumpFixedDurationSettingsController();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__noteJumpStartBeatOffsetCanvasGroup() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__noteJumpStartBeatOffsetCanvasGroup();

  constexpr ::UnityW<::GlobalNamespace::NoteJumpStartBeatOffsetDropdown> const& __cordl_internal_get__noteJumpStartBeatOffsetDropdown() const;

  constexpr ::UnityW<::GlobalNamespace::NoteJumpStartBeatOffsetDropdown>& __cordl_internal_get__noteJumpStartBeatOffsetDropdown();

  constexpr ::GlobalNamespace::PlayerData*& __cordl_internal_get__playerData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerData*> const& __cordl_internal_get__playerData() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__playerHeightSettingsCanvasGroup() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__playerHeightSettingsCanvasGroup();

  constexpr ::UnityW<::GlobalNamespace::PlayerHeightSettingsController> const& __cordl_internal_get__playerHeightSettingsController() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerHeightSettingsController>& __cordl_internal_get__playerHeightSettingsController();

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __cordl_internal_get__playerSpecificSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const& __cordl_internal_get__playerSpecificSettings() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__reduceDebrisToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__reduceDebrisToggle();

  constexpr bool const& __cordl_internal_get__refreshed() const;

  constexpr bool& __cordl_internal_get__refreshed();

  constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> const& __cordl_internal_get__saberTrailIntensitySettingsController() const;

  constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>& __cordl_internal_get__saberTrailIntensitySettingsController();

  constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> const& __cordl_internal_get__sfxVolumeSettingsController() const;

  constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>& __cordl_internal_get__sfxVolumeSettingsController();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__singleplayerOnlyCanvasGroup() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__singleplayerOnlyCanvasGroup();

  constexpr ::HMUI::ToggleBinder*& __cordl_internal_get__toggleBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleBinder*> const& __cordl_internal_get__toggleBinder() const;

  constexpr ::System::Action*& __cordl_internal_get_didChangePlayerSettingsEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didChangePlayerSettingsEvent() const;

  constexpr void __cordl_internal_set__adaptiveSfxToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__advanceHudToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__arcHapticFeedbackCanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set__arcVisibilityWarning(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__arcsHapticFeedbackToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__arcsVisibilityTypeSettingsDropdown(::UnityW<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown> value);

  constexpr void __cordl_internal_set__autoRestartToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__automaticPlayerHeightToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__currentArcType(::GlobalNamespace::ArcVisibilityType value);

  constexpr void __cordl_internal_set__dirty(bool value);

  constexpr void __cordl_internal_set__environmentEffectsFilterDefaultPresetDropdown(::UnityW<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown> value);

  constexpr void __cordl_internal_set__environmentEffectsFilterExpertPlusPresetDropdown(::UnityW<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown> value);

  constexpr void __cordl_internal_set__eventBinder(::GlobalNamespace::EventBinder* value);

  constexpr void __cordl_internal_set__headsetHapticIntensityController(::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> value);

  constexpr void __cordl_internal_set__hideNoteSpawnEffectToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__leftHandedToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__noTextsAndHudsToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__noteJumpDurationTypeSettingsDropdown(::UnityW<::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown> value);

  constexpr void __cordl_internal_set__noteJumpFixedDurationSettingsCanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set__noteJumpFixedDurationSettingsController(::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> value);

  constexpr void __cordl_internal_set__noteJumpStartBeatOffsetCanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set__noteJumpStartBeatOffsetDropdown(::UnityW<::GlobalNamespace::NoteJumpStartBeatOffsetDropdown> value);

  constexpr void __cordl_internal_set__playerData(::GlobalNamespace::PlayerData* value);

  constexpr void __cordl_internal_set__playerHeightSettingsCanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set__playerHeightSettingsController(::UnityW<::GlobalNamespace::PlayerHeightSettingsController> value);

  constexpr void __cordl_internal_set__playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  constexpr void __cordl_internal_set__reduceDebrisToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__refreshed(bool value);

  constexpr void __cordl_internal_set__saberTrailIntensitySettingsController(::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> value);

  constexpr void __cordl_internal_set__sfxVolumeSettingsController(::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> value);

  constexpr void __cordl_internal_set__singleplayerOnlyCanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value);

  constexpr void __cordl_internal_set_didChangePlayerSettingsEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3bb38e0, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didChangePlayerSettingsEvent, addr 0x3bb2184, size 0x9c, virtual false, abstract: false, final false
  inline void add_didChangePlayerSettingsEvent(::System::Action* value);

  /// @brief Method get_playerSpecificSettings, addr 0x3bb1304, size 0x3b8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSpecificSettings* get_playerSpecificSettings();

  /// @brief Convert to "::GlobalNamespace::IRefreshable"
  constexpr ::GlobalNamespace::IRefreshable* i___GlobalNamespace__IRefreshable() noexcept;

  /// @brief Method remove_didChangePlayerSettingsEvent, addr 0x3bb3020, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didChangePlayerSettingsEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSettingsPanelController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSettingsPanelController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSettingsPanelController(PlayerSettingsPanelController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSettingsPanelController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSettingsPanelController(PlayerSettingsPanelController const&) = delete;

  /// @brief Field _leftHandedToggle, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____leftHandedToggle;

  /// @brief Field _reduceDebrisToggle, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____reduceDebrisToggle;

  /// @brief Field _noTextsAndHudsToggle, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____noTextsAndHudsToggle;

  /// @brief Field _advanceHudToggle, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____advanceHudToggle;

  /// @brief Field _playerHeightSettingsController, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerHeightSettingsController> ____playerHeightSettingsController;

  /// @brief Field _playerHeightSettingsCanvasGroup, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____playerHeightSettingsCanvasGroup;

  /// @brief Field _automaticPlayerHeightToggle, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____automaticPlayerHeightToggle;

  /// @brief Field _sfxVolumeSettingsController, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> ____sfxVolumeSettingsController;

  /// @brief Field _saberTrailIntensitySettingsController, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> ____saberTrailIntensitySettingsController;

  /// @brief Field _noteJumpDurationTypeSettingsDropdown, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown> ____noteJumpDurationTypeSettingsDropdown;

  /// @brief Field _noteJumpFixedDurationSettingsController, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> ____noteJumpFixedDurationSettingsController;

  /// @brief Field _noteJumpFixedDurationSettingsCanvasGroup, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____noteJumpFixedDurationSettingsCanvasGroup;

  /// @brief Field _noteJumpStartBeatOffsetDropdown, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteJumpStartBeatOffsetDropdown> ____noteJumpStartBeatOffsetDropdown;

  /// @brief Field _noteJumpStartBeatOffsetCanvasGroup, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____noteJumpStartBeatOffsetCanvasGroup;

  /// @brief Field _environmentEffectsFilterDefaultPresetDropdown, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown> ____environmentEffectsFilterDefaultPresetDropdown;

  /// @brief Field _environmentEffectsFilterExpertPlusPresetDropdown, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown> ____environmentEffectsFilterExpertPlusPresetDropdown;

  /// @brief Field _hideNoteSpawnEffectToggle, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____hideNoteSpawnEffectToggle;

  /// @brief Field _adaptiveSfxToggle, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____adaptiveSfxToggle;

  /// @brief Field _autoRestartToggle, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____autoRestartToggle;

  /// @brief Field _headsetHapticIntensityController, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> ____headsetHapticIntensityController;

  /// @brief Field _arcsVisibilityTypeSettingsDropdown, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown> ____arcsVisibilityTypeSettingsDropdown;

  /// @brief Field _arcHapticFeedbackCanvasGroup, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____arcHapticFeedbackCanvasGroup;

  /// @brief Field _arcsHapticFeedbackToggle, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____arcsHapticFeedbackToggle;

  /// @brief Field _singleplayerOnlyCanvasGroup, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____singleplayerOnlyCanvasGroup;

  /// @brief Field _arcVisibilityWarning, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____arcVisibilityWarning;

  /// @brief Field didChangePlayerSettingsEvent, offset: 0xe8, size: 0x8, def value: None
  ::System::Action* ___didChangePlayerSettingsEvent;

  /// @brief Field _currentArcType, offset: 0xf0, size: 0x4, def value: None
  ::GlobalNamespace::ArcVisibilityType ____currentArcType;

  /// @brief Field _playerData, offset: 0xf8, size: 0x8, def value: None
  ::GlobalNamespace::PlayerData* ____playerData;

  /// @brief Field _playerSpecificSettings, offset: 0x100, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* ____playerSpecificSettings;

  /// @brief Field _toggleBinder, offset: 0x108, size: 0x8, def value: None
  ::HMUI::ToggleBinder* ____toggleBinder;

  /// @brief Field _dirty, offset: 0x110, size: 0x1, def value: None
  bool ____dirty;

  /// @brief Field _refreshed, offset: 0x111, size: 0x1, def value: None
  bool ____refreshed;

  /// @brief Field _eventBinder, offset: 0x118, size: 0x8, def value: None
  ::GlobalNamespace::EventBinder* ____eventBinder;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4877 };

  /// @brief Field kDisabledSectionAlpha offset 0xffffffff size 0x4
  static constexpr float_t kDisabledSectionAlpha{ 0.2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSettingsPanelController, 0x120>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____leftHandedToggle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____reduceDebrisToggle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____noTextsAndHudsToggle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____advanceHudToggle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____playerHeightSettingsController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____playerHeightSettingsCanvasGroup) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____automaticPlayerHeightToggle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____sfxVolumeSettingsController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____saberTrailIntensitySettingsController) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____noteJumpDurationTypeSettingsDropdown) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____noteJumpFixedDurationSettingsController) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____noteJumpFixedDurationSettingsCanvasGroup) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____noteJumpStartBeatOffsetDropdown) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____noteJumpStartBeatOffsetCanvasGroup) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____environmentEffectsFilterDefaultPresetDropdown) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____environmentEffectsFilterExpertPlusPresetDropdown) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____hideNoteSpawnEffectToggle) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____adaptiveSfxToggle) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____autoRestartToggle) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____headsetHapticIntensityController) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____arcsVisibilityTypeSettingsDropdown) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____arcHapticFeedbackCanvasGroup) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____arcsHapticFeedbackToggle) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____singleplayerOnlyCanvasGroup) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____arcVisibilityWarning) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ___didChangePlayerSettingsEvent) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____currentArcType) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____playerData) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____playerSpecificSettings) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____toggleBinder) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____dirty) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____refreshed) == 0x111, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSettingsPanelController, ____eventBinder) == 0x118, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout, "", "PlayerSettingsPanelController/PlayerSettingsPanelLayout");
NEED_NO_BOX(::GlobalNamespace::PlayerSettingsPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSettingsPanelController*, "", "PlayerSettingsPanelController");
