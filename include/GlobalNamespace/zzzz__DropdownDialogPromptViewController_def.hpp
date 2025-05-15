#pragma once
// IWYU pragma private; include "GlobalNamespace/DropdownDialogPromptViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DropdownDialogPromptViewController)
namespace GlobalNamespace {
class DropdownDialogPromptViewController_ButtonAndLabel;
}
namespace GlobalNamespace {
class DropdownDialogPromptViewController___c;
}
namespace GlobalNamespace {
class DropdownDialogPromptViewController___c__DisplayClass13_0;
}
namespace HMUI {
class SimpleTextDropdown;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class DropdownDialogPromptViewController;
}
namespace GlobalNamespace {
class DropdownDialogPromptViewController_ButtonAndLabel;
}
namespace GlobalNamespace {
class DropdownDialogPromptViewController___c;
}
namespace GlobalNamespace {
class DropdownDialogPromptViewController___c__DisplayClass13_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DropdownDialogPromptViewController);
MARK_REF_PTR_T(::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel);
MARK_REF_PTR_T(::GlobalNamespace::DropdownDialogPromptViewController___c);
MARK_REF_PTR_T(::GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DropdownDialogPromptViewController/ButtonAndLabel
class CORDL_TYPE DropdownDialogPromptViewController_ButtonAndLabel : public ::System::Object {
public:
  // Declarations
  /// @brief Field _component, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__component, put = __cordl_internal_set__component)) ::UnityW<::UnityEngine::UI::Button> _component;

  /// @brief Field _label, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__label, put = __cordl_internal_set__label)) ::UnityW<::TMPro::TextMeshProUGUI> _label;

  __declspec(property(get = get_component)) ::UnityW<::UnityEngine::UI::Button> component;

  __declspec(property(get = get_label)) ::UnityW<::TMPro::TextMeshProUGUI> label;

  static inline ::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel* New_ctor();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__component() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__component();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__label() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__label();

  constexpr void __cordl_internal_set__component(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__label(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x3c167b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_component, addr 0x3c167a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Button> get_component();

  /// @brief Method get_label, addr 0x3c167b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TextMeshProUGUI> get_label();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DropdownDialogPromptViewController_ButtonAndLabel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DropdownDialogPromptViewController_ButtonAndLabel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DropdownDialogPromptViewController_ButtonAndLabel(DropdownDialogPromptViewController_ButtonAndLabel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DropdownDialogPromptViewController_ButtonAndLabel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DropdownDialogPromptViewController_ButtonAndLabel(DropdownDialogPromptViewController_ButtonAndLabel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4877 };

  /// @brief Field _component, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____component;

  /// @brief Field _label, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____label;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel, ____component) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel, ____label) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DropdownDialogPromptViewController/<>c
class CORDL_TYPE DropdownDialogPromptViewController___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::DropdownDialogPromptViewController___c* __9;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0)) ::System::Func_2<::System::ValueTuple_2<::StringW, int32_t>, ::StringW>* __9__12_0;

  static inline ::GlobalNamespace::DropdownDialogPromptViewController___c* New_ctor();

  /// @brief Method <Init>b__12_0, addr 0x3c16824, size 0x8, virtual false, abstract: false, final false
  inline ::StringW _Init_b__12_0(::System::ValueTuple_2<::StringW, int32_t> e);

  /// @brief Method .ctor, addr 0x3c1681c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::DropdownDialogPromptViewController___c* getStaticF___9();

  static inline ::System::Func_2<::System::ValueTuple_2<::StringW, int32_t>, ::StringW>* getStaticF___9__12_0();

  static inline void setStaticF___9(::GlobalNamespace::DropdownDialogPromptViewController___c* value);

  static inline void setStaticF___9__12_0(::System::Func_2<::System::ValueTuple_2<::StringW, int32_t>, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DropdownDialogPromptViewController___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DropdownDialogPromptViewController___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DropdownDialogPromptViewController___c(DropdownDialogPromptViewController___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DropdownDialogPromptViewController___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DropdownDialogPromptViewController___c(DropdownDialogPromptViewController___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4878 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DropdownDialogPromptViewController___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DropdownDialogPromptViewController/<>c__DisplayClass13_0
class CORDL_TYPE DropdownDialogPromptViewController___c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::DropdownDialogPromptViewController> __4__this;

  /// @brief Field buttonNum, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_buttonNum, put = __cordl_internal_set_buttonNum)) int32_t buttonNum;

  static inline ::GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0* New_ctor();

  /// @brief Method <DidActivate>b__0, addr 0x3c1682c, size 0x20, virtual false, abstract: false, final false
  inline void _DidActivate_b__0();

  constexpr ::UnityW<::GlobalNamespace::DropdownDialogPromptViewController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::DropdownDialogPromptViewController>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get_buttonNum() const;

  constexpr int32_t& __cordl_internal_get_buttonNum();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::DropdownDialogPromptViewController> value);

  constexpr void __cordl_internal_set_buttonNum(int32_t value);

  /// @brief Method .ctor, addr 0x3c16670, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DropdownDialogPromptViewController___c__DisplayClass13_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DropdownDialogPromptViewController___c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DropdownDialogPromptViewController___c__DisplayClass13_0(DropdownDialogPromptViewController___c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DropdownDialogPromptViewController___c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DropdownDialogPromptViewController___c__DisplayClass13_0(DropdownDialogPromptViewController___c__DisplayClass13_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4879 };

  /// @brief Field buttonNum, offset: 0x10, size: 0x4, def value: None
  int32_t ___buttonNum;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DropdownDialogPromptViewController> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0, ___buttonNum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: DropdownDialogPromptViewController
class CORDL_TYPE DropdownDialogPromptViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using ButtonAndLabel = ::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel;

  using __c = ::GlobalNamespace::DropdownDialogPromptViewController___c;

  using __c__DisplayClass13_0 = ::GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0;

  /// @brief Field _buttons, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__buttons, put = __cordl_internal_set__buttons)) ::ArrayW<::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel*,
                                                                                                          ::Array<::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel*>*>
      _buttons;

  /// @brief Field _didFinishAction, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__didFinishAction, put = __cordl_internal_set__didFinishAction)) ::System::Action_1<::System::ValueTuple_2<int32_t, int32_t>>* _didFinishAction;

  /// @brief Field _dropdown, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__dropdown, put = __cordl_internal_set__dropdown)) ::UnityW<::HMUI::SimpleTextDropdown> _dropdown;

  /// @brief Field _dropdownLabel, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__dropdownLabel, put = __cordl_internal_set__dropdownLabel)) ::UnityW<::TMPro::TextMeshProUGUI> _dropdownLabel;

  /// @brief Field _dropdownValues, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__dropdownValues,
                      put = __cordl_internal_set__dropdownValues)) ::ArrayW<::System::ValueTuple_2<::StringW, int32_t>, ::Array<::System::ValueTuple_2<::StringW, int32_t>>*>
      _dropdownValues;

  /// @brief Field _messageText, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__messageText, put = __cordl_internal_set__messageText)) ::UnityW<::TMPro::TextMeshProUGUI> _messageText;

  /// @brief Field _titleText, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__titleText, put = __cordl_internal_set__titleText)) ::UnityW<::TMPro::TextMeshProUGUI> _titleText;

  __declspec(property(get = get_selectedValue)) int32_t selectedValue;

  /// @brief Method DidActivate, addr 0x3c16540, size 0x130, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3c16678, size 0xc, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method Init, addr 0x3c162e8, size 0x258, virtual false, abstract: false, final false
  inline void Init(::StringW title, ::StringW message, ::StringW dropdownLabel,
                   ::ArrayW<::System::ValueTuple_2<::StringW, int32_t>, ::Array<::System::ValueTuple_2<::StringW, int32_t>>*> dropdownValues,
                   ::System::Action_1<::System::ValueTuple_2<int32_t, int32_t>>* didFinishAction, ::ArrayW<::StringW, ::Array<::StringW>*> buttonTexts);

  static inline ::GlobalNamespace::DropdownDialogPromptViewController* New_ctor();

  /// @brief Method OnButtonClick, addr 0x3c16684, size 0x88, virtual false, abstract: false, final false
  inline void OnButtonClick(int32_t buttonNum);

  constexpr ::ArrayW<::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel*, ::Array<::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel*>*> const&
  __cordl_internal_get__buttons() const;

  constexpr ::ArrayW<::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel*, ::Array<::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel*>*>&
  __cordl_internal_get__buttons();

  constexpr ::System::Action_1<::System::ValueTuple_2<int32_t, int32_t>>* const& __cordl_internal_get__didFinishAction() const;

  constexpr ::System::Action_1<::System::ValueTuple_2<int32_t, int32_t>>*& __cordl_internal_get__didFinishAction();

  constexpr ::UnityW<::HMUI::SimpleTextDropdown> const& __cordl_internal_get__dropdown() const;

  constexpr ::UnityW<::HMUI::SimpleTextDropdown>& __cordl_internal_get__dropdown();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__dropdownLabel() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__dropdownLabel();

  constexpr ::ArrayW<::System::ValueTuple_2<::StringW, int32_t>, ::Array<::System::ValueTuple_2<::StringW, int32_t>>*> const& __cordl_internal_get__dropdownValues() const;

  constexpr ::ArrayW<::System::ValueTuple_2<::StringW, int32_t>, ::Array<::System::ValueTuple_2<::StringW, int32_t>>*>& __cordl_internal_get__dropdownValues();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__messageText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__messageText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__titleText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__titleText();

  constexpr void
  __cordl_internal_set__buttons(::ArrayW<::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel*, ::Array<::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel*>*> value);

  constexpr void __cordl_internal_set__didFinishAction(::System::Action_1<::System::ValueTuple_2<int32_t, int32_t>>* value);

  constexpr void __cordl_internal_set__dropdown(::UnityW<::HMUI::SimpleTextDropdown> value);

  constexpr void __cordl_internal_set__dropdownLabel(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__dropdownValues(::ArrayW<::System::ValueTuple_2<::StringW, int32_t>, ::Array<::System::ValueTuple_2<::StringW, int32_t>>*> value);

  constexpr void __cordl_internal_set__messageText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__titleText(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x3c1670c, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add__didFinishAction, addr 0x3c16188, size 0xb0, virtual false, abstract: false, final false
  inline void add__didFinishAction(::System::Action_1<::System::ValueTuple_2<int32_t, int32_t>>* value);

  /// @brief Method get_selectedValue, addr 0x3c1614c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_selectedValue();

  /// @brief Method remove__didFinishAction, addr 0x3c16238, size 0xb0, virtual false, abstract: false, final false
  inline void remove__didFinishAction(::System::Action_1<::System::ValueTuple_2<int32_t, int32_t>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DropdownDialogPromptViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DropdownDialogPromptViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DropdownDialogPromptViewController(DropdownDialogPromptViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DropdownDialogPromptViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DropdownDialogPromptViewController(DropdownDialogPromptViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4880 };

  /// @brief Field _titleText, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____titleText;

  /// @brief Field _messageText, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____messageText;

  /// @brief Field _dropdownLabel, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____dropdownLabel;

  /// @brief Field _dropdown, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::HMUI::SimpleTextDropdown> ____dropdown;

  /// @brief Field _buttons, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel*, ::Array<::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel*>*> ____buttons;

  /// @brief Field _didFinishAction, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_1<::System::ValueTuple_2<int32_t, int32_t>>* ____didFinishAction;

  /// @brief Field _dropdownValues, offset: 0xa8, size: 0x8, def value: None
  ::ArrayW<::System::ValueTuple_2<::StringW, int32_t>, ::Array<::System::ValueTuple_2<::StringW, int32_t>>*> ____dropdownValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DropdownDialogPromptViewController, ____titleText) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DropdownDialogPromptViewController, ____messageText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DropdownDialogPromptViewController, ____dropdownLabel) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DropdownDialogPromptViewController, ____dropdown) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DropdownDialogPromptViewController, ____buttons) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DropdownDialogPromptViewController, ____didFinishAction) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DropdownDialogPromptViewController, ____dropdownValues) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DropdownDialogPromptViewController, 0xb0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DropdownDialogPromptViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DropdownDialogPromptViewController*, "", "DropdownDialogPromptViewController");
NEED_NO_BOX(::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DropdownDialogPromptViewController_ButtonAndLabel*, "", "DropdownDialogPromptViewController/ButtonAndLabel");
NEED_NO_BOX(::GlobalNamespace::DropdownDialogPromptViewController___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DropdownDialogPromptViewController___c*, "", "DropdownDialogPromptViewController/<>c");
NEED_NO_BOX(::GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DropdownDialogPromptViewController___c__DisplayClass13_0*, "", "DropdownDialogPromptViewController/<>c__DisplayClass13_0");
