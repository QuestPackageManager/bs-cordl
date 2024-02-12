#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlDateTimeConverter)
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
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlDateTimeConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlDateTimeConverter);
// Type: System.Xml.Schema::XmlDateTimeConverter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11646))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11649))
// CS Name: ::System.Xml.Schema::XmlDateTimeConverter*
class CORDL_TYPE XmlDateTimeConverter : public ::System::Xml::Schema::XmlBaseConverter {
public:
  // Declarations
  static inline ::System::Xml::Schema::XmlDateTimeConverter* New_ctor(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method .ctor, addr 0x28d70bc, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method Create, addr 0x28bbd74, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method ToDateTime, addr 0x28d7120, size 0x74, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(::System::DateTimeOffset value);

  /// @brief Method ToDateTime, addr 0x28d7194, size 0x1b0, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(::StringW value);

  /// @brief Method ToDateTime, addr 0x28d7344, size 0x35c, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(::System::Object* value);

  /// @brief Method ToDateTimeOffset, addr 0x28d76a0, size 0x28, virtual true, abstract: false, final false
  inline ::System::DateTimeOffset ToDateTimeOffset(::System::DateTime value);

  /// @brief Method ToDateTimeOffset, addr 0x28d76c8, size 0x1b0, virtual true, abstract: false, final false
  inline ::System::DateTimeOffset ToDateTimeOffset(::StringW value);

  /// @brief Method ToDateTimeOffset, addr 0x28d7878, size 0x360, virtual true, abstract: false, final false
  inline ::System::DateTimeOffset ToDateTimeOffset(::System::Object* value);

  /// @brief Method ToString, addr 0x28d7bd8, size 0x160, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::DateTime value);

  /// @brief Method ToString, addr 0x28d7d38, size 0x1a8, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::DateTimeOffset value);

  /// @brief Method ToString, addr 0x28d7ee0, size 0x358, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x28d8238, size 0x394, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::DateTime value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x28d85cc, size 0x3ac, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::StringW value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x28d8978, size 0x704, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  // Ctor Parameters [CppParam { name: "", ty: "XmlDateTimeConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDateTimeConverter(XmlDateTimeConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDateTimeConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDateTimeConverter(XmlDateTimeConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDateTimeConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlDateTimeConverter, 0x28>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlDateTimeConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlDateTimeConverter*, "System.Xml.Schema", "XmlDateTimeConverter");
