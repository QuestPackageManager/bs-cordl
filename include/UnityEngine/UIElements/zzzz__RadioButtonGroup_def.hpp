#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/RadioButtonGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBox_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RadioButtonGroup)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
template <typename T> class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
template <typename TEventType> class EventCallback_1;
}
namespace UnityEngine::UIElements {
class IGroupBoxOption;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class RadioButtonGroup_UxmlFactory;
}
namespace UnityEngine::UIElements {
class RadioButtonGroup_UxmlTraits;
}
namespace UnityEngine::UIElements {
class RadioButton;
}
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class RadioButtonGroup;
}
namespace UnityEngine::UIElements {
class RadioButtonGroup_UxmlFactory;
}
namespace UnityEngine::UIElements {
class RadioButtonGroup_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::RadioButtonGroup);
MARK_REF_PTR_T(::UnityEngine::UIElements::RadioButtonGroup_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.RadioButtonGroup/UxmlFactory
class CORDL_TYPE RadioButtonGroup_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::RadioButtonGroup*, ::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::RadioButtonGroup_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4a047c8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RadioButtonGroup_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroup_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RadioButtonGroup_UxmlFactory(RadioButtonGroup_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroup_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RadioButtonGroup_UxmlFactory(RadioButtonGroup_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5678 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RadioButtonGroup_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseFieldTraits`2<TValueType, TValueUxmlAttributeType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.RadioButtonGroup/UxmlTraits
class CORDL_TYPE RadioButtonGroup_UxmlTraits : public ::UnityEngine::UIElements::BaseFieldTraits_2<int32_t, ::UnityEngine::UIElements::UxmlIntAttributeDescription*> {
public:
  // Declarations
  /// @brief Field m_Choices, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Choices, put = __cordl_internal_set_m_Choices)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Choices;

  /// @brief Method Init, addr 0x4a04810, size 0x134, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_Choices() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Choices();

  constexpr void __cordl_internal_set_m_Choices(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x4a04944, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RadioButtonGroup_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroup_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RadioButtonGroup_UxmlTraits(RadioButtonGroup_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroup_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RadioButtonGroup_UxmlTraits(RadioButtonGroup_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5679 };

  /// @brief Field m_Choices, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Choices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits, ___m_Choices) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseField`1<TValueType>, UnityEngine.UIElements.IGroupBox
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.RadioButtonGroup
class CORDL_TYPE RadioButtonGroup : public ::UnityEngine::UIElements::BaseField_1<int32_t> {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::RadioButtonGroup_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits;

  __declspec(property(put = set_choices)) ::System::Collections::Generic::IEnumerable_1<::StringW>* choices;

  /// @brief Field containerUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_containerUssClassName, put = setStaticF_containerUssClassName)) ::StringW containerUssClassName;

  __declspec(property(get = get_contentContainer)) ::UnityEngine::UIElements::VisualElement* contentContainer;

  /// @brief Field m_RadioButtonContainer, offset 0x450, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RadioButtonContainer, put = __cordl_internal_set_m_RadioButtonContainer)) ::UnityEngine::UIElements::VisualElement* m_RadioButtonContainer;

  /// @brief Field m_RadioButtonValueChangedCallback, offset 0x448, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_RadioButtonValueChangedCallback,
      put = __cordl_internal_set_m_RadioButtonValueChangedCallback)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* m_RadioButtonValueChangedCallback;

  /// @brief Field m_RadioButtons, offset 0x440, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RadioButtons,
                      put = __cordl_internal_set_m_RadioButtons)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>* m_RadioButtons;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Convert operator to "::UnityEngine::UIElements::IGroupBox"
  constexpr operator ::UnityEngine::UIElements::IGroupBox*() noexcept;

  static inline ::UnityEngine::UIElements::RadioButtonGroup* New_ctor();

  static inline ::UnityEngine::UIElements::RadioButtonGroup* New_ctor(::StringW label, ::System::Collections::Generic::List_1<::StringW>* radioButtonChoices);

  /// @brief Method RadioButtonValueChangedCallback, addr 0x4a0425c, size 0xf8, virtual false, abstract: false, final false
  inline void RadioButtonValueChangedCallback(::UnityEngine::UIElements::ChangeEvent_1<bool>* evt);

  /// @brief Method SetValueWithoutNotify, addr 0x4a04354, size 0x60, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(int32_t newValue);

  /// @brief Method UnityEngine.UIElements.IGroupBox.OnOptionAdded, addr 0x4a043b4, size 0x200, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IGroupBox_OnOptionAdded(::UnityEngine::UIElements::IGroupBoxOption* option);

  /// @brief Method UnityEngine.UIElements.IGroupBox.OnOptionRemoved, addr 0x4a045b4, size 0x174, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IGroupBox_OnOptionRemoved(::UnityEngine::UIElements::IGroupBoxOption* option);

  /// @brief Method UpdateRadioButtons, addr 0x4a03e18, size 0x1ec, virtual false, abstract: false, final false
  inline void UpdateRadioButtons();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_RadioButtonContainer() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_RadioButtonContainer();

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* const& __cordl_internal_get_m_RadioButtonValueChangedCallback() const;

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>*& __cordl_internal_get_m_RadioButtonValueChangedCallback();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>* const& __cordl_internal_get_m_RadioButtons() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>*& __cordl_internal_get_m_RadioButtons();

  constexpr void __cordl_internal_set_m_RadioButtonContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_RadioButtonValueChangedCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* value);

  constexpr void __cordl_internal_set_m_RadioButtons(::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>* value);

  /// @brief Method .ctor, addr 0x4a04014, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4a04020, size 0x23c, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, ::System::Collections::Generic::List_1<::StringW>* radioButtonChoices);

  static inline ::StringW getStaticF_containerUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_contentContainer, addr 0x4a04004, size 0x10, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_contentContainer();

  /// @brief Convert to "::UnityEngine::UIElements::IGroupBox"
  constexpr ::UnityEngine::UIElements::IGroupBox* i___UnityEngine__UIElements__IGroupBox() noexcept;

  static inline void setStaticF_containerUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_choices, addr 0x4a03770, size 0x6a8, virtual false, abstract: false, final false
  inline void set_choices(::System::Collections::Generic::IEnumerable_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RadioButtonGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RadioButtonGroup(RadioButtonGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RadioButtonGroup(RadioButtonGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5680 };

  /// @brief Field m_RadioButtons, offset: 0x440, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>* ___m_RadioButtons;

  /// @brief Field m_RadioButtonValueChangedCallback, offset: 0x448, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* ___m_RadioButtonValueChangedCallback;

  /// @brief Field m_RadioButtonContainer, offset: 0x450, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_RadioButtonContainer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup, ___m_RadioButtons) == 0x440, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup, ___m_RadioButtonValueChangedCallback) == 0x448, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RadioButtonGroup, ___m_RadioButtonContainer) == 0x450, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RadioButtonGroup, 0x458>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::RadioButtonGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RadioButtonGroup*, "UnityEngine.UIElements", "RadioButtonGroup");
NEED_NO_BOX(::UnityEngine::UIElements::RadioButtonGroup_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RadioButtonGroup_UxmlFactory*, "UnityEngine.UIElements", "RadioButtonGroup/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits*, "UnityEngine.UIElements", "RadioButtonGroup/UxmlTraits");
