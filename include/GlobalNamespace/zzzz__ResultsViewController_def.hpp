#pragma once
// IWYU pragma private; include "GlobalNamespace/ResultsViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ResultsViewController)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class FireworksController;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class LevelBar;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class MenuDestination;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
namespace GlobalNamespace {
class __ResultsViewController___StartFireworksAfterDelay_d__33;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
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
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class ResultsViewController;
}
namespace GlobalNamespace {
class __ResultsViewController___StartFireworksAfterDelay_d__33;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ResultsViewController);
MARK_REF_PTR_T(::GlobalNamespace::__ResultsViewController___StartFireworksAfterDelay_d__33);
// Type: ::<StartFireworksAfterDelay>d__33
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ResultsViewController::<StartFireworksAfterDelay>d__33*
class CORDL_TYPE __ResultsViewController___StartFireworksAfterDelay_d__33 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ResultsViewController> __4__this;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_delay, put = __cordl_internal_set_delay)) float_t delay;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3b0dccc, size 0xb8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__ResultsViewController___StartFireworksAfterDelay_d__33* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3b0dd84, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3b0dd8c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3b0ddc4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3b0dcc8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::ResultsViewController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::ResultsViewController>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_delay() const;

  constexpr float_t& __cordl_internal_get_delay();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ResultsViewController> value);

  constexpr void __cordl_internal_set_delay(float_t value);

  /// @brief Method .ctor, addr 0x3b0dc08, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ResultsViewController___StartFireworksAfterDelay_d__33();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ResultsViewController___StartFireworksAfterDelay_d__33", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ResultsViewController___StartFireworksAfterDelay_d__33(__ResultsViewController___StartFireworksAfterDelay_d__33&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ResultsViewController___StartFireworksAfterDelay_d__33", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ResultsViewController___StartFireworksAfterDelay_d__33(__ResultsViewController___StartFireworksAfterDelay_d__33 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field delay, offset: 0x20, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ResultsViewController> _____4__this;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5358 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ResultsViewController___StartFireworksAfterDelay_d__33, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ResultsViewController___StartFireworksAfterDelay_d__33, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ResultsViewController___StartFireworksAfterDelay_d__33, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ResultsViewController___StartFireworksAfterDelay_d__33, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ResultsViewController___StartFireworksAfterDelay_d__33, _____4__this) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ResultsViewController
// SizeInfo { instance_size: 320, native_size: -1, calculated_instance_size: 320, calculated_native_size: 314, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ResultsViewController*
class CORDL_TYPE ResultsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using _StartFireworksAfterDelay_d__33 = ::GlobalNamespace::__ResultsViewController___StartFireworksAfterDelay_d__33;

  /// @brief Field _beatmapKey, offset 0x110, size 0x18
  __declspec(property(get = __cordl_internal_get__beatmapKey, put = __cordl_internal_set__beatmapKey)) ::GlobalNamespace::BeatmapKey _beatmapKey;

  /// @brief Field _beatmapLevel, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevel, put = __cordl_internal_set__beatmapLevel)) ::GlobalNamespace::BeatmapLevel* _beatmapLevel;

  /// @brief Field _clearedBannerGo, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__clearedBannerGo, put = __cordl_internal_set__clearedBannerGo)) ::UnityW<::UnityEngine::GameObject> _clearedBannerGo;

  /// @brief Field _clearedPanel, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__clearedPanel, put = __cordl_internal_set__clearedPanel)) ::UnityW<::UnityEngine::GameObject> _clearedPanel;

  /// @brief Field _comboText, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__comboText, put = __cordl_internal_set__comboText)) ::UnityW<::TMPro::TextMeshProUGUI> _comboText;

  /// @brief Field _continueButton, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__continueButton, put = __cordl_internal_set__continueButton)) ::UnityW<::UnityEngine::UI::Button> _continueButton;

  /// @brief Field _failedBannerGo, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__failedBannerGo, put = __cordl_internal_set__failedBannerGo)) ::UnityW<::UnityEngine::GameObject> _failedBannerGo;

  /// @brief Field _fireworksController, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__fireworksController, put = __cordl_internal_set__fireworksController)) ::UnityW<::GlobalNamespace::FireworksController> _fireworksController;

  /// @brief Field _goodCutsPercentageText, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__goodCutsPercentageText, put = __cordl_internal_set__goodCutsPercentageText)) ::UnityW<::TMPro::TextMeshProUGUI> _goodCutsPercentageText;

  /// @brief Field _levelBar, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__levelBar, put = __cordl_internal_set__levelBar)) ::UnityW<::GlobalNamespace::LevelBar> _levelBar;

  /// @brief Field _levelClearedAudioClip, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__levelClearedAudioClip, put = __cordl_internal_set__levelClearedAudioClip)) ::UnityW<::UnityEngine::AudioClip> _levelClearedAudioClip;

  /// @brief Field _levelCompletionResults, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__levelCompletionResults, put = __cordl_internal_set__levelCompletionResults)) ::GlobalNamespace::LevelCompletionResults* _levelCompletionResults;

  /// @brief Field _menuDestinationRequest, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__menuDestinationRequest, put = __cordl_internal_set__menuDestinationRequest)) ::GlobalNamespace::MenuDestination* _menuDestinationRequest;

  /// @brief Field _newHighScore, offset 0x138, size 0x1
  __declspec(property(get = __cordl_internal_get__newHighScore, put = __cordl_internal_set__newHighScore)) bool _newHighScore;

  /// @brief Field _newHighScoreText, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__newHighScoreText, put = __cordl_internal_set__newHighScoreText)) ::UnityW<::UnityEngine::GameObject> _newHighScoreText;

  /// @brief Field _practice, offset 0x139, size 0x1
  __declspec(property(get = __cordl_internal_get__practice, put = __cordl_internal_set__practice)) bool _practice;

  /// @brief Field _rankText, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__rankText, put = __cordl_internal_set__rankText)) ::UnityW<::TMPro::TextMeshProUGUI> _rankText;

  /// @brief Field _restartButton, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__restartButton, put = __cordl_internal_set__restartButton)) ::UnityW<::UnityEngine::UI::Button> _restartButton;

  /// @brief Field _scoreText, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreText, put = __cordl_internal_set__scoreText)) ::UnityW<::TMPro::TextMeshProUGUI> _scoreText;

  /// @brief Field _songPreviewPlayer, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__songPreviewPlayer, put = __cordl_internal_set__songPreviewPlayer)) ::UnityW<::GlobalNamespace::SongPreviewPlayer> _songPreviewPlayer;

  /// @brief Field _startFireworksAfterDelayCoroutine, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__startFireworksAfterDelayCoroutine,
                      put = __cordl_internal_set__startFireworksAfterDelayCoroutine)) ::UnityEngine::Coroutine* _startFireworksAfterDelayCoroutine;

  /// @brief Field _transformedBeatmapData, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__transformedBeatmapData, put = __cordl_internal_set__transformedBeatmapData)) ::GlobalNamespace::IReadonlyBeatmapData* _transformedBeatmapData;

  /// @brief Field continueButtonPressedEvent, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_continueButtonPressedEvent,
                      put = __cordl_internal_set_continueButtonPressedEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::ResultsViewController>>* continueButtonPressedEvent;

  __declspec(property(get = get_practice)) bool practice;

  /// @brief Field restartButtonPressedEvent, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_restartButtonPressedEvent,
                      put = __cordl_internal_set_restartButtonPressedEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::ResultsViewController>>* restartButtonPressedEvent;

  /// @brief Method ContinueButtonPressed, addr 0x3b0dc30, size 0x48, virtual false, abstract: false, final false
  inline void ContinueButtonPressed();

  /// @brief Method DidActivate, addr 0x3b0d580, size 0x1a4, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3b0db68, size 0xa0, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method Init, addr 0x3b0d558, size 0x28, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData, ByRef<::GlobalNamespace::BeatmapKey> beatmapKey,
                   ::GlobalNamespace::BeatmapLevel* beatmapLevel, bool practice, bool newHighScore);

  static inline ::GlobalNamespace::ResultsViewController* New_ctor();

  /// @brief Method ProcessMenuDestinationRequest, addr 0x3b0da94, size 0xd4, virtual false, abstract: false, final false
  inline void ProcessMenuDestinationRequest(::GlobalNamespace::MenuDestination* menuDestination);

  /// @brief Method RestartButtonPressed, addr 0x3b0dc78, size 0x48, virtual false, abstract: false, final false
  inline void RestartButtonPressed();

  /// @brief Method SetDataToUI, addr 0x3b0d724, size 0x300, virtual false, abstract: false, final false
  inline void SetDataToUI();

  /// @brief Method StartFireworksAfterDelay, addr 0x3b0da24, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* StartFireworksAfterDelay(float_t delay);

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get__beatmapKey() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get__beatmapKey();

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get__beatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevel*> const& __cordl_internal_get__beatmapLevel() const;

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__clearedBannerGo() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__clearedBannerGo();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__clearedPanel() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__clearedPanel();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__comboText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__comboText();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__continueButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__continueButton();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__failedBannerGo() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__failedBannerGo();

  constexpr ::UnityW<::GlobalNamespace::FireworksController> const& __cordl_internal_get__fireworksController() const;

  constexpr ::UnityW<::GlobalNamespace::FireworksController>& __cordl_internal_get__fireworksController();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__goodCutsPercentageText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__goodCutsPercentageText();

  constexpr ::UnityW<::GlobalNamespace::LevelBar> const& __cordl_internal_get__levelBar() const;

  constexpr ::UnityW<::GlobalNamespace::LevelBar>& __cordl_internal_get__levelBar();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__levelClearedAudioClip() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__levelClearedAudioClip();

  constexpr ::GlobalNamespace::LevelCompletionResults*& __cordl_internal_get__levelCompletionResults();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCompletionResults*> const& __cordl_internal_get__levelCompletionResults() const;

  constexpr ::GlobalNamespace::MenuDestination*& __cordl_internal_get__menuDestinationRequest();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuDestination*> const& __cordl_internal_get__menuDestinationRequest() const;

  constexpr bool const& __cordl_internal_get__newHighScore() const;

  constexpr bool& __cordl_internal_get__newHighScore();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__newHighScoreText() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__newHighScoreText();

  constexpr bool const& __cordl_internal_get__practice() const;

  constexpr bool& __cordl_internal_get__practice();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__rankText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__rankText();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__restartButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__restartButton();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__scoreText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__scoreText();

  constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer> const& __cordl_internal_get__songPreviewPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer>& __cordl_internal_get__songPreviewPlayer();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__startFireworksAfterDelayCoroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get__startFireworksAfterDelayCoroutine() const;

  constexpr ::GlobalNamespace::IReadonlyBeatmapData*& __cordl_internal_get__transformedBeatmapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> const& __cordl_internal_get__transformedBeatmapData() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ResultsViewController>>*& __cordl_internal_get_continueButtonPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::ResultsViewController>>*> const& __cordl_internal_get_continueButtonPressedEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ResultsViewController>>*& __cordl_internal_get_restartButtonPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::ResultsViewController>>*> const& __cordl_internal_get_restartButtonPressedEvent() const;

  constexpr void __cordl_internal_set__beatmapKey(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set__beatmapLevel(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set__clearedBannerGo(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__clearedPanel(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__comboText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__continueButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__failedBannerGo(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__fireworksController(::UnityW<::GlobalNamespace::FireworksController> value);

  constexpr void __cordl_internal_set__goodCutsPercentageText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__levelBar(::UnityW<::GlobalNamespace::LevelBar> value);

  constexpr void __cordl_internal_set__levelClearedAudioClip(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set__levelCompletionResults(::GlobalNamespace::LevelCompletionResults* value);

  constexpr void __cordl_internal_set__menuDestinationRequest(::GlobalNamespace::MenuDestination* value);

  constexpr void __cordl_internal_set__newHighScore(bool value);

  constexpr void __cordl_internal_set__newHighScoreText(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__practice(bool value);

  constexpr void __cordl_internal_set__rankText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__restartButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__scoreText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__songPreviewPlayer(::UnityW<::GlobalNamespace::SongPreviewPlayer> value);

  constexpr void __cordl_internal_set__startFireworksAfterDelayCoroutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set__transformedBeatmapData(::GlobalNamespace::IReadonlyBeatmapData* value);

  constexpr void __cordl_internal_set_continueButtonPressedEvent(::System::Action_1<::UnityW<::GlobalNamespace::ResultsViewController>>* value);

  constexpr void __cordl_internal_set_restartButtonPressedEvent(::System::Action_1<::UnityW<::GlobalNamespace::ResultsViewController>>* value);

  /// @brief Method .ctor, addr 0x3b0dcc0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_continueButtonPressedEvent, addr 0x3b0d290, size 0xb0, virtual false, abstract: false, final false
  inline void add_continueButtonPressedEvent(::System::Action_1<::UnityW<::GlobalNamespace::ResultsViewController>>* value);

  /// @brief Method add_restartButtonPressedEvent, addr 0x3b0d3f0, size 0xb0, virtual false, abstract: false, final false
  inline void add_restartButtonPressedEvent(::System::Action_1<::UnityW<::GlobalNamespace::ResultsViewController>>* value);

  /// @brief Method get_practice, addr 0x3b0d550, size 0x8, virtual false, abstract: false, final false
  inline bool get_practice();

  /// @brief Method remove_continueButtonPressedEvent, addr 0x3b0d340, size 0xb0, virtual false, abstract: false, final false
  inline void remove_continueButtonPressedEvent(::System::Action_1<::UnityW<::GlobalNamespace::ResultsViewController>>* value);

  /// @brief Method remove_restartButtonPressedEvent, addr 0x3b0d4a0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_restartButtonPressedEvent(::System::Action_1<::UnityW<::GlobalNamespace::ResultsViewController>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResultsViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResultsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResultsViewController(ResultsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResultsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResultsViewController(ResultsViewController const&) = delete;

  /// @brief Field _restartButton, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____restartButton;

  /// @brief Field _continueButton, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____continueButton;

  /// @brief Field _clearedPanel, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____clearedPanel;

  /// @brief Field _scoreText, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____scoreText;

  /// @brief Field _newHighScoreText, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____newHighScoreText;

  /// @brief Field _rankText, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____rankText;

  /// @brief Field _goodCutsPercentageText, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____goodCutsPercentageText;

  /// @brief Field _comboText, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____comboText;

  /// @brief Field _clearedBannerGo, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____clearedBannerGo;

  /// @brief Field _failedBannerGo, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____failedBannerGo;

  /// @brief Field _levelBar, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelBar> ____levelBar;

  /// @brief Field _levelClearedAudioClip, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ____levelClearedAudioClip;

  /// @brief Field _fireworksController, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FireworksController> ____fireworksController;

  /// @brief Field _songPreviewPlayer, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongPreviewPlayer> ____songPreviewPlayer;

  /// @brief Field _menuDestinationRequest, offset: 0xe8, size: 0x8, def value: None
  ::GlobalNamespace::MenuDestination* ____menuDestinationRequest;

  /// @brief Field continueButtonPressedEvent, offset: 0xf0, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::ResultsViewController>>* ___continueButtonPressedEvent;

  /// @brief Field restartButtonPressedEvent, offset: 0xf8, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::ResultsViewController>>* ___restartButtonPressedEvent;

  /// @brief Field _levelCompletionResults, offset: 0x100, size: 0x8, def value: None
  ::GlobalNamespace::LevelCompletionResults* ____levelCompletionResults;

  /// @brief Field _transformedBeatmapData, offset: 0x108, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyBeatmapData* ____transformedBeatmapData;

  /// @brief Field _beatmapKey, offset: 0x110, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ____beatmapKey;

  /// @brief Field _beatmapLevel, offset: 0x128, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ____beatmapLevel;

  /// @brief Field _startFireworksAfterDelayCoroutine, offset: 0x130, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ____startFireworksAfterDelayCoroutine;

  /// @brief Field _newHighScore, offset: 0x138, size: 0x1, def value: None
  bool ____newHighScore;

  /// @brief Field _practice, offset: 0x139, size: 0x1, def value: None
  bool ____practice;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5359 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ResultsViewController, 0x140>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____restartButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____continueButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____clearedPanel) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____scoreText) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____newHighScoreText) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____rankText) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____goodCutsPercentageText) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____comboText) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____clearedBannerGo) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____failedBannerGo) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____levelBar) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____levelClearedAudioClip) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____fireworksController) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____songPreviewPlayer) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____menuDestinationRequest) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ___continueButtonPressedEvent) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ___restartButtonPressedEvent) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____levelCompletionResults) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____transformedBeatmapData) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____beatmapKey) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____beatmapLevel) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____startFireworksAfterDelayCoroutine) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____newHighScore) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____practice) == 0x139, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ResultsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResultsViewController*, "", "ResultsViewController");
NEED_NO_BOX(::GlobalNamespace::__ResultsViewController___StartFireworksAfterDelay_d__33);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ResultsViewController___StartFireworksAfterDelay_d__33*, "", "ResultsViewController/<StartFireworksAfterDelay>d__33");
