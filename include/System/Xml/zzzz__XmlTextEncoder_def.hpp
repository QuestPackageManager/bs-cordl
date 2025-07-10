#pragma once
// IWYU pragma private; include "System/Xml/XmlTextEncoder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlTextEncoder)
namespace System::IO {
class TextWriter;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System::Xml {
class XmlTextEncoder;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlTextEncoder);
// Dependencies System.Object, System.Xml.XmlCharType
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlTextEncoder
class CORDL_TYPE XmlTextEncoder : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AttributeValue)) ::StringW AttributeValue;

  __declspec(property(put = set_QuoteChar)) char16_t QuoteChar;

  /// @brief Field attrValue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_attrValue, put = __cordl_internal_set_attrValue)) ::System::Text::StringBuilder* attrValue;

  /// @brief Field cacheAttrValue, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_cacheAttrValue, put = __cordl_internal_set_cacheAttrValue)) bool cacheAttrValue;

  /// @brief Field inAttribute, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_inAttribute, put = __cordl_internal_set_inAttribute)) bool inAttribute;

  /// @brief Field quoteChar, offset 0x1a, size 0x2
  __declspec(property(get = __cordl_internal_get_quoteChar, put = __cordl_internal_set_quoteChar)) char16_t quoteChar;

  /// @brief Field textWriter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_textWriter, put = __cordl_internal_set_textWriter)) ::System::IO::TextWriter* textWriter;

  /// @brief Field xmlCharType, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlCharType, put = __cordl_internal_set_xmlCharType)) ::System::Xml::XmlCharType xmlCharType;

  /// @brief Method EndAttribute, addr 0x4317d60, size 0x38, virtual false, abstract: false, final false
  inline void EndAttribute();

  static inline ::System::Xml::XmlTextEncoder* New_ctor(::System::IO::TextWriter* textWriter);

  /// @brief Method StartAttribute, addr 0x4317cc8, size 0x98, virtual false, abstract: false, final false
  inline void StartAttribute(bool cacheAttrValue);

  /// @brief Method Write, addr 0x4317ec0, size 0x420, virtual false, abstract: false, final false
  inline void Write(::ArrayW<char16_t, ::Array<char16_t>*> array, int32_t offset, int32_t count);

  /// @brief Method Write, addr 0x4318558, size 0x43c, virtual false, abstract: false, final false
  inline void Write(::StringW text);

  /// @brief Method WriteCharEntity, addr 0x4318d58, size 0x13c, virtual false, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteCharEntityImpl, addr 0x43182e0, size 0x7c, virtual false, abstract: false, final false
  inline void WriteCharEntityImpl(char16_t ch);

  /// @brief Method WriteCharEntityImpl, addr 0x4318e94, size 0x98, virtual false, abstract: false, final false
  inline void WriteCharEntityImpl(::StringW strVal);

  /// @brief Method WriteEntityRef, addr 0x4318f2c, size 0x6c, virtual false, abstract: false, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteEntityRefImpl, addr 0x431835c, size 0x70, virtual false, abstract: false, final false
  inline void WriteEntityRefImpl(::StringW name);

  /// @brief Method WriteRaw, addr 0x4318c2c, size 0x12c, virtual false, abstract: false, final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> array, int32_t offset, int32_t count);

  /// @brief Method WriteRawWithSurrogateChecking, addr 0x4318a3c, size 0x1f0, virtual false, abstract: false, final false
  inline void WriteRawWithSurrogateChecking(::StringW text);

  /// @brief Method WriteStringFragment, addr 0x4318994, size 0xa8, virtual false, abstract: false, final false
  inline void WriteStringFragment(::StringW str, int32_t offset, int32_t count, ::ArrayW<char16_t, ::Array<char16_t>*> helperBuffer);

  /// @brief Method WriteSurrogateChar, addr 0x4317e0c, size 0xb4, virtual false, abstract: false, final false
  inline void WriteSurrogateChar(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteSurrogateCharEntity, addr 0x43183cc, size 0x18c, virtual false, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_attrValue() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_attrValue();

  constexpr bool const& __cordl_internal_get_cacheAttrValue() const;

  constexpr bool& __cordl_internal_get_cacheAttrValue();

  constexpr bool const& __cordl_internal_get_inAttribute() const;

  constexpr bool& __cordl_internal_get_inAttribute();

  constexpr char16_t const& __cordl_internal_get_quoteChar() const;

  constexpr char16_t& __cordl_internal_get_quoteChar();

  constexpr ::System::IO::TextWriter* const& __cordl_internal_get_textWriter() const;

  constexpr ::System::IO::TextWriter*& __cordl_internal_get_textWriter();

  constexpr ::System::Xml::XmlCharType const& __cordl_internal_get_xmlCharType() const;

  constexpr ::System::Xml::XmlCharType& __cordl_internal_get_xmlCharType();

  constexpr void __cordl_internal_set_attrValue(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set_cacheAttrValue(bool value);

  constexpr void __cordl_internal_set_inAttribute(bool value);

  constexpr void __cordl_internal_set_quoteChar(char16_t value);

  constexpr void __cordl_internal_set_textWriter(::System::IO::TextWriter* value);

  constexpr void __cordl_internal_set_xmlCharType(::System::Xml::XmlCharType value);

  /// @brief Method .ctor, addr 0x4317c84, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextWriter* textWriter);

  /// @brief Method get_AttributeValue, addr 0x4317d98, size 0x74, virtual false, abstract: false, final false
  inline ::StringW get_AttributeValue();

  /// @brief Method set_QuoteChar, addr 0x4317cc0, size 0x8, virtual false, abstract: false, final false
  inline void set_QuoteChar(char16_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTextEncoder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlTextEncoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlTextEncoder(XmlTextEncoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlTextEncoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlTextEncoder(XmlTextEncoder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7230 };

  /// @brief Field textWriter, offset: 0x10, size: 0x8, def value: None
  ::System::IO::TextWriter* ___textWriter;

  /// @brief Field inAttribute, offset: 0x18, size: 0x1, def value: None
  bool ___inAttribute;

  /// @brief Field quoteChar, offset: 0x1a, size: 0x2, def value: None
  char16_t ___quoteChar;

  /// @brief Field attrValue, offset: 0x20, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___attrValue;

  /// @brief Field cacheAttrValue, offset: 0x28, size: 0x1, def value: None
  bool ___cacheAttrValue;

  /// @brief Field xmlCharType, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::XmlCharType ___xmlCharType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlTextEncoder, ___textWriter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextEncoder, ___inAttribute) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextEncoder, ___quoteChar) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextEncoder, ___attrValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextEncoder, ___cacheAttrValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextEncoder, ___xmlCharType) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlTextEncoder, 0x38>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlTextEncoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlTextEncoder*, "System.Xml", "XmlTextEncoder");
