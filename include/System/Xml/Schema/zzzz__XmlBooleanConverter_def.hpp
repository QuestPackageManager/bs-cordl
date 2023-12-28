#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlBooleanConverter)
namespace System {
class Object;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlBooleanConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlBooleanConverter);
// Type: System.Xml.Schema::XmlBooleanConverter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11748))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11752))
// CS Name: ::System.Xml.Schema::XmlBooleanConverter*
class CORDL_TYPE XmlBooleanConverter : public ::System::Xml::Schema::XmlBaseConverter {
public:
  // Declarations
  static inline ::System::Xml::Schema::XmlBooleanConverter* New_ctor(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method .ctor addr 0x28d6a14 size 0x64 virtual false final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method Create addr 0x28b7b1c size 0x60 virtual false final false
  static inline ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method ToBoolean addr 0x28d6a78 size 0xa8 virtual true final false
  inline bool ToBoolean(::StringW value);

  /// @brief Method ToBoolean addr 0x28d6b20 size 0x2dc virtual true final false
  inline bool ToBoolean(::System::Object* value);

  /// @brief Method ToString addr 0x28d6dfc size 0x58 virtual true final false
  inline ::StringW ToString(bool value);

  /// @brief Method ToString addr 0x28d6e54 size 0x2cc virtual true final false
  inline ::StringW ToString(::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType addr 0x28d7120 size 0x32c virtual true final false
  inline ::System::Object* ChangeType(bool value, ::System::Type* destinationType);

  /// @brief Method ChangeType addr 0x28d744c size 0x340 virtual true final false
  inline ::System::Object* ChangeType(::StringW value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType addr 0x28d778c size 0x15a0 virtual true final false
  inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  // Ctor Parameters [CppParam { name: "", ty: "XmlBooleanConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBooleanConverter(XmlBooleanConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBooleanConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBooleanConverter(XmlBooleanConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBooleanConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlBooleanConverter, 0x28>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlBooleanConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlBooleanConverter*, "System.Xml.Schema", "XmlBooleanConverter");
