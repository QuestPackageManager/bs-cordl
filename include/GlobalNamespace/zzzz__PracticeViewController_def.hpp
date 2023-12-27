#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PracticeViewController)
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelModel;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class PracticeSettings;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace HMUI {
class RangeValuesTextSlider;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace HMUI {
class TimeSlider;
}
namespace HMUI {
class PercentSlider;
}
namespace GlobalNamespace {
class LevelBar;
}
// Forward declare root types
namespace GlobalNamespace {
class PracticeViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PracticeViewController);
// Type: ::PracticeViewController
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 212, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605)), TypeDefinitionIndex(TypeDefinitionIndex(14717))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5731))
// CS Name: ::PracticeViewController*
class CORDL_TYPE PracticeViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _songStartSlider, offset 0x70, size 0x8
  __declspec(property(get = __get__songStartSlider, put = __set__songStartSlider))::HMUI::TimeSlider* _songStartSlider;

  /// @brief Field _speedSlider, offset 0x78, size 0x8
  __declspec(property(get = __get__speedSlider, put = __set__speedSlider))::HMUI::PercentSlider* _speedSlider;

  /// @brief Field _levelBar, offset 0x80, size 0x8
  __declspec(property(get = __get__levelBar, put = __set__levelBar))::GlobalNamespace::LevelBar* _levelBar;

  /// @brief Field _playButton, offset 0x88, size 0x8
  __declspec(property(get = __get__playButton, put = __set__playButton))::UnityEngine::UI::Button* _playButton;

  /// @brief Field _playerDataModel, offset 0x90, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _songPreviewPlayer, offset 0x98, size 0x8
  __declspec(property(get = __get__songPreviewPlayer, put = __set__songPreviewPlayer))::GlobalNamespace::SongPreviewPlayer* _songPreviewPlayer;

  /// @brief Field _perceivedLoudnessPerLevelModel, offset 0xa0, size 0x8
  __declspec(property(get = __get__perceivedLoudnessPerLevelModel, put = __set__perceivedLoudnessPerLevelModel))::GlobalNamespace::PerceivedLoudnessPerLevelModel* _perceivedLoudnessPerLevelModel;

  /// @brief Field didPressPlayButtonEvent, offset 0xa8, size 0x8
  __declspec(property(get = __get_didPressPlayButtonEvent, put = __set_didPressPlayButtonEvent))::System::Action* didPressPlayButtonEvent;

  /// @brief Field _practiceSettings, offset 0xb0, size 0x8
  __declspec(property(get = __get__practiceSettings, put = __set__practiceSettings))::GlobalNamespace::PracticeSettings* _practiceSettings;

  /// @brief Field _currentPlayingStartTime, offset 0xb8, size 0x4
  __declspec(property(get = __get__currentPlayingStartTime, put = __set__currentPlayingStartTime)) float_t _currentPlayingStartTime;

  /// @brief Field _maxStartSongTime, offset 0xbc, size 0x4
  __declspec(property(get = __get__maxStartSongTime, put = __set__maxStartSongTime)) float_t _maxStartSongTime;

  /// @brief Field _level, offset 0xc0, size 0x8
  __declspec(property(get = __get__level, put = __set__level))::GlobalNamespace::IBeatmapLevel* _level;

  /// @brief Field _beatmapCharacteristic, offset 0xc8, size 0x8
  __declspec(property(get = __get__beatmapCharacteristic, put = __set__beatmapCharacteristic))::GlobalNamespace::BeatmapCharacteristicSO* _beatmapCharacteristic;

  /// @brief Field _beatmapDifficulty, offset 0xd0, size 0x4
  __declspec(property(get = __get__beatmapDifficulty, put = __set__beatmapDifficulty))::GlobalNamespace::BeatmapDifficulty _beatmapDifficulty;

  __declspec(property(get = get_practiceSettings))::GlobalNamespace::PracticeSettings* practiceSettings;

  constexpr ::HMUI::TimeSlider*& __get__songStartSlider();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::TimeSlider*> const& __get__songStartSlider() const;

  constexpr void __set__songStartSlider(::HMUI::TimeSlider* value);

  constexpr ::HMUI::PercentSlider*& __get__speedSlider();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::PercentSlider*> const& __get__speedSlider() const;

  constexpr void __set__speedSlider(::HMUI::PercentSlider* value);

  constexpr ::GlobalNamespace::LevelBar*& __get__levelBar();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelBar*> const& __get__levelBar() const;

  constexpr void __set__levelBar(::GlobalNamespace::LevelBar* value);

  constexpr ::UnityEngine::UI::Button*& __get__playButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__playButton() const;

  constexpr void __set__playButton(::UnityEngine::UI::Button* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::GlobalNamespace::SongPreviewPlayer*& __get__songPreviewPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPreviewPlayer*> const& __get__songPreviewPlayer() const;

  constexpr void __set__songPreviewPlayer(::GlobalNamespace::SongPreviewPlayer* value);

  constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel*& __get__perceivedLoudnessPerLevelModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PerceivedLoudnessPerLevelModel*> const& __get__perceivedLoudnessPerLevelModel() const;

  constexpr void __set__perceivedLoudnessPerLevelModel(::GlobalNamespace::PerceivedLoudnessPerLevelModel* value);

  constexpr ::System::Action*& __get_didPressPlayButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didPressPlayButtonEvent() const;

  constexpr void __set_didPressPlayButtonEvent(::System::Action* value);

  constexpr ::GlobalNamespace::PracticeSettings*& __get__practiceSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PracticeSettings*> const& __get__practiceSettings() const;

  constexpr void __set__practiceSettings(::GlobalNamespace::PracticeSettings* value);

  constexpr float_t& __get__currentPlayingStartTime();

  constexpr float_t const& __get__currentPlayingStartTime() const;

  constexpr void __set__currentPlayingStartTime(float_t value);

  constexpr float_t& __get__maxStartSongTime();

  constexpr float_t const& __get__maxStartSongTime() const;

  constexpr void __set__maxStartSongTime(float_t value);

  constexpr ::GlobalNamespace::IBeatmapLevel*& __get__level();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevel*> const& __get__level() const;

  constexpr void __set__level(::GlobalNamespace::IBeatmapLevel* value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& __get__beatmapCharacteristic();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& __get__beatmapCharacteristic() const;

  constexpr void __set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __get__beatmapDifficulty();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __get__beatmapDifficulty() const;

  constexpr void __set__beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  /// @brief Method add_didPressPlayButtonEvent addr 0x22d4e94 size 0x9c virtual false final false
  inline void add_didPressPlayButtonEvent(::System::Action* value);

  /// @brief Method remove_didPressPlayButtonEvent addr 0x22d4f30 size 0x9c virtual false final false
  inline void remove_didPressPlayButtonEvent(::System::Action* value);

  /// @brief Method get_practiceSettings addr 0x22d4fcc size 0x8 virtual false final false
  inline ::GlobalNamespace::PracticeSettings* get_practiceSettings();

  /// @brief Method Init addr 0x22d4fd4 size 0x1c4 virtual false final false
  inline void Init(::GlobalNamespace::IBeatmapLevel* level, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty);

  /// @brief Method DidActivate addr 0x22d5198 size 0x184 virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate addr 0x22d5364 size 0xf8 virtual true final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method PlayPreview addr 0x22d545c size 0x1f0 virtual false final false
  inline void PlayPreview();

  /// @brief Method RefreshUI addr 0x22d531c size 0x48 virtual false final false
  inline void RefreshUI();

  /// @brief Method HandleSpeedSliderValueDidChange addr 0x22d564c size 0x1c virtual false final false
  inline void HandleSpeedSliderValueDidChange(::HMUI::RangeValuesTextSlider* slider, float_t value);

  /// @brief Method HandleSongStartSliderValueDidChange addr 0x22d5668 size 0x38 virtual false final false
  inline void HandleSongStartSliderValueDidChange(::HMUI::RangeValuesTextSlider* slider, float_t value);

  /// @brief Method PlayButtonPressed addr 0x22d56a0 size 0x48 virtual false final false
  inline void PlayButtonPressed();

  static inline ::GlobalNamespace::PracticeViewController* New_ctor();

  /// @brief Method .ctor addr 0x22d56e8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PracticeViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PracticeViewController(PracticeViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PracticeViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PracticeViewController(PracticeViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PracticeViewController();

public:
  /// @brief Field _songStartSlider, offset: 0x70, size: 0x8, def value: None
  ::HMUI::TimeSlider* ____songStartSlider;

  /// @brief Field _speedSlider, offset: 0x78, size: 0x8, def value: None
  ::HMUI::PercentSlider* ____speedSlider;

  /// @brief Field _levelBar, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::LevelBar* ____levelBar;

  /// @brief Field _playButton, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____playButton;

  /// @brief Field _playerDataModel, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field _songPreviewPlayer, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::SongPreviewPlayer* ____songPreviewPlayer;

  /// @brief Field _perceivedLoudnessPerLevelModel, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::PerceivedLoudnessPerLevelModel* ____perceivedLoudnessPerLevelModel;

  /// @brief Field didPressPlayButtonEvent, offset: 0xa8, size: 0x8, def value: None
  ::System::Action* ___didPressPlayButtonEvent;

  /// @brief Field _practiceSettings, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::PracticeSettings* ____practiceSettings;

  /// @brief Field _currentPlayingStartTime, offset: 0xb8, size: 0x4, def value: None
  float_t ____currentPlayingStartTime;

  /// @brief Field _maxStartSongTime, offset: 0xbc, size: 0x4, def value: None
  float_t ____maxStartSongTime;

  /// @brief Field _level, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevel* ____level;

  /// @brief Field _beatmapCharacteristic, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicSO* ____beatmapCharacteristic;

  /// @brief Field _beatmapDifficulty, offset: 0xd0, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ____beatmapDifficulty;

  /// @brief Field kWaitBeforePlayPreviewAfterPreviewStartValueChanged offset 0xffffffff size 0x4
  static constexpr float_t kWaitBeforePlayPreviewAfterPreviewStartValueChanged{ 1.0 };

  /// @brief Field kMinValueChangeToInstantPlayPreview offset 0xffffffff size 0x4
  static constexpr float_t kMinValueChangeToInstantPlayPreview{ 3.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PracticeViewController, 0xd8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PracticeViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PracticeViewController*, "", "PracticeViewController");
