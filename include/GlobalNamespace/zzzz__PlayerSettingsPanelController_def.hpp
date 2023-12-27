#pragma once
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
struct __PlayerSettingsPanelController__PlayerSettingsPanelLayout;
}
namespace GlobalNamespace {
class NoteJumpStartBeatOffsetDropdown;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace GlobalNamespace {
class PlayerData;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace GlobalNamespace {
class EnvironmentEffectsFilterPresetDropdown;
}
namespace GlobalNamespace {
class NoteJumpDurationTypeSettingsDropdown;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class EventBinder;
}
namespace GlobalNamespace {
struct ArcVisibilityType;
}
namespace GlobalNamespace {
class IRefreshable;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
struct EnvironmentEffectsFilterPreset;
}
namespace GlobalNamespace {
class FormattedFloatListSettingsController;
}
namespace GlobalNamespace {
struct NoteJumpDurationTypeSettings;
}
namespace GlobalNamespace {
class ArcVisibilityTypeSettingsDropdown;
}
namespace GlobalNamespace {
class PlayerHeightSettingsController;
}
namespace HMUI {
class ToggleBinder;
}
namespace System {
class Action;
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
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5641))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlayerSettingsPanelController__PlayerSettingsPanelLayout(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSettingsPanelController__PlayerSettingsPanelLayout();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field All value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout const All;

  /// @brief Field Singleplayer value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout const Singleplayer;

  /// @brief Field Multiplayer value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout const Multiplayer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerSettingsPanelController
// SizeInfo { instance_size: 280, native_size: -1, calculated_instance_size: 280, calculated_native_size: 280, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(4606))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5642))
// CS Name: ::PlayerSettingsPanelController*
class CORDL_TYPE PlayerSettingsPanelController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using PlayerSettingsPanelLayout = ::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout;

  /// @brief Field _leftHandedToggle, offset 0x18, size 0x8
  __declspec(property(get = __get__leftHandedToggle, put = __set__leftHandedToggle))::UnityEngine::UI::Toggle* _leftHandedToggle;

  /// @brief Field _reduceDebrisToggle, offset 0x20, size 0x8
  __declspec(property(get = __get__reduceDebrisToggle, put = __set__reduceDebrisToggle))::UnityEngine::UI::Toggle* _reduceDebrisToggle;

  /// @brief Field _noTextsAndHudsToggle, offset 0x28, size 0x8
  __declspec(property(get = __get__noTextsAndHudsToggle, put = __set__noTextsAndHudsToggle))::UnityEngine::UI::Toggle* _noTextsAndHudsToggle;

  /// @brief Field _advanceHudToggle, offset 0x30, size 0x8
  __declspec(property(get = __get__advanceHudToggle, put = __set__advanceHudToggle))::UnityEngine::UI::Toggle* _advanceHudToggle;

  /// @brief Field _autoRestartToggle, offset 0x38, size 0x8
  __declspec(property(get = __get__autoRestartToggle, put = __set__autoRestartToggle))::UnityEngine::UI::Toggle* _autoRestartToggle;

  /// @brief Field _playerHeightSettingsController, offset 0x40, size 0x8
  __declspec(property(get = __get__playerHeightSettingsController, put = __set__playerHeightSettingsController))::GlobalNamespace::PlayerHeightSettingsController* _playerHeightSettingsController;

  /// @brief Field _playerHeightSettingsCanvasGroup, offset 0x48, size 0x8
  __declspec(property(get = __get__playerHeightSettingsCanvasGroup, put = __set__playerHeightSettingsCanvasGroup))::UnityEngine::CanvasGroup* _playerHeightSettingsCanvasGroup;

  /// @brief Field _automaticPlayerHeightToggle, offset 0x50, size 0x8
  __declspec(property(get = __get__automaticPlayerHeightToggle, put = __set__automaticPlayerHeightToggle))::UnityEngine::UI::Toggle* _automaticPlayerHeightToggle;

  /// @brief Field _sfxVolumeSettingsController, offset 0x58, size 0x8
  __declspec(property(get = __get__sfxVolumeSettingsController, put = __set__sfxVolumeSettingsController))::GlobalNamespace::FormattedFloatListSettingsController* _sfxVolumeSettingsController;

  /// @brief Field _saberTrailIntensitySettingsController, offset 0x60, size 0x8
  __declspec(property(get = __get__saberTrailIntensitySettingsController,
                      put = __set__saberTrailIntensitySettingsController))::GlobalNamespace::FormattedFloatListSettingsController* _saberTrailIntensitySettingsController;

  /// @brief Field _noteJumpDurationTypeSettingsDropdown, offset 0x68, size 0x8
  __declspec(property(get = __get__noteJumpDurationTypeSettingsDropdown,
                      put = __set__noteJumpDurationTypeSettingsDropdown))::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown* _noteJumpDurationTypeSettingsDropdown;

  /// @brief Field _noteJumpFixedDurationSettingsController, offset 0x70, size 0x8
  __declspec(property(get = __get__noteJumpFixedDurationSettingsController,
                      put = __set__noteJumpFixedDurationSettingsController))::GlobalNamespace::FormattedFloatListSettingsController* _noteJumpFixedDurationSettingsController;

  /// @brief Field _noteJumpFixedDurationSettingsCanvasGroup, offset 0x78, size 0x8
  __declspec(property(get = __get__noteJumpFixedDurationSettingsCanvasGroup,
                      put = __set__noteJumpFixedDurationSettingsCanvasGroup))::UnityEngine::CanvasGroup* _noteJumpFixedDurationSettingsCanvasGroup;

  /// @brief Field _noteJumpStartBeatOffsetDropdown, offset 0x80, size 0x8
  __declspec(property(get = __get__noteJumpStartBeatOffsetDropdown, put = __set__noteJumpStartBeatOffsetDropdown))::GlobalNamespace::NoteJumpStartBeatOffsetDropdown* _noteJumpStartBeatOffsetDropdown;

  /// @brief Field _noteJumpStartBeatOffsetCanvasGroup, offset 0x88, size 0x8
  __declspec(property(get = __get__noteJumpStartBeatOffsetCanvasGroup, put = __set__noteJumpStartBeatOffsetCanvasGroup))::UnityEngine::CanvasGroup* _noteJumpStartBeatOffsetCanvasGroup;

  /// @brief Field _environmentEffectsFilterDefaultPresetDropdown, offset 0x90, size 0x8
  __declspec(property(get = __get__environmentEffectsFilterDefaultPresetDropdown,
                      put = __set__environmentEffectsFilterDefaultPresetDropdown))::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown* _environmentEffectsFilterDefaultPresetDropdown;

  /// @brief Field _environmentEffectsFilterExpertPlusPresetDropdown, offset 0x98, size 0x8
  __declspec(property(get = __get__environmentEffectsFilterExpertPlusPresetDropdown,
                      put = __set__environmentEffectsFilterExpertPlusPresetDropdown))::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown* _environmentEffectsFilterExpertPlusPresetDropdown;

  /// @brief Field _hideNoteSpawnEffectToggle, offset 0xa0, size 0x8
  __declspec(property(get = __get__hideNoteSpawnEffectToggle, put = __set__hideNoteSpawnEffectToggle))::UnityEngine::UI::Toggle* _hideNoteSpawnEffectToggle;

  /// @brief Field _adaptiveSfxToggle, offset 0xa8, size 0x8
  __declspec(property(get = __get__adaptiveSfxToggle, put = __set__adaptiveSfxToggle))::UnityEngine::UI::Toggle* _adaptiveSfxToggle;

  /// @brief Field _headsetHapticIntensityController, offset 0xb0, size 0x8
  __declspec(property(get = __get__headsetHapticIntensityController,
                      put = __set__headsetHapticIntensityController))::GlobalNamespace::FormattedFloatListSettingsController* _headsetHapticIntensityController;

  /// @brief Field _arcsVisibilityTypeSettingsDropdown, offset 0xb8, size 0x8
  __declspec(property(get = __get__arcsVisibilityTypeSettingsDropdown,
                      put = __set__arcsVisibilityTypeSettingsDropdown))::GlobalNamespace::ArcVisibilityTypeSettingsDropdown* _arcsVisibilityTypeSettingsDropdown;

  /// @brief Field _arcHapticFeedbackCanvasGroup, offset 0xc0, size 0x8
  __declspec(property(get = __get__arcHapticFeedbackCanvasGroup, put = __set__arcHapticFeedbackCanvasGroup))::UnityEngine::CanvasGroup* _arcHapticFeedbackCanvasGroup;

  /// @brief Field _arcsHapticFeedbackToggle, offset 0xc8, size 0x8
  __declspec(property(get = __get__arcsHapticFeedbackToggle, put = __set__arcsHapticFeedbackToggle))::UnityEngine::UI::Toggle* _arcsHapticFeedbackToggle;

  /// @brief Field _singleplayerOnlyCanvasGroup, offset 0xd0, size 0x8
  __declspec(property(get = __get__singleplayerOnlyCanvasGroup, put = __set__singleplayerOnlyCanvasGroup))::UnityEngine::CanvasGroup* _singleplayerOnlyCanvasGroup;

  /// @brief Field _arcVisibilityWarning, offset 0xd8, size 0x8
  __declspec(property(get = __get__arcVisibilityWarning, put = __set__arcVisibilityWarning))::UnityEngine::GameObject* _arcVisibilityWarning;

  /// @brief Field didChangePlayerSettingsEvent, offset 0xe0, size 0x8
  __declspec(property(get = __get_didChangePlayerSettingsEvent, put = __set_didChangePlayerSettingsEvent))::System::Action* didChangePlayerSettingsEvent;

  /// @brief Field _currentArcType, offset 0xe8, size 0x4
  __declspec(property(get = __get__currentArcType, put = __set__currentArcType))::GlobalNamespace::ArcVisibilityType _currentArcType;

  /// @brief Field _playerData, offset 0xf0, size 0x8
  __declspec(property(get = __get__playerData, put = __set__playerData))::GlobalNamespace::PlayerData* _playerData;

  /// @brief Field _playerSpecificSettings, offset 0xf8, size 0x8
  __declspec(property(get = __get__playerSpecificSettings, put = __set__playerSpecificSettings))::GlobalNamespace::PlayerSpecificSettings* _playerSpecificSettings;

  /// @brief Field _toggleBinder, offset 0x100, size 0x8
  __declspec(property(get = __get__toggleBinder, put = __set__toggleBinder))::HMUI::ToggleBinder* _toggleBinder;

  /// @brief Field _dirty, offset 0x108, size 0x1
  __declspec(property(get = __get__dirty, put = __set__dirty)) bool _dirty;

  /// @brief Field _refreshed, offset 0x109, size 0x1
  __declspec(property(get = __get__refreshed, put = __set__refreshed)) bool _refreshed;

  /// @brief Field _eventBinder, offset 0x110, size 0x8
  __declspec(property(get = __get__eventBinder, put = __set__eventBinder))::GlobalNamespace::EventBinder* _eventBinder;

  __declspec(property(get = get_playerSpecificSettings))::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Convert operator to "::GlobalNamespace::IRefreshable"
  constexpr operator ::GlobalNamespace::IRefreshable*() noexcept;

  constexpr ::UnityEngine::UI::Toggle*& __get__leftHandedToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__leftHandedToggle() const;

  constexpr void __set__leftHandedToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::UnityEngine::UI::Toggle*& __get__reduceDebrisToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__reduceDebrisToggle() const;

  constexpr void __set__reduceDebrisToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::UnityEngine::UI::Toggle*& __get__noTextsAndHudsToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__noTextsAndHudsToggle() const;

  constexpr void __set__noTextsAndHudsToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::UnityEngine::UI::Toggle*& __get__advanceHudToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__advanceHudToggle() const;

  constexpr void __set__advanceHudToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::UnityEngine::UI::Toggle*& __get__autoRestartToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__autoRestartToggle() const;

  constexpr void __set__autoRestartToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::GlobalNamespace::PlayerHeightSettingsController*& __get__playerHeightSettingsController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerHeightSettingsController*> const& __get__playerHeightSettingsController() const;

  constexpr void __set__playerHeightSettingsController(::GlobalNamespace::PlayerHeightSettingsController* value);

  constexpr ::UnityEngine::CanvasGroup*& __get__playerHeightSettingsCanvasGroup();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& __get__playerHeightSettingsCanvasGroup() const;

  constexpr void __set__playerHeightSettingsCanvasGroup(::UnityEngine::CanvasGroup* value);

  constexpr ::UnityEngine::UI::Toggle*& __get__automaticPlayerHeightToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__automaticPlayerHeightToggle() const;

  constexpr void __set__automaticPlayerHeightToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::GlobalNamespace::FormattedFloatListSettingsController*& __get__sfxVolumeSettingsController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FormattedFloatListSettingsController*> const& __get__sfxVolumeSettingsController() const;

  constexpr void __set__sfxVolumeSettingsController(::GlobalNamespace::FormattedFloatListSettingsController* value);

  constexpr ::GlobalNamespace::FormattedFloatListSettingsController*& __get__saberTrailIntensitySettingsController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FormattedFloatListSettingsController*> const& __get__saberTrailIntensitySettingsController() const;

  constexpr void __set__saberTrailIntensitySettingsController(::GlobalNamespace::FormattedFloatListSettingsController* value);

  constexpr ::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown*& __get__noteJumpDurationTypeSettingsDropdown();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown*> const& __get__noteJumpDurationTypeSettingsDropdown() const;

  constexpr void __set__noteJumpDurationTypeSettingsDropdown(::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown* value);

  constexpr ::GlobalNamespace::FormattedFloatListSettingsController*& __get__noteJumpFixedDurationSettingsController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FormattedFloatListSettingsController*> const& __get__noteJumpFixedDurationSettingsController() const;

  constexpr void __set__noteJumpFixedDurationSettingsController(::GlobalNamespace::FormattedFloatListSettingsController* value);

  constexpr ::UnityEngine::CanvasGroup*& __get__noteJumpFixedDurationSettingsCanvasGroup();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& __get__noteJumpFixedDurationSettingsCanvasGroup() const;

  constexpr void __set__noteJumpFixedDurationSettingsCanvasGroup(::UnityEngine::CanvasGroup* value);

  constexpr ::GlobalNamespace::NoteJumpStartBeatOffsetDropdown*& __get__noteJumpStartBeatOffsetDropdown();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteJumpStartBeatOffsetDropdown*> const& __get__noteJumpStartBeatOffsetDropdown() const;

  constexpr void __set__noteJumpStartBeatOffsetDropdown(::GlobalNamespace::NoteJumpStartBeatOffsetDropdown* value);

  constexpr ::UnityEngine::CanvasGroup*& __get__noteJumpStartBeatOffsetCanvasGroup();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& __get__noteJumpStartBeatOffsetCanvasGroup() const;

  constexpr void __set__noteJumpStartBeatOffsetCanvasGroup(::UnityEngine::CanvasGroup* value);

  constexpr ::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*& __get__environmentEffectsFilterDefaultPresetDropdown();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*> const& __get__environmentEffectsFilterDefaultPresetDropdown() const;

  constexpr void __set__environmentEffectsFilterDefaultPresetDropdown(::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown* value);

  constexpr ::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*& __get__environmentEffectsFilterExpertPlusPresetDropdown();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*> const& __get__environmentEffectsFilterExpertPlusPresetDropdown() const;

  constexpr void __set__environmentEffectsFilterExpertPlusPresetDropdown(::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown* value);

  constexpr ::UnityEngine::UI::Toggle*& __get__hideNoteSpawnEffectToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__hideNoteSpawnEffectToggle() const;

  constexpr void __set__hideNoteSpawnEffectToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::UnityEngine::UI::Toggle*& __get__adaptiveSfxToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__adaptiveSfxToggle() const;

  constexpr void __set__adaptiveSfxToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::GlobalNamespace::FormattedFloatListSettingsController*& __get__headsetHapticIntensityController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FormattedFloatListSettingsController*> const& __get__headsetHapticIntensityController() const;

  constexpr void __set__headsetHapticIntensityController(::GlobalNamespace::FormattedFloatListSettingsController* value);

  constexpr ::GlobalNamespace::ArcVisibilityTypeSettingsDropdown*& __get__arcsVisibilityTypeSettingsDropdown();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown*> const& __get__arcsVisibilityTypeSettingsDropdown() const;

  constexpr void __set__arcsVisibilityTypeSettingsDropdown(::GlobalNamespace::ArcVisibilityTypeSettingsDropdown* value);

  constexpr ::UnityEngine::CanvasGroup*& __get__arcHapticFeedbackCanvasGroup();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& __get__arcHapticFeedbackCanvasGroup() const;

  constexpr void __set__arcHapticFeedbackCanvasGroup(::UnityEngine::CanvasGroup* value);

  constexpr ::UnityEngine::UI::Toggle*& __get__arcsHapticFeedbackToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__arcsHapticFeedbackToggle() const;

  constexpr void __set__arcsHapticFeedbackToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::UnityEngine::CanvasGroup*& __get__singleplayerOnlyCanvasGroup();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& __get__singleplayerOnlyCanvasGroup() const;

  constexpr void __set__singleplayerOnlyCanvasGroup(::UnityEngine::CanvasGroup* value);

  constexpr ::UnityEngine::GameObject*& __get__arcVisibilityWarning();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__arcVisibilityWarning() const;

  constexpr void __set__arcVisibilityWarning(::UnityEngine::GameObject* value);

  constexpr ::System::Action*& __get_didChangePlayerSettingsEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didChangePlayerSettingsEvent() const;

  constexpr void __set_didChangePlayerSettingsEvent(::System::Action* value);

  constexpr ::GlobalNamespace::ArcVisibilityType& __get__currentArcType();

  constexpr ::GlobalNamespace::ArcVisibilityType const& __get__currentArcType() const;

  constexpr void __set__currentArcType(::GlobalNamespace::ArcVisibilityType value);

  constexpr ::GlobalNamespace::PlayerData*& __get__playerData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerData*> const& __get__playerData() const;

  constexpr void __set__playerData(::GlobalNamespace::PlayerData* value);

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __get__playerSpecificSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const& __get__playerSpecificSettings() const;

  constexpr void __set__playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  constexpr ::HMUI::ToggleBinder*& __get__toggleBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleBinder*> const& __get__toggleBinder() const;

  constexpr void __set__toggleBinder(::HMUI::ToggleBinder* value);

  constexpr bool& __get__dirty();

  constexpr bool const& __get__dirty() const;

  constexpr void __set__dirty(bool value);

  constexpr bool& __get__refreshed();

  constexpr bool const& __get__refreshed() const;

  constexpr void __set__refreshed(bool value);

  constexpr ::GlobalNamespace::EventBinder*& __get__eventBinder();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EventBinder*> const& __get__eventBinder() const;

  constexpr void __set__eventBinder(::GlobalNamespace::EventBinder* value);

  /// @brief Method add_didChangePlayerSettingsEvent addr 0x22b2da0 size 0x9c virtual false final false
  inline void add_didChangePlayerSettingsEvent(::System::Action* value);

  /// @brief Method remove_didChangePlayerSettingsEvent addr 0x22b3be0 size 0x9c virtual false final false
  inline void remove_didChangePlayerSettingsEvent(::System::Action* value);

  /// @brief Method get_playerSpecificSettings addr 0x22b1f80 size 0x3b8 virtual false final false
  inline ::GlobalNamespace::PlayerSpecificSettings* get_playerSpecificSettings();

  /// @brief Method SetData addr 0x22b2c08 size 0x24 virtual false final false
  inline void SetData(::GlobalNamespace::PlayerData* playerData);

  /// @brief Method SetLayout addr 0x22b24b8 size 0x24 virtual false final false
  inline void SetLayout(::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout layout);

  /// @brief Method Awake addr 0x22b3ce4 size 0x60 virtual false final false
  inline void Awake();

  /// @brief Method OnEnable addr 0x22b3d44 size 0x3d4 virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x22b4118 size 0x4 virtual false final false
  inline void OnDisable();

  /// @brief Method OnDestroy addr 0x22b4150 size 0x4 virtual false final false
  inline void OnDestroy();

  /// @brief Method UnsubscribeAllUICallbacks addr 0x22b411c size 0x34 virtual false final false
  inline void UnsubscribeAllUICallbacks();

  /// @brief Method Refresh addr 0x22b37c0 size 0x348 virtual true final true
  inline void Refresh();

  /// @brief Method HandleSFXVolumeSettingsControllerValueDidChange addr 0x22b4270 size 0x24 virtual false final false
  inline void HandleSFXVolumeSettingsControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* settingsController, float_t value);

  /// @brief Method HandleArcVisibilityDropdownDidSelectCellWithIdx addr 0x22b42b8 size 0x60 virtual false final false
  inline void HandleArcVisibilityDropdownDidSelectCellWithIdx(int32_t idx, ::GlobalNamespace::ArcVisibilityType arcVisibilityType);

  /// @brief Method HandleSaberTrailIntensitySettingsControllerValueDidChange addr 0x22b4318 size 0x24 virtual false final false
  inline void HandleSaberTrailIntensitySettingsControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* settingsController, float_t value);

  /// @brief Method HandlePlayerHeightSettingsControllerValueDidChange addr 0x22b433c size 0x24 virtual false final false
  inline void HandlePlayerHeightSettingsControllerValueDidChange(float_t value);

  /// @brief Method HandleHeadsetHapticIntensityControllerValueDidChange addr 0x22b4360 size 0x24 virtual false final false
  inline void HandleHeadsetHapticIntensityControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* settingsController, float_t value);

  /// @brief Method HandleNoteJumpStartBeatOffsetPositionSelected addr 0x22b4384 size 0x24 virtual false final false
  inline void HandleNoteJumpStartBeatOffsetPositionSelected(int32_t idx, float_t startBeatOffset);

  /// @brief Method HandleLightReductionAmountSelected addr 0x22b43a8 size 0x24 virtual false final false
  inline void HandleLightReductionAmountSelected(int32_t obj, ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterPreset);

  /// @brief Method HandleAdvancedHudToggleChanged addr 0x22b43cc size 0x50 virtual false final false
  inline void HandleAdvancedHudToggleChanged(bool on);

  /// @brief Method HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx addr 0x22b441c size 0x3c virtual false final false
  inline void HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx(int32_t idx, ::GlobalNamespace::NoteJumpDurationTypeSettings noteJumpDurationTypeSettings);

  /// @brief Method HandleNoteJumpFixedDurationSettingsControllerValueDidChange addr 0x22b4458 size 0x24 virtual false final false
  inline void HandleNoteJumpFixedDurationSettingsControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* formattedFloatListSettingsController, float_t value);

  /// @brief Method HandleNoTextsAndHudsToggleChanged addr 0x22b447c size 0x50 virtual false final false
  inline void HandleNoTextsAndHudsToggleChanged(bool on);

  /// @brief Method SetIsDirty addr 0x22b4294 size 0x24 virtual false final false
  inline void SetIsDirty();

  /// @brief Method RefreshNoteJumpUI addr 0x22b4154 size 0x3c virtual false final false
  inline void RefreshNoteJumpUI(::GlobalNamespace::NoteJumpDurationTypeSettings noteJumpDurationTypeSettings);

  /// @brief Method SetSectionDisabled addr 0x22b3c7c size 0x68 virtual false final false
  inline void SetSectionDisabled(::UnityEngine::CanvasGroup* sectionCanvasGroup, bool disable);

  /// @brief Method RefreshArcsWarning addr 0x22b4190 size 0xe0 virtual false final false
  inline void RefreshArcsWarning(::GlobalNamespace::ArcVisibilityType arcVisibilityType, bool forceRebuild);

  static inline ::GlobalNamespace::PlayerSettingsPanelController* New_ctor();

  /// @brief Method .ctor addr 0x22b44cc size 0x68 virtual false final false
  inline void _ctor();

  /// @brief Method <OnEnable>b__42_0 addr 0x22b4534 size 0x24 virtual false final false
  inline void _OnEnable_b__42_0(bool on);

  /// @brief Method <OnEnable>b__42_1 addr 0x22b4558 size 0x24 virtual false final false
  inline void _OnEnable_b__42_1(bool on);

  /// @brief Method <OnEnable>b__42_2 addr 0x22b457c size 0x24 virtual false final false
  inline void _OnEnable_b__42_2(bool on);

  /// @brief Method <OnEnable>b__42_3 addr 0x22b45a0 size 0x24 virtual false final false
  inline void _OnEnable_b__42_3(bool on);

  /// @brief Method <OnEnable>b__42_4 addr 0x22b45c4 size 0x24 virtual false final false
  inline void _OnEnable_b__42_4(bool on);

  /// @brief Method <OnEnable>b__42_5 addr 0x22b45e8 size 0x44 virtual false final false
  inline void _OnEnable_b__42_5(bool on);

  /// @brief Method <OnEnable>b__42_6 addr 0x22b462c size 0x24 virtual false final false
  inline void _OnEnable_b__42_6(bool on);

  /// @brief Method <OnEnable>b__42_7 addr 0x22b4650 size 0x3d4 virtual false final false
  inline void _OnEnable_b__42_7();

  /// @brief Method <OnEnable>b__42_8 addr 0x22b4a24 size 0x4fc virtual false final false
  inline void _OnEnable_b__42_8();

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSettingsPanelController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSettingsPanelController(PlayerSettingsPanelController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSettingsPanelController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSettingsPanelController(PlayerSettingsPanelController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSettingsPanelController();

public:
  /// @brief Field _leftHandedToggle, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____leftHandedToggle;

  /// @brief Field _reduceDebrisToggle, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____reduceDebrisToggle;

  /// @brief Field _noTextsAndHudsToggle, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____noTextsAndHudsToggle;

  /// @brief Field _advanceHudToggle, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____advanceHudToggle;

  /// @brief Field _autoRestartToggle, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____autoRestartToggle;

  /// @brief Field _playerHeightSettingsController, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::PlayerHeightSettingsController* ____playerHeightSettingsController;

  /// @brief Field _playerHeightSettingsCanvasGroup, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::CanvasGroup* ____playerHeightSettingsCanvasGroup;

  /// @brief Field _automaticPlayerHeightToggle, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____automaticPlayerHeightToggle;

  /// @brief Field _sfxVolumeSettingsController, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::FormattedFloatListSettingsController* ____sfxVolumeSettingsController;

  /// @brief Field _saberTrailIntensitySettingsController, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::FormattedFloatListSettingsController* ____saberTrailIntensitySettingsController;

  /// @brief Field _noteJumpDurationTypeSettingsDropdown, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown* ____noteJumpDurationTypeSettingsDropdown;

  /// @brief Field _noteJumpFixedDurationSettingsController, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::FormattedFloatListSettingsController* ____noteJumpFixedDurationSettingsController;

  /// @brief Field _noteJumpFixedDurationSettingsCanvasGroup, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::CanvasGroup* ____noteJumpFixedDurationSettingsCanvasGroup;

  /// @brief Field _noteJumpStartBeatOffsetDropdown, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::NoteJumpStartBeatOffsetDropdown* ____noteJumpStartBeatOffsetDropdown;

  /// @brief Field _noteJumpStartBeatOffsetCanvasGroup, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::CanvasGroup* ____noteJumpStartBeatOffsetCanvasGroup;

  /// @brief Field _environmentEffectsFilterDefaultPresetDropdown, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown* ____environmentEffectsFilterDefaultPresetDropdown;

  /// @brief Field _environmentEffectsFilterExpertPlusPresetDropdown, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown* ____environmentEffectsFilterExpertPlusPresetDropdown;

  /// @brief Field _hideNoteSpawnEffectToggle, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____hideNoteSpawnEffectToggle;

  /// @brief Field _adaptiveSfxToggle, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____adaptiveSfxToggle;

  /// @brief Field _headsetHapticIntensityController, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::FormattedFloatListSettingsController* ____headsetHapticIntensityController;

  /// @brief Field _arcsVisibilityTypeSettingsDropdown, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::ArcVisibilityTypeSettingsDropdown* ____arcsVisibilityTypeSettingsDropdown;

  /// @brief Field _arcHapticFeedbackCanvasGroup, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::CanvasGroup* ____arcHapticFeedbackCanvasGroup;

  /// @brief Field _arcsHapticFeedbackToggle, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____arcsHapticFeedbackToggle;

  /// @brief Field _singleplayerOnlyCanvasGroup, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::CanvasGroup* ____singleplayerOnlyCanvasGroup;

  /// @brief Field _arcVisibilityWarning, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____arcVisibilityWarning;

  /// @brief Field didChangePlayerSettingsEvent, offset: 0xe0, size: 0x8, def value: None
  ::System::Action* ___didChangePlayerSettingsEvent;

  /// @brief Field _currentArcType, offset: 0xe8, size: 0x4, def value: None
  ::GlobalNamespace::ArcVisibilityType ____currentArcType;

  /// @brief Field _playerData, offset: 0xf0, size: 0x8, def value: None
  ::GlobalNamespace::PlayerData* ____playerData;

  /// @brief Field _playerSpecificSettings, offset: 0xf8, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* ____playerSpecificSettings;

  /// @brief Field _toggleBinder, offset: 0x100, size: 0x8, def value: None
  ::HMUI::ToggleBinder* ____toggleBinder;

  /// @brief Field _dirty, offset: 0x108, size: 0x1, def value: None
  bool ____dirty;

  /// @brief Field _refreshed, offset: 0x109, size: 0x1, def value: None
  bool ____refreshed;

  /// @brief Field _eventBinder, offset: 0x110, size: 0x8, def value: None
  ::GlobalNamespace::EventBinder* ____eventBinder;

  /// @brief Field kDisabledSectionAlpha offset 0xffffffff size 0x4
  static constexpr float_t kDisabledSectionAlpha{ 0.2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSettingsPanelController, 0x118>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout, "", "PlayerSettingsPanelController/PlayerSettingsPanelLayout");
NEED_NO_BOX(::GlobalNamespace::PlayerSettingsPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSettingsPanelController*, "", "PlayerSettingsPanelController");
