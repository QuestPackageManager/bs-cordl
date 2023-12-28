#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioLatencyViewController)
namespace GlobalNamespace {
class FloatSO;
}
namespace GlobalNamespace {
class BoolSO;
}
namespace HMUI {
class RangeValuesTextSlider;
}
namespace GlobalNamespace {
class VisualMetronome;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace HMUI {
class ToggleBinder;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioLatencyViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AudioLatencyViewController);
// Type: ::AudioLatencyViewController
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5612))
// CS Name: ::AudioLatencyViewController*
class CORDL_TYPE AudioLatencyViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _audioLatency, offset 0x70, size 0x8
  __declspec(property(get = __get__audioLatency, put = __set__audioLatency))::GlobalNamespace::FloatSO* _audioLatency;

  /// @brief Field _overrideAudioLatency, offset 0x78, size 0x8
  __declspec(property(get = __get__overrideAudioLatency, put = __set__overrideAudioLatency))::GlobalNamespace::BoolSO* _overrideAudioLatency;

  /// @brief Field _setupCanvasGroup, offset 0x80, size 0x8
  __declspec(property(get = __get__setupCanvasGroup, put = __set__setupCanvasGroup))::UnityEngine::CanvasGroup* _setupCanvasGroup;

  /// @brief Field _overrideAudioLatencyToggle, offset 0x88, size 0x8
  __declspec(property(get = __get__overrideAudioLatencyToggle, put = __set__overrideAudioLatencyToggle))::UnityEngine::UI::Toggle* _overrideAudioLatencyToggle;

  /// @brief Field _slider, offset 0x90, size 0x8
  __declspec(property(get = __get__slider, put = __set__slider))::HMUI::RangeValuesTextSlider* _slider;

  /// @brief Field _visualMetronome, offset 0x98, size 0x8
  __declspec(property(get = __get__visualMetronome, put = __set__visualMetronome))::GlobalNamespace::VisualMetronome* _visualMetronome;

  /// @brief Field _disabledAlpha, offset 0xa0, size 0x4
  __declspec(property(get = __get__disabledAlpha, put = __set__disabledAlpha)) float_t _disabledAlpha;

  /// @brief Field _songPreviewPlayer, offset 0xa8, size 0x8
  __declspec(property(get = __get__songPreviewPlayer, put = __set__songPreviewPlayer))::GlobalNamespace::SongPreviewPlayer* _songPreviewPlayer;

  /// @brief Field _toggleBinder, offset 0xb0, size 0x8
  __declspec(property(get = __get__toggleBinder, put = __set__toggleBinder))::HMUI::ToggleBinder* _toggleBinder;

  constexpr ::GlobalNamespace::FloatSO*& __get__audioLatency();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& __get__audioLatency() const;

  constexpr void __set__audioLatency(::GlobalNamespace::FloatSO* value);

  constexpr ::GlobalNamespace::BoolSO*& __get__overrideAudioLatency();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get__overrideAudioLatency() const;

  constexpr void __set__overrideAudioLatency(::GlobalNamespace::BoolSO* value);

  constexpr ::UnityEngine::CanvasGroup*& __get__setupCanvasGroup();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& __get__setupCanvasGroup() const;

  constexpr void __set__setupCanvasGroup(::UnityEngine::CanvasGroup* value);

  constexpr ::UnityEngine::UI::Toggle*& __get__overrideAudioLatencyToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__overrideAudioLatencyToggle() const;

  constexpr void __set__overrideAudioLatencyToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::HMUI::RangeValuesTextSlider*& __get__slider();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::RangeValuesTextSlider*> const& __get__slider() const;

  constexpr void __set__slider(::HMUI::RangeValuesTextSlider* value);

  constexpr ::GlobalNamespace::VisualMetronome*& __get__visualMetronome();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VisualMetronome*> const& __get__visualMetronome() const;

  constexpr void __set__visualMetronome(::GlobalNamespace::VisualMetronome* value);

  constexpr float_t& __get__disabledAlpha();

  constexpr float_t const& __get__disabledAlpha() const;

  constexpr void __set__disabledAlpha(float_t value);

  constexpr ::GlobalNamespace::SongPreviewPlayer*& __get__songPreviewPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPreviewPlayer*> const& __get__songPreviewPlayer() const;

  constexpr void __set__songPreviewPlayer(::GlobalNamespace::SongPreviewPlayer* value);

  constexpr ::HMUI::ToggleBinder*& __get__toggleBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleBinder*> const& __get__toggleBinder() const;

  constexpr void __set__toggleBinder(::HMUI::ToggleBinder* value);

  /// @brief Method DidActivate addr 0x22ac5e4 size 0x224 virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate addr 0x22ac8f4 size 0x28 virtual true final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method OnDestroy addr 0x22ac91c size 0xe4 virtual true final false
  inline void OnDestroy();

  /// @brief Method SliderValueDidChange addr 0x22aca00 size 0x74 virtual false final false
  inline void SliderValueDidChange(::HMUI::RangeValuesTextSlider* slider, float_t value);

  /// @brief Method HandleOverrideAudioLatencyToggleValueChanged addr 0x22aca74 size 0x68 virtual false final false
  inline void HandleOverrideAudioLatencyToggleValueChanged(bool isOn);

  /// @brief Method RefreshVisuals addr 0x22ac808 size 0xec virtual false final false
  inline void RefreshVisuals(bool overrideAudioLatencyIsEnabled);

  static inline ::GlobalNamespace::AudioLatencyViewController* New_ctor();

  /// @brief Method .ctor addr 0x22acadc size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AudioLatencyViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioLatencyViewController(AudioLatencyViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioLatencyViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioLatencyViewController(AudioLatencyViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioLatencyViewController();

public:
  /// @brief Field _audioLatency, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::FloatSO* ____audioLatency;

  /// @brief Field _overrideAudioLatency, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* ____overrideAudioLatency;

  /// @brief Field _setupCanvasGroup, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::CanvasGroup* ____setupCanvasGroup;

  /// @brief Field _overrideAudioLatencyToggle, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____overrideAudioLatencyToggle;

  /// @brief Field _slider, offset: 0x90, size: 0x8, def value: None
  ::HMUI::RangeValuesTextSlider* ____slider;

  /// @brief Field _visualMetronome, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::VisualMetronome* ____visualMetronome;

  /// @brief Field _disabledAlpha, offset: 0xa0, size: 0x4, def value: None
  float_t ____disabledAlpha;

  /// @brief Field _songPreviewPlayer, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::SongPreviewPlayer* ____songPreviewPlayer;

  /// @brief Field _toggleBinder, offset: 0xb0, size: 0x8, def value: None
  ::HMUI::ToggleBinder* ____toggleBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioLatencyViewController, 0xb8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioLatencyViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioLatencyViewController*, "", "AudioLatencyViewController");
