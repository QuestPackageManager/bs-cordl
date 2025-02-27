#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionResultsViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MissionResultsViewController)
namespace GlobalNamespace {
class FireworksController;
}
namespace GlobalNamespace {
class MissionCompletionResults;
}
namespace GlobalNamespace {
class MissionNode;
}
namespace GlobalNamespace {
class MissionObjectiveResult;
}
namespace GlobalNamespace {
class MissionObjective;
}
namespace GlobalNamespace {
class MissionResultsViewController__StartFireworksAfterDelay_d__29;
}
namespace GlobalNamespace {
class MissionResultsViewController___c__DisplayClass30_0;
}
namespace GlobalNamespace {
class ResultObjectiveListItem;
}
namespace GlobalNamespace {
class ResultObjectiveListItemsList;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
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
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionResultsViewController;
}
namespace GlobalNamespace {
class MissionResultsViewController__StartFireworksAfterDelay_d__29;
}
namespace GlobalNamespace {
class MissionResultsViewController___c__DisplayClass30_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionResultsViewController);
MARK_REF_PTR_T(::GlobalNamespace::MissionResultsViewController__StartFireworksAfterDelay_d__29);
MARK_REF_PTR_T(::GlobalNamespace::MissionResultsViewController___c__DisplayClass30_0);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionResultsViewController/<>c__DisplayClass30_0
class CORDL_TYPE MissionResultsViewController___c__DisplayClass30_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MissionResultsViewController> __4__this;

  /// @brief Field levelCleared, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_levelCleared, put = __cordl_internal_set_levelCleared)) bool levelCleared;

  /// @brief Field missionObjectiveResults, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_missionObjectiveResults,
                      put = __cordl_internal_set_missionObjectiveResults)) ::ArrayW<::GlobalNamespace::MissionObjectiveResult*, ::Array<::GlobalNamespace::MissionObjectiveResult*>*>
      missionObjectiveResults;

  /// @brief Field missionObjectives, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_missionObjectives,
                      put = __cordl_internal_set_missionObjectives)) ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>
      missionObjectives;

  static inline ::GlobalNamespace::MissionResultsViewController___c__DisplayClass30_0* New_ctor();

  /// @brief Method <SetDataToUI>b__0, addr 0x3b7a230, size 0x408, virtual false, abstract: false, final false
  inline void _SetDataToUI_b__0(int32_t idx, ::GlobalNamespace::ResultObjectiveListItem* objectiveListItem);

  constexpr ::UnityW<::GlobalNamespace::MissionResultsViewController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MissionResultsViewController>& __cordl_internal_get___4__this();

  constexpr bool const& __cordl_internal_get_levelCleared() const;

  constexpr bool& __cordl_internal_get_levelCleared();

  constexpr ::ArrayW<::GlobalNamespace::MissionObjectiveResult*, ::Array<::GlobalNamespace::MissionObjectiveResult*>*> const& __cordl_internal_get_missionObjectiveResults() const;

  constexpr ::ArrayW<::GlobalNamespace::MissionObjectiveResult*, ::Array<::GlobalNamespace::MissionObjectiveResult*>*>& __cordl_internal_get_missionObjectiveResults();

  constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> const& __cordl_internal_get_missionObjectives() const;

  constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>& __cordl_internal_get_missionObjectives();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MissionResultsViewController> value);

  constexpr void __cordl_internal_set_levelCleared(bool value);

  constexpr void __cordl_internal_set_missionObjectiveResults(::ArrayW<::GlobalNamespace::MissionObjectiveResult*, ::Array<::GlobalNamespace::MissionObjectiveResult*>*> value);

  constexpr void __cordl_internal_set_missionObjectives(::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> value);

  /// @brief Method .ctor, addr 0x3b7a1e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionResultsViewController___c__DisplayClass30_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionResultsViewController___c__DisplayClass30_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionResultsViewController___c__DisplayClass30_0(MissionResultsViewController___c__DisplayClass30_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionResultsViewController___c__DisplayClass30_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionResultsViewController___c__DisplayClass30_0(MissionResultsViewController___c__DisplayClass30_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5372 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionResultsViewController> _____4__this;

  /// @brief Field levelCleared, offset: 0x18, size: 0x1, def value: None
  bool ___levelCleared;

  /// @brief Field missionObjectives, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> ___missionObjectives;

  /// @brief Field missionObjectiveResults, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MissionObjectiveResult*, ::Array<::GlobalNamespace::MissionObjectiveResult*>*> ___missionObjectiveResults;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionResultsViewController___c__DisplayClass30_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController___c__DisplayClass30_0, ___levelCleared) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController___c__DisplayClass30_0, ___missionObjectives) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController___c__DisplayClass30_0, ___missionObjectiveResults) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionResultsViewController___c__DisplayClass30_0, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionResultsViewController/<StartFireworksAfterDelay>d__29
class CORDL_TYPE MissionResultsViewController__StartFireworksAfterDelay_d__29 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MissionResultsViewController> __4__this;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_delay, put = __cordl_internal_set_delay)) float_t delay;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3b7a63c, size 0xb8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::MissionResultsViewController__StartFireworksAfterDelay_d__29* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3b7a6f4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3b7a6fc, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3b7a734, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3b7a638, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::MissionResultsViewController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MissionResultsViewController>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_delay() const;

  constexpr float_t& __cordl_internal_get_delay();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MissionResultsViewController> value);

  constexpr void __cordl_internal_set_delay(float_t value);

  /// @brief Method .ctor, addr 0x3b7a1b8, size 0x28, virtual false, abstract: false, final false
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
  constexpr MissionResultsViewController__StartFireworksAfterDelay_d__29();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionResultsViewController__StartFireworksAfterDelay_d__29", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionResultsViewController__StartFireworksAfterDelay_d__29(MissionResultsViewController__StartFireworksAfterDelay_d__29&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionResultsViewController__StartFireworksAfterDelay_d__29", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionResultsViewController__StartFireworksAfterDelay_d__29(MissionResultsViewController__StartFireworksAfterDelay_d__29 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5373 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field delay, offset: 0x20, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionResultsViewController> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionResultsViewController__StartFireworksAfterDelay_d__29, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController__StartFireworksAfterDelay_d__29, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController__StartFireworksAfterDelay_d__29, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController__StartFireworksAfterDelay_d__29, _____4__this) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionResultsViewController__StartFireworksAfterDelay_d__29, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies HMUI.ViewController, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionResultsViewController
class CORDL_TYPE MissionResultsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using _StartFireworksAfterDelay_d__29 = ::GlobalNamespace::MissionResultsViewController__StartFireworksAfterDelay_d__29;

  using __c__DisplayClass30_0 = ::GlobalNamespace::MissionResultsViewController___c__DisplayClass30_0;

  /// @brief Field _clearedBannerGo, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__clearedBannerGo, put = __cordl_internal_set__clearedBannerGo)) ::UnityW<::UnityEngine::GameObject> _clearedBannerGo;

  /// @brief Field _continueButton, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__continueButton, put = __cordl_internal_set__continueButton)) ::UnityW<::UnityEngine::UI::Button> _continueButton;

  /// @brief Field _failColor, offset 0xc8, size 0x10
  __declspec(property(get = __cordl_internal_get__failColor, put = __cordl_internal_set__failColor)) ::UnityEngine::Color _failColor;

  /// @brief Field _failIcon, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__failIcon, put = __cordl_internal_set__failIcon)) ::UnityW<::UnityEngine::Sprite> _failIcon;

  /// @brief Field _failIconGlow, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__failIconGlow, put = __cordl_internal_set__failIconGlow)) ::UnityW<::UnityEngine::Sprite> _failIconGlow;

  /// @brief Field _failedBannerGo, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__failedBannerGo, put = __cordl_internal_set__failedBannerGo)) ::UnityW<::UnityEngine::GameObject> _failedBannerGo;

  /// @brief Field _fireworksController, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__fireworksController, put = __cordl_internal_set__fireworksController)) ::UnityW<::GlobalNamespace::FireworksController> _fireworksController;

  /// @brief Field _levelClearedAudioClip, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__levelClearedAudioClip, put = __cordl_internal_set__levelClearedAudioClip)) ::UnityW<::UnityEngine::AudioClip> _levelClearedAudioClip;

  /// @brief Field _levelClearedLocalizationKey, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__levelClearedLocalizationKey, put = __cordl_internal_set__levelClearedLocalizationKey)) ::StringW _levelClearedLocalizationKey;

  /// @brief Field _missionCompletionResults, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__missionCompletionResults,
                      put = __cordl_internal_set__missionCompletionResults)) ::GlobalNamespace::MissionCompletionResults* _missionCompletionResults;

  /// @brief Field _missionNameText, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__missionNameText, put = __cordl_internal_set__missionNameText)) ::UnityW<::TMPro::TextMeshProUGUI> _missionNameText;

  /// @brief Field _missionNode, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__missionNode, put = __cordl_internal_set__missionNode)) ::UnityW<::GlobalNamespace::MissionNode> _missionNode;

  /// @brief Field _resultObjectiveListItemList, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__resultObjectiveListItemList, put = __cordl_internal_set__resultObjectiveListItemList)) ::UnityW<::GlobalNamespace::ResultObjectiveListItemsList>
      _resultObjectiveListItemList;

  /// @brief Field _retryButton, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__retryButton, put = __cordl_internal_set__retryButton)) ::UnityW<::UnityEngine::UI::Button> _retryButton;

  /// @brief Field _songNameText, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__songNameText, put = __cordl_internal_set__songNameText)) ::UnityW<::TMPro::TextMeshProUGUI> _songNameText;

  /// @brief Field _songPreviewPlayer, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__songPreviewPlayer, put = __cordl_internal_set__songPreviewPlayer)) ::UnityW<::GlobalNamespace::SongPreviewPlayer> _songPreviewPlayer;

  /// @brief Field _startFireworksAfterDelayCoroutine, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__startFireworksAfterDelayCoroutine,
                      put = __cordl_internal_set__startFireworksAfterDelayCoroutine)) ::UnityEngine::Coroutine* _startFireworksAfterDelayCoroutine;

  /// @brief Field _successColor, offset 0xa8, size 0x10
  __declspec(property(get = __cordl_internal_get__successColor, put = __cordl_internal_set__successColor)) ::UnityEngine::Color _successColor;

  /// @brief Field _successIcon, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__successIcon, put = __cordl_internal_set__successIcon)) ::UnityW<::UnityEngine::Sprite> _successIcon;

  /// @brief Field _successIconGlow, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__successIconGlow, put = __cordl_internal_set__successIconGlow)) ::UnityW<::UnityEngine::Sprite> _successIconGlow;

  /// @brief Field continueButtonPressedEvent, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_continueButtonPressedEvent,
                      put = __cordl_internal_set_continueButtonPressedEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::MissionResultsViewController>>* continueButtonPressedEvent;

  /// @brief Field retryButtonPressedEvent, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_retryButtonPressedEvent,
                      put = __cordl_internal_set_retryButtonPressedEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::MissionResultsViewController>>* retryButtonPressedEvent;

  /// @brief Method ContinueButtonPressed, addr 0x3b7a1e8, size 0x20, virtual false, abstract: false, final false
  inline void ContinueButtonPressed();

  /// @brief Method DidActivate, addr 0x3b79d10, size 0x190, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3b7a17c, size 0x3c, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method Init, addr 0x3b79d08, size 0x8, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::MissionNode* missionNode, ::GlobalNamespace::MissionCompletionResults* missionCompletionResults);

  static inline ::GlobalNamespace::MissionResultsViewController* New_ctor();

  /// @brief Method RetryButtonPressed, addr 0x3b7a208, size 0x20, virtual false, abstract: false, final false
  inline void RetryButtonPressed();

  /// @brief Method SetDataToUI, addr 0x3b79ea0, size 0x26c, virtual false, abstract: false, final false
  inline void SetDataToUI();

  /// @brief Method StartFireworksAfterDelay, addr 0x3b7a10c, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* StartFireworksAfterDelay(float_t delay);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__clearedBannerGo() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__clearedBannerGo();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__continueButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__continueButton();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__failColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__failColor();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__failIcon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__failIcon();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__failIconGlow() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__failIconGlow();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__failedBannerGo() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__failedBannerGo();

  constexpr ::UnityW<::GlobalNamespace::FireworksController> const& __cordl_internal_get__fireworksController() const;

  constexpr ::UnityW<::GlobalNamespace::FireworksController>& __cordl_internal_get__fireworksController();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__levelClearedAudioClip() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__levelClearedAudioClip();

  constexpr ::StringW const& __cordl_internal_get__levelClearedLocalizationKey() const;

  constexpr ::StringW& __cordl_internal_get__levelClearedLocalizationKey();

  constexpr ::GlobalNamespace::MissionCompletionResults* const& __cordl_internal_get__missionCompletionResults() const;

  constexpr ::GlobalNamespace::MissionCompletionResults*& __cordl_internal_get__missionCompletionResults();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__missionNameText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__missionNameText();

  constexpr ::UnityW<::GlobalNamespace::MissionNode> const& __cordl_internal_get__missionNode() const;

  constexpr ::UnityW<::GlobalNamespace::MissionNode>& __cordl_internal_get__missionNode();

  constexpr ::UnityW<::GlobalNamespace::ResultObjectiveListItemsList> const& __cordl_internal_get__resultObjectiveListItemList() const;

  constexpr ::UnityW<::GlobalNamespace::ResultObjectiveListItemsList>& __cordl_internal_get__resultObjectiveListItemList();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__retryButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__retryButton();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__songNameText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__songNameText();

  constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer> const& __cordl_internal_get__songPreviewPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer>& __cordl_internal_get__songPreviewPlayer();

  constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__startFireworksAfterDelayCoroutine() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__startFireworksAfterDelayCoroutine();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__successColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__successColor();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__successIcon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__successIcon();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__successIconGlow() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__successIconGlow();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionResultsViewController>>* const& __cordl_internal_get_continueButtonPressedEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionResultsViewController>>*& __cordl_internal_get_continueButtonPressedEvent();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionResultsViewController>>* const& __cordl_internal_get_retryButtonPressedEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionResultsViewController>>*& __cordl_internal_get_retryButtonPressedEvent();

  constexpr void __cordl_internal_set__clearedBannerGo(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__continueButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__failColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__failIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__failIconGlow(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__failedBannerGo(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__fireworksController(::UnityW<::GlobalNamespace::FireworksController> value);

  constexpr void __cordl_internal_set__levelClearedAudioClip(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set__levelClearedLocalizationKey(::StringW value);

  constexpr void __cordl_internal_set__missionCompletionResults(::GlobalNamespace::MissionCompletionResults* value);

  constexpr void __cordl_internal_set__missionNameText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__missionNode(::UnityW<::GlobalNamespace::MissionNode> value);

  constexpr void __cordl_internal_set__resultObjectiveListItemList(::UnityW<::GlobalNamespace::ResultObjectiveListItemsList> value);

  constexpr void __cordl_internal_set__retryButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__songNameText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__songPreviewPlayer(::UnityW<::GlobalNamespace::SongPreviewPlayer> value);

  constexpr void __cordl_internal_set__startFireworksAfterDelayCoroutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set__successColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__successIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__successIconGlow(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set_continueButtonPressedEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionResultsViewController>>* value);

  constexpr void __cordl_internal_set_retryButtonPressedEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionResultsViewController>>* value);

  /// @brief Method .ctor, addr 0x3b7a228, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_continueButtonPressedEvent, addr 0x3b79a38, size 0xb4, virtual false, abstract: false, final false
  inline void add_continueButtonPressedEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionResultsViewController>>* value);

  /// @brief Method add_retryButtonPressedEvent, addr 0x3b79ba0, size 0xb4, virtual false, abstract: false, final false
  inline void add_retryButtonPressedEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionResultsViewController>>* value);

  /// @brief Method remove_continueButtonPressedEvent, addr 0x3b79aec, size 0xb4, virtual false, abstract: false, final false
  inline void remove_continueButtonPressedEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionResultsViewController>>* value);

  /// @brief Method remove_retryButtonPressedEvent, addr 0x3b79c54, size 0xb4, virtual false, abstract: false, final false
  inline void remove_retryButtonPressedEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionResultsViewController>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionResultsViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionResultsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionResultsViewController(MissionResultsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionResultsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionResultsViewController(MissionResultsViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5374 };

  /// @brief Field _failedBannerGo, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____failedBannerGo;

  /// @brief Field _clearedBannerGo, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____clearedBannerGo;

  /// @brief Field _missionNameText, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____missionNameText;

  /// @brief Field _songNameText, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____songNameText;

  /// @brief Field _successIcon, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____successIcon;

  /// @brief Field _successIconGlow, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____successIconGlow;

  /// @brief Field _successColor, offset: 0xa8, size: 0x10, def value: None
  ::UnityEngine::Color ____successColor;

  /// @brief Field _failIcon, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____failIcon;

  /// @brief Field _failIconGlow, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____failIconGlow;

  /// @brief Field _failColor, offset: 0xc8, size: 0x10, def value: None
  ::UnityEngine::Color ____failColor;

  /// @brief Field _resultObjectiveListItemList, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ResultObjectiveListItemsList> ____resultObjectiveListItemList;

  /// @brief Field _continueButton, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____continueButton;

  /// @brief Field _retryButton, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____retryButton;

  /// @brief Field _levelClearedAudioClip, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ____levelClearedAudioClip;

  /// @brief Field _levelClearedLocalizationKey, offset: 0xf8, size: 0x8, def value: None
  ::StringW ____levelClearedLocalizationKey;

  /// @brief Field _fireworksController, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FireworksController> ____fireworksController;

  /// @brief Field _songPreviewPlayer, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongPreviewPlayer> ____songPreviewPlayer;

  /// @brief Field continueButtonPressedEvent, offset: 0x110, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::MissionResultsViewController>>* ___continueButtonPressedEvent;

  /// @brief Field retryButtonPressedEvent, offset: 0x118, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::MissionResultsViewController>>* ___retryButtonPressedEvent;

  /// @brief Field _missionNode, offset: 0x120, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionNode> ____missionNode;

  /// @brief Field _missionCompletionResults, offset: 0x128, size: 0x8, def value: None
  ::GlobalNamespace::MissionCompletionResults* ____missionCompletionResults;

  /// @brief Field _startFireworksAfterDelayCoroutine, offset: 0x130, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ____startFireworksAfterDelayCoroutine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____failedBannerGo) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____clearedBannerGo) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____missionNameText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____songNameText) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____successIcon) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____successIconGlow) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____successColor) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____failIcon) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____failIconGlow) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____failColor) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____resultObjectiveListItemList) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____continueButton) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____retryButton) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____levelClearedAudioClip) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____levelClearedLocalizationKey) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____fireworksController) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____songPreviewPlayer) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ___continueButtonPressedEvent) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ___retryButtonPressedEvent) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____missionNode) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____missionCompletionResults) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____startFireworksAfterDelayCoroutine) == 0x130, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionResultsViewController, 0x138>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionResultsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionResultsViewController*, "", "MissionResultsViewController");
NEED_NO_BOX(::GlobalNamespace::MissionResultsViewController__StartFireworksAfterDelay_d__29);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionResultsViewController__StartFireworksAfterDelay_d__29*, "", "MissionResultsViewController/<StartFireworksAfterDelay>d__29");
NEED_NO_BOX(::GlobalNamespace::MissionResultsViewController___c__DisplayClass30_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionResultsViewController___c__DisplayClass30_0*, "", "MissionResultsViewController/<>c__DisplayClass30_0");
