#pragma once
// IWYU pragma private; include "HMUI/InputFieldView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputFieldView)
namespace HMUI {
class ButtonBinder;
}
namespace HMUI {
class ImageViewBase;
}
namespace HMUI {
class InputFieldView_InputFieldChanged;
}
namespace HMUI {
struct InputFieldView_SelectionState;
}
namespace HMUI {
class InputFieldView__BlinkingCaretCoroutine_d__43;
}
namespace HMUI {
class UIKeyboard;
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
namespace UnityEngine::UI {
struct Selectable_SelectionState;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class YieldInstruction;
}
// Forward declare root types
namespace HMUI {
struct InputFieldView_SelectionState;
}
namespace HMUI {
class InputFieldView;
}
namespace HMUI {
class InputFieldView_InputFieldChanged;
}
namespace HMUI {
class InputFieldView__BlinkingCaretCoroutine_d__43;
}
// Write type traits
MARK_VAL_T(::HMUI::InputFieldView_SelectionState);
MARK_REF_PTR_T(::HMUI::InputFieldView);
MARK_REF_PTR_T(::HMUI::InputFieldView_InputFieldChanged);
MARK_REF_PTR_T(::HMUI::InputFieldView__BlinkingCaretCoroutine_d__43);
// Dependencies
namespace HMUI {
// Is value type: true
// CS Name: HMUI.InputFieldView/SelectionState
struct CORDL_TYPE InputFieldView_SelectionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InputFieldView_SelectionState_Unwrapped
  enum struct __InputFieldView_SelectionState_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Highlighted = static_cast<int32_t>(0x1),
    __E_Pressed = static_cast<int32_t>(0x2),
    __E_Disabled = static_cast<int32_t>(0x3),
    __E_Selected = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputFieldView_SelectionState_Unwrapped() const noexcept {
    return static_cast<__InputFieldView_SelectionState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputFieldView_SelectionState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputFieldView_SelectionState(int32_t value__) noexcept;

  /// @brief Field Disabled value: I32(3)
  static ::HMUI::InputFieldView_SelectionState const Disabled;

  /// @brief Field Highlighted value: I32(1)
  static ::HMUI::InputFieldView_SelectionState const Highlighted;

  /// @brief Field Normal value: I32(0)
  static ::HMUI::InputFieldView_SelectionState const Normal;

  /// @brief Field Pressed value: I32(2)
  static ::HMUI::InputFieldView_SelectionState const Pressed;

  /// @brief Field Selected value: I32(4)
  static ::HMUI::InputFieldView_SelectionState const Selected;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16075 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HMUI::InputFieldView_SelectionState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::InputFieldView_SelectionState, 0x4>, "Size mismatch!");

} // namespace HMUI
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace HMUI {
// Is value type: false
// CS Name: HMUI.InputFieldView/InputFieldChanged
class CORDL_TYPE InputFieldView_InputFieldChanged : public ::UnityEngine::Events::UnityEvent_1<::HMUI::InputFieldView*> {
public:
  // Declarations
  static inline ::HMUI::InputFieldView_InputFieldChanged* New_ctor();

  /// @brief Method .ctor, addr 0x39f9ebc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputFieldView_InputFieldChanged();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputFieldView_InputFieldChanged", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputFieldView_InputFieldChanged(InputFieldView_InputFieldChanged&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputFieldView_InputFieldChanged", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputFieldView_InputFieldChanged(InputFieldView_InputFieldChanged const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16076 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::InputFieldView_InputFieldChanged, 0x30>, "Size mismatch!");

} // namespace HMUI
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.InputFieldView/<BlinkingCaretCoroutine>d__43
class CORDL_TYPE InputFieldView__BlinkingCaretCoroutine_d__43 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::HMUI::InputFieldView> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x39f9f90, size 0x8c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::InputFieldView__BlinkingCaretCoroutine_d__43* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x39fa01c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x39fa024, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x39fa05c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x39f9f8c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::HMUI::InputFieldView> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::InputFieldView>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::InputFieldView> value);

  /// @brief Method .ctor, addr 0x39f9d60, size 0x28, virtual false, abstract: false, final false
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
  constexpr InputFieldView__BlinkingCaretCoroutine_d__43();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputFieldView__BlinkingCaretCoroutine_d__43", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputFieldView__BlinkingCaretCoroutine_d__43(InputFieldView__BlinkingCaretCoroutine_d__43&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputFieldView__BlinkingCaretCoroutine_d__43", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputFieldView__BlinkingCaretCoroutine_d__43(InputFieldView__BlinkingCaretCoroutine_d__43 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16077 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::InputFieldView> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::InputFieldView__BlinkingCaretCoroutine_d__43, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView__BlinkingCaretCoroutine_d__43, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView__BlinkingCaretCoroutine_d__43, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::InputFieldView__BlinkingCaretCoroutine_d__43, 0x28>, "Size mismatch!");

} // namespace HMUI
// Dependencies HMUI.InputFieldView::SelectionState, UnityEngine.UI.Selectable, UnityEngine.Vector3
namespace HMUI {
// Is value type: false
// CS Name: HMUI.InputFieldView
class CORDL_TYPE InputFieldView : public ::UnityEngine::UI::Selectable {
public:
  // Declarations
  using InputFieldChanged = ::HMUI::InputFieldView_InputFieldChanged;

  using SelectionState = ::HMUI::InputFieldView_SelectionState;

  using _BlinkingCaretCoroutine_d__43 = ::HMUI::InputFieldView__BlinkingCaretCoroutine_d__43;

  /// @brief Field _blinkWaitYieldInstruction, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get__blinkWaitYieldInstruction, put = __cordl_internal_set__blinkWaitYieldInstruction)) ::UnityEngine::YieldInstruction* _blinkWaitYieldInstruction;

  /// @brief Field _blinkingCaret, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__blinkingCaret, put = __cordl_internal_set__blinkingCaret)) ::UnityW<::HMUI::ImageViewBase> _blinkingCaret;

  /// @brief Field _buttonBinder, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder)) ::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _caretOffset, offset 0x140, size 0x4
  __declspec(property(get = __cordl_internal_get__caretOffset, put = __cordl_internal_set__caretOffset)) float_t _caretOffset;

  /// @brief Field _clearSearchButton, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__clearSearchButton, put = __cordl_internal_set__clearSearchButton)) ::UnityW<::UnityEngine::UI::Button> _clearSearchButton;

  /// @brief Field _hasKeyboardAssigned, offset 0x160, size 0x1
  __declspec(property(get = __cordl_internal_get__hasKeyboardAssigned, put = __cordl_internal_set__hasKeyboardAssigned)) bool _hasKeyboardAssigned;

  /// @brief Field _keyboardPositionOffset, offset 0x12c, size 0xc
  __declspec(property(get = __cordl_internal_get__keyboardPositionOffset, put = __cordl_internal_set__keyboardPositionOffset)) ::UnityEngine::Vector3 _keyboardPositionOffset;

  /// @brief Field _onValueChanged, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get__onValueChanged, put = __cordl_internal_set__onValueChanged)) ::HMUI::InputFieldView_InputFieldChanged* _onValueChanged;

  /// @brief Field _placeholderText, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__placeholderText, put = __cordl_internal_set__placeholderText)) ::UnityW<::UnityEngine::GameObject> _placeholderText;

  /// @brief Field _selectionState, offset 0x150, size 0x4
  __declspec(property(get = __cordl_internal_get__selectionState, put = __cordl_internal_set__selectionState)) ::HMUI::InputFieldView_SelectionState _selectionState;

  /// @brief Field _text, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::StringW _text;

  /// @brief Field _textLengthLimit, offset 0x13c, size 0x4
  __declspec(property(get = __cordl_internal_get__textLengthLimit, put = __cordl_internal_set__textLengthLimit)) int32_t _textLengthLimit;

  /// @brief Field _textView, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__textView, put = __cordl_internal_set__textView)) ::UnityW<::TMPro::TextMeshProUGUI> _textView;

  /// @brief Field _textViewCanvasGroup, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__textViewCanvasGroup, put = __cordl_internal_set__textViewCanvasGroup)) ::UnityW<::UnityEngine::CanvasGroup> _textViewCanvasGroup;

  /// @brief Field _useGlobalKeyboard, offset 0x128, size 0x1
  __declspec(property(get = __cordl_internal_get__useGlobalKeyboard, put = __cordl_internal_set__useGlobalKeyboard)) bool _useGlobalKeyboard;

  /// @brief Field _useUppercase, offset 0x138, size 0x1
  __declspec(property(get = __cordl_internal_get__useUppercase, put = __cordl_internal_set__useUppercase)) bool _useUppercase;

  __declspec(property(get = get_keyboardPositionOffset)) ::UnityEngine::Vector3 keyboardPositionOffset;

  __declspec(property(get = get_onValueChanged, put = set_onValueChanged)) ::HMUI::InputFieldView_InputFieldChanged* onValueChanged;

  __declspec(property(get = get_selectionState)) ::HMUI::InputFieldView_SelectionState selectionState;

  /// @brief Field selectionStateDidChangeEvent, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_selectionStateDidChangeEvent,
                      put = __cordl_internal_set_selectionStateDidChangeEvent)) ::System::Action_1<::HMUI::InputFieldView_SelectionState>* selectionStateDidChangeEvent;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  __declspec(property(get = get_useGlobalKeyboard)) bool useGlobalKeyboard;

  /// @brief Method ActivateKeyboard, addr 0x39f96f8, size 0x1b8, virtual false, abstract: false, final false
  inline void ActivateKeyboard(::HMUI::UIKeyboard* keyboard);

  /// @brief Method Awake, addr 0x39f959c, size 0xe8, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method BlinkingCaretCoroutine, addr 0x39f98b0, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* BlinkingCaretCoroutine();

  /// @brief Method ClearInput, addr 0x39f9af4, size 0x50, virtual false, abstract: false, final false
  inline void ClearInput();

  /// @brief Method DeactivateKeyboard, addr 0x39f9910, size 0x198, virtual false, abstract: false, final false
  inline void DeactivateKeyboard(::HMUI::UIKeyboard* keyboard);

  /// @brief Method DoStateTransition, addr 0x39f9698, size 0x60, virtual true, abstract: false, final false
  inline void DoStateTransition(::UnityEngine::UI::Selectable_SelectionState state, bool instant);

  /// @brief Method KeyboardDeletePressed, addr 0x39f9c84, size 0xdc, virtual false, abstract: false, final false
  inline void KeyboardDeletePressed();

  /// @brief Method KeyboardKeyPressed, addr 0x39f9b44, size 0x140, virtual false, abstract: false, final false
  inline void KeyboardKeyPressed(char16_t letter);

  static inline ::HMUI::InputFieldView* New_ctor();

  /// @brief Method OnDestroy, addr 0x39f9684, size 0x14, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetText, addr 0x39f9adc, size 0x18, virtual false, abstract: false, final false
  inline void SetText(::StringW value);

  /// @brief Method UpdateCaretPosition, addr 0x39f9480, size 0xec, virtual false, abstract: false, final false
  inline void UpdateCaretPosition();

  /// @brief Method UpdateClearButton, addr 0x39f9aa8, size 0x34, virtual false, abstract: false, final false
  inline void UpdateClearButton();

  /// @brief Method UpdatePlaceholder, addr 0x39f956c, size 0x30, virtual false, abstract: false, final false
  inline void UpdatePlaceholder();

  /// @brief Method <Awake>b__34_0, addr 0x39f9f04, size 0x88, virtual false, abstract: false, final false
  inline void _Awake_b__34_0();

  constexpr ::UnityEngine::YieldInstruction* const& __cordl_internal_get__blinkWaitYieldInstruction() const;

  constexpr ::UnityEngine::YieldInstruction*& __cordl_internal_get__blinkWaitYieldInstruction();

  constexpr ::UnityW<::HMUI::ImageViewBase> const& __cordl_internal_get__blinkingCaret() const;

  constexpr ::UnityW<::HMUI::ImageViewBase>& __cordl_internal_get__blinkingCaret();

  constexpr ::HMUI::ButtonBinder* const& __cordl_internal_get__buttonBinder() const;

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr float_t const& __cordl_internal_get__caretOffset() const;

  constexpr float_t& __cordl_internal_get__caretOffset();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__clearSearchButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__clearSearchButton();

  constexpr bool const& __cordl_internal_get__hasKeyboardAssigned() const;

  constexpr bool& __cordl_internal_get__hasKeyboardAssigned();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__keyboardPositionOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__keyboardPositionOffset();

  constexpr ::HMUI::InputFieldView_InputFieldChanged* const& __cordl_internal_get__onValueChanged() const;

  constexpr ::HMUI::InputFieldView_InputFieldChanged*& __cordl_internal_get__onValueChanged();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__placeholderText() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__placeholderText();

  constexpr ::HMUI::InputFieldView_SelectionState const& __cordl_internal_get__selectionState() const;

  constexpr ::HMUI::InputFieldView_SelectionState& __cordl_internal_get__selectionState();

  constexpr ::StringW const& __cordl_internal_get__text() const;

  constexpr ::StringW& __cordl_internal_get__text();

  constexpr int32_t const& __cordl_internal_get__textLengthLimit() const;

  constexpr int32_t& __cordl_internal_get__textLengthLimit();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__textView() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__textView();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__textViewCanvasGroup() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__textViewCanvasGroup();

  constexpr bool const& __cordl_internal_get__useGlobalKeyboard() const;

  constexpr bool& __cordl_internal_get__useGlobalKeyboard();

  constexpr bool const& __cordl_internal_get__useUppercase() const;

  constexpr bool& __cordl_internal_get__useUppercase();

  constexpr ::System::Action_1<::HMUI::InputFieldView_SelectionState>* const& __cordl_internal_get_selectionStateDidChangeEvent() const;

  constexpr ::System::Action_1<::HMUI::InputFieldView_SelectionState>*& __cordl_internal_get_selectionStateDidChangeEvent();

  constexpr void __cordl_internal_set__blinkWaitYieldInstruction(::UnityEngine::YieldInstruction* value);

  constexpr void __cordl_internal_set__blinkingCaret(::UnityW<::HMUI::ImageViewBase> value);

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__caretOffset(float_t value);

  constexpr void __cordl_internal_set__clearSearchButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__hasKeyboardAssigned(bool value);

  constexpr void __cordl_internal_set__keyboardPositionOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__onValueChanged(::HMUI::InputFieldView_InputFieldChanged* value);

  constexpr void __cordl_internal_set__placeholderText(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__selectionState(::HMUI::InputFieldView_SelectionState value);

  constexpr void __cordl_internal_set__text(::StringW value);

  constexpr void __cordl_internal_set__textLengthLimit(int32_t value);

  constexpr void __cordl_internal_set__textView(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__textViewCanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set__useGlobalKeyboard(bool value);

  constexpr void __cordl_internal_set__useUppercase(bool value);

  constexpr void __cordl_internal_set_selectionStateDidChangeEvent(::System::Action_1<::HMUI::InputFieldView_SelectionState>* value);

  /// @brief Method .ctor, addr 0x39f9d88, size 0x134, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_selectionStateDidChangeEvent, addr 0x39f9298, size 0xb4, virtual false, abstract: false, final false
  inline void add_selectionStateDidChangeEvent(::System::Action_1<::HMUI::InputFieldView_SelectionState>* value);

  /// @brief Method get_keyboardPositionOffset, addr 0x39f9410, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_keyboardPositionOffset();

  /// @brief Method get_onValueChanged, addr 0x39f9288, size 0x8, virtual false, abstract: false, final false
  inline ::HMUI::InputFieldView_InputFieldChanged* get_onValueChanged();

  /// @brief Method get_selectionState, addr 0x39f9400, size 0x8, virtual false, abstract: false, final false
  inline ::HMUI::InputFieldView_SelectionState get_selectionState();

  /// @brief Method get_text, addr 0x39f9420, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method get_useGlobalKeyboard, addr 0x39f9408, size 0x8, virtual false, abstract: false, final false
  inline bool get_useGlobalKeyboard();

  /// @brief Method remove_selectionStateDidChangeEvent, addr 0x39f934c, size 0xb4, virtual false, abstract: false, final false
  inline void remove_selectionStateDidChangeEvent(::System::Action_1<::HMUI::InputFieldView_SelectionState>* value);

  /// @brief Method set_onValueChanged, addr 0x39f9290, size 0x8, virtual false, abstract: false, final false
  inline void set_onValueChanged(::HMUI::InputFieldView_InputFieldChanged* value);

  /// @brief Method set_text, addr 0x39f9428, size 0x58, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputFieldView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputFieldView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputFieldView(InputFieldView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputFieldView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputFieldView(InputFieldView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16078 };

  /// @brief Field kBlinkingRate offset 0xffffffff size 0x4
  static constexpr float_t kBlinkingRate{ static_cast<float_t>(0.4f) };

  /// @brief Field _textView, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____textView;

  /// @brief Field _textViewCanvasGroup, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____textViewCanvasGroup;

  /// @brief Field _blinkingCaret, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::HMUI::ImageViewBase> ____blinkingCaret;

  /// @brief Field _placeholderText, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____placeholderText;

  /// @brief Field _clearSearchButton, offset: 0x120, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____clearSearchButton;

  /// @brief Field _useGlobalKeyboard, offset: 0x128, size: 0x1, def value: None
  bool ____useGlobalKeyboard;

  /// @brief Field _keyboardPositionOffset, offset: 0x12c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____keyboardPositionOffset;

  /// @brief Field _useUppercase, offset: 0x138, size: 0x1, def value: None
  bool ____useUppercase;

  /// @brief Field _textLengthLimit, offset: 0x13c, size: 0x4, def value: None
  int32_t ____textLengthLimit;

  /// @brief Field _caretOffset, offset: 0x140, size: 0x4, def value: None
  float_t ____caretOffset;

  /// @brief Field selectionStateDidChangeEvent, offset: 0x148, size: 0x8, def value: None
  ::System::Action_1<::HMUI::InputFieldView_SelectionState>* ___selectionStateDidChangeEvent;

  /// @brief Field _selectionState, offset: 0x150, size: 0x4, def value: None
  ::HMUI::InputFieldView_SelectionState ____selectionState;

  /// @brief Field _text, offset: 0x158, size: 0x8, def value: None
  ::StringW ____text;

  /// @brief Field _hasKeyboardAssigned, offset: 0x160, size: 0x1, def value: None
  bool ____hasKeyboardAssigned;

  /// @brief Field _buttonBinder, offset: 0x168, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _onValueChanged, offset: 0x170, size: 0x8, def value: None
  ::HMUI::InputFieldView_InputFieldChanged* ____onValueChanged;

  /// @brief Field _blinkWaitYieldInstruction, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::YieldInstruction* ____blinkWaitYieldInstruction;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::InputFieldView, ____textView) == 0x100, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____textViewCanvasGroup) == 0x108, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____blinkingCaret) == 0x110, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____placeholderText) == 0x118, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____clearSearchButton) == 0x120, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____useGlobalKeyboard) == 0x128, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____keyboardPositionOffset) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____useUppercase) == 0x138, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____textLengthLimit) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____caretOffset) == 0x140, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ___selectionStateDidChangeEvent) == 0x148, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____selectionState) == 0x150, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____text) == 0x158, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____hasKeyboardAssigned) == 0x160, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____buttonBinder) == 0x168, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____onValueChanged) == 0x170, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldView, ____blinkWaitYieldInstruction) == 0x178, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::InputFieldView, 0x180>, "Size mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::InputFieldView_SelectionState, "HMUI", "InputFieldView/SelectionState");
NEED_NO_BOX(::HMUI::InputFieldView);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::InputFieldView*, "HMUI", "InputFieldView");
NEED_NO_BOX(::HMUI::InputFieldView_InputFieldChanged);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::InputFieldView_InputFieldChanged*, "HMUI", "InputFieldView/InputFieldChanged");
NEED_NO_BOX(::HMUI::InputFieldView__BlinkingCaretCoroutine_d__43);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::InputFieldView__BlinkingCaretCoroutine_d__43*, "HMUI", "InputFieldView/<BlinkingCaretCoroutine>d__43");
