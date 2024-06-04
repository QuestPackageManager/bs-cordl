#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionResultsViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class ResultObjectiveListItem;
}
namespace GlobalNamespace {
class ResultObjectiveListItemsList;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
namespace GlobalNamespace {
class __MissionResultsViewController___StartFireworksAfterDelay_d__28;
}
namespace GlobalNamespace {
class __MissionResultsViewController____c__DisplayClass29_0;
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
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionResultsViewController;
}
namespace GlobalNamespace {
class __MissionResultsViewController___StartFireworksAfterDelay_d__28;
}
namespace GlobalNamespace {
class __MissionResultsViewController____c__DisplayClass29_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionResultsViewController);
MARK_REF_PTR_T(::GlobalNamespace::__MissionResultsViewController___StartFireworksAfterDelay_d__28);
MARK_REF_PTR_T(::GlobalNamespace::__MissionResultsViewController____c__DisplayClass29_0);
// Type: ::<StartFireworksAfterDelay>d__28
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionResultsViewController::<StartFireworksAfterDelay>d__28*
class CORDL_TYPE __MissionResultsViewController___StartFireworksAfterDelay_d__28 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MissionResultsViewController> __4__this;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_delay, put = __cordl_internal_set_delay)) float_t delay;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2667d70, size 0xbc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MissionResultsViewController___StartFireworksAfterDelay_d__28* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2667e2c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2667e34, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2667e74, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2667d6c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::MissionResultsViewController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MissionResultsViewController>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_delay() const;

  constexpr float_t& __cordl_internal_get_delay();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MissionResultsViewController> value);

  constexpr void __cordl_internal_set_delay(float_t value);

  /// @brief Method .ctor, addr 0x2667cf4, size 0x28, virtual false, abstract: false, final false
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
  constexpr __MissionResultsViewController___StartFireworksAfterDelay_d__28();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MissionResultsViewController___StartFireworksAfterDelay_d__28", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissionResultsViewController___StartFireworksAfterDelay_d__28(__MissionResultsViewController___StartFireworksAfterDelay_d__28&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissionResultsViewController___StartFireworksAfterDelay_d__28", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissionResultsViewController___StartFireworksAfterDelay_d__28(__MissionResultsViewController___StartFireworksAfterDelay_d__28 const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionResultsViewController___StartFireworksAfterDelay_d__28, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionResultsViewController___StartFireworksAfterDelay_d__28, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionResultsViewController___StartFireworksAfterDelay_d__28, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionResultsViewController___StartFireworksAfterDelay_d__28, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionResultsViewController___StartFireworksAfterDelay_d__28, _____4__this) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass29_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionResultsViewController::<>c__DisplayClass29_0*
class CORDL_TYPE __MissionResultsViewController____c__DisplayClass29_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MissionResultsViewController> __4__this;

  /// @brief Field levelCleared, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_levelCleared, put = __cordl_internal_set_levelCleared)) bool levelCleared;

  /// @brief Field missionObjectiveResults, offset 0x28, size 0x8
  __declspec(
      property(get = __cordl_internal_get_missionObjectiveResults,
               put = __cordl_internal_set_missionObjectiveResults))::ArrayW<::GlobalNamespace::MissionObjectiveResult*, ::Array<::GlobalNamespace::MissionObjectiveResult*>*> missionObjectiveResults;

  /// @brief Field missionObjectives, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_missionObjectives,
                      put = __cordl_internal_set_missionObjectives))::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> missionObjectives;

  static inline ::GlobalNamespace::__MissionResultsViewController____c__DisplayClass29_0* New_ctor();

  /// @brief Method <SetDataToUI>b__0, addr 0x2667e7c, size 0x410, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x2667d1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionResultsViewController____c__DisplayClass29_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MissionResultsViewController____c__DisplayClass29_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissionResultsViewController____c__DisplayClass29_0(__MissionResultsViewController____c__DisplayClass29_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissionResultsViewController____c__DisplayClass29_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissionResultsViewController____c__DisplayClass29_0(__MissionResultsViewController____c__DisplayClass29_0 const&) = delete;

  /// @brief Field levelCleared, offset: 0x10, size: 0x1, def value: None
  bool ___levelCleared;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionResultsViewController> _____4__this;

  /// @brief Field missionObjectives, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> ___missionObjectives;

  /// @brief Field missionObjectiveResults, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MissionObjectiveResult*, ::Array<::GlobalNamespace::MissionObjectiveResult*>*> ___missionObjectiveResults;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionResultsViewController____c__DisplayClass29_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionResultsViewController____c__DisplayClass29_0, ___levelCleared) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionResultsViewController____c__DisplayClass29_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionResultsViewController____c__DisplayClass29_0, ___missionObjectives) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionResultsViewController____c__DisplayClass29_0, ___missionObjectiveResults) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MissionResultsViewController
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionResultsViewController*
class CORDL_TYPE MissionResultsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using _StartFireworksAfterDelay_d__28 = ::GlobalNamespace::__MissionResultsViewController___StartFireworksAfterDelay_d__28;

  using __c__DisplayClass29_0 = ::GlobalNamespace::__MissionResultsViewController____c__DisplayClass29_0;

  /// @brief Field _clearedBannerGo, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__clearedBannerGo, put = __cordl_internal_set__clearedBannerGo))::UnityW<::UnityEngine::GameObject> _clearedBannerGo;

  /// @brief Field _continueButton, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__continueButton, put = __cordl_internal_set__continueButton))::UnityW<::UnityEngine::UI::Button> _continueButton;

  /// @brief Field _failColor, offset 0xc0, size 0x10
  __declspec(property(get = __cordl_internal_get__failColor, put = __cordl_internal_set__failColor))::UnityEngine::Color _failColor;

  /// @brief Field _failIcon, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__failIcon, put = __cordl_internal_set__failIcon))::UnityW<::UnityEngine::Sprite> _failIcon;

  /// @brief Field _failIconGlow, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__failIconGlow, put = __cordl_internal_set__failIconGlow))::UnityW<::UnityEngine::Sprite> _failIconGlow;

  /// @brief Field _failedBannerGo, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__failedBannerGo, put = __cordl_internal_set__failedBannerGo))::UnityW<::UnityEngine::GameObject> _failedBannerGo;

  /// @brief Field _fireworksController, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__fireworksController, put = __cordl_internal_set__fireworksController))::UnityW<::GlobalNamespace::FireworksController> _fireworksController;

  /// @brief Field _levelClearedAudioClip, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__levelClearedAudioClip, put = __cordl_internal_set__levelClearedAudioClip))::UnityW<::UnityEngine::AudioClip> _levelClearedAudioClip;

  /// @brief Field _missionCompletionResults, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__missionCompletionResults,
                      put = __cordl_internal_set__missionCompletionResults))::GlobalNamespace::MissionCompletionResults* _missionCompletionResults;

  /// @brief Field _missionNameText, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__missionNameText, put = __cordl_internal_set__missionNameText))::UnityW<::TMPro::TextMeshProUGUI> _missionNameText;

  /// @brief Field _missionNode, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__missionNode, put = __cordl_internal_set__missionNode))::UnityW<::GlobalNamespace::MissionNode> _missionNode;

  /// @brief Field _resultObjectiveListItemList, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__resultObjectiveListItemList,
                      put = __cordl_internal_set__resultObjectiveListItemList))::UnityW<::GlobalNamespace::ResultObjectiveListItemsList> _resultObjectiveListItemList;

  /// @brief Field _retryButton, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__retryButton, put = __cordl_internal_set__retryButton))::UnityW<::UnityEngine::UI::Button> _retryButton;

  /// @brief Field _songNameText, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__songNameText, put = __cordl_internal_set__songNameText))::UnityW<::TMPro::TextMeshProUGUI> _songNameText;

  /// @brief Field _songPreviewPlayer, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__songPreviewPlayer, put = __cordl_internal_set__songPreviewPlayer))::UnityW<::GlobalNamespace::SongPreviewPlayer> _songPreviewPlayer;

  /// @brief Field _startFireworksAfterDelayCoroutine, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__startFireworksAfterDelayCoroutine,
                      put = __cordl_internal_set__startFireworksAfterDelayCoroutine))::UnityEngine::Coroutine* _startFireworksAfterDelayCoroutine;

  /// @brief Field _successColor, offset 0xa0, size 0x10
  __declspec(property(get = __cordl_internal_get__successColor, put = __cordl_internal_set__successColor))::UnityEngine::Color _successColor;

  /// @brief Field _successIcon, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__successIcon, put = __cordl_internal_set__successIcon))::UnityW<::UnityEngine::Sprite> _successIcon;

  /// @brief Field _successIconGlow, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__successIconGlow, put = __cordl_internal_set__successIconGlow))::UnityW<::UnityEngine::Sprite> _successIconGlow;

  /// @brief Field continueButtonPressedEvent, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_continueButtonPressedEvent,
                      put = __cordl_internal_set_continueButtonPressedEvent))::System::Action_1<::UnityW<::GlobalNamespace::MissionResultsViewController>>* continueButtonPressedEvent;

  /// @brief Field retryButtonPressedEvent, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_retryButtonPressedEvent,
                      put = __cordl_internal_set_retryButtonPressedEvent))::System::Action_1<::UnityW<::GlobalNamespace::MissionResultsViewController>>* retryButtonPressedEvent;

  /// @brief Method ContinueButtonPressed, addr 0x2667d24, size 0x20, virtual false, abstract: false, final false
  inline void ContinueButtonPressed();

  /// @brief Method DidActivate, addr 0x2667838, size 0x198, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x2667cb8, size 0x3c, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method Init, addr 0x2667830, size 0x8, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::MissionNode* missionNode, ::GlobalNamespace::MissionCompletionResults* missionCompletionResults);

  static inline ::GlobalNamespace::MissionResultsViewController* New_ctor();

  /// @brief Method RetryButtonPressed, addr 0x2667d44, size 0x20, virtual false, abstract: false, final false
  inline void RetryButtonPressed();

  /// @brief Method SetDataToUI, addr 0x26679d0, size 0x270, virtual false, abstract: false, final false
  inline void SetDataToUI();

  /// @brief Method StartFireworksAfterDelay, addr 0x2667c40, size 0x78, virtual false, abstract: false, final false
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

  constexpr ::GlobalNamespace::MissionCompletionResults*& __cordl_internal_get__missionCompletionResults();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionCompletionResults*> const& __cordl_internal_get__missionCompletionResults() const;

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

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__startFireworksAfterDelayCoroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get__startFireworksAfterDelayCoroutine() const;

  constexpr ::UnityEngine::Color const& __cordl_internal_get__successColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__successColor();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__successIcon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__successIcon();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__successIconGlow() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__successIconGlow();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionResultsViewController>>*& __cordl_internal_get_continueButtonPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::MissionResultsViewController>>*> const& __cordl_internal_get_continueButtonPressedEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionResultsViewController>>*& __cordl_internal_get_retryButtonPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::MissionResultsViewController>>*> const& __cordl_internal_get_retryButtonPressedEvent() const;

  constexpr void __cordl_internal_set__clearedBannerGo(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__continueButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__failColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__failIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__failIconGlow(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__failedBannerGo(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__fireworksController(::UnityW<::GlobalNamespace::FireworksController> value);

  constexpr void __cordl_internal_set__levelClearedAudioClip(::UnityW<::UnityEngine::AudioClip> value);

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

  /// @brief Method .ctor, addr 0x2667d64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_continueButtonPressedEvent, addr 0x2667560, size 0xb4, virtual false, abstract: false, final false
  inline void add_continueButtonPressedEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionResultsViewController>>* value);

  /// @brief Method add_retryButtonPressedEvent, addr 0x26676c8, size 0xb4, virtual false, abstract: false, final false
  inline void add_retryButtonPressedEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionResultsViewController>>* value);

  /// @brief Method remove_continueButtonPressedEvent, addr 0x2667614, size 0xb4, virtual false, abstract: false, final false
  inline void remove_continueButtonPressedEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionResultsViewController>>* value);

  /// @brief Method remove_retryButtonPressedEvent, addr 0x266777c, size 0xb4, virtual false, abstract: false, final false
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

  /// @brief Field _failedBannerGo, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____failedBannerGo;

  /// @brief Field _clearedBannerGo, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____clearedBannerGo;

  /// @brief Field _missionNameText, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____missionNameText;

  /// @brief Field _songNameText, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____songNameText;

  /// @brief Field _successIcon, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____successIcon;

  /// @brief Field _successIconGlow, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____successIconGlow;

  /// @brief Field _successColor, offset: 0xa0, size: 0x10, def value: None
  ::UnityEngine::Color ____successColor;

  /// @brief Field _failIcon, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____failIcon;

  /// @brief Field _failIconGlow, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____failIconGlow;

  /// @brief Field _failColor, offset: 0xc0, size: 0x10, def value: None
  ::UnityEngine::Color ____failColor;

  /// @brief Field _resultObjectiveListItemList, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ResultObjectiveListItemsList> ____resultObjectiveListItemList;

  /// @brief Field _continueButton, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____continueButton;

  /// @brief Field _retryButton, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____retryButton;

  /// @brief Field _levelClearedAudioClip, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ____levelClearedAudioClip;

  /// @brief Field _fireworksController, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FireworksController> ____fireworksController;

  /// @brief Field _songPreviewPlayer, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongPreviewPlayer> ____songPreviewPlayer;

  /// @brief Field continueButtonPressedEvent, offset: 0x100, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::MissionResultsViewController>>* ___continueButtonPressedEvent;

  /// @brief Field retryButtonPressedEvent, offset: 0x108, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::MissionResultsViewController>>* ___retryButtonPressedEvent;

  /// @brief Field _missionNode, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionNode> ____missionNode;

  /// @brief Field _missionCompletionResults, offset: 0x118, size: 0x8, def value: None
  ::GlobalNamespace::MissionCompletionResults* ____missionCompletionResults;

  /// @brief Field _startFireworksAfterDelayCoroutine, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ____startFireworksAfterDelayCoroutine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionResultsViewController, 0x128>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____failedBannerGo) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____clearedBannerGo) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____missionNameText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____songNameText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____successIcon) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____successIconGlow) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____successColor) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____failIcon) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____failIconGlow) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____failColor) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____resultObjectiveListItemList) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____continueButton) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____retryButton) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____levelClearedAudioClip) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____fireworksController) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____songPreviewPlayer) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ___continueButtonPressedEvent) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ___retryButtonPressedEvent) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____missionNode) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____missionCompletionResults) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionResultsViewController, ____startFireworksAfterDelayCoroutine) == 0x120, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionResultsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionResultsViewController*, "", "MissionResultsViewController");
NEED_NO_BOX(::GlobalNamespace::__MissionResultsViewController___StartFireworksAfterDelay_d__28);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionResultsViewController___StartFireworksAfterDelay_d__28*, "", "MissionResultsViewController/<StartFireworksAfterDelay>d__28");
NEED_NO_BOX(::GlobalNamespace::__MissionResultsViewController____c__DisplayClass29_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionResultsViewController____c__DisplayClass29_0*, "", "MissionResultsViewController/<>c__DisplayClass29_0");
