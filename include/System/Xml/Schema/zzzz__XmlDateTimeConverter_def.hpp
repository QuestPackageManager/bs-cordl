#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlDateTimeConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::System::Xml::Schema::XmlDateTimeConverter*);
DEFINE_IL2CPP_CLASS(::System::Xml::Schema::XmlDateTimeConverter*, "System.Xml.Schema", "XmlDateTimeConverter");
// Dependencies System.Xml.Schema.XmlBaseConverter
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlDateTimeConverter
class CORDL_TYPE XmlDateTimeConverter : public ::System::Xml::Schema::XmlBaseConverter {
public:
  // Declarations
  /// @brief Method ChangeType, addr 0x66b83e8, size 0x33c, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::StringW value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x66b80ac, size 0x33c, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::DateTime value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x66b8724, size 0x634, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method Create, addr 0x66b6f78, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* schemaType);

  static inline ::System::Xml::Schema::XmlDateTimeConverter* New_ctor(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method ToDateTime, addr 0x66b7040, size 0x1e0, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(::StringW value);

  /// @brief Method ToDateTime, addr 0x66b6fd4, size 0x6c, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(::System::DateTimeOffset value);

  /// @brief Method ToDateTime, addr 0x66b7220, size 0x318, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(::System::Object* value);

  /// @brief Method ToDateTimeOffset, addr 0x66b7560, size 0x1e0, virtual true, abstract: false, final false
  inline ::System::DateTimeOffset ToDateTimeOffset(::StringW value);

  /// @brief Method ToDateTimeOffset, addr 0x66b7538, size 0x28, virtual true, abstract: false, final false
  inline ::System::DateTimeOffset ToDateTimeOffset(::System::DateTime value);

  /// @brief Method ToDateTimeOffset, addr 0x66b7740, size 0x32c, virtual true, abstract: false, final false
  inline ::System::DateTimeOffset ToDateTimeOffset(::System::Object* value);

  /// @brief Method ToString, addr 0x66b7a6c, size 0x194, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::DateTime value);

  /// @brief Method ToString, addr 0x66b7c00, size 0x1b8, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::DateTimeOffset value);

  /// @brief Method ToString, addr 0x66b7db8, size 0x2f4, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method .ctor, addr 0x66b6f0c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaType* schemaType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDateTimeConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlDateTimeConverter", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDateTimeConverter(XmlDateTimeConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDateTimeConverter", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDateTimeConverter(XmlDateTimeConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11808 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::Schema::XmlDateTimeConverter) == 0x28, "Size mismatch!");

} // namespace System::Xml::Schema
