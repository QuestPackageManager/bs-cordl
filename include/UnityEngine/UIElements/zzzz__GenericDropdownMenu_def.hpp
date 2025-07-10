#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/GenericDropdownMenu.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGenericMenu_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GenericDropdownMenu)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class FocusOutEvent;
}
namespace UnityEngine::UIElements {
class GenericDropdownMenu_MenuItem;
}
namespace UnityEngine::UIElements {
struct GenericDropdownMenu___c__DisplayClass39_0;
}
namespace UnityEngine::UIElements {
class GenericDropdownMenu___c__DisplayClass54_0;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
class KeyboardNavigationManipulator;
}
namespace UnityEngine::UIElements {
struct KeyboardNavigationOperation;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class ScrollView;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class GenericDropdownMenu;
}
namespace UnityEngine::UIElements {
class GenericDropdownMenu_MenuItem;
}
namespace UnityEngine::UIElements {
class GenericDropdownMenu___c__DisplayClass54_0;
}
namespace UnityEngine::UIElements {
struct GenericDropdownMenu___c__DisplayClass39_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::GenericDropdownMenu);
MARK_REF_PTR_T(::UnityEngine::UIElements::GenericDropdownMenu_MenuItem);
MARK_REF_PTR_T(::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass54_0);
MARK_VAL_T(::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass39_0);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.GenericDropdownMenu/MenuItem
class CORDL_TYPE GenericDropdownMenu_MenuItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field action, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_action, put = __cordl_internal_set_action)) ::System::Action* action;

  /// @brief Field actionUserData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_actionUserData, put = __cordl_internal_set_actionUserData)) ::System::Action_1<::System::Object*>* actionUserData;

  /// @brief Field element, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_element, put = __cordl_internal_set_element)) ::UnityEngine::UIElements::VisualElement* element;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  static inline ::UnityEngine::UIElements::GenericDropdownMenu_MenuItem* New_ctor();

  constexpr ::System::Action* const& __cordl_internal_get_action() const;

  constexpr ::System::Action*& __cordl_internal_get_action();

  constexpr ::System::Action_1<::System::Object*>* const& __cordl_internal_get_actionUserData() const;

  constexpr ::System::Action_1<::System::Object*>*& __cordl_internal_get_actionUserData();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_element() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_element();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr void __cordl_internal_set_action(::System::Action* value);

  constexpr void __cordl_internal_set_actionUserData(::System::Action_1<::System::Object*>* value);

  constexpr void __cordl_internal_set_element(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_name(::StringW value);

  /// @brief Method .ctor, addr 0x4997f5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericDropdownMenu_MenuItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenericDropdownMenu_MenuItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericDropdownMenu_MenuItem(GenericDropdownMenu_MenuItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericDropdownMenu_MenuItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericDropdownMenu_MenuItem(GenericDropdownMenu_MenuItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5585 };

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
static_assert(offsetof(::UnityEngine::UIElements::GenericDropdownMenu_MenuItem, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GenericDropdownMenu_MenuItem, ___element) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GenericDropdownMenu_MenuItem, ___action) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GenericDropdownMenu_MenuItem, ___actionUserData) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::GenericDropdownMenu_MenuItem, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.GenericDropdownMenu/<>c__DisplayClass39_0
struct CORDL_TYPE GenericDropdownMenu___c__DisplayClass39_0 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericDropdownMenu___c__DisplayClass39_0();

  // Ctor Parameters [CppParam { name: "__4__this", ty: "::UnityEngine::UIElements::GenericDropdownMenu*", modifiers: "", def_value: None }, CppParam { name: "selectedIndex", ty: "int32_t", modifiers:
  // "", def_value: None }]
  constexpr GenericDropdownMenu___c__DisplayClass39_0(::UnityEngine::UIElements::GenericDropdownMenu* __4__this, int32_t selectedIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5586 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field <>4__this, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::GenericDropdownMenu* __4__this;

  /// @brief Field selectedIndex, offset: 0x8, size: 0x4, def value: None
  int32_t selectedIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass39_0, __4__this) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass39_0, selectedIndex) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass39_0, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.GenericDropdownMenu/<>c__DisplayClass54_0
class CORDL_TYPE GenericDropdownMenu___c__DisplayClass54_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field itemName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_itemName, put = __cordl_internal_set_itemName)) ::StringW itemName;

  static inline ::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass54_0* New_ctor();

  /// @brief Method <UpdateItem>b__0, addr 0x49990e0, size 0x24, virtual false, abstract: false, final false
  inline bool _UpdateItem_b__0(::UnityEngine::UIElements::GenericDropdownMenu_MenuItem* x);

  constexpr ::StringW const& __cordl_internal_get_itemName() const;

  constexpr ::StringW& __cordl_internal_get_itemName();

  constexpr void __cordl_internal_set_itemName(::StringW value);

  /// @brief Method .ctor, addr 0x4998088, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericDropdownMenu___c__DisplayClass54_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenericDropdownMenu___c__DisplayClass54_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericDropdownMenu___c__DisplayClass54_0(GenericDropdownMenu___c__DisplayClass54_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericDropdownMenu___c__DisplayClass54_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericDropdownMenu___c__DisplayClass54_0(GenericDropdownMenu___c__DisplayClass54_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5587 };

  /// @brief Field itemName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___itemName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass54_0, ___itemName) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass54_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object, UnityEngine.Rect, UnityEngine.UIElements.IGenericMenu, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.GenericDropdownMenu
class CORDL_TYPE GenericDropdownMenu : public ::System::Object {
public:
  // Declarations
  using MenuItem = ::UnityEngine::UIElements::GenericDropdownMenu_MenuItem;

  using __c__DisplayClass39_0 = ::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass39_0;

  using __c__DisplayClass54_0 = ::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass54_0;

  /// @brief Field <closeOnParentResize>k__BackingField, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get__closeOnParentResize_k__BackingField, put = __cordl_internal_set__closeOnParentResize_k__BackingField)) bool _closeOnParentResize_k__BackingField;

  /// @brief Field <isSingleSelectionDropdown>k__BackingField, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__isSingleSelectionDropdown_k__BackingField,
                      put = __cordl_internal_set__isSingleSelectionDropdown_k__BackingField)) bool _isSingleSelectionDropdown_k__BackingField;

  /// @brief Field checkmarkUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_checkmarkUssClassName, put = setStaticF_checkmarkUssClassName)) ::StringW checkmarkUssClassName;

  __declspec(property(get = get_closeOnParentResize, put = set_closeOnParentResize)) bool closeOnParentResize;

  /// @brief Field containerInnerUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_containerInnerUssClassName, put = setStaticF_containerInnerUssClassName)) ::StringW containerInnerUssClassName;

  /// @brief Field containerOuterUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_containerOuterUssClassName, put = setStaticF_containerOuterUssClassName)) ::StringW containerOuterUssClassName;

  __declspec(property(get = get_contentContainer)) ::UnityEngine::UIElements::VisualElement* contentContainer;

  __declspec(property(get = get_isSingleSelectionDropdown, put = set_isSingleSelectionDropdown)) bool isSingleSelectionDropdown;

  /// @brief Field itemUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_itemUssClassName, put = setStaticF_itemUssClassName)) ::StringW itemUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field m_DesiredRect, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get_m_DesiredRect, put = __cordl_internal_set_m_DesiredRect)) ::UnityEngine::Rect m_DesiredRect;

  /// @brief Field m_Items, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Items,
                      put = __cordl_internal_set_m_Items)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::GenericDropdownMenu_MenuItem*>* m_Items;

  /// @brief Field m_MenuContainer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MenuContainer, put = __cordl_internal_set_m_MenuContainer)) ::UnityEngine::UIElements::VisualElement* m_MenuContainer;

  /// @brief Field m_MousePosition, offset 0x5c, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MousePosition, put = __cordl_internal_set_m_MousePosition)) ::UnityEngine::Vector2 m_MousePosition;

  /// @brief Field m_NavigationManipulator, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NavigationManipulator,
                      put = __cordl_internal_set_m_NavigationManipulator)) ::UnityEngine::UIElements::KeyboardNavigationManipulator* m_NavigationManipulator;

  /// @brief Field m_OuterContainer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OuterContainer, put = __cordl_internal_set_m_OuterContainer)) ::UnityEngine::UIElements::VisualElement* m_OuterContainer;

  /// @brief Field m_PanelRootVisualContainer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PanelRootVisualContainer,
                      put = __cordl_internal_set_m_PanelRootVisualContainer)) ::UnityEngine::UIElements::VisualElement* m_PanelRootVisualContainer;

  /// @brief Field m_ScrollView, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScrollView, put = __cordl_internal_set_m_ScrollView)) ::UnityEngine::UIElements::ScrollView* m_ScrollView;

  /// @brief Field m_TargetElement, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TargetElement, put = __cordl_internal_set_m_TargetElement)) ::UnityEngine::UIElements::VisualElement* m_TargetElement;

  /// @brief Field separatorUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_separatorUssClassName, put = setStaticF_separatorUssClassName)) ::StringW separatorUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Convert operator to "::UnityEngine::UIElements::IGenericMenu"
  constexpr operator ::UnityEngine::UIElements::IGenericMenu*() noexcept;

  /// @brief Method AddDisabledItem, addr 0x4997e8c, size 0x10, virtual true, abstract: false, final true
  inline void AddDisabledItem(::StringW itemName, bool isChecked);

  /// @brief Method AddItem, addr 0x4997b34, size 0x334, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::GenericDropdownMenu_MenuItem* AddItem(::StringW itemName, bool isChecked, bool isEnabled, ::System::Object* data);

  /// @brief Method AddItem, addr 0x4997b0c, size 0x28, virtual true, abstract: false, final true
  inline void AddItem(::StringW itemName, bool isChecked, ::System::Action* action);

  /// @brief Method AddItem, addr 0x4997e68, size 0x24, virtual true, abstract: false, final true
  inline void AddItem(::StringW itemName, bool isChecked, ::System::Action_1<::System::Object*>* action, ::System::Object* data);

  /// @brief Method AddSeparator, addr 0x4997e9c, size 0xc0, virtual true, abstract: false, final true
  inline void AddSeparator(::StringW path);

  /// @brief Method Apply, addr 0x499700c, size 0x194, virtual false, abstract: false, final false
  inline bool Apply(::UnityEngine::UIElements::KeyboardNavigationOperation op);

  /// @brief Method Apply, addr 0x4996fd0, size 0x3c, virtual false, abstract: false, final false
  inline void Apply(::UnityEngine::UIElements::KeyboardNavigationOperation op, ::UnityEngine::UIElements::EventBase* sourceEvent);

  /// @brief Method ChangeSelectedIndex, addr 0x49979d0, size 0x13c, virtual false, abstract: false, final false
  inline void ChangeSelectedIndex(int32_t newIndex, int32_t previousIndex);

  /// @brief Method DropDown, addr 0x4998090, size 0x928, virtual true, abstract: false, final true
  inline void DropDown(::UnityEngine::Rect position, ::UnityEngine::UIElements::VisualElement* targetElement, bool anchored);

  /// @brief Method EnsureVisibilityInParent, addr 0x49989b8, size 0x57c, virtual false, abstract: false, final false
  inline void EnsureVisibilityInParent();

  /// @brief Method GetSelectedIndex, addr 0x49971a0, size 0xa0, virtual false, abstract: false, final false
  inline int32_t GetSelectedIndex();

  /// @brief Method Hide, addr 0x4996f40, size 0x90, virtual false, abstract: false, final false
  inline void Hide(bool giveFocusBack);

  static inline ::UnityEngine::UIElements::GenericDropdownMenu* New_ctor();

  /// @brief Method OnAttachToPanel, addr 0x4996790, size 0x418, virtual false, abstract: false, final false
  inline void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* evt);

  /// @brief Method OnContainerGeometryChanged, addr 0x4998f3c, size 0x4, virtual false, abstract: false, final false
  inline void OnContainerGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method OnDetachFromPanel, addr 0x4996ba8, size 0x398, virtual false, abstract: false, final false
  inline void OnDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* evt);

  /// @brief Method OnFocusOut, addr 0x4997874, size 0x148, virtual false, abstract: false, final false
  inline void OnFocusOut(::UnityEngine::UIElements::FocusOutEvent* evt);

  /// @brief Method OnParentResized, addr 0x49979bc, size 0x14, virtual false, abstract: false, final false
  inline void OnParentResized(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method OnPointerDown, addr 0x49973a4, size 0x12c, virtual false, abstract: false, final false
  inline void OnPointerDown(::UnityEngine::UIElements::PointerDownEvent* evt);

  /// @brief Method OnPointerMove, addr 0x4997600, size 0x12c, virtual false, abstract: false, final false
  inline void OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* evt);

  /// @brief Method OnPointerUp, addr 0x499772c, size 0x148, virtual false, abstract: false, final false
  inline void OnPointerUp(::UnityEngine::UIElements::PointerUpEvent* evt);

  /// @brief Method OnTargetElementDetachFromPanel, addr 0x4998f34, size 0x8, virtual false, abstract: false, final false
  inline void OnTargetElementDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* evt);

  /// @brief Method UpdateItem, addr 0x4997f64, size 0x124, virtual false, abstract: false, final false
  inline void UpdateItem(::StringW itemName, bool isChecked);

  /// @brief Method UpdateSelection, addr 0x49974d0, size 0x130, virtual false, abstract: false, final false
  inline void UpdateSelection(::UnityEngine::UIElements::VisualElement* target);

  /// @brief Method <Apply>g__UpdateSelectionDown|39_0, addr 0x49972e8, size 0xbc, virtual false, abstract: false, final false
  inline void _Apply_g__UpdateSelectionDown_39_0(int32_t newIndex, ::ByRef<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass39_0> _cordl_fixed_empty_name_whitespace);

  /// @brief Method <Apply>g__UpdateSelectionUp|39_1, addr 0x4997240, size 0xa8, virtual false, abstract: false, final false
  inline void _Apply_g__UpdateSelectionUp_39_1(int32_t newIndex, ::ByRef<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass39_0> _cordl_fixed_empty_name_whitespace);

  constexpr bool const& __cordl_internal_get__closeOnParentResize_k__BackingField() const;

  constexpr bool& __cordl_internal_get__closeOnParentResize_k__BackingField();

  constexpr bool const& __cordl_internal_get__isSingleSelectionDropdown_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isSingleSelectionDropdown_k__BackingField();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_DesiredRect() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_DesiredRect();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::GenericDropdownMenu_MenuItem*>* const& __cordl_internal_get_m_Items() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::GenericDropdownMenu_MenuItem*>*& __cordl_internal_get_m_Items();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_MenuContainer() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_MenuContainer();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_MousePosition() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_MousePosition();

  constexpr ::UnityEngine::UIElements::KeyboardNavigationManipulator* const& __cordl_internal_get_m_NavigationManipulator() const;

  constexpr ::UnityEngine::UIElements::KeyboardNavigationManipulator*& __cordl_internal_get_m_NavigationManipulator();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_OuterContainer() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_OuterContainer();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_PanelRootVisualContainer() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_PanelRootVisualContainer();

  constexpr ::UnityEngine::UIElements::ScrollView* const& __cordl_internal_get_m_ScrollView() const;

  constexpr ::UnityEngine::UIElements::ScrollView*& __cordl_internal_get_m_ScrollView();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_TargetElement() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_TargetElement();

  constexpr void __cordl_internal_set__closeOnParentResize_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isSingleSelectionDropdown_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_DesiredRect(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_m_Items(::System::Collections::Generic::List_1<::UnityEngine::UIElements::GenericDropdownMenu_MenuItem*>* value);

  constexpr void __cordl_internal_set_m_MenuContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_MousePosition(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_NavigationManipulator(::UnityEngine::UIElements::KeyboardNavigationManipulator* value);

  constexpr void __cordl_internal_set_m_OuterContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_PanelRootVisualContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_ScrollView(::UnityEngine::UIElements::ScrollView* value);

  constexpr void __cordl_internal_set_m_TargetElement(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method .ctor, addr 0x4994480, size 0x2e8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_checkmarkUssClassName();

  static inline ::StringW getStaticF_containerInnerUssClassName();

  static inline ::StringW getStaticF_containerOuterUssClassName();

  static inline ::StringW getStaticF_itemUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_separatorUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_closeOnParentResize, addr 0x4996758, size 0x8, virtual false, abstract: false, final false
  inline bool get_closeOnParentResize();

  /// @brief Method get_contentContainer, addr 0x499676c, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_contentContainer();

  /// @brief Method get_isSingleSelectionDropdown, addr 0x4996744, size 0x8, virtual false, abstract: false, final false
  inline bool get_isSingleSelectionDropdown();

  /// @brief Convert to "::UnityEngine::UIElements::IGenericMenu"
  constexpr ::UnityEngine::UIElements::IGenericMenu* i___UnityEngine__UIElements__IGenericMenu() noexcept;

  static inline void setStaticF_checkmarkUssClassName(::StringW value);

  static inline void setStaticF_containerInnerUssClassName(::StringW value);

  static inline void setStaticF_containerOuterUssClassName(::StringW value);

  static inline void setStaticF_itemUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_separatorUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_closeOnParentResize, addr 0x4996760, size 0xc, virtual false, abstract: false, final false
  inline void set_closeOnParentResize(bool value);

  /// @brief Method set_isSingleSelectionDropdown, addr 0x499674c, size 0xc, virtual false, abstract: false, final false
  inline void set_isSingleSelectionDropdown(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericDropdownMenu();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenericDropdownMenu", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericDropdownMenu(GenericDropdownMenu&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericDropdownMenu", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericDropdownMenu(GenericDropdownMenu const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5588 };

  /// @brief Field m_Items, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::GenericDropdownMenu_MenuItem*>* ___m_Items;

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

  /// @brief Field <isSingleSelectionDropdown>k__BackingField, offset: 0x58, size: 0x1, def value: None
  bool ____isSingleSelectionDropdown_k__BackingField;

  /// @brief Field <closeOnParentResize>k__BackingField, offset: 0x59, size: 0x1, def value: None
  bool ____closeOnParentResize_k__BackingField;

  /// @brief Field m_MousePosition, offset: 0x5c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_MousePosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::GenericDropdownMenu, ___m_Items) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GenericDropdownMenu, ___m_MenuContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GenericDropdownMenu, ___m_OuterContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GenericDropdownMenu, ___m_ScrollView) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GenericDropdownMenu, ___m_PanelRootVisualContainer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GenericDropdownMenu, ___m_TargetElement) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GenericDropdownMenu, ___m_DesiredRect) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GenericDropdownMenu, ___m_NavigationManipulator) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GenericDropdownMenu, ____isSingleSelectionDropdown_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GenericDropdownMenu, ____closeOnParentResize_k__BackingField) == 0x59, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::GenericDropdownMenu, ___m_MousePosition) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::GenericDropdownMenu, 0x68>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::GenericDropdownMenu);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::GenericDropdownMenu*, "UnityEngine.UIElements", "GenericDropdownMenu");
NEED_NO_BOX(::UnityEngine::UIElements::GenericDropdownMenu_MenuItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::GenericDropdownMenu_MenuItem*, "UnityEngine.UIElements", "GenericDropdownMenu/MenuItem");
NEED_NO_BOX(::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass54_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass54_0*, "UnityEngine.UIElements", "GenericDropdownMenu/<>c__DisplayClass54_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass39_0, "UnityEngine.UIElements", "GenericDropdownMenu/<>c__DisplayClass39_0");
