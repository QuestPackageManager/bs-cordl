#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__InputFieldView_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputFieldView)
namespace UnityEngine {
class YieldInstruction;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::UI {
struct __Selectable__SelectionState;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace HMUI {
class __InputFieldView___BlinkingCaretCoroutine_d__43;
}
namespace HMUI {
struct __InputFieldView__SelectionState;
}
namespace HMUI {
class __InputFieldView__InputFieldChanged;
}
namespace HMUI {
class UIKeyboard;
}
namespace UnityEngine::UI {
class Button;
}
namespace HMUI {
class ButtonBinder;
}
namespace HMUI {
class ImageView;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class CanvasGroup;
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
// Forward declare root types
namespace HMUI {
struct __InputFieldView__SelectionState;
}
namespace HMUI {
class InputFieldView;
}
namespace HMUI {
class __InputFieldView__InputFieldChanged;
}
namespace HMUI {
class __InputFieldView___BlinkingCaretCoroutine_d__43;
}
// Write type traits
MARK_VAL_T(::HMUI::__InputFieldView__SelectionState);
MARK_REF_PTR_T(::HMUI::InputFieldView);
MARK_REF_PTR_T(::HMUI::__InputFieldView__InputFieldChanged);
MARK_REF_PTR_T(::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43);
// Type: ::SelectionState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13746))
// CS Name: ::InputFieldView::SelectionState
struct CORDL_TYPE __InputFieldView__SelectionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputFieldView__SelectionState_Unwrapped
  enum struct ____InputFieldView__SelectionState_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Highlighted = static_cast<int32_t>(0x1),
    __E_Pressed = static_cast<int32_t>(0x2),
    __E_Disabled = static_cast<int32_t>(0x3),
    __E_Selected = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputFieldView__SelectionState_Unwrapped() const noexcept {
    return static_cast<____InputFieldView__SelectionState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputFieldView__SelectionState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputFieldView__SelectionState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::HMUI::__InputFieldView__SelectionState const Normal;

  /// @brief Field Highlighted value: static_cast<int32_t>(0x1)
  static ::HMUI::__InputFieldView__SelectionState const Highlighted;

  /// @brief Field Pressed value: static_cast<int32_t>(0x2)
  static ::HMUI::__InputFieldView__SelectionState const Pressed;

  /// @brief Field Disabled value: static_cast<int32_t>(0x3)
  static ::HMUI::__InputFieldView__SelectionState const Disabled;

  /// @brief Field Selected value: static_cast<int32_t>(0x4)
  static ::HMUI::__InputFieldView__SelectionState const Selected;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__InputFieldView__SelectionState, 0x4>, "Size mismatch!");

static_assert(offsetof(::HMUI::__InputFieldView__SelectionState, value__) == 0x0, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::InputFieldView
// SizeInfo { instance_size: 376, native_size: -1, calculated_instance_size: 376, calculated_native_size: 376, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13124)), TypeDefinitionIndex(TypeDefinitionIndex(10176)), TypeDefinitionIndex(TypeDefinitionIndex(13746))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13749))
// CS Name: ::HMUI::InputFieldView*
class CORDL_TYPE InputFieldView : public ::UnityEngine::UI::Selectable {
public:
  // Declarations
  using _BlinkingCaretCoroutine_d__43 = ::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43;

  using InputFieldChanged = ::HMUI::__InputFieldView__InputFieldChanged;

  using SelectionState = ::HMUI::__InputFieldView__SelectionState;

  /// @brief Field _textView, offset 0xf8, size 0x8
  __declspec(property(get = __get__textView, put = __set__textView))::TMPro::TextMeshProUGUI* _textView;

  /// @brief Field _textViewCanvasGroup, offset 0x100, size 0x8
  __declspec(property(get = __get__textViewCanvasGroup, put = __set__textViewCanvasGroup))::UnityEngine::CanvasGroup* _textViewCanvasGroup;

  /// @brief Field _blinkingCaret, offset 0x108, size 0x8
  __declspec(property(get = __get__blinkingCaret, put = __set__blinkingCaret))::HMUI::ImageView* _blinkingCaret;

  /// @brief Field _placeholderText, offset 0x110, size 0x8
  __declspec(property(get = __get__placeholderText, put = __set__placeholderText))::UnityEngine::GameObject* _placeholderText;

  /// @brief Field _clearSearchButton, offset 0x118, size 0x8
  __declspec(property(get = __get__clearSearchButton, put = __set__clearSearchButton))::UnityEngine::UI::Button* _clearSearchButton;

  /// @brief Field _useGlobalKeyboard, offset 0x120, size 0x1
  __declspec(property(get = __get__useGlobalKeyboard, put = __set__useGlobalKeyboard)) bool _useGlobalKeyboard;

  /// @brief Field _keyboardPositionOffset, offset 0x124, size 0xc
  __declspec(property(get = __get__keyboardPositionOffset, put = __set__keyboardPositionOffset))::UnityEngine::Vector3 _keyboardPositionOffset;

  /// @brief Field _useUppercase, offset 0x130, size 0x1
  __declspec(property(get = __get__useUppercase, put = __set__useUppercase)) bool _useUppercase;

  /// @brief Field _textLengthLimit, offset 0x134, size 0x4
  __declspec(property(get = __get__textLengthLimit, put = __set__textLengthLimit)) int32_t _textLengthLimit;

  /// @brief Field _caretOffset, offset 0x138, size 0x4
  __declspec(property(get = __get__caretOffset, put = __set__caretOffset)) float_t _caretOffset;

  /// @brief Field selectionStateDidChangeEvent, offset 0x140, size 0x8
  __declspec(property(get = __get_selectionStateDidChangeEvent, put = __set_selectionStateDidChangeEvent))::System::Action_1<::HMUI::__InputFieldView__SelectionState>* selectionStateDidChangeEvent;

  /// @brief Field _selectionState, offset 0x148, size 0x4
  __declspec(property(get = __get__selectionState, put = __set__selectionState))::HMUI::__InputFieldView__SelectionState _selectionState;

  /// @brief Field _text, offset 0x150, size 0x8
  __declspec(property(get = __get__text, put = __set__text))::StringW _text;

  /// @brief Field _hasKeyboardAssigned, offset 0x158, size 0x1
  __declspec(property(get = __get__hasKeyboardAssigned, put = __set__hasKeyboardAssigned)) bool _hasKeyboardAssigned;

  /// @brief Field _buttonBinder, offset 0x160, size 0x8
  __declspec(property(get = __get__buttonBinder, put = __set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _onValueChanged, offset 0x168, size 0x8
  __declspec(property(get = __get__onValueChanged, put = __set__onValueChanged))::HMUI::__InputFieldView__InputFieldChanged* _onValueChanged;

  /// @brief Field _blinkWaitYieldInstruction, offset 0x170, size 0x8
  __declspec(property(get = __get__blinkWaitYieldInstruction, put = __set__blinkWaitYieldInstruction))::UnityEngine::YieldInstruction* _blinkWaitYieldInstruction;

  __declspec(property(get = get_selectionState))::HMUI::__InputFieldView__SelectionState selectionState;

  __declspec(property(get = get_keyboardPositionOffset))::UnityEngine::Vector3 keyboardPositionOffset;

  __declspec(property(get = get_onValueChanged, put = set_onValueChanged))::HMUI::__InputFieldView__InputFieldChanged* onValueChanged;

  __declspec(property(get = get_useGlobalKeyboard)) bool useGlobalKeyboard;

  __declspec(property(get = get_text, put = set_text))::StringW text;

  constexpr ::TMPro::TextMeshProUGUI*& __get__textView();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__textView() const;

  constexpr void __set__textView(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::CanvasGroup*& __get__textViewCanvasGroup();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& __get__textViewCanvasGroup() const;

  constexpr void __set__textViewCanvasGroup(::UnityEngine::CanvasGroup* value);

  constexpr ::HMUI::ImageView*& __get__blinkingCaret();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> const& __get__blinkingCaret() const;

  constexpr void __set__blinkingCaret(::HMUI::ImageView* value);

  constexpr ::UnityEngine::GameObject*& __get__placeholderText();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__placeholderText() const;

  constexpr void __set__placeholderText(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::UI::Button*& __get__clearSearchButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__clearSearchButton() const;

  constexpr void __set__clearSearchButton(::UnityEngine::UI::Button* value);

  constexpr bool& __get__useGlobalKeyboard();

  constexpr bool const& __get__useGlobalKeyboard() const;

  constexpr void __set__useGlobalKeyboard(bool value);

  constexpr ::UnityEngine::Vector3& __get__keyboardPositionOffset();

  constexpr ::UnityEngine::Vector3 const& __get__keyboardPositionOffset() const;

  constexpr void __set__keyboardPositionOffset(::UnityEngine::Vector3 value);

  constexpr bool& __get__useUppercase();

  constexpr bool const& __get__useUppercase() const;

  constexpr void __set__useUppercase(bool value);

  constexpr int32_t& __get__textLengthLimit();

  constexpr int32_t const& __get__textLengthLimit() const;

  constexpr void __set__textLengthLimit(int32_t value);

  constexpr float_t& __get__caretOffset();

  constexpr float_t const& __get__caretOffset() const;

  constexpr void __set__caretOffset(float_t value);

  constexpr ::System::Action_1<::HMUI::__InputFieldView__SelectionState>*& __get_selectionStateDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::HMUI::__InputFieldView__SelectionState>*> const& __get_selectionStateDidChangeEvent() const;

  constexpr void __set_selectionStateDidChangeEvent(::System::Action_1<::HMUI::__InputFieldView__SelectionState>* value);

  constexpr ::HMUI::__InputFieldView__SelectionState& __get__selectionState();

  constexpr ::HMUI::__InputFieldView__SelectionState const& __get__selectionState() const;

  constexpr void __set__selectionState(::HMUI::__InputFieldView__SelectionState value);

  constexpr ::StringW& __get__text();

  constexpr ::StringW const& __get__text() const;

  constexpr void __set__text(::StringW value);

  constexpr bool& __get__hasKeyboardAssigned();

  constexpr bool const& __get__hasKeyboardAssigned() const;

  constexpr void __set__hasKeyboardAssigned(bool value);

  constexpr ::HMUI::ButtonBinder*& __get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __get__buttonBinder() const;

  constexpr void __set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr ::HMUI::__InputFieldView__InputFieldChanged*& __get__onValueChanged();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::__InputFieldView__InputFieldChanged*> const& __get__onValueChanged() const;

  constexpr void __set__onValueChanged(::HMUI::__InputFieldView__InputFieldChanged* value);

  constexpr ::UnityEngine::YieldInstruction*& __get__blinkWaitYieldInstruction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::YieldInstruction*> const& __get__blinkWaitYieldInstruction() const;

  constexpr void __set__blinkWaitYieldInstruction(::UnityEngine::YieldInstruction* value);

  /// @brief Method get_selectionState addr 0x1fe8fb8 size 0x8 virtual false final false
  inline ::HMUI::__InputFieldView__SelectionState get_selectionState();

  /// @brief Method get_keyboardPositionOffset addr 0x1fe8fc0 size 0x10 virtual false final false
  inline ::UnityEngine::Vector3 get_keyboardPositionOffset();

  /// @brief Method add_selectionStateDidChangeEvent addr 0x1fe8fd0 size 0xb4 virtual false final false
  inline void add_selectionStateDidChangeEvent(::System::Action_1<::HMUI::__InputFieldView__SelectionState>* value);

  /// @brief Method remove_selectionStateDidChangeEvent addr 0x1fe9084 size 0xb4 virtual false final false
  inline void remove_selectionStateDidChangeEvent(::System::Action_1<::HMUI::__InputFieldView__SelectionState>* value);

  /// @brief Method get_onValueChanged addr 0x1fe9138 size 0x8 virtual false final false
  inline ::HMUI::__InputFieldView__InputFieldChanged* get_onValueChanged();

  /// @brief Method set_onValueChanged addr 0x1fe9140 size 0x8 virtual false final false
  inline void set_onValueChanged(::HMUI::__InputFieldView__InputFieldChanged* value);

  /// @brief Method get_useGlobalKeyboard addr 0x1fe9148 size 0x8 virtual false final false
  inline bool get_useGlobalKeyboard();

  /// @brief Method get_text addr 0x1fe9150 size 0x8 virtual false final false
  inline ::StringW get_text();

  /// @brief Method set_text addr 0x1fe9158 size 0x58 virtual false final false
  inline void set_text(::StringW value);

  /// @brief Method Awake addr 0x1fe92d0 size 0xec virtual true final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x1fe93bc size 0x14 virtual true final false
  inline void OnDestroy();

  /// @brief Method DoStateTransition addr 0x1fe93d0 size 0x60 virtual true final false
  inline void DoStateTransition(::UnityEngine::UI::__Selectable__SelectionState state, bool instant);

  /// @brief Method ActivateKeyboard addr 0x1fe9430 size 0x1cc virtual false final false
  inline void ActivateKeyboard(::HMUI::UIKeyboard* keyboard);

  /// @brief Method DeactivateKeyboard addr 0x1fe9664 size 0x1a0 virtual false final false
  inline void DeactivateKeyboard(::HMUI::UIKeyboard* keyboard);

  /// @brief Method SetText addr 0x1fe9838 size 0x18 virtual false final false
  inline void SetText(::StringW value);

  /// @brief Method ClearInput addr 0x1fe9850 size 0x50 virtual false final false
  inline void ClearInput();

  /// @brief Method KeyboardKeyPressed addr 0x1fe98a0 size 0x128 virtual false final false
  inline void KeyboardKeyPressed(char16_t letter);

  /// @brief Method KeyboardDeletePressed addr 0x1fe99c8 size 0xdc virtual false final false
  inline void KeyboardDeletePressed();

  /// @brief Method BlinkingCaretCoroutine addr 0x1fe95fc size 0x68 virtual false final false
  inline ::System::Collections::IEnumerator* BlinkingCaretCoroutine();

  /// @brief Method UpdateCaretPosition addr 0x1fe91b0 size 0xf0 virtual false final false
  inline void UpdateCaretPosition();

  /// @brief Method UpdatePlaceholder addr 0x1fe92a0 size 0x30 virtual false final false
  inline void UpdatePlaceholder();

  /// @brief Method UpdateClearButton addr 0x1fe9804 size 0x34 virtual false final false
  inline void UpdateClearButton();

  static inline ::HMUI::InputFieldView* New_ctor();

  /// @brief Method .ctor addr 0x1fe9acc size 0x138 virtual false final false
  inline void _ctor();

  /// @brief Method <Awake>b__34_0 addr 0x1fe9c4c size 0x88 virtual false final false
  inline void _Awake_b__34_0();

  // Ctor Parameters [CppParam { name: "", ty: "InputFieldView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputFieldView(InputFieldView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputFieldView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputFieldView(InputFieldView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputFieldView();

public:
  /// @brief Field _textView, offset: 0xf8, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____textView;

  /// @brief Field _textViewCanvasGroup, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::CanvasGroup* ____textViewCanvasGroup;

  /// @brief Field _blinkingCaret, offset: 0x108, size: 0x8, def value: None
  ::HMUI::ImageView* ____blinkingCaret;

  /// @brief Field _placeholderText, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____placeholderText;

  /// @brief Field _clearSearchButton, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____clearSearchButton;

  /// @brief Field _useGlobalKeyboard, offset: 0x120, size: 0x1, def value: None
  bool ____useGlobalKeyboard;

  /// @brief Field _keyboardPositionOffset, offset: 0x124, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____keyboardPositionOffset;

  /// @brief Field _useUppercase, offset: 0x130, size: 0x1, def value: None
  bool ____useUppercase;

  /// @brief Field _textLengthLimit, offset: 0x134, size: 0x4, def value: None
  int32_t ____textLengthLimit;

  /// @brief Field _caretOffset, offset: 0x138, size: 0x4, def value: None
  float_t ____caretOffset;

  /// @brief Field selectionStateDidChangeEvent, offset: 0x140, size: 0x8, def value: None
  ::System::Action_1<::HMUI::__InputFieldView__SelectionState>* ___selectionStateDidChangeEvent;

  /// @brief Field _selectionState, offset: 0x148, size: 0x4, def value: None
  ::HMUI::__InputFieldView__SelectionState ____selectionState;

  /// @brief Field _text, offset: 0x150, size: 0x8, def value: None
  ::StringW ____text;

  /// @brief Field _hasKeyboardAssigned, offset: 0x158, size: 0x1, def value: None
  bool ____hasKeyboardAssigned;

  /// @brief Field _buttonBinder, offset: 0x160, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _onValueChanged, offset: 0x168, size: 0x8, def value: None
  ::HMUI::__InputFieldView__InputFieldChanged* ____onValueChanged;

  /// @brief Field _blinkWaitYieldInstruction, offset: 0x170, size: 0x8, def value: None
  ::UnityEngine::YieldInstruction* ____blinkWaitYieldInstruction;

  /// @brief Field kBlinkingRate offset 0xffffffff size 0x4
  static constexpr float_t kBlinkingRate{ 0.4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::InputFieldView, 0x178>, "Size mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____textView) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____textViewCanvasGroup) == 0x100, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____blinkingCaret) == 0x108, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____placeholderText) == 0x110, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____clearSearchButton) == 0x118, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____useGlobalKeyboard) == 0x120, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____keyboardPositionOffset) == 0x124, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____useUppercase) == 0x130, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____textLengthLimit) == 0x134, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____caretOffset) == 0x138, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ___selectionStateDidChangeEvent) == 0x140, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____selectionState) == 0x148, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____text) == 0x150, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____hasKeyboardAssigned) == 0x158, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____buttonBinder) == 0x160, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____onValueChanged) == 0x168, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____blinkWaitYieldInstruction) == 0x170, "Offset mismatch!");

} // namespace HMUI
// Type: ::InputFieldChanged
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10387), inst: 329 }), TypeDefinitionIndex(TypeDefinitionIndex(10387)),
// TypeDefinitionIndex(TypeDefinitionIndex(13749))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13747)) CS Name: ::InputFieldView::InputFieldChanged*
class CORDL_TYPE __InputFieldView__InputFieldChanged : public ::UnityEngine::Events::UnityEvent_1<::HMUI::InputFieldView*> {
public:
  // Declarations
  static inline ::HMUI::__InputFieldView__InputFieldChanged* New_ctor();

  /// @brief Method .ctor addr 0x1fe9c04 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__InputFieldView__InputFieldChanged", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputFieldView__InputFieldChanged(__InputFieldView__InputFieldChanged&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputFieldView__InputFieldChanged", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputFieldView__InputFieldChanged(__InputFieldView__InputFieldChanged const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputFieldView__InputFieldChanged();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__InputFieldView__InputFieldChanged, 0x30>, "Size mismatch!");

} // namespace HMUI
// Type: ::<BlinkingCaretCoroutine>d__43
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13748))
// CS Name: ::InputFieldView::<BlinkingCaretCoroutine>d__43*
class CORDL_TYPE __InputFieldView___BlinkingCaretCoroutine_d__43 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::HMUI::InputFieldView* __4__this;

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

  constexpr ::HMUI::InputFieldView*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::InputFieldView*> const& __get___4__this() const;

  constexpr void __set___4__this(::HMUI::InputFieldView* value);

  static inline ::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x1fe9aa4 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x1fe9cd4 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x1fe9cd8 size 0x8c virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fe9d64 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x1fe9d6c size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fe9dac size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__InputFieldView___BlinkingCaretCoroutine_d__43", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputFieldView___BlinkingCaretCoroutine_d__43(__InputFieldView___BlinkingCaretCoroutine_d__43&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputFieldView___BlinkingCaretCoroutine_d__43", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputFieldView___BlinkingCaretCoroutine_d__43(__InputFieldView___BlinkingCaretCoroutine_d__43 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputFieldView___BlinkingCaretCoroutine_d__43();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::HMUI::InputFieldView* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43, 0x28>, "Size mismatch!");

static_assert(offsetof(::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43, _____4__this) == 0x20, "Offset mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__InputFieldView__SelectionState, "HMUI", "InputFieldView/SelectionState");
NEED_NO_BOX(::HMUI::InputFieldView);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::InputFieldView*, "HMUI", "InputFieldView");
NEED_NO_BOX(::HMUI::__InputFieldView__InputFieldChanged);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__InputFieldView__InputFieldChanged*, "HMUI", "InputFieldView/InputFieldChanged");
NEED_NO_BOX(::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43*, "HMUI", "InputFieldView/<BlinkingCaretCoroutine>d__43");
