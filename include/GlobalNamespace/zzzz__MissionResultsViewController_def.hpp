#pragma once
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
class MissionNode;
}
namespace UnityEngine::UI {
class Button;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class __MissionResultsViewController___StartFireworksAfterDelay_d__28;
}
namespace GlobalNamespace {
class ResultObjectiveListItemsList;
}
namespace UnityEngine {
class Sprite;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
namespace UnityEngine {
class Coroutine;
}
namespace GlobalNamespace {
class FireworksController;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class MissionCompletionResults;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class __MissionResultsViewController____c__DisplayClass29_0;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class MissionObjective;
}
namespace GlobalNamespace {
class MissionObjectiveResult;
}
namespace GlobalNamespace {
class ResultObjectiveListItem;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5700))
// CS Name: ::MissionResultsViewController::<StartFireworksAfterDelay>d__28*
class CORDL_TYPE __MissionResultsViewController___StartFireworksAfterDelay_d__28 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __get_delay, put = __set_delay)) float_t delay;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MissionResultsViewController* __4__this;

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

  constexpr ::GlobalNamespace::MissionResultsViewController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionResultsViewController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MissionResultsViewController* value);

  static inline ::GlobalNamespace::__MissionResultsViewController___StartFireworksAfterDelay_d__28* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x22cad04, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x22cad7c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x22cad80, size 0xbc, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x22cae3c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x22cae44, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x22cae84, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__MissionResultsViewController___StartFireworksAfterDelay_d__28", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissionResultsViewController___StartFireworksAfterDelay_d__28(__MissionResultsViewController___StartFireworksAfterDelay_d__28&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissionResultsViewController___StartFireworksAfterDelay_d__28", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissionResultsViewController___StartFireworksAfterDelay_d__28(__MissionResultsViewController___StartFireworksAfterDelay_d__28 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionResultsViewController___StartFireworksAfterDelay_d__28();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field delay, offset: 0x20, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MissionResultsViewController* _____4__this;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5701))
// CS Name: ::MissionResultsViewController::<>c__DisplayClass29_0*
class CORDL_TYPE __MissionResultsViewController____c__DisplayClass29_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field levelCleared, offset 0x10, size 0x1
  __declspec(property(get = __get_levelCleared, put = __set_levelCleared)) bool levelCleared;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MissionResultsViewController* __4__this;

  /// @brief Field missionObjectives, offset 0x20, size 0x8
  __declspec(property(get = __get_missionObjectives, put = __set_missionObjectives))::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> missionObjectives;

  /// @brief Field missionObjectiveResults, offset 0x28, size 0x8
  __declspec(property(get = __get_missionObjectiveResults,
                      put = __set_missionObjectiveResults))::ArrayW<::GlobalNamespace::MissionObjectiveResult*, ::Array<::GlobalNamespace::MissionObjectiveResult*>*> missionObjectiveResults;

  constexpr bool& __get_levelCleared();

  constexpr bool const& __get_levelCleared() const;

  constexpr void __set_levelCleared(bool value);

  constexpr ::GlobalNamespace::MissionResultsViewController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionResultsViewController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MissionResultsViewController* value);

  constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>& __get_missionObjectives();

  constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> const& __get_missionObjectives() const;

  constexpr void __set_missionObjectives(::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::MissionObjectiveResult*, ::Array<::GlobalNamespace::MissionObjectiveResult*>*>& __get_missionObjectiveResults();

  constexpr ::ArrayW<::GlobalNamespace::MissionObjectiveResult*, ::Array<::GlobalNamespace::MissionObjectiveResult*>*> const& __get_missionObjectiveResults() const;

  constexpr void __set_missionObjectiveResults(::ArrayW<::GlobalNamespace::MissionObjectiveResult*, ::Array<::GlobalNamespace::MissionObjectiveResult*>*> value);

  static inline ::GlobalNamespace::__MissionResultsViewController____c__DisplayClass29_0* New_ctor();

  /// @brief Method .ctor, addr 0x22cad2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <SetDataToUI>b__0, addr 0x22cae8c, size 0x410, virtual false, abstract: false, final false
  inline void _SetDataToUI_b__0(int32_t idx, ::GlobalNamespace::ResultObjectiveListItem* objectiveListItem);

  // Ctor Parameters [CppParam { name: "", ty: "__MissionResultsViewController____c__DisplayClass29_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissionResultsViewController____c__DisplayClass29_0(__MissionResultsViewController____c__DisplayClass29_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissionResultsViewController____c__DisplayClass29_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissionResultsViewController____c__DisplayClass29_0(__MissionResultsViewController____c__DisplayClass29_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionResultsViewController____c__DisplayClass29_0();

public:
  /// @brief Field levelCleared, offset: 0x10, size: 0x1, def value: None
  bool ___levelCleared;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MissionResultsViewController* _____4__this;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5702))
// CS Name: ::MissionResultsViewController*
class CORDL_TYPE MissionResultsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using __c__DisplayClass29_0 = ::GlobalNamespace::__MissionResultsViewController____c__DisplayClass29_0;

  using _StartFireworksAfterDelay_d__28 = ::GlobalNamespace::__MissionResultsViewController___StartFireworksAfterDelay_d__28;

  /// @brief Field _failedBannerGo, offset 0x70, size 0x8
  __declspec(property(get = __get__failedBannerGo, put = __set__failedBannerGo))::UnityEngine::GameObject* _failedBannerGo;

  /// @brief Field _clearedBannerGo, offset 0x78, size 0x8
  __declspec(property(get = __get__clearedBannerGo, put = __set__clearedBannerGo))::UnityEngine::GameObject* _clearedBannerGo;

  /// @brief Field _missionNameText, offset 0x80, size 0x8
  __declspec(property(get = __get__missionNameText, put = __set__missionNameText))::TMPro::TextMeshProUGUI* _missionNameText;

  /// @brief Field _songNameText, offset 0x88, size 0x8
  __declspec(property(get = __get__songNameText, put = __set__songNameText))::TMPro::TextMeshProUGUI* _songNameText;

  /// @brief Field _successIcon, offset 0x90, size 0x8
  __declspec(property(get = __get__successIcon, put = __set__successIcon))::UnityEngine::Sprite* _successIcon;

  /// @brief Field _successIconGlow, offset 0x98, size 0x8
  __declspec(property(get = __get__successIconGlow, put = __set__successIconGlow))::UnityEngine::Sprite* _successIconGlow;

  /// @brief Field _successColor, offset 0xa0, size 0x10
  __declspec(property(get = __get__successColor, put = __set__successColor))::UnityEngine::Color _successColor;

  /// @brief Field _failIcon, offset 0xb0, size 0x8
  __declspec(property(get = __get__failIcon, put = __set__failIcon))::UnityEngine::Sprite* _failIcon;

  /// @brief Field _failIconGlow, offset 0xb8, size 0x8
  __declspec(property(get = __get__failIconGlow, put = __set__failIconGlow))::UnityEngine::Sprite* _failIconGlow;

  /// @brief Field _failColor, offset 0xc0, size 0x10
  __declspec(property(get = __get__failColor, put = __set__failColor))::UnityEngine::Color _failColor;

  /// @brief Field _resultObjectiveListItemList, offset 0xd0, size 0x8
  __declspec(property(get = __get__resultObjectiveListItemList, put = __set__resultObjectiveListItemList))::GlobalNamespace::ResultObjectiveListItemsList* _resultObjectiveListItemList;

  /// @brief Field _continueButton, offset 0xd8, size 0x8
  __declspec(property(get = __get__continueButton, put = __set__continueButton))::UnityEngine::UI::Button* _continueButton;

  /// @brief Field _retryButton, offset 0xe0, size 0x8
  __declspec(property(get = __get__retryButton, put = __set__retryButton))::UnityEngine::UI::Button* _retryButton;

  /// @brief Field _levelClearedAudioClip, offset 0xe8, size 0x8
  __declspec(property(get = __get__levelClearedAudioClip, put = __set__levelClearedAudioClip))::UnityEngine::AudioClip* _levelClearedAudioClip;

  /// @brief Field _fireworksController, offset 0xf0, size 0x8
  __declspec(property(get = __get__fireworksController, put = __set__fireworksController))::GlobalNamespace::FireworksController* _fireworksController;

  /// @brief Field _songPreviewPlayer, offset 0xf8, size 0x8
  __declspec(property(get = __get__songPreviewPlayer, put = __set__songPreviewPlayer))::GlobalNamespace::SongPreviewPlayer* _songPreviewPlayer;

  /// @brief Field continueButtonPressedEvent, offset 0x100, size 0x8
  __declspec(property(get = __get_continueButtonPressedEvent, put = __set_continueButtonPressedEvent))::System::Action_1<::GlobalNamespace::MissionResultsViewController*>* continueButtonPressedEvent;

  /// @brief Field retryButtonPressedEvent, offset 0x108, size 0x8
  __declspec(property(get = __get_retryButtonPressedEvent, put = __set_retryButtonPressedEvent))::System::Action_1<::GlobalNamespace::MissionResultsViewController*>* retryButtonPressedEvent;

  /// @brief Field _missionNode, offset 0x110, size 0x8
  __declspec(property(get = __get__missionNode, put = __set__missionNode))::GlobalNamespace::MissionNode* _missionNode;

  /// @brief Field _missionCompletionResults, offset 0x118, size 0x8
  __declspec(property(get = __get__missionCompletionResults, put = __set__missionCompletionResults))::GlobalNamespace::MissionCompletionResults* _missionCompletionResults;

  /// @brief Field _startFireworksAfterDelayCoroutine, offset 0x120, size 0x8
  __declspec(property(get = __get__startFireworksAfterDelayCoroutine, put = __set__startFireworksAfterDelayCoroutine))::UnityEngine::Coroutine* _startFireworksAfterDelayCoroutine;

  constexpr ::UnityEngine::GameObject*& __get__failedBannerGo();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__failedBannerGo() const;

  constexpr void __set__failedBannerGo(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__clearedBannerGo();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__clearedBannerGo() const;

  constexpr void __set__clearedBannerGo(::UnityEngine::GameObject* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__missionNameText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__missionNameText() const;

  constexpr void __set__missionNameText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__songNameText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__songNameText() const;

  constexpr void __set__songNameText(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::Sprite*& __get__successIcon();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__successIcon() const;

  constexpr void __set__successIcon(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Sprite*& __get__successIconGlow();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__successIconGlow() const;

  constexpr void __set__successIconGlow(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Color& __get__successColor();

  constexpr ::UnityEngine::Color const& __get__successColor() const;

  constexpr void __set__successColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Sprite*& __get__failIcon();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__failIcon() const;

  constexpr void __set__failIcon(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Sprite*& __get__failIconGlow();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__failIconGlow() const;

  constexpr void __set__failIconGlow(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Color& __get__failColor();

  constexpr ::UnityEngine::Color const& __get__failColor() const;

  constexpr void __set__failColor(::UnityEngine::Color value);

  constexpr ::GlobalNamespace::ResultObjectiveListItemsList*& __get__resultObjectiveListItemList();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ResultObjectiveListItemsList*> const& __get__resultObjectiveListItemList() const;

  constexpr void __set__resultObjectiveListItemList(::GlobalNamespace::ResultObjectiveListItemsList* value);

  constexpr ::UnityEngine::UI::Button*& __get__continueButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__continueButton() const;

  constexpr void __set__continueButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__retryButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__retryButton() const;

  constexpr void __set__retryButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::AudioClip*& __get__levelClearedAudioClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& __get__levelClearedAudioClip() const;

  constexpr void __set__levelClearedAudioClip(::UnityEngine::AudioClip* value);

  constexpr ::GlobalNamespace::FireworksController*& __get__fireworksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FireworksController*> const& __get__fireworksController() const;

  constexpr void __set__fireworksController(::GlobalNamespace::FireworksController* value);

  constexpr ::GlobalNamespace::SongPreviewPlayer*& __get__songPreviewPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPreviewPlayer*> const& __get__songPreviewPlayer() const;

  constexpr void __set__songPreviewPlayer(::GlobalNamespace::SongPreviewPlayer* value);

  constexpr ::System::Action_1<::GlobalNamespace::MissionResultsViewController*>*& __get_continueButtonPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MissionResultsViewController*>*> const& __get_continueButtonPressedEvent() const;

  constexpr void __set_continueButtonPressedEvent(::System::Action_1<::GlobalNamespace::MissionResultsViewController*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::MissionResultsViewController*>*& __get_retryButtonPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MissionResultsViewController*>*> const& __get_retryButtonPressedEvent() const;

  constexpr void __set_retryButtonPressedEvent(::System::Action_1<::GlobalNamespace::MissionResultsViewController*>* value);

  constexpr ::GlobalNamespace::MissionNode*& __get__missionNode();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNode*> const& __get__missionNode() const;

  constexpr void __set__missionNode(::GlobalNamespace::MissionNode* value);

  constexpr ::GlobalNamespace::MissionCompletionResults*& __get__missionCompletionResults();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionCompletionResults*> const& __get__missionCompletionResults() const;

  constexpr void __set__missionCompletionResults(::GlobalNamespace::MissionCompletionResults* value);

  constexpr ::UnityEngine::Coroutine*& __get__startFireworksAfterDelayCoroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __get__startFireworksAfterDelayCoroutine() const;

  constexpr void __set__startFireworksAfterDelayCoroutine(::UnityEngine::Coroutine* value);

  /// @brief Method add_continueButtonPressedEvent, addr 0x22ca568, size 0xb4, virtual false, abstract: false, final false
  inline void add_continueButtonPressedEvent(::System::Action_1<::GlobalNamespace::MissionResultsViewController*>* value);

  /// @brief Method remove_continueButtonPressedEvent, addr 0x22ca61c, size 0xb4, virtual false, abstract: false, final false
  inline void remove_continueButtonPressedEvent(::System::Action_1<::GlobalNamespace::MissionResultsViewController*>* value);

  /// @brief Method add_retryButtonPressedEvent, addr 0x22ca6d0, size 0xb4, virtual false, abstract: false, final false
  inline void add_retryButtonPressedEvent(::System::Action_1<::GlobalNamespace::MissionResultsViewController*>* value);

  /// @brief Method remove_retryButtonPressedEvent, addr 0x22ca784, size 0xb4, virtual false, abstract: false, final false
  inline void remove_retryButtonPressedEvent(::System::Action_1<::GlobalNamespace::MissionResultsViewController*>* value);

  /// @brief Method Init, addr 0x22ca838, size 0x8, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::MissionNode* missionNode, ::GlobalNamespace::MissionCompletionResults* missionCompletionResults);

  /// @brief Method DidActivate, addr 0x22ca840, size 0x198, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x22cacc8, size 0x3c, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method StartFireworksAfterDelay, addr 0x22cac50, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* StartFireworksAfterDelay(float_t delay);

  /// @brief Method SetDataToUI, addr 0x22ca9d8, size 0x278, virtual false, abstract: false, final false
  inline void SetDataToUI();

  /// @brief Method ContinueButtonPressed, addr 0x22cad34, size 0x20, virtual false, abstract: false, final false
  inline void ContinueButtonPressed();

  /// @brief Method RetryButtonPressed, addr 0x22cad54, size 0x20, virtual false, abstract: false, final false
  inline void RetryButtonPressed();

  static inline ::GlobalNamespace::MissionResultsViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22cad74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionResultsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionResultsViewController(MissionResultsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionResultsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionResultsViewController(MissionResultsViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionResultsViewController();

public:
  /// @brief Field _failedBannerGo, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____failedBannerGo;

  /// @brief Field _clearedBannerGo, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____clearedBannerGo;

  /// @brief Field _missionNameText, offset: 0x80, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____missionNameText;

  /// @brief Field _songNameText, offset: 0x88, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____songNameText;

  /// @brief Field _successIcon, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____successIcon;

  /// @brief Field _successIconGlow, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____successIconGlow;

  /// @brief Field _successColor, offset: 0xa0, size: 0x10, def value: None
  ::UnityEngine::Color ____successColor;

  /// @brief Field _failIcon, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____failIcon;

  /// @brief Field _failIconGlow, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____failIconGlow;

  /// @brief Field _failColor, offset: 0xc0, size: 0x10, def value: None
  ::UnityEngine::Color ____failColor;

  /// @brief Field _resultObjectiveListItemList, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::ResultObjectiveListItemsList* ____resultObjectiveListItemList;

  /// @brief Field _continueButton, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____continueButton;

  /// @brief Field _retryButton, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____retryButton;

  /// @brief Field _levelClearedAudioClip, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::AudioClip* ____levelClearedAudioClip;

  /// @brief Field _fireworksController, offset: 0xf0, size: 0x8, def value: None
  ::GlobalNamespace::FireworksController* ____fireworksController;

  /// @brief Field _songPreviewPlayer, offset: 0xf8, size: 0x8, def value: None
  ::GlobalNamespace::SongPreviewPlayer* ____songPreviewPlayer;

  /// @brief Field continueButtonPressedEvent, offset: 0x100, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MissionResultsViewController*>* ___continueButtonPressedEvent;

  /// @brief Field retryButtonPressedEvent, offset: 0x108, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MissionResultsViewController*>* ___retryButtonPressedEvent;

  /// @brief Field _missionNode, offset: 0x110, size: 0x8, def value: None
  ::GlobalNamespace::MissionNode* ____missionNode;

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
