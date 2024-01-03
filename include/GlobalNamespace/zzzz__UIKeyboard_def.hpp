#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UIKeyboard)
namespace GlobalNamespace {
class __UIKeyboard____c__DisplayClass21_0;
}
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class TextMeshProButton;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class UIKeyboard;
}
namespace GlobalNamespace {
class __UIKeyboard____c__DisplayClass21_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UIKeyboard);
MARK_REF_PTR_T(::GlobalNamespace::__UIKeyboard____c__DisplayClass21_0);
// Type: ::<>c__DisplayClass21_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5465))
// CS Name: ::UIKeyboard::<>c__DisplayClass21_0*
class CORDL_TYPE __UIKeyboard____c__DisplayClass21_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field key, offset 0x10, size 0x8
  __declspec(property(get = __get_key, put = __set_key))::StringW key;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::UIKeyboard* __4__this;

  constexpr ::StringW& __get_key();

  constexpr ::StringW const& __get_key() const;

  constexpr void __set_key(::StringW value);

  constexpr ::GlobalNamespace::UIKeyboard*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::UIKeyboard*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::UIKeyboard* value);

  static inline ::GlobalNamespace::__UIKeyboard____c__DisplayClass21_0* New_ctor();

  /// @brief Method .ctor, addr 0x228148c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Awake>b__4, addr 0x2281520, size 0x50, virtual false, abstract: false, final false
  inline void _Awake_b__4();

  // Ctor Parameters [CppParam { name: "", ty: "__UIKeyboard____c__DisplayClass21_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UIKeyboard____c__DisplayClass21_0(__UIKeyboard____c__DisplayClass21_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UIKeyboard____c__DisplayClass21_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UIKeyboard____c__DisplayClass21_0(__UIKeyboard____c__DisplayClass21_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UIKeyboard____c__DisplayClass21_0();

public:
  /// @brief Field key, offset: 0x10, size: 0x8, def value: None
  ::StringW ___key;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::UIKeyboard* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UIKeyboard____c__DisplayClass21_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__UIKeyboard____c__DisplayClass21_0, ___key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__UIKeyboard____c__DisplayClass21_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::UIKeyboard
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 82, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5466))
// CS Name: ::UIKeyboard*
class CORDL_TYPE UIKeyboard : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass21_0 = ::GlobalNamespace::__UIKeyboard____c__DisplayClass21_0;

  /// @brief Field _keyButtonPrefab, offset 0x18, size 0x8
  __declspec(property(get = __get__keyButtonPrefab, put = __set__keyButtonPrefab))::GlobalNamespace::TextMeshProButton* _keyButtonPrefab;

  /// @brief Field textKeyWasPressedEvent, offset 0x20, size 0x8
  __declspec(property(get = __get_textKeyWasPressedEvent, put = __set_textKeyWasPressedEvent))::System::Action_1<char16_t>* textKeyWasPressedEvent;

  /// @brief Field deleteButtonWasPressedEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_deleteButtonWasPressedEvent, put = __set_deleteButtonWasPressedEvent))::System::Action* deleteButtonWasPressedEvent;

  /// @brief Field okButtonWasPressedEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_okButtonWasPressedEvent, put = __set_okButtonWasPressedEvent))::System::Action* okButtonWasPressedEvent;

  /// @brief Field cancelButtonWasPressedEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_cancelButtonWasPressedEvent, put = __set_cancelButtonWasPressedEvent))::System::Action* cancelButtonWasPressedEvent;

  /// @brief Field _okButton, offset 0x40, size 0x8
  __declspec(property(get = __get__okButton, put = __set__okButton))::UnityEngine::UI::Button* _okButton;

  /// @brief Field _cancelButton, offset 0x48, size 0x8
  __declspec(property(get = __get__cancelButton, put = __set__cancelButton))::UnityEngine::UI::Button* _cancelButton;

  /// @brief Field _okButtonInteractivity, offset 0x50, size 0x1
  __declspec(property(get = __get__okButtonInteractivity, put = __set__okButtonInteractivity)) bool _okButtonInteractivity;

  /// @brief Field _hideCancelButton, offset 0x51, size 0x1
  __declspec(property(get = __get__hideCancelButton, put = __set__hideCancelButton)) bool _hideCancelButton;

  __declspec(property(put = set_enableOkButtonInteractivity)) bool enableOkButtonInteractivity;

  __declspec(property(put = set_hideCancelButton)) bool hideCancelButton;

  constexpr ::GlobalNamespace::TextMeshProButton*& __get__keyButtonPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TextMeshProButton*> const& __get__keyButtonPrefab() const;

  constexpr void __set__keyButtonPrefab(::GlobalNamespace::TextMeshProButton* value);

  constexpr ::System::Action_1<char16_t>*& __get_textKeyWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<char16_t>*> const& __get_textKeyWasPressedEvent() const;

  constexpr void __set_textKeyWasPressedEvent(::System::Action_1<char16_t>* value);

  constexpr ::System::Action*& __get_deleteButtonWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_deleteButtonWasPressedEvent() const;

  constexpr void __set_deleteButtonWasPressedEvent(::System::Action* value);

  constexpr ::System::Action*& __get_okButtonWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_okButtonWasPressedEvent() const;

  constexpr void __set_okButtonWasPressedEvent(::System::Action* value);

  constexpr ::System::Action*& __get_cancelButtonWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_cancelButtonWasPressedEvent() const;

  constexpr void __set_cancelButtonWasPressedEvent(::System::Action* value);

  constexpr ::UnityEngine::UI::Button*& __get__okButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__okButton() const;

  constexpr void __set__okButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__cancelButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__cancelButton() const;

  constexpr void __set__cancelButton(::UnityEngine::UI::Button* value);

  constexpr bool& __get__okButtonInteractivity();

  constexpr bool const& __get__okButtonInteractivity() const;

  constexpr void __set__okButtonInteractivity(bool value);

  constexpr bool& __get__hideCancelButton();

  constexpr bool const& __get__hideCancelButton() const;

  constexpr void __set__hideCancelButton(bool value);

  /// @brief Method add_textKeyWasPressedEvent, addr 0x22800e4, size 0xb0, virtual false, abstract: false, final false
  inline void add_textKeyWasPressedEvent(::System::Action_1<char16_t>* value);

  /// @brief Method remove_textKeyWasPressedEvent, addr 0x2280194, size 0xb0, virtual false, abstract: false, final false
  inline void remove_textKeyWasPressedEvent(::System::Action_1<char16_t>* value);

  /// @brief Method add_deleteButtonWasPressedEvent, addr 0x2280244, size 0x9c, virtual false, abstract: false, final false
  inline void add_deleteButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_deleteButtonWasPressedEvent, addr 0x22802e0, size 0x9c, virtual false, abstract: false, final false
  inline void remove_deleteButtonWasPressedEvent(::System::Action* value);

  /// @brief Method add_okButtonWasPressedEvent, addr 0x228037c, size 0x9c, virtual false, abstract: false, final false
  inline void add_okButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_okButtonWasPressedEvent, addr 0x2280418, size 0x9c, virtual false, abstract: false, final false
  inline void remove_okButtonWasPressedEvent(::System::Action* value);

  /// @brief Method add_cancelButtonWasPressedEvent, addr 0x22804b4, size 0x9c, virtual false, abstract: false, final false
  inline void add_cancelButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_cancelButtonWasPressedEvent, addr 0x2280550, size 0x9c, virtual false, abstract: false, final false
  inline void remove_cancelButtonWasPressedEvent(::System::Action* value);

  /// @brief Method set_enableOkButtonInteractivity, addr 0x22805ec, size 0xa0, virtual false, abstract: false, final false
  inline void set_enableOkButtonInteractivity(bool value);

  /// @brief Method set_hideCancelButton, addr 0x228068c, size 0xb0, virtual false, abstract: false, final false
  inline void set_hideCancelButton(bool value);

  /// @brief Method Awake, addr 0x228073c, size 0xd50, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::UIKeyboard* New_ctor();

  /// @brief Method .ctor, addr 0x2281494, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Awake>b__21_0, addr 0x228149c, size 0x1c, virtual false, abstract: false, final false
  inline void _Awake_b__21_0();

  /// @brief Method <Awake>b__21_1, addr 0x22814b8, size 0x24, virtual false, abstract: false, final false
  inline void _Awake_b__21_1();

  /// @brief Method <Awake>b__21_2, addr 0x22814dc, size 0x24, virtual false, abstract: false, final false
  inline void _Awake_b__21_2();

  /// @brief Method <Awake>b__21_3, addr 0x2281500, size 0x20, virtual false, abstract: false, final false
  inline void _Awake_b__21_3();

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
  /// @brief Field _keyButtonPrefab, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::TextMeshProButton* ____keyButtonPrefab;

  /// @brief Field textKeyWasPressedEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<char16_t>* ___textKeyWasPressedEvent;

  /// @brief Field deleteButtonWasPressedEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ___deleteButtonWasPressedEvent;

  /// @brief Field okButtonWasPressedEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___okButtonWasPressedEvent;

  /// @brief Field cancelButtonWasPressedEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___cancelButtonWasPressedEvent;

  /// @brief Field _okButton, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____okButton;

  /// @brief Field _cancelButton, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____cancelButton;

  /// @brief Field _okButtonInteractivity, offset: 0x50, size: 0x1, def value: None
  bool ____okButtonInteractivity;

  /// @brief Field _hideCancelButton, offset: 0x51, size: 0x1, def value: None
  bool ____hideCancelButton;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UIKeyboard, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboard, ____keyButtonPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboard, ___textKeyWasPressedEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboard, ___deleteButtonWasPressedEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboard, ___okButtonWasPressedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboard, ___cancelButtonWasPressedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboard, ____okButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboard, ____cancelButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboard, ____okButtonInteractivity) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboard, ____hideCancelButton) == 0x51, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UIKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UIKeyboard*, "", "UIKeyboard");
NEED_NO_BOX(::GlobalNamespace::__UIKeyboard____c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UIKeyboard____c__DisplayClass21_0*, "", "UIKeyboard/<>c__DisplayClass21_0");
