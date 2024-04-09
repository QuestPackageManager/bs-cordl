#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecurityElement)
namespace System::Collections {
class ArrayList;
}
namespace System::Security {
class __SecurityElement__SecurityAttribute;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System::Security {
class SecurityElement;
}
namespace System::Security {
class __SecurityElement__SecurityAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::SecurityElement);
MARK_REF_PTR_T(::System::Security::__SecurityElement__SecurityAttribute);
// Type: ::SecurityAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security {
// Is value type: false
// CS Name: ::SecurityElement::SecurityAttribute*
class CORDL_TYPE __SecurityElement__SecurityAttribute : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_Value))::StringW Value;

  /// @brief Field _name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name))::StringW _name;

  /// @brief Field _value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value))::StringW _value;

  static inline ::System::Security::__SecurityElement__SecurityAttribute* New_ctor(::StringW name, ::StringW value);

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr ::StringW const& __cordl_internal_get__value() const;

  constexpr ::StringW& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__name(::StringW value);

  constexpr void __cordl_internal_set__value(::StringW value);

  /// @brief Method .ctor, addr 0x26d0498, size 0x164, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW value);

  /// @brief Method get_Name, addr 0x26d14a0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Value, addr 0x26d14a8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SecurityElement__SecurityAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SecurityElement__SecurityAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SecurityElement__SecurityAttribute(__SecurityElement__SecurityAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SecurityElement__SecurityAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SecurityElement__SecurityAttribute(__SecurityElement__SecurityAttribute const&) = delete;

  /// @brief Field _name, offset: 0x10, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _value, offset: 0x18, size: 0x8, def value: None
  ::StringW ____value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::__SecurityElement__SecurityAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Security::__SecurityElement__SecurityAttribute, ____name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::__SecurityElement__SecurityAttribute, ____value) == 0x18, "Offset mismatch!");

} // namespace System::Security
// Type: System.Security::SecurityElement
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security {
// Is value type: false
// CS Name: ::System.Security::SecurityElement*
class CORDL_TYPE SecurityElement : public ::System::Object {
public:
  // Declarations
  using SecurityAttribute = ::System::Security::__SecurityElement__SecurityAttribute;

  __declspec(property(get = get_Children))::System::Collections::ArrayList* Children;

  __declspec(property(get = get_Tag))::StringW Tag;

  __declspec(property(put = set_Text))::StringW Text;

  /// @brief Field attributes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes, put = __cordl_internal_set_attributes))::System::Collections::ArrayList* attributes;

  /// @brief Field children, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_children, put = __cordl_internal_set_children))::System::Collections::ArrayList* children;

  /// @brief Field invalid_attr_name_chars, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_invalid_attr_name_chars, put = setStaticF_invalid_attr_name_chars))::ArrayW<char16_t, ::Array<char16_t>*> invalid_attr_name_chars;

  /// @brief Field invalid_attr_value_chars, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_invalid_attr_value_chars, put = setStaticF_invalid_attr_value_chars))::ArrayW<char16_t, ::Array<char16_t>*> invalid_attr_value_chars;

  /// @brief Field invalid_chars, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_invalid_chars, put = setStaticF_invalid_chars))::ArrayW<char16_t, ::Array<char16_t>*> invalid_chars;

  /// @brief Field invalid_tag_chars, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_invalid_tag_chars, put = setStaticF_invalid_tag_chars))::ArrayW<char16_t, ::Array<char16_t>*> invalid_tag_chars;

  /// @brief Field invalid_text_chars, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_invalid_text_chars, put = setStaticF_invalid_text_chars))::ArrayW<char16_t, ::Array<char16_t>*> invalid_text_chars;

  __declspec(property(put = set_m_strText))::StringW m_strText;

  /// @brief Field tag, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_tag, put = __cordl_internal_set_tag))::StringW tag;

  /// @brief Field text, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_text, put = __cordl_internal_set_text))::StringW text;

  /// @brief Method AddAttribute, addr 0x26cdf80, size 0x1ac, virtual false, abstract: false, final false
  inline void AddAttribute(::StringW name, ::StringW value);

  /// @brief Method AddChild, addr 0x26ce12c, size 0xd0, virtual false, abstract: false, final false
  inline void AddChild(::System::Security::SecurityElement* child);

  /// @brief Method Escape, addr 0x26d05fc, size 0x1ec, virtual false, abstract: false, final false
  static inline ::StringW Escape(::StringW str);

  /// @brief Method GetAttribute, addr 0x26d0188, size 0x310, virtual false, abstract: false, final false
  inline ::System::Security::__SecurityElement__SecurityAttribute* GetAttribute(::StringW name);

  /// @brief Method IsValidAttributeName, addr 0x26d07e8, size 0x7c, virtual false, abstract: false, final false
  static inline bool IsValidAttributeName(::StringW name);

  /// @brief Method IsValidAttributeValue, addr 0x26d0864, size 0x7c, virtual false, abstract: false, final false
  static inline bool IsValidAttributeValue(::StringW value);

  /// @brief Method IsValidTag, addr 0x26cfda8, size 0x7c, virtual false, abstract: false, final false
  static inline bool IsValidTag(::StringW tag);

  /// @brief Method IsValidText, addr 0x26cff30, size 0x7c, virtual false, abstract: false, final false
  static inline bool IsValidText(::StringW text);

  static inline ::System::Security::SecurityElement* New_ctor(::StringW tag);

  static inline ::System::Security::SecurityElement* New_ctor(::StringW tag, ::StringW text);

  /// @brief Method SearchForChildByTag, addr 0x26d08e0, size 0x128, virtual false, abstract: false, final false
  inline ::System::Security::SecurityElement* SearchForChildByTag(::StringW tag);

  /// @brief Method SearchForTextOfLocalName, addr 0x26d10e4, size 0x23c, virtual false, abstract: false, final false
  inline ::StringW SearchForTextOfLocalName(::StringW strLocalName);

  /// @brief Method ToString, addr 0x26d0a08, size 0x88, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToXml, addr 0x26d0a90, size 0x64c, virtual false, abstract: false, final false
  inline void ToXml(ByRef<::System::Text::StringBuilder*> s, int32_t level);

  /// @brief Method Unescape, addr 0x26cffac, size 0x1dc, virtual false, abstract: false, final false
  static inline ::StringW Unescape(::StringW str);

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_attributes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get_attributes() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_children();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get_children() const;

  constexpr ::StringW const& __cordl_internal_get_tag() const;

  constexpr ::StringW& __cordl_internal_get_tag();

  constexpr ::StringW const& __cordl_internal_get_text() const;

  constexpr ::StringW& __cordl_internal_get_text();

  constexpr void __cordl_internal_set_attributes(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_children(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_tag(::StringW value);

  constexpr void __cordl_internal_set_text(::StringW value);

  /// @brief Method .ctor, addr 0x26cdf78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW tag);

  /// @brief Method .ctor, addr 0x26cfc58, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::StringW tag, ::StringW text);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_invalid_attr_name_chars();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_invalid_attr_value_chars();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_invalid_chars();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_invalid_tag_chars();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_invalid_text_chars();

  /// @brief Method get_Children, addr 0x26cff20, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* get_Children();

  /// @brief Method get_Tag, addr 0x26cff28, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Tag();

  static inline void setStaticF_invalid_attr_name_chars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_invalid_attr_value_chars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_invalid_chars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_invalid_tag_chars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_invalid_text_chars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  /// @brief Method set_Text, addr 0x26cfe24, size 0xfc, virtual false, abstract: false, final false
  inline void set_Text(::StringW value);

  /// @brief Method set_m_strText, addr 0x26d10dc, size 0x8, virtual false, abstract: false, final false
  inline void set_m_strText(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecurityElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SecurityElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecurityElement(SecurityElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecurityElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecurityElement(SecurityElement const&) = delete;

  /// @brief Field text, offset: 0x10, size: 0x8, def value: None
  ::StringW ___text;

  /// @brief Field tag, offset: 0x18, size: 0x8, def value: None
  ::StringW ___tag;

  /// @brief Field attributes, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___attributes;

  /// @brief Field children, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___children;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::SecurityElement, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Security::SecurityElement, ___text) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::SecurityElement, ___tag) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::SecurityElement, ___attributes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::SecurityElement, ___children) == 0x28, "Offset mismatch!");

} // namespace System::Security
NEED_NO_BOX(::System::Security::SecurityElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::SecurityElement*, "System.Security", "SecurityElement");
NEED_NO_BOX(::System::Security::__SecurityElement__SecurityAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::__SecurityElement__SecurityAttribute*, "System.Security", "SecurityElement/SecurityAttribute");
