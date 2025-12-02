#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ToggleButtonGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__ToggleButtonGroupState_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ToggleButtonGroup)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class Button;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
struct ToggleButtonGroupState;
}
namespace UnityEngine::UIElements {
class ToggleButtonGroup_UxmlFactory;
}
namespace UnityEngine::UIElements {
class ToggleButtonGroup_UxmlTraits;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ToggleButtonGroup;
}
namespace UnityEngine::UIElements {
class ToggleButtonGroup_UxmlFactory;
}
namespace UnityEngine::UIElements {
class ToggleButtonGroup_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ToggleButtonGroup);
MARK_REF_PTR_T(::UnityEngine::UIElements::ToggleButtonGroup_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ToggleButtonGroup/UxmlFactory
class CORDL_TYPE ToggleButtonGroup_UxmlFactory
    : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::ToggleButtonGroup*, ::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::ToggleButtonGroup_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x6b4621c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ToggleButtonGroup_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ToggleButtonGroup_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ToggleButtonGroup_UxmlFactory(ToggleButtonGroup_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ToggleButtonGroup_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ToggleButtonGroup_UxmlFactory(ToggleButtonGroup_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4343 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ToggleButtonGroup_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseField`1::UxmlTraits<TValueType>, UnityEngine.UIElements.ToggleButtonGroupState
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ToggleButtonGroup/UxmlTraits
class CORDL_TYPE ToggleButtonGroup_UxmlTraits : public ::UnityEngine::UIElements::BaseField_1_UxmlTraits<::UnityEngine::UIElements::ToggleButtonGroupState> {
public:
  // Declarations
  /// @brief Field m_AllowEmptySelection, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AllowEmptySelection,
                      put = __cordl_internal_set_m_AllowEmptySelection)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_AllowEmptySelection;

  /// @brief Field m_IsMultipleSelection, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IsMultipleSelection,
                      put = __cordl_internal_set_m_IsMultipleSelection)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_IsMultipleSelection;

  /// @brief Method Init, addr 0x6b46284, size 0x178, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_AllowEmptySelection() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_AllowEmptySelection();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_IsMultipleSelection() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_IsMultipleSelection();

  constexpr void __cordl_internal_set_m_AllowEmptySelection(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_IsMultipleSelection(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  /// @brief Method .ctor, addr 0x6b463fc, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ToggleButtonGroup_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ToggleButtonGroup_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ToggleButtonGroup_UxmlTraits(ToggleButtonGroup_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ToggleButtonGroup_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ToggleButtonGroup_UxmlTraits(ToggleButtonGroup_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4344 };

  /// @brief Field m_IsMultipleSelection, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_IsMultipleSelection;

  /// @brief Field m_AllowEmptySelection, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_AllowEmptySelection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits, ___m_IsMultipleSelection) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits, ___m_AllowEmptySelection) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits, 0xa8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseField`1<TValueType>, UnityEngine.UIElements.BindingId, UnityEngine.UIElements.ToggleButtonGroupState
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ToggleButtonGroup
class CORDL_TYPE ToggleButtonGroup : public ::UnityEngine::UIElements::BaseField_1<::UnityEngine::UIElements::ToggleButtonGroupState> {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::ToggleButtonGroup_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits;

  __declspec(property(get = get_allowEmptySelection, put = set_allowEmptySelection)) bool allowEmptySelection;

  /// @brief Field allowEmptySelectionProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_allowEmptySelectionProperty, put = setStaticF_allowEmptySelectionProperty)) ::UnityEngine::UIElements::BindingId allowEmptySelectionProperty;

  /// @brief Field buttonClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_buttonClassName, put = setStaticF_buttonClassName)) ::StringW buttonClassName;

  /// @brief Field buttonGroupClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_buttonGroupClassName, put = setStaticF_buttonGroupClassName)) ::StringW buttonGroupClassName;

  /// @brief Field buttonLeftClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_buttonLeftClassName, put = setStaticF_buttonLeftClassName)) ::StringW buttonLeftClassName;

  /// @brief Field buttonMidClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_buttonMidClassName, put = setStaticF_buttonMidClassName)) ::StringW buttonMidClassName;

  /// @brief Field buttonRightClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_buttonRightClassName, put = setStaticF_buttonRightClassName)) ::StringW buttonRightClassName;

  /// @brief Field buttonStandaloneClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_buttonStandaloneClassName, put = setStaticF_buttonStandaloneClassName)) ::StringW buttonStandaloneClassName;

  /// @brief Field containerUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_containerUssClassName, put = setStaticF_containerUssClassName)) ::StringW containerUssClassName;

  __declspec(property(get = get_contentContainer)) ::UnityEngine::UIElements::VisualElement* contentContainer;

  /// @brief Field emptyStateLabelClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_emptyStateLabelClassName, put = setStaticF_emptyStateLabelClassName)) ::StringW emptyStateLabelClassName;

  __declspec(property(get = get_isMultipleSelection, put = set_isMultipleSelection)) bool isMultipleSelection;

  /// @brief Field isMultipleSelectionProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_isMultipleSelectionProperty, put = setStaticF_isMultipleSelectionProperty)) ::UnityEngine::UIElements::BindingId isMultipleSelectionProperty;

  /// @brief Field k_MaxToggleButtonGroupMessage, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_MaxToggleButtonGroupMessage, put = setStaticF_k_MaxToggleButtonGroupMessage)) ::StringW k_MaxToggleButtonGroupMessage;

  /// @brief Field m_AllowEmptySelection, offset 0x549, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AllowEmptySelection, put = __cordl_internal_set_m_AllowEmptySelection)) bool m_AllowEmptySelection;

  /// @brief Field m_ButtonGroupContainer, offset 0x530, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ButtonGroupContainer, put = __cordl_internal_set_m_ButtonGroupContainer)) ::UnityEngine::UIElements::VisualElement* m_ButtonGroupContainer;

  /// @brief Field m_Buttons, offset 0x538, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Buttons, put = __cordl_internal_set_m_Buttons)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>* m_Buttons;

  /// @brief Field m_EmptyLabel, offset 0x540, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EmptyLabel, put = __cordl_internal_set_m_EmptyLabel)) ::UnityEngine::UIElements::VisualElement* m_EmptyLabel;

  /// @brief Field m_IsMultipleSelection, offset 0x548, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsMultipleSelection, put = __cordl_internal_set_m_IsMultipleSelection)) bool m_IsMultipleSelection;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  static inline ::UnityEngine::UIElements::ToggleButtonGroup* New_ctor();

  static inline ::UnityEngine::UIElements::ToggleButtonGroup* New_ctor(::StringW label);

  static inline ::UnityEngine::UIElements::ToggleButtonGroup* New_ctor(::StringW label, ::UnityEngine::UIElements::ToggleButtonGroupState toggleButtonGroupState);

  /// @brief Method OnButtonGroupContainerElementAdded, addr 0x6b45224, size 0x340, virtual false, abstract: false, final false
  inline void OnButtonGroupContainerElementAdded(::UnityEngine::UIElements::VisualElement* ve, int32_t index);

  /// @brief Method OnButtonGroupContainerElementRemoved, addr 0x6b45700, size 0x37c, virtual false, abstract: false, final false
  inline void OnButtonGroupContainerElementRemoved(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method OnOptionChange, addr 0x6b45a7c, size 0x300, virtual false, abstract: false, final false
  inline void OnOptionChange(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method OnViewDataReady, addr 0x6b44bf8, size 0x78, virtual true, abstract: false, final false
  inline void OnViewDataReady();

  /// @brief Method SetValueWithoutNotify, addr 0x6b45040, size 0x1e4, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(::UnityEngine::UIElements::ToggleButtonGroupState newValue);

  /// @brief Method UpdateButtonStates, addr 0x6b44c70, size 0x238, virtual false, abstract: false, final false
  inline void UpdateButtonStates(::UnityEngine::UIElements::ToggleButtonGroupState options);

  /// @brief Method UpdateButtonsStyling, addr 0x6b45564, size 0x19c, virtual false, abstract: false, final false
  inline void UpdateButtonsStyling();

  /// @brief Method UpdateMixedValueContent, addr 0x6b44ea8, size 0x198, virtual true, abstract: false, final false
  inline void UpdateMixedValueContent();

  constexpr bool const& __cordl_internal_get_m_AllowEmptySelection() const;

  constexpr bool& __cordl_internal_get_m_AllowEmptySelection();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_ButtonGroupContainer() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_ButtonGroupContainer();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>* const& __cordl_internal_get_m_Buttons() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>*& __cordl_internal_get_m_Buttons();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_EmptyLabel() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_EmptyLabel();

  constexpr bool const& __cordl_internal_get_m_IsMultipleSelection() const;

  constexpr bool& __cordl_internal_get_m_IsMultipleSelection();

  constexpr void __cordl_internal_set_m_AllowEmptySelection(bool value);

  constexpr void __cordl_internal_set_m_ButtonGroupContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_Buttons(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>* value);

  constexpr void __cordl_internal_set_m_EmptyLabel(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_IsMultipleSelection(bool value);

  /// @brief Method .ctor, addr 0x6b4475c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6b4476c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW label);

  /// @brief Method .ctor, addr 0x6b448c4, size 0x324, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, ::UnityEngine::UIElements::ToggleButtonGroupState toggleButtonGroupState);

  static inline ::UnityEngine::UIElements::BindingId getStaticF_allowEmptySelectionProperty();

  static inline ::StringW getStaticF_buttonClassName();

  static inline ::StringW getStaticF_buttonGroupClassName();

  static inline ::StringW getStaticF_buttonLeftClassName();

  static inline ::StringW getStaticF_buttonMidClassName();

  static inline ::StringW getStaticF_buttonRightClassName();

  static inline ::StringW getStaticF_buttonStandaloneClassName();

  static inline ::StringW getStaticF_containerUssClassName();

  static inline ::StringW getStaticF_emptyStateLabelClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_isMultipleSelectionProperty();

  static inline ::StringW getStaticF_k_MaxToggleButtonGroupMessage();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_allowEmptySelection, addr 0x6b4456c, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowEmptySelection();

  /// @brief Method get_contentContainer, addr 0x6b44be8, size 0x10, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_contentContainer();

  /// @brief Method get_isMultipleSelection, addr 0x6b44104, size 0x8, virtual false, abstract: false, final false
  inline bool get_isMultipleSelection();

  static inline void setStaticF_allowEmptySelectionProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_buttonClassName(::StringW value);

  static inline void setStaticF_buttonGroupClassName(::StringW value);

  static inline void setStaticF_buttonLeftClassName(::StringW value);

  static inline void setStaticF_buttonMidClassName(::StringW value);

  static inline void setStaticF_buttonRightClassName(::StringW value);

  static inline void setStaticF_buttonStandaloneClassName(::StringW value);

  static inline void setStaticF_containerUssClassName(::StringW value);

  static inline void setStaticF_emptyStateLabelClassName(::StringW value);

  static inline void setStaticF_isMultipleSelectionProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_k_MaxToggleButtonGroupMessage(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_allowEmptySelection, addr 0x6b44574, size 0x1e8, virtual false, abstract: false, final false
  inline void set_allowEmptySelection(bool value);

  /// @brief Method set_isMultipleSelection, addr 0x6b4410c, size 0x1e8, virtual false, abstract: false, final false
  inline void set_isMultipleSelection(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ToggleButtonGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ToggleButtonGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ToggleButtonGroup(ToggleButtonGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ToggleButtonGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ToggleButtonGroup(ToggleButtonGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4345 };

  /// @brief Field m_ButtonGroupContainer, offset: 0x530, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_ButtonGroupContainer;

  /// @brief Field m_Buttons, offset: 0x538, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>* ___m_Buttons;

  /// @brief Field m_EmptyLabel, offset: 0x540, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_EmptyLabel;

  /// @brief Field m_IsMultipleSelection, offset: 0x548, size: 0x1, def value: None
  bool ___m_IsMultipleSelection;

  /// @brief Field m_AllowEmptySelection, offset: 0x549, size: 0x1, def value: None
  bool ___m_AllowEmptySelection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ToggleButtonGroup, ___m_ButtonGroupContainer) == 0x530, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ToggleButtonGroup, ___m_Buttons) == 0x538, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ToggleButtonGroup, ___m_EmptyLabel) == 0x540, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ToggleButtonGroup, ___m_IsMultipleSelection) == 0x548, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ToggleButtonGroup, ___m_AllowEmptySelection) == 0x549, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ToggleButtonGroup, 0x550>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ToggleButtonGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ToggleButtonGroup*, "UnityEngine.UIElements", "ToggleButtonGroup");
NEED_NO_BOX(::UnityEngine::UIElements::ToggleButtonGroup_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ToggleButtonGroup_UxmlFactory*, "UnityEngine.UIElements", "ToggleButtonGroup/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits*, "UnityEngine.UIElements", "ToggleButtonGroup/UxmlTraits");
