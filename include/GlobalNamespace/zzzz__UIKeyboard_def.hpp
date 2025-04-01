#pragma once
// IWYU pragma private; include "GlobalNamespace/UIKeyboard.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UIKeyboard)
namespace GlobalNamespace {
class TextMeshProButton;
}
namespace GlobalNamespace {
class UIKeyboard___c__DisplayClass21_0;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class UIKeyboard;
}
namespace GlobalNamespace {
class UIKeyboard___c__DisplayClass21_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UIKeyboard);
MARK_REF_PTR_T(::GlobalNamespace::UIKeyboard___c__DisplayClass21_0);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UIKeyboard/<>c__DisplayClass21_0
class CORDL_TYPE UIKeyboard___c__DisplayClass21_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::UIKeyboard> __4__this;

  /// @brief Field key, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::StringW key;

  static inline ::GlobalNamespace::UIKeyboard___c__DisplayClass21_0* New_ctor();

  /// @brief Method <Awake>b__4, addr 0x3bfc770, size 0x50, virtual false, abstract: false, final false
  inline void _Awake_b__4();

  constexpr ::UnityW<::GlobalNamespace::UIKeyboard> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::UIKeyboard>& __cordl_internal_get___4__this();

  constexpr ::StringW const& __cordl_internal_get_key() const;

  constexpr ::StringW& __cordl_internal_get_key();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::UIKeyboard> value);

  constexpr void __cordl_internal_set_key(::StringW value);

  /// @brief Method .ctor, addr 0x3bfc6dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIKeyboard___c__DisplayClass21_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIKeyboard___c__DisplayClass21_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIKeyboard___c__DisplayClass21_0(UIKeyboard___c__DisplayClass21_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIKeyboard___c__DisplayClass21_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIKeyboard___c__DisplayClass21_0(UIKeyboard___c__DisplayClass21_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4772 };

  /// @brief Field key, offset: 0x10, size: 0x8, def value: None
  ::StringW ___key;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::UIKeyboard> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UIKeyboard___c__DisplayClass21_0, ___key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboard___c__DisplayClass21_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UIKeyboard___c__DisplayClass21_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: UIKeyboard
class CORDL_TYPE UIKeyboard : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass21_0 = ::GlobalNamespace::UIKeyboard___c__DisplayClass21_0;

  /// @brief Field _cancelButton, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__cancelButton, put = __cordl_internal_set__cancelButton)) ::UnityW<::UnityEngine::UI::Button> _cancelButton;

  /// @brief Field _hideCancelButton, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get__hideCancelButton, put = __cordl_internal_set__hideCancelButton)) bool _hideCancelButton;

  /// @brief Field _keyButtonPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__keyButtonPrefab, put = __cordl_internal_set__keyButtonPrefab)) ::UnityW<::GlobalNamespace::TextMeshProButton> _keyButtonPrefab;

  /// @brief Field _okButton, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__okButton, put = __cordl_internal_set__okButton)) ::UnityW<::UnityEngine::UI::Button> _okButton;

  /// @brief Field _okButtonInteractivity, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__okButtonInteractivity, put = __cordl_internal_set__okButtonInteractivity)) bool _okButtonInteractivity;

  /// @brief Field cancelButtonWasPressedEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_cancelButtonWasPressedEvent, put = __cordl_internal_set_cancelButtonWasPressedEvent)) ::System::Action* cancelButtonWasPressedEvent;

  /// @brief Field deleteButtonWasPressedEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_deleteButtonWasPressedEvent, put = __cordl_internal_set_deleteButtonWasPressedEvent)) ::System::Action* deleteButtonWasPressedEvent;

  __declspec(property(put = set_enableOkButtonInteractivity)) bool enableOkButtonInteractivity;

  __declspec(property(put = set_hideCancelButton)) bool hideCancelButton;

  /// @brief Field okButtonWasPressedEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_okButtonWasPressedEvent, put = __cordl_internal_set_okButtonWasPressedEvent)) ::System::Action* okButtonWasPressedEvent;

  /// @brief Field textKeyWasPressedEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_textKeyWasPressedEvent, put = __cordl_internal_set_textKeyWasPressedEvent)) ::System::Action_1<char16_t>* textKeyWasPressedEvent;

  /// @brief Method Awake, addr 0x3bfbd1c, size 0x9c0, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::UIKeyboard* New_ctor();

  /// @brief Method <Awake>b__21_0, addr 0x3bfc6ec, size 0x1c, virtual false, abstract: false, final false
  inline void _Awake_b__21_0();

  /// @brief Method <Awake>b__21_1, addr 0x3bfc708, size 0x24, virtual false, abstract: false, final false
  inline void _Awake_b__21_1();

  /// @brief Method <Awake>b__21_2, addr 0x3bfc72c, size 0x24, virtual false, abstract: false, final false
  inline void _Awake_b__21_2();

  /// @brief Method <Awake>b__21_3, addr 0x3bfc750, size 0x20, virtual false, abstract: false, final false
  inline void _Awake_b__21_3();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__cancelButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__cancelButton();

  constexpr bool const& __cordl_internal_get__hideCancelButton() const;

  constexpr bool& __cordl_internal_get__hideCancelButton();

  constexpr ::UnityW<::GlobalNamespace::TextMeshProButton> const& __cordl_internal_get__keyButtonPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::TextMeshProButton>& __cordl_internal_get__keyButtonPrefab();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__okButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__okButton();

  constexpr bool const& __cordl_internal_get__okButtonInteractivity() const;

  constexpr bool& __cordl_internal_get__okButtonInteractivity();

  constexpr ::System::Action* const& __cordl_internal_get_cancelButtonWasPressedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_cancelButtonWasPressedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_deleteButtonWasPressedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_deleteButtonWasPressedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_okButtonWasPressedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_okButtonWasPressedEvent();

  constexpr ::System::Action_1<char16_t>* const& __cordl_internal_get_textKeyWasPressedEvent() const;

  constexpr ::System::Action_1<char16_t>*& __cordl_internal_get_textKeyWasPressedEvent();

  constexpr void __cordl_internal_set__cancelButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__hideCancelButton(bool value);

  constexpr void __cordl_internal_set__keyButtonPrefab(::UnityW<::GlobalNamespace::TextMeshProButton> value);

  constexpr void __cordl_internal_set__okButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__okButtonInteractivity(bool value);

  constexpr void __cordl_internal_set_cancelButtonWasPressedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_deleteButtonWasPressedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_okButtonWasPressedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_textKeyWasPressedEvent(::System::Action_1<char16_t>* value);

  /// @brief Method .ctor, addr 0x3bfc6e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_cancelButtonWasPressedEvent, addr 0x3bfba94, size 0x9c, virtual false, abstract: false, final false
  inline void add_cancelButtonWasPressedEvent(::System::Action* value);

  /// @brief Method add_deleteButtonWasPressedEvent, addr 0x3bfb824, size 0x9c, virtual false, abstract: false, final false
  inline void add_deleteButtonWasPressedEvent(::System::Action* value);

  /// @brief Method add_okButtonWasPressedEvent, addr 0x3bfb95c, size 0x9c, virtual false, abstract: false, final false
  inline void add_okButtonWasPressedEvent(::System::Action* value);

  /// @brief Method add_textKeyWasPressedEvent, addr 0x3bfb6c4, size 0xb0, virtual false, abstract: false, final false
  inline void add_textKeyWasPressedEvent(::System::Action_1<char16_t>* value);

  /// @brief Method remove_cancelButtonWasPressedEvent, addr 0x3bfbb30, size 0x9c, virtual false, abstract: false, final false
  inline void remove_cancelButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_deleteButtonWasPressedEvent, addr 0x3bfb8c0, size 0x9c, virtual false, abstract: false, final false
  inline void remove_deleteButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_okButtonWasPressedEvent, addr 0x3bfb9f8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_okButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_textKeyWasPressedEvent, addr 0x3bfb774, size 0xb0, virtual false, abstract: false, final false
  inline void remove_textKeyWasPressedEvent(::System::Action_1<char16_t>* value);

  /// @brief Method set_enableOkButtonInteractivity, addr 0x3bfbbcc, size 0xa0, virtual false, abstract: false, final false
  inline void set_enableOkButtonInteractivity(bool value);

  /// @brief Method set_hideCancelButton, addr 0x3bfbc6c, size 0xb0, virtual false, abstract: false, final false
  inline void set_hideCancelButton(bool value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4773 };

  /// @brief Field _keyButtonPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TextMeshProButton> ____keyButtonPrefab;

  /// @brief Field textKeyWasPressedEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<char16_t>* ___textKeyWasPressedEvent;

  /// @brief Field deleteButtonWasPressedEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___deleteButtonWasPressedEvent;

  /// @brief Field okButtonWasPressedEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___okButtonWasPressedEvent;

  /// @brief Field cancelButtonWasPressedEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___cancelButtonWasPressedEvent;

  /// @brief Field _okButton, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____okButton;

  /// @brief Field _cancelButton, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____cancelButton;

  /// @brief Field _okButtonInteractivity, offset: 0x58, size: 0x1, def value: None
  bool ____okButtonInteractivity;

  /// @brief Field _hideCancelButton, offset: 0x59, size: 0x1, def value: None
  bool ____hideCancelButton;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UIKeyboard, ____keyButtonPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboard, ___textKeyWasPressedEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboard, ___deleteButtonWasPressedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboard, ___okButtonWasPressedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboard, ___cancelButtonWasPressedEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboard, ____okButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboard, ____cancelButton) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboard, ____okButtonInteractivity) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboard, ____hideCancelButton) == 0x59, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UIKeyboard, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UIKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UIKeyboard*, "", "UIKeyboard");
NEED_NO_BOX(::GlobalNamespace::UIKeyboard___c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UIKeyboard___c__DisplayClass21_0*, "", "UIKeyboard/<>c__DisplayClass21_0");
