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
  /// @brief Method ChangeType, addr 0x42ddd60, size 0x420, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::StringW value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x42dcc78, size 0x440, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::Decimal value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x42de180, size 0xf04, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x42dd518, size 0x41c, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(int32_t value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x42dd934, size 0x42c, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(int64_t value, ::System::Type* destinationType);

  /// @brief Method ChangeTypeWildcardDestination, addr 0x42db890, size 0x460, virtual false, abstract: false, final false
  inline ::System::Object* ChangeTypeWildcardDestination(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeTypeWildcardSource, addr 0x42dd0b8, size 0x460, virtual false, abstract: false, final false
  inline ::System::Object* ChangeTypeWildcardSource(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method Create, addr 0x42db37c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* schemaType);

  static inline ::System::Xml::Schema::XmlNumeric10Converter* New_ctor(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method ToDecimal, addr 0x42db3d4, size 0xc4, virtual true, abstract: false, final false
  inline ::System::Decimal ToDecimal(::StringW value);

  /// @brief Method ToDecimal, addr 0x42db498, size 0x3f8, virtual true, abstract: false, final false
  inline ::System::Decimal ToDecimal(::System::Object* value);

  /// @brief Method ToInt32, addr 0x42dbd48, size 0x100, virtual true, abstract: false, final false
  inline int32_t ToInt32(::StringW value);

  /// @brief Method ToInt32, addr 0x42dbe48, size 0x3f0, virtual true, abstract: false, final false
  inline int32_t ToInt32(::System::Object* value);

  /// @brief Method ToInt32, addr 0x42dbcf0, size 0x58, virtual true, abstract: false, final false
  inline int32_t ToInt32(int64_t value);

  /// @brief Method ToInt64, addr 0x42dc240, size 0x100, virtual true, abstract: false, final false
  inline int64_t ToInt64(::StringW value);

  /// @brief Method ToInt64, addr 0x42dc340, size 0x3d4, virtual true, abstract: false, final false
  inline int64_t ToInt64(::System::Object* value);

  /// @brief Method ToInt64, addr 0x42dc238, size 0x8, virtual true, abstract: false, final false
  inline int64_t ToInt64(int32_t value);

  /// @brief Method ToString, addr 0x42dc714, size 0xbc, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::Decimal value);

  /// @brief Method ToString, addr 0x42dc880, size 0x3f8, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ToString, addr 0x42dc7d0, size 0x58, virtual true, abstract: false, final false
  inline ::StringW ToString(int32_t value);

  /// @brief Method ToString, addr 0x42dc828, size 0x58, virtual true, abstract: false, final false
  inline ::StringW ToString(int64_t value);

  /// @brief Method .ctor, addr 0x42db314, size 0x68, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7744 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlNumeric10Converter, 0x28>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlNumeric10Converter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlNumeric10Converter*, "System.Xml.Schema", "XmlNumeric10Converter");
