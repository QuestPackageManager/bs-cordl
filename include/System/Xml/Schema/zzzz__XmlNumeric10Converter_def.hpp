#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlNumeric10Converter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlNumeric10Converter)
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
struct Decimal;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlNumeric10Converter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlNumeric10Converter);
// Dependencies System.Xml.Schema.XmlBaseConverter
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlNumeric10Converter
class CORDL_TYPE XmlNumeric10Converter : public ::System::Xml::Schema::XmlBaseConverter {
public:
  // Declarations
  /// @brief Method ChangeType, addr 0x609abc8, size 0x3c8, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::StringW value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x6099c6c, size 0x400, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::Decimal value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x609af90, size 0xd30, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x609a424, size 0x3c4, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(int32_t value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x609a7e8, size 0x3e0, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(int64_t value, ::System::Type* destinationType);

  /// @brief Method ChangeTypeWildcardDestination, addr 0x6098a1c, size 0x36c, virtual false, abstract: false, final false
  inline ::System::Object* ChangeTypeWildcardDestination(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeTypeWildcardSource, addr 0x609a06c, size 0x3b8, virtual false, abstract: false, final false
  inline ::System::Object* ChangeTypeWildcardSource(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method Create, addr 0x6098560, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* schemaType);

  static inline ::System::Xml::Schema::XmlNumeric10Converter* New_ctor(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method ToDecimal, addr 0x60985bc, size 0xe0, virtual true, abstract: false, final false
  inline ::System::Decimal ToDecimal(::StringW value);

  /// @brief Method ToDecimal, addr 0x609869c, size 0x380, virtual true, abstract: false, final false
  inline ::System::Decimal ToDecimal(::System::Object* value);

  /// @brief Method ToInt32, addr 0x6098de4, size 0x130, virtual true, abstract: false, final false
  inline int32_t ToInt32(::StringW value);

  /// @brief Method ToInt32, addr 0x6098f14, size 0x370, virtual true, abstract: false, final false
  inline int32_t ToInt32(::System::Object* value);

  /// @brief Method ToInt32, addr 0x6098d88, size 0x5c, virtual true, abstract: false, final false
  inline int32_t ToInt32(int64_t value);

  /// @brief Method ToInt64, addr 0x609928c, size 0x130, virtual true, abstract: false, final false
  inline int64_t ToInt64(::StringW value);

  /// @brief Method ToInt64, addr 0x60993bc, size 0x354, virtual true, abstract: false, final false
  inline int64_t ToInt64(::System::Object* value);

  /// @brief Method ToInt64, addr 0x6099284, size 0x8, virtual true, abstract: false, final false
  inline int64_t ToInt64(int32_t value);

  /// @brief Method ToString, addr 0x6099710, size 0xc4, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::Decimal value);

  /// @brief Method ToString, addr 0x60998cc, size 0x3a0, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ToString, addr 0x60997d4, size 0x7c, virtual true, abstract: false, final false
  inline ::StringW ToString(int32_t value);

  /// @brief Method ToString, addr 0x6099850, size 0x7c, virtual true, abstract: false, final false
  inline ::StringW ToString(int64_t value);

  /// @brief Method .ctor, addr 0x60984f4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaType* schemaType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlNumeric10Converter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlNumeric10Converter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlNumeric10Converter(XmlNumeric10Converter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlNumeric10Converter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlNumeric10Converter(XmlNumeric10Converter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9812 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlNumeric10Converter, 0x28>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlNumeric10Converter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlNumeric10Converter*, "System.Xml.Schema", "XmlNumeric10Converter");
