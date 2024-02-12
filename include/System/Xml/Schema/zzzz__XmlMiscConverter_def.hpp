#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlMiscConverter)
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
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlMiscConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlMiscConverter);
// Type: System.Xml.Schema::XmlMiscConverter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11646))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11651))
// CS Name: ::System.Xml.Schema::XmlMiscConverter*
class CORDL_TYPE XmlMiscConverter : public ::System::Xml::Schema::XmlBaseConverter {
public:
  // Declarations
  static inline ::System::Xml::Schema::XmlMiscConverter* New_ctor(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method .ctor, addr 0x28db394, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method Create, addr 0x28db3fc, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method ToString, addr 0x28db45c, size 0x54c, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x28dbae4, size 0x514, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::StringW value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x28dc15c, size 0xd04, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeTypeWildcardDestination, addr 0x28db9a8, size 0x13c, virtual false, abstract: false, final false
  inline ::System::Object* ChangeTypeWildcardDestination(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeTypeWildcardSource, addr 0x28dbff8, size 0x164, virtual false, abstract: false, final false
  inline ::System::Object* ChangeTypeWildcardSource(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  // Ctor Parameters [CppParam { name: "", ty: "XmlMiscConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlMiscConverter(XmlMiscConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlMiscConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlMiscConverter(XmlMiscConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlMiscConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlMiscConverter, 0x28>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlMiscConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlMiscConverter*, "System.Xml.Schema", "XmlMiscConverter");
