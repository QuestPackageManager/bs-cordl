#pragma once
// IWYU pragma private; include "HMUI/UIKeyboard.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__CapsLockState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UIKeyboard)
namespace HMUI {
class ButtonBinder;
}
namespace HMUI {
struct CapsLockState;
}
namespace HMUI {
class UIKeyboardKey;
}
namespace HMUI {
class UIKeyboard___c__DisplayClass24_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace TMPro {
struct FontStyles;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
struct KeyCode;
}
// Forward declare root types
namespace HMUI {
class UIKeyboard;
}
namespace HMUI {
class UIKeyboard___c__DisplayClass24_0;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::UIKeyboard);
MARK_REF_PTR_T(::HMUI::UIKeyboard___c__DisplayClass24_0);
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.UIKeyboard/<>c__DisplayClass24_0
class CORDL_TYPE UIKeyboard___c__DisplayClass24_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::HMUI::UIKeyboard> __4__this;

  /// @brief Field key, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::UnityW<::HMUI::UIKeyboardKey> key;

  static inline ::HMUI::UIKeyboard___c__DisplayClass24_0* New_ctor();

  /// @brief Method <Awake>b__3, addr 0x5666a34, size 0x24, virtual false, abstract: false, final false
  inline void _Awake_b__3();

  constexpr ::UnityW<::HMUI::UIKeyboard> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::UIKeyboard>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::HMUI::UIKeyboardKey> const& __cordl_internal_get_key() const;

  constexpr ::UnityW<::HMUI::UIKeyboardKey>& __cordl_internal_get_key();

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::UIKeyboard> value);

  constexpr void __cordl_internal_set_key(::UnityW<::HMUI::UIKeyboardKey> value);

  /// @brief Method .ctor, addr 0x56663d0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIKeyboard___c__DisplayClass24_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIKeyboard___c__DisplayClass24_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIKeyboard___c__DisplayClass24_0(UIKeyboard___c__DisplayClass24_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIKeyboard___c__DisplayClass24_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIKeyboard___c__DisplayClass24_0(UIKeyboard___c__DisplayClass24_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19114 };

  /// @brief Field key, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::HMUI::UIKeyboardKey> ___key;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::UIKeyboard> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::UIKeyboard___c__DisplayClass24_0, ___key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::UIKeyboard___c__DisplayClass24_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::UIKeyboard___c__DisplayClass24_0, 0x20>, "Size mismatch!");

} // namespace HMUI
// Dependencies HMUI.CapsLockState, UnityEngine.MonoBehaviour
namespace HMUI {
// Is value type: false
// CS Name: HMUI.UIKeyboard
class CORDL_TYPE UIKeyboard : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass24_0 = ::HMUI::UIKeyboard___c__DisplayClass24_0;

  /// @brief Field _allowAtRuntime, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__allowAtRuntime, put = __cordl_internal_set__allowAtRuntime)) bool _allowAtRuntime;

  /// @brief Field _buttonBinder, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder)) ::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _capsLockState, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__capsLockState, put = __cordl_internal_set__capsLockState)) ::HMUI::CapsLockState _capsLockState;

  /// @brief Field _capsLockUppercaseOnceTime, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__capsLockUppercaseOnceTime, put = __cordl_internal_set__capsLockUppercaseOnceTime)) float_t _capsLockUppercaseOnceTime;

  /// @brief Field _letterBtnTexts, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__letterBtnTexts,
                      put = __cordl_internal_set__letterBtnTexts)) ::System::Collections::Generic::List_1<::UnityW<::TMPro::TextMeshProUGUI>>* _letterBtnTexts;

  /// @brief Field _okButton, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__okButton, put = __cordl_internal_set__okButton)) ::UnityW<::UnityEngine::UI::Button> _okButton;

  /// @brief Field _startsCapsLockState, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__startsCapsLockState, put = __cordl_internal_set__startsCapsLockState)) ::HMUI::CapsLockState _startsCapsLockState;

  __declspec(property(get = get_capsLockState)) ::HMUI::CapsLockState capsLockState;

  /// @brief Field capsLockStateChangedEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_capsLockStateChangedEvent, put = __cordl_internal_set_capsLockStateChangedEvent)) ::System::Action_1<::HMUI::CapsLockState>* capsLockStateChangedEvent;

  /// @brief Field deleteButtonWasPressedEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_deleteButtonWasPressedEvent, put = __cordl_internal_set_deleteButtonWasPressedEvent)) ::System::Action* deleteButtonWasPressedEvent;

  /// @brief Field keyWasPressedEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_keyWasPressedEvent, put = __cordl_internal_set_keyWasPressedEvent)) ::System::Action_1<char16_t>* keyWasPressedEvent;

  /// @brief Field okButtonWasPressedEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_okButtonWasPressedEvent, put = __cordl_internal_set_okButtonWasPressedEvent)) ::System::Action* okButtonWasPressedEvent;

  __declspec(property(get = get_shouldCapitalize)) bool shouldCapitalize;

  /// @brief Method Awake, addr 0x5665fc4, size 0x40c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleCapsLockPressed, addr 0x5666784, size 0x1a4, virtual false, abstract: false, final false
  inline void HandleCapsLockPressed();

  /// @brief Method HandleKeyPress, addr 0x5666518, size 0x120, virtual false, abstract: false, final false
  inline void HandleKeyPress(::UnityEngine::KeyCode keyCode);

  /// @brief Method HasFontStyle, addr 0x5666928, size 0x1c, virtual false, abstract: false, final false
  inline bool HasFontStyle(::TMPro::TextMeshProUGUI* text, ::TMPro::FontStyles style);

  static inline ::HMUI::UIKeyboard* New_ctor();

  /// @brief Method OnEnable, addr 0x5666944, size 0x40, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method SetCapsLockState, addr 0x5666638, size 0x20, virtual false, abstract: false, final false
  inline void SetCapsLockState(::HMUI::CapsLockState newState);

  /// @brief Method SetKeyboardCapitalization, addr 0x5666658, size 0x12c, virtual false, abstract: false, final false
  inline void SetKeyboardCapitalization(bool capitalize);

  /// @brief Method Update, addr 0x56663d4, size 0x144, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method <Awake>b__24_0, addr 0x56669e0, size 0x1c, virtual false, abstract: false, final false
  inline void _Awake_b__24_0();

  /// @brief Method <Awake>b__24_1, addr 0x56669fc, size 0x1c, virtual false, abstract: false, final false
  inline void _Awake_b__24_1();

  /// @brief Method <Awake>b__24_2, addr 0x5666a18, size 0x1c, virtual false, abstract: false, final false
  inline void _Awake_b__24_2();

  constexpr bool const& __cordl_internal_get__allowAtRuntime() const;

  constexpr bool& __cordl_internal_get__allowAtRuntime();

  constexpr ::HMUI::ButtonBinder* const& __cordl_internal_get__buttonBinder() const;

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::HMUI::CapsLockState const& __cordl_internal_get__capsLockState() const;

  constexpr ::HMUI::CapsLockState& __cordl_internal_get__capsLockState();

  constexpr float_t const& __cordl_internal_get__capsLockUppercaseOnceTime() const;

  constexpr float_t& __cordl_internal_get__capsLockUppercaseOnceTime();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TextMeshProUGUI>>* const& __cordl_internal_get__letterBtnTexts() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TextMeshProUGUI>>*& __cordl_internal_get__letterBtnTexts();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__okButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__okButton();

  constexpr ::HMUI::CapsLockState const& __cordl_internal_get__startsCapsLockState() const;

  constexpr ::HMUI::CapsLockState& __cordl_internal_get__startsCapsLockState();

  constexpr ::System::Action_1<::HMUI::CapsLockState>* const& __cordl_internal_get_capsLockStateChangedEvent() const;

  constexpr ::System::Action_1<::HMUI::CapsLockState>*& __cordl_internal_get_capsLockStateChangedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_deleteButtonWasPressedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_deleteButtonWasPressedEvent();

  constexpr ::System::Action_1<char16_t>* const& __cordl_internal_get_keyWasPressedEvent() const;

  constexpr ::System::Action_1<char16_t>*& __cordl_internal_get_keyWasPressedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_okButtonWasPressedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_okButtonWasPressedEvent();

  constexpr void __cordl_internal_set__allowAtRuntime(bool value);

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__capsLockState(::HMUI::CapsLockState value);

  constexpr void __cordl_internal_set__capsLockUppercaseOnceTime(float_t value);

  constexpr void __cordl_internal_set__letterBtnTexts(::System::Collections::Generic::List_1<::UnityW<::TMPro::TextMeshProUGUI>>* value);

  constexpr void __cordl_internal_set__okButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__startsCapsLockState(::HMUI::CapsLockState value);

  constexpr void __cordl_internal_set_capsLockStateChangedEvent(::System::Action_1<::HMUI::CapsLockState>* value);

  constexpr void __cordl_internal_set_deleteButtonWasPressedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_keyWasPressedEvent(::System::Action_1<char16_t>* value);

  constexpr void __cordl_internal_set_okButtonWasPressedEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x5666984, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_capsLockStateChangedEvent, addr 0x5665e2c, size 0xc0, virtual false, abstract: false, final false
  inline void add_capsLockStateChangedEvent(::System::Action_1<::HMUI::CapsLockState>* value);

  /// @brief Method add_deleteButtonWasPressedEvent, addr 0x5665cd4, size 0xac, virtual false, abstract: false, final false
  inline void add_deleteButtonWasPressedEvent(::System::Action* value);

  /// @brief Method add_keyWasPressedEvent, addr 0x5665b54, size 0xc0, virtual false, abstract: false, final false
  inline void add_keyWasPressedEvent(::System::Action_1<char16_t>* value);

  /// @brief Method add_okButtonWasPressedEvent, addr 0x56659fc, size 0xac, virtual false, abstract: false, final false
  inline void add_okButtonWasPressedEvent(::System::Action* value);

  /// @brief Method get_capsLockState, addr 0x5665fbc, size 0x8, virtual false, abstract: false, final false
  inline ::HMUI::CapsLockState get_capsLockState();

  /// @brief Method get_shouldCapitalize, addr 0x5665fac, size 0x10, virtual false, abstract: false, final false
  inline bool get_shouldCapitalize();

  /// @brief Method remove_capsLockStateChangedEvent, addr 0x5665eec, size 0xc0, virtual false, abstract: false, final false
  inline void remove_capsLockStateChangedEvent(::System::Action_1<::HMUI::CapsLockState>* value);

  /// @brief Method remove_deleteButtonWasPressedEvent, addr 0x5665d80, size 0xac, virtual false, abstract: false, final false
  inline void remove_deleteButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_keyWasPressedEvent, addr 0x5665c14, size 0xc0, virtual false, abstract: false, final false
  inline void remove_keyWasPressedEvent(::System::Action_1<char16_t>* value);

  /// @brief Method remove_okButtonWasPressedEvent, addr 0x5665aa8, size 0xac, virtual false, abstract: false, final false
  inline void remove_okButtonWasPressedEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIKeyboard();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIKeyboard", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIKeyboard(UIKeyboard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIKeyboard", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIKeyboard(UIKeyboard const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19115 };

  /// @brief Field kCapsLockPressWindowToToggleUppercase offset 0xffffffff size 0x4
  static constexpr float_t kCapsLockPressWindowToToggleUppercase{ static_cast<float_t>(0.2f) };

  /// @brief Field _okButton, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____okButton;

  /// @brief Field _startsCapsLockState, offset: 0x28, size: 0x4, def value: None
  ::HMUI::CapsLockState ____startsCapsLockState;

  /// @brief Field _allowAtRuntime, offset: 0x2c, size: 0x1, def value: None
  bool ____allowAtRuntime;

  /// @brief Field okButtonWasPressedEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___okButtonWasPressedEvent;

  /// @brief Field keyWasPressedEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<char16_t>* ___keyWasPressedEvent;

  /// @brief Field deleteButtonWasPressedEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___deleteButtonWasPressedEvent;

  /// @brief Field capsLockStateChangedEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::HMUI::CapsLockState>* ___capsLockStateChangedEvent;

  /// @brief Field _buttonBinder, offset: 0x50, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _capsLockState, offset: 0x58, size: 0x4, def value: None
  ::HMUI::CapsLockState ____capsLockState;

  /// @brief Field _capsLockUppercaseOnceTime, offset: 0x5c, size: 0x4, def value: None
  float_t ____capsLockUppercaseOnceTime;

  /// @brief Field _letterBtnTexts, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::TMPro::TextMeshProUGUI>>* ____letterBtnTexts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::UIKeyboard, ____okButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::UIKeyboard, ____startsCapsLockState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::UIKeyboard, ____allowAtRuntime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::HMUI::UIKeyboard, ___okButtonWasPressedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::UIKeyboard, ___keyWasPressedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::UIKeyboard, ___deleteButtonWasPressedEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::UIKeyboard, ___capsLockStateChangedEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::UIKeyboard, ____buttonBinder) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::UIKeyboard, ____capsLockState) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::UIKeyboard, ____capsLockUppercaseOnceTime) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::HMUI::UIKeyboard, ____letterBtnTexts) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::UIKeyboard, 0x68>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::UIKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::UIKeyboard*, "HMUI", "UIKeyboard");
NEED_NO_BOX(::HMUI::UIKeyboard___c__DisplayClass24_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::UIKeyboard___c__DisplayClass24_0*, "HMUI", "UIKeyboard/<>c__DisplayClass24_0");
