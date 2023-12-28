#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlIntAttributeDescription_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RadioButtonGroup)
namespace UnityEngine::UIElements {
template <typename TEventType> class EventCallback_1;
}
namespace UnityEngine::UIElements {
class IGroupBox;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::UIElements {
class RadioButton;
}
namespace UnityEngine::UIElements {
class __RadioButtonGroup__UxmlFactory;
}
namespace UnityEngine::UIElements {
template <typename T> class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
class __RadioButtonGroup__UxmlTraits;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class RadioButtonGroup;
}
namespace UnityEngine::UIElements {
class __RadioButtonGroup__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __RadioButtonGroup__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::RadioButtonGroup);
MARK_REF_PTR_T(::UnityEngine::UIElements::__RadioButtonGroup__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__RadioButtonGroup__UxmlTraits);
// Type: ::UxmlTraits
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6988)), TypeDefinitionIndex(TypeDefinitionIndex(7131)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7131), inst: 915
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(7134)) CS Name: ::RadioButtonGroup::UxmlTraits*
class CORDL_TYPE __RadioButtonGroup__UxmlTraits : public ::UnityEngine::UIElements::BaseFieldTraits_2<int32_t, ::UnityEngine::UIElements::UxmlIntAttributeDescription*> {
public:
  // Declarations
  /// @brief Field m_Choices, offset 0x88, size 0x8
  __declspec(property(get = __get_m_Choices, put = __set_m_Choices))::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Choices;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __get_m_Choices();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __get_m_Choices() const;

  constexpr void __set_m_Choices(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method Init addr 0x2e3d540 size 0x138 virtual true final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__RadioButtonGroup__UxmlTraits* New_ctor();

  /// @brief Method .ctor addr 0x2e3d678 size 0xa0 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__RadioButtonGroup__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RadioButtonGroup__UxmlTraits(__RadioButtonGroup__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RadioButtonGroup__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RadioButtonGroup__UxmlTraits(__RadioButtonGroup__UxmlTraits const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RadioButtonGroup__UxmlTraits();

public:
  /// @brief Field m_Choices, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Choices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__RadioButtonGroup__UxmlTraits, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::RadioButtonGroup
// SizeInfo { instance_size: 1056, native_size: -1, calculated_instance_size: 1056, calculated_native_size: 1056, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7130)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7130), inst: 98 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7135))
// CS Name: ::UnityEngine.UIElements::RadioButtonGroup*
class CORDL_TYPE RadioButtonGroup : public ::UnityEngine::UIElements::BaseField_1<int32_t> {
public:
  // Declarations
  using UxmlTraits = ::UnityEngine::UIElements::__RadioButtonGroup__UxmlTraits;

  using UxmlFactory = ::UnityEngine::UIElements::__RadioButtonGroup__UxmlFactory;

  /// @brief Field m_Choices, offset 0x408, size 0x8
  __declspec(property(get = __get_m_Choices, put = __set_m_Choices))::System::Collections::Generic::IEnumerable_1<::StringW>* m_Choices;

  /// @brief Field m_RadioButtons, offset 0x410, size 0x8
  __declspec(property(get = __get_m_RadioButtons, put = __set_m_RadioButtons))::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>* m_RadioButtons;

  /// @brief Field m_RadioButtonValueChangedCallback, offset 0x418, size 0x8
  __declspec(property(get = __get_m_RadioButtonValueChangedCallback,
                      put = __set_m_RadioButtonValueChangedCallback))::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* m_RadioButtonValueChangedCallback;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName))::StringW ussClassName;

  __declspec(property(put = set_choices))::System::Collections::Generic::IEnumerable_1<::StringW>* choices;

  /// @brief Convert operator to "::UnityEngine::UIElements::IGroupBox"
  constexpr operator ::UnityEngine::UIElements::IGroupBox*() noexcept;

  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& __get_m_Choices();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::StringW>*> const& __get_m_Choices() const;

  constexpr void __set_m_Choices(::System::Collections::Generic::IEnumerable_1<::StringW>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>*& __get_m_RadioButtons();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>*> const& __get_m_RadioButtons() const;

  constexpr void __set_m_RadioButtons(::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>* value);

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>*& __get_m_RadioButtonValueChangedCallback();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>*> const& __get_m_RadioButtonValueChangedCallback() const;

  constexpr void __set_m_RadioButtonValueChangedCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* value);

  static inline void setStaticF_ussClassName(::StringW value);

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method set_choices addr 0x2e3b9f8 size 0x598 virtual false final false
  inline void set_choices(::System::Collections::Generic::IEnumerable_1<::StringW>* value);

  static inline ::UnityEngine::UIElements::RadioButtonGroup* New_ctor();

  /// @brief Method .ctor addr 0x2e3c17c size 0xc virtual false final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::RadioButtonGroup* New_ctor(::StringW label, ::System::Collections::Generic::List_1<::StringW>* radioButtonChoices);

  /// @brief Method .ctor addr 0x2e3c188 size 0x1b8 virtual false final false
  inline void _ctor(::StringW label, ::System::Collections::Generic::List_1<::StringW>* radioButtonChoices);

  /// @brief Method RadioButtonValueChangedCallback addr 0x2e3c340 size 0xf8 virtual false final false
  inline void RadioButtonValueChangedCallback(::UnityEngine::UIElements::ChangeEvent_1<bool>* evt);

  /// @brief Method SetValueWithoutNotify addr 0x2e3c438 size 0x60 virtual true final false
  inline void SetValueWithoutNotify(int32_t newValue);

  /// @brief Method UpdateRadioButtons addr 0x2e3bf90 size 0x1ec virtual false final false
  inline void UpdateRadioButtons();

  // Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RadioButtonGroup(RadioButtonGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RadioButtonGroup(RadioButtonGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RadioButtonGroup();

public:
  /// @brief Field m_Choices, offset: 0x408, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::StringW>* ___m_Choices;

  /// @brief Field m_RadioButtons, offset: 0x410, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>* ___m_RadioButtons;

  /// @brief Field m_RadioButtonValueChangedCallback, offset: 0x418, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* ___m_RadioButtonValueChangedCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RadioButtonGroup, 0x420>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6997), inst: 5272 }), TypeDefinitionIndex(TypeDefinitionIndex(6997)),
// TypeDefinitionIndex(TypeDefinitionIndex(7135)), TypeDefinitionIndex(TypeDefinitionIndex(7134))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7133)) CS Name: ::RadioButtonGroup::UxmlFactory*
class CORDL_TYPE __RadioButtonGroup__UxmlFactory
    : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::RadioButtonGroup*, ::UnityEngine::UIElements::__RadioButtonGroup__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__RadioButtonGroup__UxmlFactory* New_ctor();

  /// @brief Method .ctor addr 0x2e3d4f8 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__RadioButtonGroup__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RadioButtonGroup__UxmlFactory(__RadioButtonGroup__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RadioButtonGroup__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RadioButtonGroup__UxmlFactory(__RadioButtonGroup__UxmlFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RadioButtonGroup__UxmlFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__RadioButtonGroup__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::RadioButtonGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RadioButtonGroup*, "UnityEngine.UIElements", "RadioButtonGroup");
NEED_NO_BOX(::UnityEngine::UIElements::__RadioButtonGroup__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__RadioButtonGroup__UxmlFactory*, "UnityEngine.UIElements", "RadioButtonGroup/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__RadioButtonGroup__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__RadioButtonGroup__UxmlTraits*, "UnityEngine.UIElements", "RadioButtonGroup/UxmlTraits");
