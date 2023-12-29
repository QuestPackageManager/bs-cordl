#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GenericDropdownMenu)
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine::UIElements {
struct __GenericDropdownMenu____c__DisplayClass25_0;
}
namespace UnityEngine::UIElements {
struct KeyboardNavigationOperation;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class ScrollView;
}
namespace UnityEngine::UIElements {
class __GenericDropdownMenu__MenuItem;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
namespace UnityEngine::UIElements {
class KeyboardNavigationManipulator;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
class IGenericMenu;
}
namespace UnityEngine::UIElements {
class FocusOutEvent;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class GenericDropdownMenu;
}
namespace UnityEngine::UIElements {
class __GenericDropdownMenu__MenuItem;
}
namespace UnityEngine::UIElements {
struct __GenericDropdownMenu____c__DisplayClass25_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::GenericDropdownMenu);
MARK_REF_PTR_T(::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem);
MARK_VAL_T(::UnityEngine::UIElements::__GenericDropdownMenu____c__DisplayClass25_0);
// Type: ::MenuItem
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7159))
// CS Name: ::GenericDropdownMenu::MenuItem*
class CORDL_TYPE __GenericDropdownMenu__MenuItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::StringW name;

  /// @brief Field element, offset 0x18, size 0x8
  __declspec(property(get = __get_element, put = __set_element))::UnityEngine::UIElements::VisualElement* element;

  /// @brief Field action, offset 0x20, size 0x8
  __declspec(property(get = __get_action, put = __set_action))::System::Action* action;

  /// @brief Field actionUserData, offset 0x28, size 0x8
  __declspec(property(get = __get_actionUserData, put = __set_actionUserData))::System::Action_1<::System::Object*>* actionUserData;

  constexpr ::StringW& __get_name();

  constexpr ::StringW const& __get_name() const;

  constexpr void __set_name(::StringW value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get_element();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get_element() const;

  constexpr void __set_element(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::System::Action*& __get_action();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_action() const;

  constexpr void __set_action(::System::Action* value);

  constexpr ::System::Action_1<::System::Object*>*& __get_actionUserData();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Object*>*> const& __get_actionUserData() const;

  constexpr void __set_actionUserData(::System::Action_1<::System::Object*>* value);

  static inline ::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem* New_ctor();

  /// @brief Method .ctor addr 0x2cc8948 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__GenericDropdownMenu__MenuItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GenericDropdownMenu__MenuItem(__GenericDropdownMenu__MenuItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GenericDropdownMenu__MenuItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GenericDropdownMenu__MenuItem(__GenericDropdownMenu__MenuItem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GenericDropdownMenu__MenuItem();

public:
  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field element, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___element;

  /// @brief Field action, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___action;

  /// @brief Field actionUserData, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::System::Object*>* ___actionUserData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem, ___element) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem, ___action) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem, ___actionUserData) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::<>c__DisplayClass25_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7160))
// CS Name: ::GenericDropdownMenu::<>c__DisplayClass25_0
struct CORDL_TYPE __GenericDropdownMenu____c__DisplayClass25_0 {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "__4__this", ty: "::UnityEngine::UIElements::GenericDropdownMenu*", modifiers: "", def_value: None }, CppParam { name: "selectedIndex", ty: "int32_t", modifiers:
  // "", def_value: None }]
  constexpr __GenericDropdownMenu____c__DisplayClass25_0(::UnityEngine::UIElements::GenericDropdownMenu* __4__this, int32_t selectedIndex) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GenericDropdownMenu____c__DisplayClass25_0();

  /// @brief Field <>4__this, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::GenericDropdownMenu* __4__this;

  /// @brief Field selectedIndex, offset: 0x8, size: 0x4, def value: None
  int32_t selectedIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__GenericDropdownMenu____c__DisplayClass25_0, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__GenericDropdownMenu____c__DisplayClass25_0, __4__this) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__GenericDropdownMenu____c__DisplayClass25_0, selectedIndex) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::GenericDropdownMenu
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10093)), TypeDefinitionIndex(TypeDefinitionIndex(10170)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7161))
// CS Name: ::UnityEngine.UIElements::GenericDropdownMenu*
class CORDL_TYPE GenericDropdownMenu : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass25_0 = ::UnityEngine::UIElements::__GenericDropdownMenu____c__DisplayClass25_0;

  using MenuItem = ::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem;

  /// @brief Field m_Items, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Items, put = __set_m_Items))::System::Collections::Generic::List_1<::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem*>* m_Items;

  /// @brief Field m_MenuContainer, offset 0x18, size 0x8
  __declspec(property(get = __get_m_MenuContainer, put = __set_m_MenuContainer))::UnityEngine::UIElements::VisualElement* m_MenuContainer;

  /// @brief Field m_OuterContainer, offset 0x20, size 0x8
  __declspec(property(get = __get_m_OuterContainer, put = __set_m_OuterContainer))::UnityEngine::UIElements::VisualElement* m_OuterContainer;

  /// @brief Field m_ScrollView, offset 0x28, size 0x8
  __declspec(property(get = __get_m_ScrollView, put = __set_m_ScrollView))::UnityEngine::UIElements::ScrollView* m_ScrollView;

  /// @brief Field m_PanelRootVisualContainer, offset 0x30, size 0x8
  __declspec(property(get = __get_m_PanelRootVisualContainer, put = __set_m_PanelRootVisualContainer))::UnityEngine::UIElements::VisualElement* m_PanelRootVisualContainer;

  /// @brief Field m_TargetElement, offset 0x38, size 0x8
  __declspec(property(get = __get_m_TargetElement, put = __set_m_TargetElement))::UnityEngine::UIElements::VisualElement* m_TargetElement;

  /// @brief Field m_DesiredRect, offset 0x40, size 0x10
  __declspec(property(get = __get_m_DesiredRect, put = __set_m_DesiredRect))::UnityEngine::Rect m_DesiredRect;

  /// @brief Field m_NavigationManipulator, offset 0x50, size 0x8
  __declspec(property(get = __get_m_NavigationManipulator, put = __set_m_NavigationManipulator))::UnityEngine::UIElements::KeyboardNavigationManipulator* m_NavigationManipulator;

  /// @brief Field m_MousePosition, offset 0x58, size 0x8
  __declspec(property(get = __get_m_MousePosition, put = __set_m_MousePosition))::UnityEngine::Vector2 m_MousePosition;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName))::StringW ussClassName;

  /// @brief Field itemUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_itemUssClassName, put = setStaticF_itemUssClassName))::StringW itemUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName))::StringW labelUssClassName;

  /// @brief Field containerInnerUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_containerInnerUssClassName, put = setStaticF_containerInnerUssClassName))::StringW containerInnerUssClassName;

  /// @brief Field containerOuterUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_containerOuterUssClassName, put = setStaticF_containerOuterUssClassName))::StringW containerOuterUssClassName;

  /// @brief Field checkmarkUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_checkmarkUssClassName, put = setStaticF_checkmarkUssClassName))::StringW checkmarkUssClassName;

  /// @brief Field separatorUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_separatorUssClassName, put = setStaticF_separatorUssClassName))::StringW separatorUssClassName;

  __declspec(property(get = get_contentContainer))::UnityEngine::UIElements::VisualElement* contentContainer;

  /// @brief Convert operator to "::UnityEngine::UIElements::IGenericMenu"
  constexpr operator ::UnityEngine::UIElements::IGenericMenu*() noexcept;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem*>*& __get_m_Items();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem*>*> const& __get_m_Items() const;

  constexpr void __set_m_Items(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem*>* value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get_m_MenuContainer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get_m_MenuContainer() const;

  constexpr void __set_m_MenuContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get_m_OuterContainer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get_m_OuterContainer() const;

  constexpr void __set_m_OuterContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::UIElements::ScrollView*& __get_m_ScrollView();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ScrollView*> const& __get_m_ScrollView() const;

  constexpr void __set_m_ScrollView(::UnityEngine::UIElements::ScrollView* value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get_m_PanelRootVisualContainer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get_m_PanelRootVisualContainer() const;

  constexpr void __set_m_PanelRootVisualContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get_m_TargetElement();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get_m_TargetElement() const;

  constexpr void __set_m_TargetElement(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::Rect& __get_m_DesiredRect();

  constexpr ::UnityEngine::Rect const& __get_m_DesiredRect() const;

  constexpr void __set_m_DesiredRect(::UnityEngine::Rect value);

  constexpr ::UnityEngine::UIElements::KeyboardNavigationManipulator*& __get_m_NavigationManipulator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::KeyboardNavigationManipulator*> const& __get_m_NavigationManipulator() const;

  constexpr void __set_m_NavigationManipulator(::UnityEngine::UIElements::KeyboardNavigationManipulator* value);

  constexpr ::UnityEngine::Vector2& __get_m_MousePosition();

  constexpr ::UnityEngine::Vector2 const& __get_m_MousePosition() const;

  constexpr void __set_m_MousePosition(::UnityEngine::Vector2 value);

  static inline void setStaticF_ussClassName(::StringW value);

  static inline ::StringW getStaticF_ussClassName();

  static inline void setStaticF_itemUssClassName(::StringW value);

  static inline ::StringW getStaticF_itemUssClassName();

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline ::StringW getStaticF_labelUssClassName();

  static inline void setStaticF_containerInnerUssClassName(::StringW value);

  static inline ::StringW getStaticF_containerInnerUssClassName();

  static inline void setStaticF_containerOuterUssClassName(::StringW value);

  static inline ::StringW getStaticF_containerOuterUssClassName();

  static inline void setStaticF_checkmarkUssClassName(::StringW value);

  static inline ::StringW getStaticF_checkmarkUssClassName();

  static inline void setStaticF_separatorUssClassName(::StringW value);

  static inline ::StringW getStaticF_separatorUssClassName();

  /// @brief Method get_contentContainer addr 0x2cc7058 size 0x24 virtual false final false
  inline ::UnityEngine::UIElements::VisualElement* get_contentContainer();

  static inline ::UnityEngine::UIElements::GenericDropdownMenu* New_ctor();

  /// @brief Method .ctor addr 0x2cc0fc8 size 0x2d4 virtual false final false
  inline void _ctor();

  /// @brief Method OnAttachToPanel addr 0x2cc707c size 0x438 virtual false final false
  inline void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* evt);

  /// @brief Method OnDetachFromPanel addr 0x2cc74b4 size 0x494 virtual false final false
  inline void OnDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* evt);

  /// @brief Method Hide addr 0x2cc7948 size 0xe8 virtual false final false
  inline void Hide();

  /// @brief Method Apply addr 0x2cc7a30 size 0x3c virtual false final false
  inline void Apply(::UnityEngine::UIElements::KeyboardNavigationOperation op, ::UnityEngine::UIElements::EventBase* sourceEvent);

  /// @brief Method Apply addr 0x2cc7a6c size 0x184 virtual false final false
  inline bool Apply(::UnityEngine::UIElements::KeyboardNavigationOperation op);

  /// @brief Method OnPointerDown addr 0x2cc7df4 size 0x12c virtual false final false
  inline void OnPointerDown(::UnityEngine::UIElements::PointerDownEvent* evt);

  /// @brief Method OnPointerMove addr 0x2cc8048 size 0x12c virtual false final false
  inline void OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* evt);

  /// @brief Method OnPointerUp addr 0x2cc8174 size 0x13c virtual false final false
  inline void OnPointerUp(::UnityEngine::UIElements::PointerUpEvent* evt);

  /// @brief Method OnFocusOut addr 0x2cc82b0 size 0x148 virtual false final false
  inline void OnFocusOut(::UnityEngine::UIElements::FocusOutEvent* evt);

  /// @brief Method OnParentResized addr 0x2cc83f8 size 0x4 virtual false final false
  inline void OnParentResized(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method UpdateSelection addr 0x2cc7f20 size 0x128 virtual false final false
  inline void UpdateSelection(::UnityEngine::UIElements::VisualElement* target);

  /// @brief Method ChangeSelectedIndex addr 0x2cc83fc size 0x134 virtual false final false
  inline void ChangeSelectedIndex(int32_t newIndex, int32_t previousIndex);

  /// @brief Method GetSelectedIndex addr 0x2cc7bf0 size 0xa0 virtual false final false
  inline int32_t GetSelectedIndex();

  /// @brief Method AddItem addr 0x2cc8530 size 0x28 virtual true final true
  inline void AddItem(::StringW itemName, bool isChecked, ::System::Action* action);

  /// @brief Method AddSeparator addr 0x2cc8898 size 0xb0 virtual true final true
  inline void AddSeparator(::StringW path);

  /// @brief Method AddItem addr 0x2cc8558 size 0x340 virtual false final false
  inline ::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem* AddItem(::StringW itemName, bool isChecked, bool isEnabled, ::System::Object* data);

  /// @brief Method DropDown addr 0x2cc8950 size 0x75c virtual true final true
  inline void DropDown(::UnityEngine::Rect position, ::UnityEngine::UIElements::VisualElement* targetElement, bool anchored);

  /// @brief Method OnTargetElementDetachFromPanel addr 0x2cc9790 size 0x4 virtual false final false
  inline void OnTargetElementDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* evt);

  /// @brief Method OnContainerGeometryChanged addr 0x2cc9794 size 0x4 virtual false final false
  inline void OnContainerGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method EnsureVisibilityInParent addr 0x2cc90ac size 0x6e4 virtual false final false
  inline void EnsureVisibilityInParent();

  /// @brief Method <Apply>g__UpdateSelectionDown|25_0 addr 0x2cc7d38 size 0xbc virtual false final false
  inline void _Apply_g__UpdateSelectionDown_25_0(int32_t newIndex, ByRef<::UnityEngine::UIElements::__GenericDropdownMenu____c__DisplayClass25_0> _cordl_fixed_empty_name_whitespace);

  /// @brief Method <Apply>g__UpdateSelectionUp|25_1 addr 0x2cc7c90 size 0xa8 virtual false final false
  inline void _Apply_g__UpdateSelectionUp_25_1(int32_t newIndex, ByRef<::UnityEngine::UIElements::__GenericDropdownMenu____c__DisplayClass25_0> _cordl_fixed_empty_name_whitespace);

  // Ctor Parameters [CppParam { name: "", ty: "GenericDropdownMenu", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericDropdownMenu(GenericDropdownMenu&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericDropdownMenu", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericDropdownMenu(GenericDropdownMenu const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericDropdownMenu();

public:
  /// @brief Field m_Items, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem*>* ___m_Items;

  /// @brief Field m_MenuContainer, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_MenuContainer;

  /// @brief Field m_OuterContainer, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_OuterContainer;

  /// @brief Field m_ScrollView, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::ScrollView* ___m_ScrollView;

  /// @brief Field m_PanelRootVisualContainer, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_PanelRootVisualContainer;

  /// @brief Field m_TargetElement, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_TargetElement;

  /// @brief Field m_DesiredRect, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_DesiredRect;

  /// @brief Field m_NavigationManipulator, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::KeyboardNavigationManipulator* ___m_NavigationManipulator;

  /// @brief Field m_MousePosition, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_MousePosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::GenericDropdownMenu, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GenericDropdownMenu, ___m_Items) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GenericDropdownMenu, ___m_MenuContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GenericDropdownMenu, ___m_OuterContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GenericDropdownMenu, ___m_ScrollView) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GenericDropdownMenu, ___m_PanelRootVisualContainer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GenericDropdownMenu, ___m_TargetElement) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GenericDropdownMenu, ___m_DesiredRect) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GenericDropdownMenu, ___m_NavigationManipulator) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GenericDropdownMenu, ___m_MousePosition) == 0x58, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::GenericDropdownMenu);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::GenericDropdownMenu*, "UnityEngine.UIElements", "GenericDropdownMenu");
NEED_NO_BOX(::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem*, "UnityEngine.UIElements", "GenericDropdownMenu/MenuItem");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__GenericDropdownMenu____c__DisplayClass25_0, "UnityEngine.UIElements", "GenericDropdownMenu/<>c__DisplayClass25_0");
