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
class TextField_TextInput;
}
namespace UnityEngine::UIElements {
class TextField_UxmlFactory;
}
namespace UnityEngine::UIElements {
class TextField_UxmlTraits;
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
// Forward declare root types
namespace UnityEngine::UIElements {
class TextField;
}
namespace UnityEngine::UIElements {
class TextField_TextInput;
}
namespace UnityEngine::UIElements {
class TextField_UxmlFactory;
}
namespace UnityEngine::UIElements {
class TextField_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TextField);
MARK_REF_PTR_T(::UnityEngine::UIElements::TextField_TextInput);
MARK_REF_PTR_T(::UnityEngine::UIElements::TextField_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::TextField_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TextField/UxmlFactory
class CORDL_TYPE TextField_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::TextField*, ::UnityEngine::UIElements::TextField_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::TextField_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x49f020c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextField_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextField_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextField_UxmlFactory(TextField_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextField_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextField_UxmlFactory(TextField_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5611 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextField_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextInputBaseField`1::UxmlTraits<TValueType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TextField/UxmlTraits
class CORDL_TYPE TextField_UxmlTraits : public ::UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<::StringW> {
public:
  // Declarations
  /// @brief Field k_Value, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_Value, put = setStaticF_k_Value)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* k_Value;

  /// @brief Field m_Multiline, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Multiline, put = __cordl_internal_set_m_Multiline)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_Multiline;

  /// @brief Method Init, addr 0x49f0254, size 0x1b8, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::TextField_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_Multiline() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_Multiline();

  constexpr void __cordl_internal_set_m_Multiline(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  /// @brief Method .ctor, addr 0x49f040c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UxmlStringAttributeDescription* getStaticF_k_Value();

  static inline void setStaticF_k_Value(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextField_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextField_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextField_UxmlTraits(TextField_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextField_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextField_UxmlTraits(TextField_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5612 };

  /// @brief Field m_Multiline, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_Multiline;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TextField_UxmlTraits, ___m_Multiline) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextField_UxmlTraits, 0xd0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextInputBaseField`1::TextInputBase<TValueType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TextField/TextInput
class CORDL_TYPE TextField_TextInput : public ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<::StringW> {
public:
  // Declarations
  __declspec(property(put = set_isPasswordField)) bool isPasswordField;

  __declspec(property(put = set_multiline)) bool multiline;

  static inline ::UnityEngine::UIElements::TextField_TextInput* New_ctor();

  /// @brief Method StringToValue, addr 0x49f060c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW StringToValue(::StringW str);

  /// @brief Method .ctor, addr 0x49efbd0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_isPasswordField, addr 0x49f0594, size 0x78, virtual true, abstract: false, final false
  inline void set_isPasswordField(bool value);

  /// @brief Method set_multiline, addr 0x49ef794, size 0x230, virtual false, abstract: false, final false
  inline void set_multiline(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextField_TextInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextField_TextInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextField_TextInput(TextField_TextInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextField_TextInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextField_TextInput(TextField_TextInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5613 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextField_TextInput, 0x400>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextInputBaseField`1<TValueType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TextField
class CORDL_TYPE TextField : public ::UnityEngine::UIElements::TextInputBaseField_1<::StringW> {
public:
  // Declarations
  using TextInput = ::UnityEngine::UIElements::TextField_TextInput;

  using UxmlFactory = ::UnityEngine::UIElements::TextField_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::TextField_UxmlTraits;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  __declspec(property(put = set_multiline)) bool multiline;

  __declspec(property(get = get_textInput)) ::UnityEngine::UIElements::TextField_TextInput* textInput;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  __declspec(property(get = get_value, put = set_value)) ::StringW value;

  /// @brief Method ExecuteDefaultAction, addr 0x49eff1c, size 0x15c, virtual true, abstract: false, final false
  inline void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt);

  static inline ::UnityEngine::UIElements::TextField* New_ctor();

  static inline ::UnityEngine::UIElements::TextField* New_ctor(::StringW label);

  static inline ::UnityEngine::UIElements::TextField* New_ctor(::StringW label, int32_t maxLength, bool multiline, bool isPasswordField, char16_t maskChar);

  /// @brief Method OnViewDataReady, addr 0x49f0078, size 0xb4, virtual true, abstract: false, final false
  inline void OnViewDataReady();

  /// @brief Method SetValueWithoutNotify, addr 0x49efda8, size 0x114, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(::StringW newValue);

  /// @brief Method StringToValue, addr 0x49f0134, size 0x8, virtual true, abstract: false, final false
  inline ::StringW StringToValue(::StringW str);

  /// @brief Method UpdateTextFromValue, addr 0x49efebc, size 0x60, virtual true, abstract: false, final false
  inline void UpdateTextFromValue();

  /// @brief Method ValueToString, addr 0x49f012c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ValueToString(::StringW value);

  /// @brief Method .ctor, addr 0x49ef9c4, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x49ef9dc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::StringW label);

  /// @brief Method .ctor, addr 0x49ef9f0, size 0x1e0, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, int32_t maxLength, bool multiline, bool isPasswordField, char16_t maskChar);

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_textInput, addr 0x49ef6f0, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextField_TextInput* get_textInput();

  /// @brief Method get_value, addr 0x49efc3c, size 0x48, virtual true, abstract: false, final false
  inline ::StringW get_value();

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_multiline, addr 0x49ef774, size 0x20, virtual false, abstract: false, final false
  inline void set_multiline(bool value);

  /// @brief Method set_value, addr 0x49efc84, size 0x124, virtual true, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5614 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextField, 0x458>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TextField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextField*, "UnityEngine.UIElements", "TextField");
NEED_NO_BOX(::UnityEngine::UIElements::TextField_TextInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextField_TextInput*, "UnityEngine.UIElements", "TextField/TextInput");
NEED_NO_BOX(::UnityEngine::UIElements::TextField_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextField_UxmlFactory*, "UnityEngine.UIElements", "TextField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::TextField_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextField_UxmlTraits*, "UnityEngine.UIElements", "TextField/UxmlTraits");
