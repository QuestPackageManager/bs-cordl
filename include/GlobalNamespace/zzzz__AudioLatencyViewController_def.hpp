#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioLatencyViewController)
namespace GlobalNamespace {
class BoolSO;
}
namespace GlobalNamespace {
class FloatSO;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
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
// Type: ::AudioLatencyViewController
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AudioLatencyViewController*
class CORDL_TYPE AudioLatencyViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _audioLatency, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__audioLatency, put = __cordl_internal_set__audioLatency))::UnityW<::GlobalNamespace::FloatSO> _audioLatency;

  /// @brief Field _disabledAlpha, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get__disabledAlpha, put = __cordl_internal_set__disabledAlpha)) float_t _disabledAlpha;

  /// @brief Field _mainSettingsModel, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsModel, put = __cordl_internal_set__mainSettingsModel))::UnityW<::GlobalNamespace::MainSettingsModelSO> _mainSettingsModel;

  /// @brief Field _overrideAudioLatency, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__overrideAudioLatency, put = __cordl_internal_set__overrideAudioLatency))::UnityW<::GlobalNamespace::BoolSO> _overrideAudioLatency;

  /// @brief Field _overrideAudioLatencyToggle, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__overrideAudioLatencyToggle, put = __cordl_internal_set__overrideAudioLatencyToggle))::UnityW<::UnityEngine::UI::Toggle> _overrideAudioLatencyToggle;

  /// @brief Field _setupCanvasGroup, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__setupCanvasGroup, put = __cordl_internal_set__setupCanvasGroup))::UnityW<::UnityEngine::CanvasGroup> _setupCanvasGroup;

  /// @brief Field _slider, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__slider, put = __cordl_internal_set__slider))::UnityW<::HMUI::RangeValuesTextSlider> _slider;

  /// @brief Field _songPreviewPlayer, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__songPreviewPlayer, put = __cordl_internal_set__songPreviewPlayer))::UnityW<::GlobalNamespace::SongPreviewPlayer> _songPreviewPlayer;

  /// @brief Field _toggleBinder, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__toggleBinder, put = __cordl_internal_set__toggleBinder))::HMUI::ToggleBinder* _toggleBinder;

  /// @brief Field _visualMetronome, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__visualMetronome, put = __cordl_internal_set__visualMetronome))::UnityW<::GlobalNamespace::VisualMetronome> _visualMetronome;

  /// @brief Method DidActivate, addr 0x2411da0, size 0x230, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x24120cc, size 0x28, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleOverrideAudioLatencyToggleValueChanged, addr 0x241224c, size 0x68, virtual false, abstract: false, final false
  inline void HandleOverrideAudioLatencyToggleValueChanged(bool isOn);

  static inline ::GlobalNamespace::AudioLatencyViewController* New_ctor();

  /// @brief Method OnDestroy, addr 0x24120f4, size 0xe4, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RefreshVisuals, addr 0x2411fd0, size 0xfc, virtual false, abstract: false, final false
  inline void RefreshVisuals(bool overrideAudioLatencyIsEnabled);

  /// @brief Method SliderValueDidChange, addr 0x24121d8, size 0x74, virtual false, abstract: false, final false
  inline void SliderValueDidChange(::HMUI::RangeValuesTextSlider* slider, float_t value);

  constexpr ::UnityW<::GlobalNamespace::FloatSO> const& __cordl_internal_get__audioLatency() const;

  constexpr ::UnityW<::GlobalNamespace::FloatSO>& __cordl_internal_get__audioLatency();

  constexpr float_t const& __cordl_internal_get__disabledAlpha() const;

  constexpr float_t& __cordl_internal_get__disabledAlpha();

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO> const& __cordl_internal_get__mainSettingsModel() const;

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO>& __cordl_internal_get__mainSettingsModel();

  constexpr ::UnityW<::GlobalNamespace::BoolSO> const& __cordl_internal_get__overrideAudioLatency() const;

  constexpr ::UnityW<::GlobalNamespace::BoolSO>& __cordl_internal_get__overrideAudioLatency();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__overrideAudioLatencyToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__overrideAudioLatencyToggle();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__setupCanvasGroup() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__setupCanvasGroup();

  constexpr ::UnityW<::HMUI::RangeValuesTextSlider> const& __cordl_internal_get__slider() const;

  constexpr ::UnityW<::HMUI::RangeValuesTextSlider>& __cordl_internal_get__slider();

  constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer> const& __cordl_internal_get__songPreviewPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer>& __cordl_internal_get__songPreviewPlayer();

  constexpr ::HMUI::ToggleBinder*& __cordl_internal_get__toggleBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleBinder*> const& __cordl_internal_get__toggleBinder() const;

  constexpr ::UnityW<::GlobalNamespace::VisualMetronome> const& __cordl_internal_get__visualMetronome() const;

  constexpr ::UnityW<::GlobalNamespace::VisualMetronome>& __cordl_internal_get__visualMetronome();

  constexpr void __cordl_internal_set__audioLatency(::UnityW<::GlobalNamespace::FloatSO> value);

  constexpr void __cordl_internal_set__disabledAlpha(float_t value);

  constexpr void __cordl_internal_set__mainSettingsModel(::UnityW<::GlobalNamespace::MainSettingsModelSO> value);

  constexpr void __cordl_internal_set__overrideAudioLatency(::UnityW<::GlobalNamespace::BoolSO> value);

  constexpr void __cordl_internal_set__overrideAudioLatencyToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__setupCanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set__slider(::UnityW<::HMUI::RangeValuesTextSlider> value);

  constexpr void __cordl_internal_set__songPreviewPlayer(::UnityW<::GlobalNamespace::SongPreviewPlayer> value);

  constexpr void __cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value);

  constexpr void __cordl_internal_set__visualMetronome(::UnityW<::GlobalNamespace::VisualMetronome> value);

  /// @brief Method .ctor, addr 0x24122b4, size 0x14, virtual false, abstract: false, final false
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

  /// @brief Field _audioLatency, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FloatSO> ____audioLatency;

  /// @brief Field _overrideAudioLatency, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BoolSO> ____overrideAudioLatency;

  /// @brief Field _setupCanvasGroup, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____setupCanvasGroup;

  /// @brief Field _overrideAudioLatencyToggle, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____overrideAudioLatencyToggle;

  /// @brief Field _slider, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::HMUI::RangeValuesTextSlider> ____slider;

  /// @brief Field _visualMetronome, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VisualMetronome> ____visualMetronome;

  /// @brief Field _disabledAlpha, offset: 0xa0, size: 0x4, def value: None
  float_t ____disabledAlpha;

  /// @brief Field _songPreviewPlayer, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongPreviewPlayer> ____songPreviewPlayer;

  /// @brief Field _mainSettingsModel, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSettingsModelSO> ____mainSettingsModel;

  /// @brief Field _toggleBinder, offset: 0xb8, size: 0x8, def value: None
  ::HMUI::ToggleBinder* ____toggleBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioLatencyViewController, 0xc0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLatencyViewController, ____audioLatency) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLatencyViewController, ____overrideAudioLatency) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLatencyViewController, ____setupCanvasGroup) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLatencyViewController, ____overrideAudioLatencyToggle) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLatencyViewController, ____slider) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLatencyViewController, ____visualMetronome) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLatencyViewController, ____disabledAlpha) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLatencyViewController, ____songPreviewPlayer) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLatencyViewController, ____mainSettingsModel) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLatencyViewController, ____toggleBinder) == 0xb8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioLatencyViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioLatencyViewController*, "", "AudioLatencyViewController");
