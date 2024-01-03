#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(UIKeyboard)
namespace HMUI {
class ButtonBinder;
}
namespace HMUI {
class UIKeyboardKey;
}
namespace HMUI {
class __UIKeyboard____c__DisplayClass13_0;
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
class __UIKeyboard____c__DisplayClass13_0;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::UIKeyboard);
MARK_REF_PTR_T(::HMUI::__UIKeyboard____c__DisplayClass13_0);
// Type: ::<>c__DisplayClass13_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13538))
// CS Name: ::UIKeyboard::<>c__DisplayClass13_0*
class CORDL_TYPE __UIKeyboard____c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field key, offset 0x10, size 0x8
  __declspec(property(get = __get_key, put = __set_key))::HMUI::UIKeyboardKey* key;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::HMUI::UIKeyboard* __4__this;

  constexpr ::HMUI::UIKeyboardKey*& __get_key();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::UIKeyboardKey*> const& __get_key() const;

  constexpr void __set_key(::HMUI::UIKeyboardKey* value);

  constexpr ::HMUI::UIKeyboard*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::UIKeyboard*> const& __get___4__this() const;

  constexpr void __set___4__this(::HMUI::UIKeyboard* value);

  static inline ::HMUI::__UIKeyboard____c__DisplayClass13_0* New_ctor();

  /// @brief Method .ctor, addr 0x211e254, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Awake>b__2, addr 0x211e51c, size 0x24, virtual false, abstract: false, final false
  inline void _Awake_b__2();

  // Ctor Parameters [CppParam { name: "", ty: "__UIKeyboard____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UIKeyboard____c__DisplayClass13_0(__UIKeyboard____c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UIKeyboard____c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UIKeyboard____c__DisplayClass13_0(__UIKeyboard____c__DisplayClass13_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UIKeyboard____c__DisplayClass13_0();

public:
  /// @brief Field key, offset: 0x10, size: 0x8, def value: None
  ::HMUI::UIKeyboardKey* ___key;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::HMUI::UIKeyboard* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__UIKeyboard____c__DisplayClass13_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::HMUI::__UIKeyboard____c__DisplayClass13_0, ___key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__UIKeyboard____c__DisplayClass13_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::UIKeyboard
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13539))
// CS Name: ::HMUI::UIKeyboard*
class CORDL_TYPE UIKeyboard : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass13_0 = ::HMUI::__UIKeyboard____c__DisplayClass13_0;

  /// @brief Field _okButton, offset 0x18, size 0x8
  __declspec(property(get = __get__okButton, put = __set__okButton))::UnityEngine::UI::Button* _okButton;

  /// @brief Field okButtonWasPressedEvent, offset 0x20, size 0x8
  __declspec(property(get = __get_okButtonWasPressedEvent, put = __set_okButtonWasPressedEvent))::System::Action* okButtonWasPressedEvent;

  /// @brief Field keyWasPressedEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_keyWasPressedEvent, put = __set_keyWasPressedEvent))::System::Action_1<char16_t>* keyWasPressedEvent;

  /// @brief Field deleteButtonWasPressedEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_deleteButtonWasPressedEvent, put = __set_deleteButtonWasPressedEvent))::System::Action* deleteButtonWasPressedEvent;

  /// @brief Field _buttonBinder, offset 0x38, size 0x8
  __declspec(property(get = __get__buttonBinder, put = __set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _shouldCapitalize, offset 0x40, size 0x1
  __declspec(property(get = __get__shouldCapitalize, put = __set__shouldCapitalize)) bool _shouldCapitalize;

  /// @brief Field _letterBtnTexts, offset 0x48, size 0x8
  __declspec(property(get = __get__letterBtnTexts, put = __set__letterBtnTexts))::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI*>* _letterBtnTexts;

  constexpr ::UnityEngine::UI::Button*& __get__okButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__okButton() const;

  constexpr void __set__okButton(::UnityEngine::UI::Button* value);

  constexpr ::System::Action*& __get_okButtonWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_okButtonWasPressedEvent() const;

  constexpr void __set_okButtonWasPressedEvent(::System::Action* value);

  constexpr ::System::Action_1<char16_t>*& __get_keyWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<char16_t>*> const& __get_keyWasPressedEvent() const;

  constexpr void __set_keyWasPressedEvent(::System::Action_1<char16_t>* value);

  constexpr ::System::Action*& __get_deleteButtonWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_deleteButtonWasPressedEvent() const;

  constexpr void __set_deleteButtonWasPressedEvent(::System::Action* value);

  constexpr ::HMUI::ButtonBinder*& __get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __get__buttonBinder() const;

  constexpr void __set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr bool& __get__shouldCapitalize();

  constexpr bool const& __get__shouldCapitalize() const;

  constexpr void __set__shouldCapitalize(bool value);

  constexpr ::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI*>*& __get__letterBtnTexts();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI*>*> const& __get__letterBtnTexts() const;

  constexpr void __set__letterBtnTexts(::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI*>* value);

  /// @brief Method add_okButtonWasPressedEvent, addr 0x211db4c, size 0x9c, virtual false, abstract: false, final false
  inline void add_okButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_okButtonWasPressedEvent, addr 0x211dbe8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_okButtonWasPressedEvent(::System::Action* value);

  /// @brief Method add_keyWasPressedEvent, addr 0x211dc84, size 0xb0, virtual false, abstract: false, final false
  inline void add_keyWasPressedEvent(::System::Action_1<char16_t>* value);

  /// @brief Method remove_keyWasPressedEvent, addr 0x211dd34, size 0xb0, virtual false, abstract: false, final false
  inline void remove_keyWasPressedEvent(::System::Action_1<char16_t>* value);

  /// @brief Method add_deleteButtonWasPressedEvent, addr 0x211dde4, size 0x9c, virtual false, abstract: false, final false
  inline void add_deleteButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_deleteButtonWasPressedEvent, addr 0x211de80, size 0x9c, virtual false, abstract: false, final false
  inline void remove_deleteButtonWasPressedEvent(::System::Action* value);

  /// @brief Method Awake, addr 0x211df1c, size 0x338, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleKeyPress, addr 0x211e25c, size 0xe8, virtual false, abstract: false, final false
  inline void HandleKeyPress(::UnityEngine::KeyCode keyCode);

  /// @brief Method HandleCapsLockPressed, addr 0x211e344, size 0x18, virtual false, abstract: false, final false
  inline void HandleCapsLockPressed();

  /// @brief Method SetKeyboardCapitalization, addr 0x211e35c, size 0xec, virtual false, abstract: false, final false
  inline void SetKeyboardCapitalization(bool capitalize);

  /// @brief Method HasFontStyle, addr 0x211e448, size 0x20, virtual false, abstract: false, final false
  inline bool HasFontStyle(::TMPro::TextMeshProUGUI* text, ::TMPro::FontStyles style);

  /// @brief Method OnEnable, addr 0x211e468, size 0xc, virtual false, abstract: false, final false
  inline void OnEnable();

  static inline ::HMUI::UIKeyboard* New_ctor();

  /// @brief Method .ctor, addr 0x211e474, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Awake>b__13_0, addr 0x211e4e4, size 0x1c, virtual false, abstract: false, final false
  inline void _Awake_b__13_0();

  /// @brief Method <Awake>b__13_1, addr 0x211e500, size 0x1c, virtual false, abstract: false, final false
  inline void _Awake_b__13_1();

  // Ctor Parameters [CppParam { name: "", ty: "UIKeyboard", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIKeyboard(UIKeyboard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIKeyboard", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIKeyboard(UIKeyboard const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIKeyboard();

public:
  /// @brief Field _okButton, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____okButton;

  /// @brief Field okButtonWasPressedEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___okButtonWasPressedEvent;

  /// @brief Field keyWasPressedEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<char16_t>* ___keyWasPressedEvent;

  /// @brief Field deleteButtonWasPressedEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___deleteButtonWasPressedEvent;

  /// @brief Field _buttonBinder, offset: 0x38, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _shouldCapitalize, offset: 0x40, size: 0x1, def value: None
  bool ____shouldCapitalize;

  /// @brief Field _letterBtnTexts, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI*>* ____letterBtnTexts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::UIKeyboard, 0x50>, "Size mismatch!");

static_assert(offsetof(::HMUI::UIKeyboard, ____okButton) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::UIKeyboard, ___okButtonWasPressedEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::UIKeyboard, ___keyWasPressedEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::UIKeyboard, ___deleteButtonWasPressedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::UIKeyboard, ____buttonBinder) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::UIKeyboard, ____shouldCapitalize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::UIKeyboard, ____letterBtnTexts) == 0x48, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::UIKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::UIKeyboard*, "HMUI", "UIKeyboard");
NEED_NO_BOX(::HMUI::__UIKeyboard____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__UIKeyboard____c__DisplayClass13_0*, "HMUI", "UIKeyboard/<>c__DisplayClass13_0");
