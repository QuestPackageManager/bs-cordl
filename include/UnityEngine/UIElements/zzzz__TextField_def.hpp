#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TextInputBaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextField)
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
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class __TextField__TextInput;
}
namespace UnityEngine::UIElements {
class __TextField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __TextField__UxmlTraits;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TextField;
}
namespace UnityEngine::UIElements {
class __TextField__TextInput;
}
namespace UnityEngine::UIElements {
class __TextField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __TextField__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TextField);
MARK_REF_PTR_T(::UnityEngine::UIElements::__TextField__TextInput);
MARK_REF_PTR_T(::UnityEngine::UIElements::__TextField__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__TextField__UxmlTraits);
// Type: ::UxmlTraits
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7096)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7096), inst: 397 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7059))
// CS Name: ::TextField::UxmlTraits*
class CORDL_TYPE __TextField__UxmlTraits : public ::UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<::StringW> {
public:
  // Declarations
  /// @brief Field m_Multiline, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Multiline, put = __cordl_internal_set_m_Multiline))::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_Multiline;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_Multiline();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __cordl_internal_get_m_Multiline() const;

  constexpr void __cordl_internal_set_m_Multiline(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  /// @brief Method Init, addr 0x2e29338, size 0x114, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__TextField__UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x2e2944c, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__TextField__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextField__UxmlTraits(__TextField__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextField__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextField__UxmlTraits(__TextField__UxmlTraits const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextField__UxmlTraits();

public:
  /// @brief Field m_Multiline, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_Multiline;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TextField__UxmlTraits, 0xc0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TextField__UxmlTraits, ___m_Multiline) == 0xb8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::TextField
// SizeInfo { instance_size: 1056, native_size: -1, calculated_instance_size: 1056, calculated_native_size: 1056, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7098)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7098), inst: 397 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7061))
// CS Name: ::UnityEngine.UIElements::TextField*
class CORDL_TYPE TextField : public ::UnityEngine::UIElements::TextInputBaseField_1<::StringW> {
public:
  // Declarations
  using TextInput = ::UnityEngine::UIElements::__TextField__TextInput;

  using UxmlTraits = ::UnityEngine::UIElements::__TextField__UxmlTraits;

  using UxmlFactory = ::UnityEngine::UIElements::__TextField__UxmlFactory;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName))::StringW ussClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName))::StringW labelUssClassName;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName))::StringW inputUssClassName;

  __declspec(property(get = get_textInput))::UnityEngine::UIElements::__TextField__TextInput* textInput;

  __declspec(property(put = set_multiline)) bool multiline;

  __declspec(property(get = get_value, put = set_value))::StringW value;

  static inline void setStaticF_ussClassName(::StringW value);

  static inline ::StringW getStaticF_ussClassName();

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline ::StringW getStaticF_labelUssClassName();

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline ::StringW getStaticF_inputUssClassName();

  /// @brief Method get_textInput, addr 0x2e28c1c, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__TextField__TextInput* get_textInput();

  /// @brief Method set_multiline, addr 0x2e28ca0, size 0x20, virtual false, abstract: false, final false
  inline void set_multiline(bool value);

  static inline ::UnityEngine::UIElements::TextField* New_ctor();

  /// @brief Method .ctor, addr 0x2e28d8c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::TextField* New_ctor(::StringW label);

  /// @brief Method .ctor, addr 0x2e28da4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::StringW label);

  static inline ::UnityEngine::UIElements::TextField* New_ctor(::StringW label, int32_t maxLength, bool multiline, bool isPasswordField, char16_t maskChar);

  /// @brief Method .ctor, addr 0x2e28db8, size 0x1dc, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, int32_t maxLength, bool multiline, bool isPasswordField, char16_t maskChar);

  /// @brief Method get_value, addr 0x2e28fdc, size 0x48, virtual true, abstract: false, final false
  inline ::StringW get_value();

  /// @brief Method set_value, addr 0x2e29024, size 0xa4, virtual true, abstract: false, final false
  inline void set_value(::StringW value);

  /// @brief Method SetValueWithoutNotify, addr 0x2e290c8, size 0xa4, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(::StringW newValue);

  /// @brief Method OnViewDataReady, addr 0x2e2916c, size 0xb4, virtual true, abstract: false, final false
  inline void OnViewDataReady();

  // Ctor Parameters [CppParam { name: "", ty: "TextField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextField(TextField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextField(TextField const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextField();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextField, 0x420>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6997)), TypeDefinitionIndex(TypeDefinitionIndex(7059)), TypeDefinitionIndex(TypeDefinitionIndex(7061)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6997), inst: 5280 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(7058)) CS Name: ::TextField::UxmlFactory*
class CORDL_TYPE __TextField__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::TextField*, ::UnityEngine::UIElements::__TextField__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__TextField__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x2e292f0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__TextField__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextField__UxmlFactory(__TextField__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextField__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextField__UxmlFactory(__TextField__UxmlFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextField__UxmlFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TextField__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::TextInput
// SizeInfo { instance_size: 1048, native_size: -1, calculated_instance_size: 1048, calculated_native_size: 1041, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7097)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7097), inst: 397 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7060))
// CS Name: ::TextField::TextInput*
class CORDL_TYPE __TextField__TextInput : public ::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<::StringW> {
public:
  // Declarations
  /// @brief Field m_Multiline, offset 0x410, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Multiline, put = __cordl_internal_set_m_Multiline)) bool m_Multiline;

  __declspec(property(get = get_parentTextField))::UnityEngine::UIElements::TextField* parentTextField;

  __declspec(property(get = get_multiline, put = set_multiline)) bool multiline;

  __declspec(property(put = set_isPasswordField)) bool isPasswordField;

  constexpr bool& __cordl_internal_get_m_Multiline();

  constexpr bool const& __cordl_internal_get_m_Multiline() const;

  constexpr void __cordl_internal_set_m_Multiline(bool value);

  /// @brief Method get_parentTextField, addr 0x2e294ec, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextField* get_parentTextField();

  /// @brief Method get_multiline, addr 0x2e2956c, size 0x8, virtual false, abstract: false, final false
  inline bool get_multiline();

  /// @brief Method set_multiline, addr 0x2e28cc0, size 0xcc, virtual false, abstract: false, final false
  inline void set_multiline(bool value);

  /// @brief Method SetTextAlign, addr 0x2e29574, size 0xa0, virtual false, abstract: false, final false
  inline void SetTextAlign();

  /// @brief Method set_isPasswordField, addr 0x2e29614, size 0x5c, virtual true, abstract: false, final false
  inline void set_isPasswordField(bool value);

  /// @brief Method StringToValue, addr 0x2e29670, size 0x8, virtual true, abstract: false, final false
  inline ::StringW StringToValue(::StringW str);

  /// @brief Method SyncTextEngine, addr 0x2e29678, size 0x90, virtual true, abstract: false, final false
  inline void SyncTextEngine();

  /// @brief Method ExecuteDefaultActionAtTarget, addr 0x2e29708, size 0x730, virtual true, abstract: false, final false
  inline void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method ExecuteDefaultAction, addr 0x2e29e38, size 0x18c, virtual true, abstract: false, final false
  inline void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt);

  static inline ::UnityEngine::UIElements::__TextField__TextInput* New_ctor();

  /// @brief Method .ctor, addr 0x2e28f94, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__TextField__TextInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextField__TextInput(__TextField__TextInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextField__TextInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextField__TextInput(__TextField__TextInput const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextField__TextInput();

public:
  /// @brief Field m_Multiline, offset: 0x410, size: 0x1, def value: None
  bool ___m_Multiline;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TextField__TextInput, 0x418>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TextField__TextInput, ___m_Multiline) == 0x410, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TextField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextField*, "UnityEngine.UIElements", "TextField");
NEED_NO_BOX(::UnityEngine::UIElements::__TextField__TextInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TextField__TextInput*, "UnityEngine.UIElements", "TextField/TextInput");
NEED_NO_BOX(::UnityEngine::UIElements::__TextField__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TextField__UxmlFactory*, "UnityEngine.UIElements", "TextField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__TextField__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TextField__UxmlTraits*, "UnityEngine.UIElements", "TextField/UxmlTraits");
