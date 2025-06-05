#pragma once
// IWYU pragma private; include "GlobalNamespace/PracticeViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__LoadBeatmapLevelDataResult_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PracticeViewController)
namespace GlobalNamespace {
class AudioClipAsyncLoader;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevelsEntitlementModel;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class LevelBar;
}
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelModel;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class PracticeSettings;
}
namespace GlobalNamespace {
struct PracticeViewController__LoadSong_d__33;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
namespace HMUI {
class PercentSlider;
}
namespace HMUI {
class RangeValuesTextSlider;
}
namespace HMUI {
class TimeSlider;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Action;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class PracticeViewController;
}
namespace GlobalNamespace {
struct PracticeViewController__LoadSong_d__33;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PracticeViewController);
MARK_VAL_T(::GlobalNamespace::PracticeViewController__LoadSong_d__33);
// Dependencies BeatmapLevelDataVersion, LoadBeatmapLevelDataResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: PracticeViewController/<LoadSong>d__33
struct CORDL_TYPE PracticeViewController__LoadSong_d__33 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3af5a70, size 0x4a0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3af5f10, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PracticeViewController__LoadSong_d__33();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PracticeViewController>",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>>", modifiers: "", def_value: None }]
  constexpr PracticeViewController__LoadSong_d__33(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                   ::UnityW<::GlobalNamespace::PracticeViewController> __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion> __u__1,
                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__2,
                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>> __u__3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4935 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PracticeViewController> __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion> __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__2;

  /// @brief Field <>u__3, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>> __u__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PracticeViewController__LoadSong_d__33, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController__LoadSong_d__33, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController__LoadSong_d__33, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController__LoadSong_d__33, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController__LoadSong_d__33, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController__LoadSong_d__33, __u__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController__LoadSong_d__33, __u__3) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PracticeViewController__LoadSong_d__33, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapKey, HMUI.ViewController, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: PracticeViewController
class CORDL_TYPE PracticeViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using _LoadSong_d__33 = ::GlobalNamespace::PracticeViewController__LoadSong_d__33;

  /// @brief Field _audioClip, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClip, put = __cordl_internal_set__audioClip)) ::UnityW<::UnityEngine::AudioClip> _audioClip;

  /// @brief Field _audioClipAsyncLoader, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClipAsyncLoader, put = __cordl_internal_set__audioClipAsyncLoader)) ::GlobalNamespace::AudioClipAsyncLoader* _audioClipAsyncLoader;

  /// @brief Field _beatmapKey, offset 0x128, size 0x18
  __declspec(property(get = __cordl_internal_get__beatmapKey, put = __cordl_internal_set__beatmapKey)) ::GlobalNamespace::BeatmapKey _beatmapKey;

  /// @brief Field _beatmapLevel, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevel, put = __cordl_internal_set__beatmapLevel)) ::GlobalNamespace::BeatmapLevel* _beatmapLevel;

  /// @brief Field _beatmapLevelsEntitlementModel, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsEntitlementModel,
                      put = __cordl_internal_set__beatmapLevelsEntitlementModel)) ::GlobalNamespace::BeatmapLevelsEntitlementModel* _beatmapLevelsEntitlementModel;

  /// @brief Field _beatmapLevelsModel, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _cancellationTokenSource, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__cancellationTokenSource, put = __cordl_internal_set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _currentPlayingStartTime, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get__currentPlayingStartTime, put = __cordl_internal_set__currentPlayingStartTime)) float_t _currentPlayingStartTime;

  /// @brief Field _disabledColor, offset 0xb8, size 0x10
  __declspec(property(get = __cordl_internal_get__disabledColor, put = __cordl_internal_set__disabledColor)) ::UnityEngine::Color _disabledColor;

  /// @brief Field _enabledColor, offset 0xa8, size 0x10
  __declspec(property(get = __cordl_internal_get__enabledColor, put = __cordl_internal_set__enabledColor)) ::UnityEngine::Color _enabledColor;

  /// @brief Field _getAudioClipTask, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__getAudioClipTask, put = __cordl_internal_set__getAudioClipTask)) ::System::Threading::Tasks::Task* _getAudioClipTask;

  /// @brief Field _levelBar, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__levelBar, put = __cordl_internal_set__levelBar)) ::UnityW<::GlobalNamespace::LevelBar> _levelBar;

  /// @brief Field _loader, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__loader, put = __cordl_internal_set__loader)) ::UnityW<::UnityEngine::GameObject> _loader;

  /// @brief Field _maxStartSongTime, offset 0x10c, size 0x4
  __declspec(property(get = __cordl_internal_get__maxStartSongTime, put = __cordl_internal_set__maxStartSongTime)) float_t _maxStartSongTime;

  /// @brief Field _perceivedLoudnessPerLevelModel, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__perceivedLoudnessPerLevelModel,
                      put = __cordl_internal_set__perceivedLoudnessPerLevelModel)) ::GlobalNamespace::PerceivedLoudnessPerLevelModel* _perceivedLoudnessPerLevelModel;

  /// @brief Field _playButton, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__playButton, put = __cordl_internal_set__playButton)) ::UnityW<::UnityEngine::UI::Button> _playButton;

  /// @brief Field _playerDataModel, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _practiceSettings, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__practiceSettings, put = __cordl_internal_set__practiceSettings)) ::GlobalNamespace::PracticeSettings* _practiceSettings;

  /// @brief Field _songLength, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get__songLength, put = __cordl_internal_set__songLength)) float_t _songLength;

  /// @brief Field _songPreviewPlayer, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__songPreviewPlayer, put = __cordl_internal_set__songPreviewPlayer)) ::UnityW<::GlobalNamespace::SongPreviewPlayer> _songPreviewPlayer;

  /// @brief Field _songStartSlider, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__songStartSlider, put = __cordl_internal_set__songStartSlider)) ::UnityW<::HMUI::TimeSlider> _songStartSlider;

  /// @brief Field _speedSlider, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__speedSlider, put = __cordl_internal_set__speedSlider)) ::UnityW<::HMUI::PercentSlider> _speedSlider;

  /// @brief Field _value, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) ::UnityW<::TMPro::TextMeshProUGUI> _value;

  /// @brief Field didPressPlayButtonEvent, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressPlayButtonEvent, put = __cordl_internal_set_didPressPlayButtonEvent)) ::System::Action* didPressPlayButtonEvent;

  __declspec(property(get = get_practiceSettings)) ::GlobalNamespace::PracticeSettings* practiceSettings;

  /// @brief Method CancelSongLoading, addr 0x3af53f4, size 0x2c, virtual false, abstract: false, final false
  inline void CancelSongLoading();

  /// @brief Method DidActivate, addr 0x3af5490, size 0x164, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3af5774, size 0xac, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method GetSongTime, addr 0x3af58f4, size 0x4c, virtual false, abstract: false, final false
  inline float_t GetSongTime();

  /// @brief Method HandlePlayButtonPressed, addr 0x3af59f4, size 0x74, virtual false, abstract: false, final false
  inline void HandlePlayButtonPressed();

  /// @brief Method HandleSongStartSliderValueDidChange, addr 0x3af59c0, size 0x34, virtual false, abstract: false, final false
  inline void HandleSongStartSliderValueDidChange(::HMUI::RangeValuesTextSlider* slider, float_t value);

  /// @brief Method Init, addr 0x3af52b8, size 0x13c, virtual false, abstract: false, final false
  inline void Init(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel);

  /// @brief Method LoadSong, addr 0x3af55f4, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadSong(::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::PracticeViewController* New_ctor();

  /// @brief Method PlayPreview, addr 0x3af5820, size 0xd4, virtual false, abstract: false, final false
  inline void PlayPreview();

  /// @brief Method SetLoader, addr 0x3af5940, size 0x80, virtual false, abstract: false, final false
  inline void SetLoader(bool loading);

  /// @brief Method SetSongLength, addr 0x3af5420, size 0x70, virtual false, abstract: false, final false
  inline void SetSongLength(float_t songLength);

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__audioClip() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__audioClip();

  constexpr ::GlobalNamespace::AudioClipAsyncLoader* const& __cordl_internal_get__audioClipAsyncLoader() const;

  constexpr ::GlobalNamespace::AudioClipAsyncLoader*& __cordl_internal_get__audioClipAsyncLoader();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get__beatmapKey() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get__beatmapKey();

  constexpr ::GlobalNamespace::BeatmapLevel* const& __cordl_internal_get__beatmapLevel() const;

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get__beatmapLevel();

  constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel* const& __cordl_internal_get__beatmapLevelsEntitlementModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel*& __cordl_internal_get__beatmapLevelsEntitlementModel();

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__cancellationTokenSource() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource();

  constexpr float_t const& __cordl_internal_get__currentPlayingStartTime() const;

  constexpr float_t& __cordl_internal_get__currentPlayingStartTime();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__disabledColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__disabledColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__enabledColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__enabledColor();

  constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__getAudioClipTask() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__getAudioClipTask();

  constexpr ::UnityW<::GlobalNamespace::LevelBar> const& __cordl_internal_get__levelBar() const;

  constexpr ::UnityW<::GlobalNamespace::LevelBar>& __cordl_internal_get__levelBar();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__loader() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__loader();

  constexpr float_t const& __cordl_internal_get__maxStartSongTime() const;

  constexpr float_t& __cordl_internal_get__maxStartSongTime();

  constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel* const& __cordl_internal_get__perceivedLoudnessPerLevelModel() const;

  constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel*& __cordl_internal_get__perceivedLoudnessPerLevelModel();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__playButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__playButton();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::GlobalNamespace::PracticeSettings* const& __cordl_internal_get__practiceSettings() const;

  constexpr ::GlobalNamespace::PracticeSettings*& __cordl_internal_get__practiceSettings();

  constexpr float_t const& __cordl_internal_get__songLength() const;

  constexpr float_t& __cordl_internal_get__songLength();

  constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer> const& __cordl_internal_get__songPreviewPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer>& __cordl_internal_get__songPreviewPlayer();

  constexpr ::UnityW<::HMUI::TimeSlider> const& __cordl_internal_get__songStartSlider() const;

  constexpr ::UnityW<::HMUI::TimeSlider>& __cordl_internal_get__songStartSlider();

  constexpr ::UnityW<::HMUI::PercentSlider> const& __cordl_internal_get__speedSlider() const;

  constexpr ::UnityW<::HMUI::PercentSlider>& __cordl_internal_get__speedSlider();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__value() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__value();

  constexpr ::System::Action* const& __cordl_internal_get_didPressPlayButtonEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didPressPlayButtonEvent();

  constexpr void __cordl_internal_set__audioClip(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value);

  constexpr void __cordl_internal_set__beatmapKey(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set__beatmapLevel(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set__beatmapLevelsEntitlementModel(::GlobalNamespace::BeatmapLevelsEntitlementModel* value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__currentPlayingStartTime(float_t value);

  constexpr void __cordl_internal_set__disabledColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__enabledColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__getAudioClipTask(::System::Threading::Tasks::Task* value);

  constexpr void __cordl_internal_set__levelBar(::UnityW<::GlobalNamespace::LevelBar> value);

  constexpr void __cordl_internal_set__loader(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__maxStartSongTime(float_t value);

  constexpr void __cordl_internal_set__perceivedLoudnessPerLevelModel(::GlobalNamespace::PerceivedLoudnessPerLevelModel* value);

  constexpr void __cordl_internal_set__playButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__practiceSettings(::GlobalNamespace::PracticeSettings* value);

  constexpr void __cordl_internal_set__songLength(float_t value);

  constexpr void __cordl_internal_set__songPreviewPlayer(::UnityW<::GlobalNamespace::SongPreviewPlayer> value);

  constexpr void __cordl_internal_set__songStartSlider(::UnityW<::HMUI::TimeSlider> value);

  constexpr void __cordl_internal_set__speedSlider(::UnityW<::HMUI::PercentSlider> value);

  constexpr void __cordl_internal_set__value(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set_didPressPlayButtonEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3af5a68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didPressPlayButtonEvent, addr 0x3af5178, size 0x9c, virtual false, abstract: false, final false
  inline void add_didPressPlayButtonEvent(::System::Action* value);

  /// @brief Method get_practiceSettings, addr 0x3af52b0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PracticeSettings* get_practiceSettings();

  /// @brief Method remove_didPressPlayButtonEvent, addr 0x3af5214, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didPressPlayButtonEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PracticeViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PracticeViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PracticeViewController(PracticeViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PracticeViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PracticeViewController(PracticeViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4936 };

  /// @brief Field kMinValueChangeToInstantPlayPreview offset 0xffffffff size 0x4
  static constexpr float_t kMinValueChangeToInstantPlayPreview{ static_cast<float_t>(3.0f) };

  /// @brief Field kWaitBeforePlayPreviewAfterPreviewStartValueChanged offset 0xffffffff size 0x4
  static constexpr float_t kWaitBeforePlayPreviewAfterPreviewStartValueChanged{ static_cast<float_t>(1.0f) };

  /// @brief Field _songStartSlider, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::HMUI::TimeSlider> ____songStartSlider;

  /// @brief Field _speedSlider, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::HMUI::PercentSlider> ____speedSlider;

  /// @brief Field _levelBar, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelBar> ____levelBar;

  /// @brief Field _playButton, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____playButton;

  /// @brief Field _loader, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____loader;

  /// @brief Field _value, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____value;

  /// @brief Field _enabledColor, offset: 0xa8, size: 0x10, def value: None
  ::UnityEngine::Color ____enabledColor;

  /// @brief Field _disabledColor, offset: 0xb8, size: 0x10, def value: None
  ::UnityEngine::Color ____disabledColor;

  /// @brief Field _playerDataModel, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _songPreviewPlayer, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongPreviewPlayer> ____songPreviewPlayer;

  /// @brief Field _perceivedLoudnessPerLevelModel, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::PerceivedLoudnessPerLevelModel* ____perceivedLoudnessPerLevelModel;

  /// @brief Field _beatmapLevelsModel, offset: 0xe0, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _beatmapLevelsEntitlementModel, offset: 0xe8, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsEntitlementModel* ____beatmapLevelsEntitlementModel;

  /// @brief Field _audioClipAsyncLoader, offset: 0xf0, size: 0x8, def value: None
  ::GlobalNamespace::AudioClipAsyncLoader* ____audioClipAsyncLoader;

  /// @brief Field didPressPlayButtonEvent, offset: 0xf8, size: 0x8, def value: None
  ::System::Action* ___didPressPlayButtonEvent;

  /// @brief Field _practiceSettings, offset: 0x100, size: 0x8, def value: None
  ::GlobalNamespace::PracticeSettings* ____practiceSettings;

  /// @brief Field _currentPlayingStartTime, offset: 0x108, size: 0x4, def value: None
  float_t ____currentPlayingStartTime;

  /// @brief Field _maxStartSongTime, offset: 0x10c, size: 0x4, def value: None
  float_t ____maxStartSongTime;

  /// @brief Field _songLength, offset: 0x110, size: 0x4, def value: None
  float_t ____songLength;

  /// @brief Field _getAudioClipTask, offset: 0x118, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ____getAudioClipTask;

  /// @brief Field _cancellationTokenSource, offset: 0x120, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  /// @brief Field _beatmapKey, offset: 0x128, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ____beatmapKey;

  /// @brief Field _beatmapLevel, offset: 0x140, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ____beatmapLevel;

  /// @brief Field _audioClip, offset: 0x148, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ____audioClip;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PracticeViewController, ____songStartSlider) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController, ____speedSlider) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController, ____levelBar) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController, ____playButton) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController, ____loader) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController, ____value) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController, ____enabledColor) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController, ____disabledColor) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController, ____playerDataModel) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController, ____songPreviewPlayer) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController, ____perceivedLoudnessPerLevelModel) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController, ____beatmapLevelsModel) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController, ____beatmapLevelsEntitlementModel) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController, ____audioClipAsyncLoader) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController, ___didPressPlayButtonEvent) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController, ____practiceSettings) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController, ____currentPlayingStartTime) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController, ____maxStartSongTime) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController, ____songLength) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController, ____getAudioClipTask) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController, ____cancellationTokenSource) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController, ____beatmapKey) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController, ____beatmapLevel) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeViewController, ____audioClip) == 0x148, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PracticeViewController, 0x150>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PracticeViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PracticeViewController*, "", "PracticeViewController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PracticeViewController__LoadSong_d__33, "", "PracticeViewController/<LoadSong>d__33");
