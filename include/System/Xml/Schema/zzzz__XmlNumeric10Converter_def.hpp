#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlNumeric10Converter)
namespace System {
struct Decimal;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
class XmlValueConverter;
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
// Type: System.Xml.Schema::XmlNumeric10Converter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11748))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11749))
// CS Name: ::System.Xml.Schema::XmlNumeric10Converter*
class CORDL_TYPE XmlNumeric10Converter : public ::System::Xml::Schema::XmlBaseConverter {
public:
  // Declarations
  static inline ::System::Xml::Schema::XmlNumeric10Converter* New_ctor(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method .ctor addr 0x28cf244 size 0x64 virtual false final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method Create addr 0x28b87b0 size 0x60 virtual false final false
  static inline ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method ToDecimal addr 0x28cf2a8 size 0xc8 virtual true final false
  inline ::System::Decimal ToDecimal(::StringW value);

  /// @brief Method ToDecimal addr 0x28cf370 size 0x3e4 virtual true final false
  inline ::System::Decimal ToDecimal(::System::Object* value);

  /// @brief Method ToInt32 addr 0x28cfbb4 size 0x54 virtual true final false
  inline int32_t ToInt32(int64_t value);

  /// @brief Method ToInt32 addr 0x28cfc08 size 0x104 virtual true final false
  inline int32_t ToInt32(::StringW value);

  /// @brief Method ToInt32 addr 0x28cfd0c size 0x3e4 virtual true final false
  inline int32_t ToInt32(::System::Object* value);

  /// @brief Method ToInt64 addr 0x28d00f0 size 0x8 virtual true final false
  inline int64_t ToInt64(int32_t value);

  /// @brief Method ToInt64 addr 0x28d00f8 size 0x104 virtual true final false
  inline int64_t ToInt64(::StringW value);

  /// @brief Method ToInt64 addr 0x28d01fc size 0x3cc virtual true final false
  inline int64_t ToInt64(::System::Object* value);

  /// @brief Method ToString addr 0x28d05c8 size 0xbc virtual true final false
  inline ::StringW ToString(::System::Decimal value);

  /// @brief Method ToString addr 0x28d0684 size 0x58 virtual true final false
  inline ::StringW ToString(int32_t value);

  /// @brief Method ToString addr 0x28d06dc size 0x58 virtual true final false
  inline ::StringW ToString(int64_t value);

  /// @brief Method ToString addr 0x28d0734 size 0x40c virtual true final false
  inline ::StringW ToString(::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType addr 0x28d0b40 size 0x43c virtual true final false
  inline ::System::Object* ChangeType(::System::Decimal value, ::System::Type* destinationType);

  /// @brief Method ChangeType addr 0x28d13c8 size 0x424 virtual true final false
  inline ::System::Object* ChangeType(int32_t value, ::System::Type* destinationType);

  /// @brief Method ChangeType addr 0x28d17ec size 0x430 virtual true final false
  inline ::System::Object* ChangeType(int64_t value, ::System::Type* destinationType);

  /// @brief Method ChangeType addr 0x28d1c1c size 0x434 virtual true final false
  inline ::System::Object* ChangeType(::StringW value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType addr 0x28d2050 size 0xefc virtual true final false
  inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeTypeWildcardDestination addr 0x28cf754 size 0x460 virtual false final false
  inline ::System::Object* ChangeTypeWildcardDestination(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeTypeWildcardSource addr 0x28d0f7c size 0x44c virtual false final false
  inline ::System::Object* ChangeTypeWildcardSource(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  // Ctor Parameters [CppParam { name: "", ty: "XmlNumeric10Converter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlNumeric10Converter(XmlNumeric10Converter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlNumeric10Converter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlNumeric10Converter(XmlNumeric10Converter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlNumeric10Converter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlNumeric10Converter, 0x28>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlNumeric10Converter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlNumeric10Converter*, "System.Xml.Schema", "XmlNumeric10Converter");
