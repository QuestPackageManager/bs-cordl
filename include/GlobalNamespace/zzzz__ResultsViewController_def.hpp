#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ResultsViewController)
namespace GlobalNamespace {
class FireworksController;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
namespace GlobalNamespace {
class LevelBar;
}
namespace GlobalNamespace {
class ResultsEnvironmentManager;
}
namespace GlobalNamespace {
class __ResultsViewController___StartFireworksAfterDelay_d__33;
}
namespace System {
template <typename T> class Action_1;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace UnityEngine {
class Coroutine;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class MenuDestination;
}
namespace UnityEngine {
class GameObject;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Object;
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
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5742))
// CS Name: ::ResultsViewController::<StartFireworksAfterDelay>d__33*
class CORDL_TYPE __ResultsViewController___StartFireworksAfterDelay_d__33 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __get_delay, put = __set_delay)) float_t delay;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::ResultsViewController* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr float_t& __get_delay();

  constexpr float_t const& __get_delay() const;

  constexpr void __set_delay(float_t value);

  constexpr ::GlobalNamespace::ResultsViewController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ResultsViewController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::ResultsViewController* value);

  static inline ::GlobalNamespace::__ResultsViewController___StartFireworksAfterDelay_d__33* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x22d7274, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x22d7680, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x22d7684, size 0xbc, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x22d7740, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x22d7748, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x22d7788, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__ResultsViewController___StartFireworksAfterDelay_d__33", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ResultsViewController___StartFireworksAfterDelay_d__33(__ResultsViewController___StartFireworksAfterDelay_d__33&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ResultsViewController___StartFireworksAfterDelay_d__33", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ResultsViewController___StartFireworksAfterDelay_d__33(__ResultsViewController___StartFireworksAfterDelay_d__33 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ResultsViewController___StartFireworksAfterDelay_d__33();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field delay, offset: 0x20, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ResultsViewController* _____4__this;

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
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 290, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5743))
// CS Name: ::ResultsViewController*
class CORDL_TYPE ResultsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using _StartFireworksAfterDelay_d__33 = ::GlobalNamespace::__ResultsViewController___StartFireworksAfterDelay_d__33;

  /// @brief Field _restartButton, offset 0x70, size 0x8
  __declspec(property(get = __get__restartButton, put = __set__restartButton))::UnityEngine::UI::Button* _restartButton;

  /// @brief Field _continueButton, offset 0x78, size 0x8
  __declspec(property(get = __get__continueButton, put = __set__continueButton))::UnityEngine::UI::Button* _continueButton;

  /// @brief Field _clearedPanel, offset 0x80, size 0x8
  __declspec(property(get = __get__clearedPanel, put = __set__clearedPanel))::UnityEngine::GameObject* _clearedPanel;

  /// @brief Field _scoreText, offset 0x88, size 0x8
  __declspec(property(get = __get__scoreText, put = __set__scoreText))::TMPro::TextMeshProUGUI* _scoreText;

  /// @brief Field _newHighScoreText, offset 0x90, size 0x8
  __declspec(property(get = __get__newHighScoreText, put = __set__newHighScoreText))::UnityEngine::GameObject* _newHighScoreText;

  /// @brief Field _rankText, offset 0x98, size 0x8
  __declspec(property(get = __get__rankText, put = __set__rankText))::TMPro::TextMeshProUGUI* _rankText;

  /// @brief Field _goodCutsPercentageText, offset 0xa0, size 0x8
  __declspec(property(get = __get__goodCutsPercentageText, put = __set__goodCutsPercentageText))::TMPro::TextMeshProUGUI* _goodCutsPercentageText;

  /// @brief Field _comboText, offset 0xa8, size 0x8
  __declspec(property(get = __get__comboText, put = __set__comboText))::TMPro::TextMeshProUGUI* _comboText;

  /// @brief Field _clearedBannerGo, offset 0xb0, size 0x8
  __declspec(property(get = __get__clearedBannerGo, put = __set__clearedBannerGo))::UnityEngine::GameObject* _clearedBannerGo;

  /// @brief Field _failedBannerGo, offset 0xb8, size 0x8
  __declspec(property(get = __get__failedBannerGo, put = __set__failedBannerGo))::UnityEngine::GameObject* _failedBannerGo;

  /// @brief Field _levelBar, offset 0xc0, size 0x8
  __declspec(property(get = __get__levelBar, put = __set__levelBar))::GlobalNamespace::LevelBar* _levelBar;

  /// @brief Field _levelClearedAudioClip, offset 0xc8, size 0x8
  __declspec(property(get = __get__levelClearedAudioClip, put = __set__levelClearedAudioClip))::UnityEngine::AudioClip* _levelClearedAudioClip;

  /// @brief Field _fireworksController, offset 0xd0, size 0x8
  __declspec(property(get = __get__fireworksController, put = __set__fireworksController))::GlobalNamespace::FireworksController* _fireworksController;

  /// @brief Field _songPreviewPlayer, offset 0xd8, size 0x8
  __declspec(property(get = __get__songPreviewPlayer, put = __set__songPreviewPlayer))::GlobalNamespace::SongPreviewPlayer* _songPreviewPlayer;

  /// @brief Field _resultsEnvironmentManager, offset 0xe0, size 0x8
  __declspec(property(get = __get__resultsEnvironmentManager, put = __set__resultsEnvironmentManager))::GlobalNamespace::ResultsEnvironmentManager* _resultsEnvironmentManager;

  /// @brief Field _menuDestinationRequest, offset 0xe8, size 0x8
  __declspec(property(get = __get__menuDestinationRequest, put = __set__menuDestinationRequest))::GlobalNamespace::MenuDestination* _menuDestinationRequest;

  /// @brief Field continueButtonPressedEvent, offset 0xf0, size 0x8
  __declspec(property(get = __get_continueButtonPressedEvent, put = __set_continueButtonPressedEvent))::System::Action_1<::GlobalNamespace::ResultsViewController*>* continueButtonPressedEvent;

  /// @brief Field restartButtonPressedEvent, offset 0xf8, size 0x8
  __declspec(property(get = __get_restartButtonPressedEvent, put = __set_restartButtonPressedEvent))::System::Action_1<::GlobalNamespace::ResultsViewController*>* restartButtonPressedEvent;

  /// @brief Field _levelCompletionResults, offset 0x100, size 0x8
  __declspec(property(get = __get__levelCompletionResults, put = __set__levelCompletionResults))::GlobalNamespace::LevelCompletionResults* _levelCompletionResults;

  /// @brief Field _difficultyBeatmap, offset 0x108, size 0x8
  __declspec(property(get = __get__difficultyBeatmap, put = __set__difficultyBeatmap))::GlobalNamespace::IDifficultyBeatmap* _difficultyBeatmap;

  /// @brief Field _transformedBeatmapData, offset 0x110, size 0x8
  __declspec(property(get = __get__transformedBeatmapData, put = __set__transformedBeatmapData))::GlobalNamespace::IReadonlyBeatmapData* _transformedBeatmapData;

  /// @brief Field _startFireworksAfterDelayCoroutine, offset 0x118, size 0x8
  __declspec(property(get = __get__startFireworksAfterDelayCoroutine, put = __set__startFireworksAfterDelayCoroutine))::UnityEngine::Coroutine* _startFireworksAfterDelayCoroutine;

  /// @brief Field _newHighScore, offset 0x120, size 0x1
  __declspec(property(get = __get__newHighScore, put = __set__newHighScore)) bool _newHighScore;

  /// @brief Field _practice, offset 0x121, size 0x1
  __declspec(property(get = __get__practice, put = __set__practice)) bool _practice;

  __declspec(property(get = get_practice)) bool practice;

  constexpr ::UnityEngine::UI::Button*& __get__restartButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__restartButton() const;

  constexpr void __set__restartButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__continueButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__continueButton() const;

  constexpr void __set__continueButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::GameObject*& __get__clearedPanel();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__clearedPanel() const;

  constexpr void __set__clearedPanel(::UnityEngine::GameObject* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__scoreText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__scoreText() const;

  constexpr void __set__scoreText(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::GameObject*& __get__newHighScoreText();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__newHighScoreText() const;

  constexpr void __set__newHighScoreText(::UnityEngine::GameObject* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__rankText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__rankText() const;

  constexpr void __set__rankText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__goodCutsPercentageText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__goodCutsPercentageText() const;

  constexpr void __set__goodCutsPercentageText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__comboText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__comboText() const;

  constexpr void __set__comboText(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::GameObject*& __get__clearedBannerGo();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__clearedBannerGo() const;

  constexpr void __set__clearedBannerGo(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__failedBannerGo();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__failedBannerGo() const;

  constexpr void __set__failedBannerGo(::UnityEngine::GameObject* value);

  constexpr ::GlobalNamespace::LevelBar*& __get__levelBar();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelBar*> const& __get__levelBar() const;

  constexpr void __set__levelBar(::GlobalNamespace::LevelBar* value);

  constexpr ::UnityEngine::AudioClip*& __get__levelClearedAudioClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& __get__levelClearedAudioClip() const;

  constexpr void __set__levelClearedAudioClip(::UnityEngine::AudioClip* value);

  constexpr ::GlobalNamespace::FireworksController*& __get__fireworksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FireworksController*> const& __get__fireworksController() const;

  constexpr void __set__fireworksController(::GlobalNamespace::FireworksController* value);

  constexpr ::GlobalNamespace::SongPreviewPlayer*& __get__songPreviewPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPreviewPlayer*> const& __get__songPreviewPlayer() const;

  constexpr void __set__songPreviewPlayer(::GlobalNamespace::SongPreviewPlayer* value);

  constexpr ::GlobalNamespace::ResultsEnvironmentManager*& __get__resultsEnvironmentManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ResultsEnvironmentManager*> const& __get__resultsEnvironmentManager() const;

  constexpr void __set__resultsEnvironmentManager(::GlobalNamespace::ResultsEnvironmentManager* value);

  constexpr ::GlobalNamespace::MenuDestination*& __get__menuDestinationRequest();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuDestination*> const& __get__menuDestinationRequest() const;

  constexpr void __set__menuDestinationRequest(::GlobalNamespace::MenuDestination* value);

  constexpr ::System::Action_1<::GlobalNamespace::ResultsViewController*>*& __get_continueButtonPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ResultsViewController*>*> const& __get_continueButtonPressedEvent() const;

  constexpr void __set_continueButtonPressedEvent(::System::Action_1<::GlobalNamespace::ResultsViewController*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::ResultsViewController*>*& __get_restartButtonPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ResultsViewController*>*> const& __get_restartButtonPressedEvent() const;

  constexpr void __set_restartButtonPressedEvent(::System::Action_1<::GlobalNamespace::ResultsViewController*>* value);

  constexpr ::GlobalNamespace::LevelCompletionResults*& __get__levelCompletionResults();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCompletionResults*> const& __get__levelCompletionResults() const;

  constexpr void __set__levelCompletionResults(::GlobalNamespace::LevelCompletionResults* value);

  constexpr ::GlobalNamespace::IDifficultyBeatmap*& __get__difficultyBeatmap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> const& __get__difficultyBeatmap() const;

  constexpr void __set__difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap* value);

  constexpr ::GlobalNamespace::IReadonlyBeatmapData*& __get__transformedBeatmapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> const& __get__transformedBeatmapData() const;

  constexpr void __set__transformedBeatmapData(::GlobalNamespace::IReadonlyBeatmapData* value);

  constexpr ::UnityEngine::Coroutine*& __get__startFireworksAfterDelayCoroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __get__startFireworksAfterDelayCoroutine() const;

  constexpr void __set__startFireworksAfterDelayCoroutine(::UnityEngine::Coroutine* value);

  constexpr bool& __get__newHighScore();

  constexpr bool const& __get__newHighScore() const;

  constexpr void __set__newHighScore(bool value);

  constexpr bool& __get__practice();

  constexpr bool const& __get__practice() const;

  constexpr void __set__practice(bool value);

  /// @brief Method add_continueButtonPressedEvent, addr 0x22d62b0, size 0xb0, virtual false, abstract: false, final false
  inline void add_continueButtonPressedEvent(::System::Action_1<::GlobalNamespace::ResultsViewController*>* value);

  /// @brief Method remove_continueButtonPressedEvent, addr 0x22d6360, size 0xb0, virtual false, abstract: false, final false
  inline void remove_continueButtonPressedEvent(::System::Action_1<::GlobalNamespace::ResultsViewController*>* value);

  /// @brief Method add_restartButtonPressedEvent, addr 0x22d6410, size 0xb0, virtual false, abstract: false, final false
  inline void add_restartButtonPressedEvent(::System::Action_1<::GlobalNamespace::ResultsViewController*>* value);

  /// @brief Method remove_restartButtonPressedEvent, addr 0x22d64c0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_restartButtonPressedEvent(::System::Action_1<::GlobalNamespace::ResultsViewController*>* value);

  /// @brief Method get_practice, addr 0x22d6570, size 0x8, virtual false, abstract: false, final false
  inline bool get_practice();

  /// @brief Method Init, addr 0x22d6578, size 0x1c, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData,
                   ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, bool practice, bool newHighScore);

  /// @brief Method DidActivate, addr 0x22d6594, size 0x1c8, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x22d71d4, size 0xa0, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method StartFireworksAfterDelay, addr 0x22d70a0, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* StartFireworksAfterDelay(float_t delay);

  /// @brief Method SetDataToUI, addr 0x22d675c, size 0x50c, virtual false, abstract: false, final false
  inline void SetDataToUI();

  /// @brief Method EnableResultsEnvironmentController, addr 0x22d6c68, size 0x438, virtual false, abstract: false, final false
  inline void EnableResultsEnvironmentController();

  /// @brief Method DisableResultEnvironmentController, addr 0x22d729c, size 0x374, virtual false, abstract: false, final false
  inline void DisableResultEnvironmentController();

  /// @brief Method ContinueButtonPressed, addr 0x22d7610, size 0x34, virtual false, abstract: false, final false
  inline void ContinueButtonPressed();

  /// @brief Method RestartButtonPressed, addr 0x22d7644, size 0x34, virtual false, abstract: false, final false
  inline void RestartButtonPressed();

  /// @brief Method ProcessMenuDestinationRequest, addr 0x22d7118, size 0xbc, virtual false, abstract: false, final false
  inline void ProcessMenuDestinationRequest(::GlobalNamespace::MenuDestination* menuDestination);

  static inline ::GlobalNamespace::ResultsViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22d7678, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ResultsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResultsViewController(ResultsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResultsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResultsViewController(ResultsViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResultsViewController();

public:
  /// @brief Field _restartButton, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____restartButton;

  /// @brief Field _continueButton, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____continueButton;

  /// @brief Field _clearedPanel, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____clearedPanel;

  /// @brief Field _scoreText, offset: 0x88, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____scoreText;

  /// @brief Field _newHighScoreText, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____newHighScoreText;

  /// @brief Field _rankText, offset: 0x98, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____rankText;

  /// @brief Field _goodCutsPercentageText, offset: 0xa0, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____goodCutsPercentageText;

  /// @brief Field _comboText, offset: 0xa8, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____comboText;

  /// @brief Field _clearedBannerGo, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____clearedBannerGo;

  /// @brief Field _failedBannerGo, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____failedBannerGo;

  /// @brief Field _levelBar, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::LevelBar* ____levelBar;

  /// @brief Field _levelClearedAudioClip, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::AudioClip* ____levelClearedAudioClip;

  /// @brief Field _fireworksController, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::FireworksController* ____fireworksController;

  /// @brief Field _songPreviewPlayer, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::SongPreviewPlayer* ____songPreviewPlayer;

  /// @brief Field _resultsEnvironmentManager, offset: 0xe0, size: 0x8, def value: None
  ::GlobalNamespace::ResultsEnvironmentManager* ____resultsEnvironmentManager;

  /// @brief Field _menuDestinationRequest, offset: 0xe8, size: 0x8, def value: None
  ::GlobalNamespace::MenuDestination* ____menuDestinationRequest;

  /// @brief Field continueButtonPressedEvent, offset: 0xf0, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ResultsViewController*>* ___continueButtonPressedEvent;

  /// @brief Field restartButtonPressedEvent, offset: 0xf8, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ResultsViewController*>* ___restartButtonPressedEvent;

  /// @brief Field _levelCompletionResults, offset: 0x100, size: 0x8, def value: None
  ::GlobalNamespace::LevelCompletionResults* ____levelCompletionResults;

  /// @brief Field _difficultyBeatmap, offset: 0x108, size: 0x8, def value: None
  ::GlobalNamespace::IDifficultyBeatmap* ____difficultyBeatmap;

  /// @brief Field _transformedBeatmapData, offset: 0x110, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyBeatmapData* ____transformedBeatmapData;

  /// @brief Field _startFireworksAfterDelayCoroutine, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ____startFireworksAfterDelayCoroutine;

  /// @brief Field _newHighScore, offset: 0x120, size: 0x1, def value: None
  bool ____newHighScore;

  /// @brief Field _practice, offset: 0x121, size: 0x1, def value: None
  bool ____practice;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ResultsViewController, 0x128>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____restartButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____continueButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____clearedPanel) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____scoreText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____newHighScoreText) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____rankText) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____goodCutsPercentageText) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____comboText) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____clearedBannerGo) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____failedBannerGo) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____levelBar) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____levelClearedAudioClip) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____fireworksController) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____songPreviewPlayer) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____resultsEnvironmentManager) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____menuDestinationRequest) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ___continueButtonPressedEvent) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ___restartButtonPressedEvent) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____levelCompletionResults) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____difficultyBeatmap) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____transformedBeatmapData) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____startFireworksAfterDelayCoroutine) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____newHighScore) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsViewController, ____practice) == 0x121, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ResultsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResultsViewController*, "", "ResultsViewController");
NEED_NO_BOX(::GlobalNamespace::__ResultsViewController___StartFireworksAfterDelay_d__33);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ResultsViewController___StartFireworksAfterDelay_d__33*, "", "ResultsViewController/<StartFireworksAfterDelay>d__33");
