#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextField.hpp"
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
class UxmlStringAttributeDescription;
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
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::TextField::UxmlFactory*
class CORDL_TYPE __TextField__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::TextField*, ::UnityEngine::UIElements::__TextField__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__TextField__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4988dd0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextField__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TextField__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextField__UxmlFactory(__TextField__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextField__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextField__UxmlFactory(__TextField__UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5581 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TextField__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::TextField::UxmlTraits*
class CORDL_TYPE __TextField__UxmlTraits : public ::UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<::StringW> {
public:
  // Declarations
  /// @brief Field k_Value, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_Value, put = setStaticF_k_Value)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* k_Value;

  /// @brief Field m_Multiline, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Multiline, put = __cordl_internal_set_m_Multiline)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_Multiline;

  /// @brief Method Init, addr 0x4988e18, size 0x1b8, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__TextField__UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_Multiline();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __cordl_internal_get_m_Multiline() const;

  constexpr void __cordl_internal_set_m_Multiline(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  /// @brief Method .ctor, addr 0x4988fd0, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UxmlStringAttributeDescription* getStaticF_k_Value();

  static inline void setStaticF_k_Value(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextField__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TextField__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextField__UxmlTraits(__TextField__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextField__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextField__UxmlTraits(__TextField__UxmlTraits const&) = delete;

  /// @brief Field m_Multiline, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_Multiline;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5582 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TextField__UxmlTraits, 0xd0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__TextField__UxmlTraits, ___m_Multiline) == 0xc8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::TextInput
// SizeInfo { instance_size: 1024, native_size: -1, calculated_instance_size: 1024, calculated_native_size: 1020, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::TextField::TextInput*
class CORDL_TYPE __TextField__TextInput : public ::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<::StringW> {
public:
  // Declarations
  __declspec(property(put = set_isPasswordField)) bool isPasswordField;

  __declspec(property(put = set_multiline)) bool multiline;

  static inline ::UnityEngine::UIElements::__TextField__TextInput* New_ctor();

  /// @brief Method StringToValue, addr 0x49891d0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW StringToValue(::StringW str);

  /// @brief Method .ctor, addr 0x4988794, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_isPasswordField, addr 0x4989158, size 0x78, virtual true, abstract: false, final false
  inline void set_isPasswordField(bool value);

  /// @brief Method set_multiline, addr 0x4988358, size 0x230, virtual false, abstract: false, final false
  inline void set_multiline(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextField__TextInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TextField__TextInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextField__TextInput(__TextField__TextInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextField__TextInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextField__TextInput(__TextField__TextInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5583 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TextField__TextInput, 0x400>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::TextField
// SizeInfo { instance_size: 1112, native_size: -1, calculated_instance_size: 1112, calculated_native_size: 1112, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::TextField*
class CORDL_TYPE TextField : public ::UnityEngine::UIElements::TextInputBaseField_1<::StringW> {
public:
  // Declarations
  using TextInput = ::UnityEngine::UIElements::__TextField__TextInput;

  using UxmlFactory = ::UnityEngine::UIElements::__TextField__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__TextField__UxmlTraits;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  __declspec(property(put = set_multiline)) bool multiline;

  __declspec(property(get = get_textInput)) ::UnityEngine::UIElements::__TextField__TextInput* textInput;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  __declspec(property(get = get_value, put = set_value)) ::StringW value;

  /// @brief Method ExecuteDefaultAction, addr 0x4988ae0, size 0x15c, virtual true, abstract: false, final false
  inline void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt);

  static inline ::UnityEngine::UIElements::TextField* New_ctor();

  static inline ::UnityEngine::UIElements::TextField* New_ctor(::StringW label);

  static inline ::UnityEngine::UIElements::TextField* New_ctor(::StringW label, int32_t maxLength, bool multiline, bool isPasswordField, char16_t maskChar);

  /// @brief Method OnViewDataReady, addr 0x4988c3c, size 0xb4, virtual true, abstract: false, final false
  inline void OnViewDataReady();

  /// @brief Method SetValueWithoutNotify, addr 0x498896c, size 0x114, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(::StringW newValue);

  /// @brief Method StringToValue, addr 0x4988cf8, size 0x8, virtual true, abstract: false, final false
  inline ::StringW StringToValue(::StringW str);

  /// @brief Method UpdateTextFromValue, addr 0x4988a80, size 0x60, virtual true, abstract: false, final false
  inline void UpdateTextFromValue();

  /// @brief Method ValueToString, addr 0x4988cf0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ValueToString(::StringW value);

  /// @brief Method .ctor, addr 0x4988588, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x49885a0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::StringW label);

  /// @brief Method .ctor, addr 0x49885b4, size 0x1e0, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, int32_t maxLength, bool multiline, bool isPasswordField, char16_t maskChar);

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_textInput, addr 0x49882b4, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__TextField__TextInput* get_textInput();

  /// @brief Method get_value, addr 0x4988800, size 0x48, virtual true, abstract: false, final false
  inline ::StringW get_value();

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_multiline, addr 0x4988338, size 0x20, virtual false, abstract: false, final false
  inline void set_multiline(bool value);

  /// @brief Method set_value, addr 0x4988848, size 0x124, virtual true, abstract: false, final false
  inline void set_value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextField(TextField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextField(TextField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5584 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextField, 0x458>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TextField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextField*, "UnityEngine.UIElements", "TextField");
NEED_NO_BOX(::UnityEngine::UIElements::__TextField__TextInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TextField__TextInput*, "UnityEngine.UIElements", "TextField/TextInput");
NEED_NO_BOX(::UnityEngine::UIElements::__TextField__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TextField__UxmlFactory*, "UnityEngine.UIElements", "TextField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__TextField__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TextField__UxmlTraits*, "UnityEngine.UIElements", "TextField/UxmlTraits");
