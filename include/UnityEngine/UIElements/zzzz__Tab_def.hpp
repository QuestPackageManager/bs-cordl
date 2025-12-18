#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Tab.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__Background_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Tab)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::UIElements {
struct Background;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
template <typename TEventType> class EventCallback_1;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class Image;
}
namespace UnityEngine::UIElements {
class Label;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
class TabDragger;
}
namespace UnityEngine::UIElements {
class Tab_UxmlFactory;
}
namespace UnityEngine::UIElements {
class Tab_UxmlTraits;
}
namespace UnityEngine::UIElements {
class Tab___c;
}
namespace UnityEngine::UIElements {
class TooltipEvent;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlImageAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Tab;
}
namespace UnityEngine::UIElements {
class Tab_UxmlFactory;
}
namespace UnityEngine::UIElements {
class Tab_UxmlTraits;
}
namespace UnityEngine::UIElements {
class Tab___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Tab);
MARK_REF_PTR_T(::UnityEngine::UIElements::Tab_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::Tab_UxmlTraits);
MARK_REF_PTR_T(::UnityEngine::UIElements::Tab___c);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Tab/UxmlFactory
class CORDL_TYPE Tab_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Tab*, ::UnityEngine::UIElements::Tab_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::Tab_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x6ba8b20, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tab_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Tab_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tab_UxmlFactory(Tab_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tab_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tab_UxmlFactory(Tab_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4321 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Tab_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.VisualElement::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Tab/UxmlTraits
class CORDL_TYPE Tab_UxmlTraits : public ::UnityEngine::UIElements::VisualElement_UxmlTraits {
public:
  // Declarations
  /// @brief Field m_Closeable, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Closeable, put = __cordl_internal_set_m_Closeable)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_Closeable;

  /// @brief Field m_IconImage, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IconImage, put = __cordl_internal_set_m_IconImage)) ::UnityEngine::UIElements::UxmlImageAttributeDescription* m_IconImage;

  /// @brief Field m_Label, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Label, put = __cordl_internal_set_m_Label)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Label;

  /// @brief Method Init, addr 0x6ba8b88, size 0x1a0, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::Tab_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_Closeable() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_Closeable();

  constexpr ::UnityEngine::UIElements::UxmlImageAttributeDescription* const& __cordl_internal_get_m_IconImage() const;

  constexpr ::UnityEngine::UIElements::UxmlImageAttributeDescription*& __cordl_internal_get_m_IconImage();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_Label() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Label();

  constexpr void __cordl_internal_set_m_Closeable(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_IconImage(::UnityEngine::UIElements::UxmlImageAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Label(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x6ba8d28, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tab_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Tab_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tab_UxmlTraits(Tab_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tab_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tab_UxmlTraits(Tab_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4322 };

  /// @brief Field m_Label, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Label;

  /// @brief Field m_IconImage, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlImageAttributeDescription* ___m_IconImage;

  /// @brief Field m_Closeable, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_Closeable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Tab_UxmlTraits, ___m_Label) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Tab_UxmlTraits, ___m_IconImage) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Tab_UxmlTraits, ___m_Closeable) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Tab_UxmlTraits, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Tab/<>c
class CORDL_TYPE Tab___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::Tab___c* __9;

  /// @brief Field <>9__63_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__63_0, put = setStaticF___9__63_0)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::TooltipEvent*>* __9__63_0;

  static inline ::UnityEngine::UIElements::Tab___c* New_ctor();

  /// @brief Method <.ctor>b__63_0, addr 0x6ba8ecc, size 0x1c, virtual false, abstract: false, final false
  inline void __ctor_b__63_0(::UnityEngine::UIElements::TooltipEvent* evt);

  /// @brief Method .ctor, addr 0x6ba8ec8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::Tab___c* getStaticF___9();

  static inline ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::TooltipEvent*>* getStaticF___9__63_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::Tab___c* value);

  static inline void setStaticF___9__63_0(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::TooltipEvent*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tab___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Tab___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tab___c(Tab___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tab___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tab___c(Tab___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4323 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Tab___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.Background, UnityEngine.UIElements.BindingId, UnityEngine.UIElements.VisualElement
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Tab
class CORDL_TYPE Tab : public ::UnityEngine::UIElements::VisualElement {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::Tab_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::Tab_UxmlTraits;

  using __c = ::UnityEngine::UIElements::Tab___c;

  /// @brief Field <dragger>k__BackingField, offset 0x520, size 0x8
  __declspec(property(get = __cordl_internal_get__dragger_k__BackingField, put = __cordl_internal_set__dragger_k__BackingField)) ::UnityEngine::UIElements::TabDragger* _dragger_k__BackingField;

  /// @brief Field closeButtonUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_closeButtonUssClassName, put = setStaticF_closeButtonUssClassName)) ::StringW closeButtonUssClassName;

  __declspec(property(get = get_closeable, put = set_closeable)) bool closeable;

  /// @brief Field closeableProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_closeableProperty, put = setStaticF_closeableProperty)) ::UnityEngine::UIElements::BindingId closeableProperty;

  /// @brief Field closeableUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_closeableUssClassName, put = setStaticF_closeableUssClassName)) ::StringW closeableUssClassName;

  /// @brief Field closed, offset 0x4b8, size 0x8
  __declspec(property(get = __cordl_internal_get_closed, put = __cordl_internal_set_closed)) ::System::Action_1<::UnityEngine::UIElements::Tab*>* closed;

  /// @brief Field closing, offset 0x4b0, size 0x8
  __declspec(property(get = __cordl_internal_get_closing, put = __cordl_internal_set_closing)) ::System::Func_1<bool>* closing;

  __declspec(property(get = get_contentContainer)) ::UnityEngine::UIElements::VisualElement* contentContainer;

  /// @brief Field contentUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_contentUssClassName, put = setStaticF_contentUssClassName)) ::StringW contentUssClassName;

  /// @brief Field draggingUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_draggingUssClassName, put = setStaticF_draggingUssClassName)) ::StringW draggingUssClassName;

  __declspec(property(get = get_iconImage, put = set_iconImage)) ::UnityEngine::UIElements::Background iconImage;

  /// @brief Field iconImageProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_iconImageProperty, put = setStaticF_iconImageProperty)) ::UnityEngine::UIElements::BindingId iconImageProperty;

  __declspec(property(get = get_label, put = set_label)) ::StringW label;

  /// @brief Field labelProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_labelProperty, put = setStaticF_labelProperty)) ::UnityEngine::UIElements::BindingId labelProperty;

  /// @brief Field m_CloseButton, offset 0x500, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CloseButton, put = __cordl_internal_set_m_CloseButton)) ::UnityEngine::UIElements::VisualElement* m_CloseButton;

  /// @brief Field m_Closeable, offset 0x4e8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Closeable, put = __cordl_internal_set_m_Closeable)) bool m_Closeable;

  /// @brief Field m_ContentContainer, offset 0x4f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ContentContainer, put = __cordl_internal_set_m_ContentContainer)) ::UnityEngine::UIElements::VisualElement* m_ContentContainer;

  /// @brief Field m_DragHandle, offset 0x4f8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DragHandle, put = __cordl_internal_set_m_DragHandle)) ::UnityEngine::UIElements::VisualElement* m_DragHandle;

  /// @brief Field m_IconImage, offset 0x4c8, size 0x20
  __declspec(property(get = __cordl_internal_get_m_IconImage, put = __cordl_internal_set_m_IconImage)) ::UnityEngine::UIElements::Background m_IconImage;

  /// @brief Field m_Label, offset 0x4c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Label, put = __cordl_internal_set_m_Label)) ::StringW m_Label;

  /// @brief Field m_TabHeader, offset 0x508, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TabHeader, put = __cordl_internal_set_m_TabHeader)) ::UnityEngine::UIElements::VisualElement* m_TabHeader;

  /// @brief Field m_TabHeaderImage, offset 0x510, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TabHeaderImage, put = __cordl_internal_set_m_TabHeaderImage)) ::UnityEngine::UIElements::Image* m_TabHeaderImage;

  /// @brief Field m_TabHeaderLabel, offset 0x518, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TabHeaderLabel, put = __cordl_internal_set_m_TabHeaderLabel)) ::UnityEngine::UIElements::Label* m_TabHeaderLabel;

  /// @brief Field reorderableItemHandleBarUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_reorderableItemHandleBarUssClassName, put = setStaticF_reorderableItemHandleBarUssClassName)) ::StringW reorderableItemHandleBarUssClassName;

  /// @brief Field reorderableItemHandleUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_reorderableItemHandleUssClassName, put = setStaticF_reorderableItemHandleUssClassName)) ::StringW reorderableItemHandleUssClassName;

  /// @brief Field reorderableUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_reorderableUssClassName, put = setStaticF_reorderableUssClassName)) ::StringW reorderableUssClassName;

  /// @brief Field selected, offset 0x4a8, size 0x8
  __declspec(property(get = __cordl_internal_get_selected, put = __cordl_internal_set_selected)) ::System::Action_1<::UnityEngine::UIElements::Tab*>* selected;

  __declspec(property(get = get_tabHeader)) ::UnityEngine::UIElements::VisualElement* tabHeader;

  /// @brief Field tabHeaderEmptyImageUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_tabHeaderEmptyImageUssClassName, put = setStaticF_tabHeaderEmptyImageUssClassName)) ::StringW tabHeaderEmptyImageUssClassName;

  /// @brief Field tabHeaderEmptyLabeUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_tabHeaderEmptyLabeUssClassName, put = setStaticF_tabHeaderEmptyLabeUssClassName)) ::StringW tabHeaderEmptyLabeUssClassName;

  /// @brief Field tabHeaderImageUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_tabHeaderImageUssClassName, put = setStaticF_tabHeaderImageUssClassName)) ::StringW tabHeaderImageUssClassName;

  /// @brief Field tabHeaderLabelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_tabHeaderLabelUssClassName, put = setStaticF_tabHeaderLabelUssClassName)) ::StringW tabHeaderLabelUssClassName;

  /// @brief Field tabHeaderStandaloneImageUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_tabHeaderStandaloneImageUssClassName, put = setStaticF_tabHeaderStandaloneImageUssClassName)) ::StringW tabHeaderStandaloneImageUssClassName;

  /// @brief Field tabHeaderUnderlineUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_tabHeaderUnderlineUssClassName, put = setStaticF_tabHeaderUnderlineUssClassName)) ::StringW tabHeaderUnderlineUssClassName;

  /// @brief Field tabHeaderUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_tabHeaderUssClassName, put = setStaticF_tabHeaderUssClassName)) ::StringW tabHeaderUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method AddCloseButton, addr 0x6ba84a8, size 0x20, virtual false, abstract: false, final false
  inline void AddCloseButton();

  /// @brief Method AddDragHandles, addr 0x6ba842c, size 0x24, virtual false, abstract: false, final false
  inline void AddDragHandles();

  /// @brief Method EnableTabCloseButton, addr 0x6ba773c, size 0xc, virtual false, abstract: false, final false
  inline void EnableTabCloseButton(bool enable);

  /// @brief Method EnableTabDragHandles, addr 0x6ba849c, size 0xc, virtual false, abstract: false, final false
  inline void EnableTabDragHandles(bool enable);

  static inline ::UnityEngine::UIElements::Tab* New_ctor();

  static inline ::UnityEngine::UIElements::Tab* New_ctor(::StringW label, ::UnityEngine::UIElements::Background iconImage);

  /// @brief Method OnCloseButtonClicked, addr 0x6ba85ac, size 0x74, virtual false, abstract: false, final false
  inline void OnCloseButtonClicked(::UnityEngine::UIElements::PointerDownEvent* evt);

  /// @brief Method OnTabClicked, addr 0x6ba858c, size 0x20, virtual false, abstract: false, final false
  inline void OnTabClicked(::UnityEngine::UIElements::PointerDownEvent* _);

  /// @brief Method RemoveCloseButton, addr 0x6ba84c8, size 0x4c, virtual false, abstract: false, final false
  inline void RemoveCloseButton();

  /// @brief Method RemoveDragHandles, addr 0x6ba8450, size 0x4c, virtual false, abstract: false, final false
  inline void RemoveDragHandles();

  /// @brief Method SetActive, addr 0x6ba8514, size 0x3c, virtual false, abstract: false, final false
  inline void SetActive();

  /// @brief Method SetInactive, addr 0x6ba8550, size 0x3c, virtual false, abstract: false, final false
  inline void SetInactive();

  /// @brief Method UpdateTooltip, addr 0x6ba833c, size 0xf0, virtual false, abstract: false, final false
  inline void UpdateTooltip(::UnityEngine::UIElements::TooltipEvent* evt);

  constexpr ::UnityEngine::UIElements::TabDragger* const& __cordl_internal_get__dragger_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::TabDragger*& __cordl_internal_get__dragger_k__BackingField();

  constexpr ::System::Action_1<::UnityEngine::UIElements::Tab*>* const& __cordl_internal_get_closed() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::Tab*>*& __cordl_internal_get_closed();

  constexpr ::System::Func_1<bool>* const& __cordl_internal_get_closing() const;

  constexpr ::System::Func_1<bool>*& __cordl_internal_get_closing();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_CloseButton() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_CloseButton();

  constexpr bool const& __cordl_internal_get_m_Closeable() const;

  constexpr bool& __cordl_internal_get_m_Closeable();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_ContentContainer() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_ContentContainer();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_DragHandle() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_DragHandle();

  constexpr ::UnityEngine::UIElements::Background const& __cordl_internal_get_m_IconImage() const;

  constexpr ::UnityEngine::UIElements::Background& __cordl_internal_get_m_IconImage();

  constexpr ::StringW const& __cordl_internal_get_m_Label() const;

  constexpr ::StringW& __cordl_internal_get_m_Label();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_TabHeader() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_TabHeader();

  constexpr ::UnityEngine::UIElements::Image* const& __cordl_internal_get_m_TabHeaderImage() const;

  constexpr ::UnityEngine::UIElements::Image*& __cordl_internal_get_m_TabHeaderImage();

  constexpr ::UnityEngine::UIElements::Label* const& __cordl_internal_get_m_TabHeaderLabel() const;

  constexpr ::UnityEngine::UIElements::Label*& __cordl_internal_get_m_TabHeaderLabel();

  constexpr ::System::Action_1<::UnityEngine::UIElements::Tab*>* const& __cordl_internal_get_selected() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::Tab*>*& __cordl_internal_get_selected();

  constexpr void __cordl_internal_set__dragger_k__BackingField(::UnityEngine::UIElements::TabDragger* value);

  constexpr void __cordl_internal_set_closed(::System::Action_1<::UnityEngine::UIElements::Tab*>* value);

  constexpr void __cordl_internal_set_closing(::System::Func_1<bool>* value);

  constexpr void __cordl_internal_set_m_CloseButton(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_Closeable(bool value);

  constexpr void __cordl_internal_set_m_ContentContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_DragHandle(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_IconImage(::UnityEngine::UIElements::Background value);

  constexpr void __cordl_internal_set_m_Label(::StringW value);

  constexpr void __cordl_internal_set_m_TabHeader(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_TabHeaderImage(::UnityEngine::UIElements::Image* value);

  constexpr void __cordl_internal_set_m_TabHeaderLabel(::UnityEngine::UIElements::Label* value);

  constexpr void __cordl_internal_set_selected(::System::Action_1<::UnityEngine::UIElements::Tab*>* value);

  /// @brief Method .ctor, addr 0x6ba7750, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6ba778c, size 0xabc, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, ::UnityEngine::UIElements::Background iconImage);

  /// @brief Method add_closed, addr 0x6ba70f8, size 0xc0, virtual false, abstract: false, final false
  inline void add_closed(::System::Action_1<::UnityEngine::UIElements::Tab*>* value);

  /// @brief Method add_selected, addr 0x6ba6f78, size 0xc0, virtual false, abstract: false, final false
  inline void add_selected(::System::Action_1<::UnityEngine::UIElements::Tab*>* value);

  static inline ::StringW getStaticF_closeButtonUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_closeableProperty();

  static inline ::StringW getStaticF_closeableUssClassName();

  static inline ::StringW getStaticF_contentUssClassName();

  static inline ::StringW getStaticF_draggingUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_iconImageProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_labelProperty();

  static inline ::StringW getStaticF_reorderableItemHandleBarUssClassName();

  static inline ::StringW getStaticF_reorderableItemHandleUssClassName();

  static inline ::StringW getStaticF_reorderableUssClassName();

  static inline ::StringW getStaticF_tabHeaderEmptyImageUssClassName();

  static inline ::StringW getStaticF_tabHeaderEmptyLabeUssClassName();

  static inline ::StringW getStaticF_tabHeaderImageUssClassName();

  static inline ::StringW getStaticF_tabHeaderLabelUssClassName();

  static inline ::StringW getStaticF_tabHeaderStandaloneImageUssClassName();

  static inline ::StringW getStaticF_tabHeaderUnderlineUssClassName();

  static inline ::StringW getStaticF_tabHeaderUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_closeable, addr 0x6ba7660, size 0x8, virtual false, abstract: false, final false
  inline bool get_closeable();

  /// @brief Method get_contentContainer, addr 0x6ba7748, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_contentContainer();

  /// @brief Method get_iconImage, addr 0x6ba73bc, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Background get_iconImage();

  /// @brief Method get_label, addr 0x6ba7280, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_label();

  /// @brief Method get_tabHeader, addr 0x6ba7278, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_tabHeader();

  /// @brief Method remove_closed, addr 0x6ba71b8, size 0xc0, virtual false, abstract: false, final false
  inline void remove_closed(::System::Action_1<::UnityEngine::UIElements::Tab*>* value);

  /// @brief Method remove_selected, addr 0x6ba7038, size 0xc0, virtual false, abstract: false, final false
  inline void remove_selected(::System::Action_1<::UnityEngine::UIElements::Tab*>* value);

  static inline void setStaticF_closeButtonUssClassName(::StringW value);

  static inline void setStaticF_closeableProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_closeableUssClassName(::StringW value);

  static inline void setStaticF_contentUssClassName(::StringW value);

  static inline void setStaticF_draggingUssClassName(::StringW value);

  static inline void setStaticF_iconImageProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_labelProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_reorderableItemHandleBarUssClassName(::StringW value);

  static inline void setStaticF_reorderableItemHandleUssClassName(::StringW value);

  static inline void setStaticF_reorderableUssClassName(::StringW value);

  static inline void setStaticF_tabHeaderEmptyImageUssClassName(::StringW value);

  static inline void setStaticF_tabHeaderEmptyLabeUssClassName(::StringW value);

  static inline void setStaticF_tabHeaderImageUssClassName(::StringW value);

  static inline void setStaticF_tabHeaderLabelUssClassName(::StringW value);

  static inline void setStaticF_tabHeaderStandaloneImageUssClassName(::StringW value);

  static inline void setStaticF_tabHeaderUnderlineUssClassName(::StringW value);

  static inline void setStaticF_tabHeaderUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_closeable, addr 0x6ba7668, size 0xd4, virtual false, abstract: false, final false
  inline void set_closeable(bool value);

  /// @brief Method set_iconImage, addr 0x6ba73cc, size 0x294, virtual false, abstract: false, final false
  inline void set_iconImage(::UnityEngine::UIElements::Background value);

  /// @brief Method set_label, addr 0x6ba7288, size 0x134, virtual false, abstract: false, final false
  inline void set_label(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tab();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Tab", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tab(Tab&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tab", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tab(Tab const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4324 };

  /// @brief Field selected, offset: 0x4a8, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::Tab*>* ___selected;

  /// @brief Field closing, offset: 0x4b0, size: 0x8, def value: None
  ::System::Func_1<bool>* ___closing;

  /// @brief Field closed, offset: 0x4b8, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::Tab*>* ___closed;

  /// @brief Field m_Label, offset: 0x4c0, size: 0x8, def value: None
  ::StringW ___m_Label;

  /// @brief Field m_IconImage, offset: 0x4c8, size: 0x20, def value: None
  ::UnityEngine::UIElements::Background ___m_IconImage;

  /// @brief Field m_Closeable, offset: 0x4e8, size: 0x1, def value: None
  bool ___m_Closeable;

  /// @brief Field m_ContentContainer, offset: 0x4f0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_ContentContainer;

  /// @brief Field m_DragHandle, offset: 0x4f8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_DragHandle;

  /// @brief Field m_CloseButton, offset: 0x500, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_CloseButton;

  /// @brief Field m_TabHeader, offset: 0x508, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_TabHeader;

  /// @brief Field m_TabHeaderImage, offset: 0x510, size: 0x8, def value: None
  ::UnityEngine::UIElements::Image* ___m_TabHeaderImage;

  /// @brief Field m_TabHeaderLabel, offset: 0x518, size: 0x8, def value: None
  ::UnityEngine::UIElements::Label* ___m_TabHeaderLabel;

  /// @brief Field <dragger>k__BackingField, offset: 0x520, size: 0x8, def value: None
  ::UnityEngine::UIElements::TabDragger* ____dragger_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Tab, ___selected) == 0x4a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Tab, ___closing) == 0x4b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Tab, ___closed) == 0x4b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Tab, ___m_Label) == 0x4c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Tab, ___m_IconImage) == 0x4c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Tab, ___m_Closeable) == 0x4e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Tab, ___m_ContentContainer) == 0x4f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Tab, ___m_DragHandle) == 0x4f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Tab, ___m_CloseButton) == 0x500, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Tab, ___m_TabHeader) == 0x508, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Tab, ___m_TabHeaderImage) == 0x510, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Tab, ___m_TabHeaderLabel) == 0x518, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Tab, ____dragger_k__BackingField) == 0x520, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Tab, 0x528>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Tab);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Tab*, "UnityEngine.UIElements", "Tab");
NEED_NO_BOX(::UnityEngine::UIElements::Tab_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Tab_UxmlFactory*, "UnityEngine.UIElements", "Tab/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::Tab_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Tab_UxmlTraits*, "UnityEngine.UIElements", "Tab/UxmlTraits");
NEED_NO_BOX(::UnityEngine::UIElements::Tab___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Tab___c*, "UnityEngine.UIElements", "Tab/<>c");
