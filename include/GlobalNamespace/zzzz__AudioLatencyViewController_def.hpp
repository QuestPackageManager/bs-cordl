#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioLatencyViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioLatencyViewController)
namespace GlobalNamespace {
class AudioManagerSO;
}
namespace GlobalNamespace {
class FormattedFloatListSettingsController;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
namespace GlobalNamespace {
class VisualMetronome;
}
namespace HMUI {
class RangeValuesTextSlider;
}
namespace HMUI {
class ToggleBinder;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class CanvasGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioLatencyViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AudioLatencyViewController);
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioLatencyViewController
class CORDL_TYPE AudioLatencyViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _ambientSettingsList, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__ambientSettingsList, put = __cordl_internal_set__ambientSettingsList)) ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>
      _ambientSettingsList;

  /// @brief Field _audioManager, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__audioManager, put = __cordl_internal_set__audioManager)) ::UnityW<::GlobalNamespace::AudioManagerSO> _audioManager;

  /// @brief Field _disabledAlpha, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get__disabledAlpha, put = __cordl_internal_set__disabledAlpha)) float_t _disabledAlpha;

  /// @brief Field _overrideAudioLatencyToggle, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__overrideAudioLatencyToggle, put = __cordl_internal_set__overrideAudioLatencyToggle)) ::UnityW<::UnityEngine::UI::Toggle> _overrideAudioLatencyToggle;

  /// @brief Field _settingsManager, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _setupCanvasGroup, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__setupCanvasGroup, put = __cordl_internal_set__setupCanvasGroup)) ::UnityW<::UnityEngine::CanvasGroup> _setupCanvasGroup;

  /// @brief Field _slider, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__slider, put = __cordl_internal_set__slider)) ::UnityW<::HMUI::RangeValuesTextSlider> _slider;

  /// @brief Field _songPreviewPlayer, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__songPreviewPlayer, put = __cordl_internal_set__songPreviewPlayer)) ::UnityW<::GlobalNamespace::SongPreviewPlayer> _songPreviewPlayer;

  /// @brief Field _toggleBinder, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__toggleBinder, put = __cordl_internal_set__toggleBinder)) ::HMUI::ToggleBinder* _toggleBinder;

  /// @brief Field _visualMetronome, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__visualMetronome, put = __cordl_internal_set__visualMetronome)) ::UnityW<::GlobalNamespace::VisualMetronome> _visualMetronome;

  /// @brief Field _volumeSettingsList, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__volumeSettingsList, put = __cordl_internal_set__volumeSettingsList)) ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>
      _volumeSettingsList;

  /// @brief Method DidActivate, addr 0x3af8204, size 0x284, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3af8524, size 0xf0, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleAmbientVolumeChanged, addr 0x3af8728, size 0x1c, virtual false, abstract: false, final false
  inline void HandleAmbientVolumeChanged(::GlobalNamespace::FormattedFloatListSettingsController* _, float_t newValue);

  /// @brief Method HandleOverrideAudioLatencyToggleValueChanged, addr 0x3af876c, size 0x50, virtual false, abstract: false, final false
  inline void HandleOverrideAudioLatencyToggleValueChanged(bool isOn);

  /// @brief Method HandleVolumeChanged, addr 0x3af86f4, size 0x34, virtual false, abstract: false, final false
  inline void HandleVolumeChanged(::GlobalNamespace::FormattedFloatListSettingsController* _, float_t newValue);

  static inline ::GlobalNamespace::AudioLatencyViewController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3af8614, size 0xe0, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RefreshVisuals, addr 0x3af8488, size 0x9c, virtual false, abstract: false, final false
  inline void RefreshVisuals(bool overrideAudioLatencyIsEnabled);

  /// @brief Method SliderValueDidChange, addr 0x3af8744, size 0x28, virtual false, abstract: false, final false
  inline void SliderValueDidChange(::HMUI::RangeValuesTextSlider* slider, float_t value);

  constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> const& __cordl_internal_get__ambientSettingsList() const;

  constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>& __cordl_internal_get__ambientSettingsList();

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO> const& __cordl_internal_get__audioManager() const;

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO>& __cordl_internal_get__audioManager();

  constexpr float_t const& __cordl_internal_get__disabledAlpha() const;

  constexpr float_t& __cordl_internal_get__disabledAlpha();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__overrideAudioLatencyToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__overrideAudioLatencyToggle();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__setupCanvasGroup() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__setupCanvasGroup();

  constexpr ::UnityW<::HMUI::RangeValuesTextSlider> const& __cordl_internal_get__slider() const;

  constexpr ::UnityW<::HMUI::RangeValuesTextSlider>& __cordl_internal_get__slider();

  constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer> const& __cordl_internal_get__songPreviewPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer>& __cordl_internal_get__songPreviewPlayer();

  constexpr ::HMUI::ToggleBinder* const& __cordl_internal_get__toggleBinder() const;

  constexpr ::HMUI::ToggleBinder*& __cordl_internal_get__toggleBinder();

  constexpr ::UnityW<::GlobalNamespace::VisualMetronome> const& __cordl_internal_get__visualMetronome() const;

  constexpr ::UnityW<::GlobalNamespace::VisualMetronome>& __cordl_internal_get__visualMetronome();

  constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> const& __cordl_internal_get__volumeSettingsList() const;

  constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>& __cordl_internal_get__volumeSettingsList();

  constexpr void __cordl_internal_set__ambientSettingsList(::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> value);

  constexpr void __cordl_internal_set__audioManager(::UnityW<::GlobalNamespace::AudioManagerSO> value);

  constexpr void __cordl_internal_set__disabledAlpha(float_t value);

  constexpr void __cordl_internal_set__overrideAudioLatencyToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__setupCanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set__slider(::UnityW<::HMUI::RangeValuesTextSlider> value);

  constexpr void __cordl_internal_set__songPreviewPlayer(::UnityW<::GlobalNamespace::SongPreviewPlayer> value);

  constexpr void __cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value);

  constexpr void __cordl_internal_set__visualMetronome(::UnityW<::GlobalNamespace::VisualMetronome> value);

  constexpr void __cordl_internal_set__volumeSettingsList(::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> value);

  /// @brief Method .ctor, addr 0x3af87bc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioLatencyViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioLatencyViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioLatencyViewController(AudioLatencyViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioLatencyViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioLatencyViewController(AudioLatencyViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4945 };

  /// @brief Field _setupCanvasGroup, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____setupCanvasGroup;

  /// @brief Field _volumeSettingsList, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> ____volumeSettingsList;

  /// @brief Field _ambientSettingsList, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> ____ambientSettingsList;

  /// @brief Field _overrideAudioLatencyToggle, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____overrideAudioLatencyToggle;

  /// @brief Field _slider, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::HMUI::RangeValuesTextSlider> ____slider;

  /// @brief Field _visualMetronome, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VisualMetronome> ____visualMetronome;

  /// @brief Field _disabledAlpha, offset: 0xa8, size: 0x4, def value: None
  float_t ____disabledAlpha;

  /// @brief Field _songPreviewPlayer, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongPreviewPlayer> ____songPreviewPlayer;

  /// @brief Field _settingsManager, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _audioManager, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioManagerSO> ____audioManager;

  /// @brief Field _toggleBinder, offset: 0xc8, size: 0x8, def value: None
  ::HMUI::ToggleBinder* ____toggleBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioLatencyViewController, ____setupCanvasGroup) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLatencyViewController, ____volumeSettingsList) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLatencyViewController, ____ambientSettingsList) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLatencyViewController, ____overrideAudioLatencyToggle) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLatencyViewController, ____slider) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLatencyViewController, ____visualMetronome) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLatencyViewController, ____disabledAlpha) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLatencyViewController, ____songPreviewPlayer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLatencyViewController, ____settingsManager) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLatencyViewController, ____audioManager) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLatencyViewController, ____toggleBinder) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioLatencyViewController, 0xd0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioLatencyViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioLatencyViewController*, "", "AudioLatencyViewController");
