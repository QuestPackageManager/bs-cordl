#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XmlNumeric2Converter)
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlNumeric2Converter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlNumeric2Converter);
// Type: System.Xml.Schema::XmlNumeric2Converter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11748))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11750))
// CS Name: ::System.Xml.Schema::XmlNumeric2Converter*
class CORDL_TYPE XmlNumeric2Converter : public ::System::Xml::Schema::XmlBaseConverter {
public:
  // Declarations
  static inline ::System::Xml::Schema::XmlNumeric2Converter* New_ctor(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method .ctor, addr 0x28d2f4c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method Create, addr 0x28b7f48, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method ToDouble, addr 0x28d2fb0, size 0xd0, virtual true, abstract: false, final false
  inline double_t ToDouble(::StringW value);

  /// @brief Method ToDouble, addr 0x28d3080, size 0x340, virtual true, abstract: false, final false
  inline double_t ToDouble(::System::Object* value);

  /// @brief Method ToSingle, addr 0x28d33c0, size 0x8, virtual true, abstract: false, final false
  inline float_t ToSingle(double_t value);

  /// @brief Method ToSingle, addr 0x28d33c8, size 0xd0, virtual true, abstract: false, final false
  inline float_t ToSingle(::StringW value);

  /// @brief Method ToSingle, addr 0x28d3498, size 0x348, virtual true, abstract: false, final false
  inline float_t ToSingle(::System::Object* value);

  /// @brief Method ToString, addr 0x28d37e0, size 0xb4, virtual true, abstract: false, final false
  inline ::StringW ToString(double_t value);

  /// @brief Method ToString, addr 0x28d3894, size 0x88, virtual true, abstract: false, final false
  inline ::StringW ToString(float_t value);

  /// @brief Method ToString, addr 0x28d391c, size 0x358, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x28d3c74, size 0x36c, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(double_t value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x28d3fe0, size 0x3ac, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::StringW value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x28d438c, size 0x6c8, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  // Ctor Parameters [CppParam { name: "", ty: "XmlNumeric2Converter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlNumeric2Converter(XmlNumeric2Converter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlNumeric2Converter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlNumeric2Converter(XmlNumeric2Converter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlNumeric2Converter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlNumeric2Converter, 0x28>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlNumeric2Converter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlNumeric2Converter*, "System.Xml.Schema", "XmlNumeric2Converter");
