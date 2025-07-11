#pragma once
// IWYU pragma private; include "System/Xml/XmlAsyncCheckReaderWithLineInfoNSSchema.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__IXmlSchemaInfo_def.hpp"
#include "System/Xml/zzzz__XmlAsyncCheckReaderWithLineInfoNS_def.hpp"
CORDL_MODULE_EXPORT(XmlAsyncCheckReaderWithLineInfoNSSchema)
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
namespace System::Xml::Schema {
class XmlSchemaAttribute;
}
namespace System::Xml::Schema {
class XmlSchemaElement;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
struct XmlSchemaValidity;
}
namespace System::Xml {
class XmlReader;
}
// Forward declare root types
namespace System::Xml {
class XmlAsyncCheckReaderWithLineInfoNSSchema;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlAsyncCheckReaderWithLineInfoNSSchema);
// Dependencies System.Xml.Schema.IXmlSchemaInfo, System.Xml.XmlAsyncCheckReaderWithLineInfoNS
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlAsyncCheckReaderWithLineInfoNSSchema
class CORDL_TYPE XmlAsyncCheckReaderWithLineInfoNSSchema : public ::System::Xml::XmlAsyncCheckReaderWithLineInfoNS {
public:
  // Declarations
  __declspec(property(get = System_Xml_Schema_IXmlSchemaInfo_get_IsDefault)) bool System_Xml_Schema_IXmlSchemaInfo_IsDefault;

  __declspec(property(get = System_Xml_Schema_IXmlSchemaInfo_get_IsNil)) bool System_Xml_Schema_IXmlSchemaInfo_IsNil;

  __declspec(property(get = System_Xml_Schema_IXmlSchemaInfo_get_MemberType)) ::System::Xml::Schema::XmlSchemaSimpleType* System_Xml_Schema_IXmlSchemaInfo_MemberType;

  __declspec(property(get = System_Xml_Schema_IXmlSchemaInfo_get_SchemaAttribute)) ::System::Xml::Schema::XmlSchemaAttribute* System_Xml_Schema_IXmlSchemaInfo_SchemaAttribute;

  __declspec(property(get = System_Xml_Schema_IXmlSchemaInfo_get_SchemaElement)) ::System::Xml::Schema::XmlSchemaElement* System_Xml_Schema_IXmlSchemaInfo_SchemaElement;

  __declspec(property(get = System_Xml_Schema_IXmlSchemaInfo_get_SchemaType)) ::System::Xml::Schema::XmlSchemaType* System_Xml_Schema_IXmlSchemaInfo_SchemaType;

  __declspec(property(get = System_Xml_Schema_IXmlSchemaInfo_get_Validity)) ::System::Xml::Schema::XmlSchemaValidity System_Xml_Schema_IXmlSchemaInfo_Validity;

  /// @brief Field readerAsIXmlSchemaInfo, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_readerAsIXmlSchemaInfo, put = __cordl_internal_set_readerAsIXmlSchemaInfo)) ::System::Xml::Schema::IXmlSchemaInfo* readerAsIXmlSchemaInfo;

  /// @brief Convert operator to "::System::Xml::Schema::IXmlSchemaInfo"
  constexpr operator ::System::Xml::Schema::IXmlSchemaInfo*() noexcept;

  static inline ::System::Xml::XmlAsyncCheckReaderWithLineInfoNSSchema* New_ctor(::System::Xml::XmlReader* reader);

  /// @brief Method System.Xml.Schema.IXmlSchemaInfo.get_IsDefault, addr 0x430e7ec, size 0xa4, virtual true, abstract: false, final true
  inline bool System_Xml_Schema_IXmlSchemaInfo_get_IsDefault();

  /// @brief Method System.Xml.Schema.IXmlSchemaInfo.get_IsNil, addr 0x430e890, size 0xa4, virtual true, abstract: false, final true
  inline bool System_Xml_Schema_IXmlSchemaInfo_get_IsNil();

  /// @brief Method System.Xml.Schema.IXmlSchemaInfo.get_MemberType, addr 0x430e934, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchemaSimpleType* System_Xml_Schema_IXmlSchemaInfo_get_MemberType();

  /// @brief Method System.Xml.Schema.IXmlSchemaInfo.get_SchemaAttribute, addr 0x430eb20, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchemaAttribute* System_Xml_Schema_IXmlSchemaInfo_get_SchemaAttribute();

  /// @brief Method System.Xml.Schema.IXmlSchemaInfo.get_SchemaElement, addr 0x430ea7c, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchemaElement* System_Xml_Schema_IXmlSchemaInfo_get_SchemaElement();

  /// @brief Method System.Xml.Schema.IXmlSchemaInfo.get_SchemaType, addr 0x430e9d8, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchemaType* System_Xml_Schema_IXmlSchemaInfo_get_SchemaType();

  /// @brief Method System.Xml.Schema.IXmlSchemaInfo.get_Validity, addr 0x430e74c, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchemaValidity System_Xml_Schema_IXmlSchemaInfo_get_Validity();

  constexpr ::System::Xml::Schema::IXmlSchemaInfo* const& __cordl_internal_get_readerAsIXmlSchemaInfo() const;

  constexpr ::System::Xml::Schema::IXmlSchemaInfo*& __cordl_internal_get_readerAsIXmlSchemaInfo();

  constexpr void __cordl_internal_set_readerAsIXmlSchemaInfo(::System::Xml::Schema::IXmlSchemaInfo* value);

  /// @brief Method .ctor, addr 0x430d36c, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlReader* reader);

  /// @brief Convert to "::System::Xml::Schema::IXmlSchemaInfo"
  constexpr ::System::Xml::Schema::IXmlSchemaInfo* i___System__Xml__Schema__IXmlSchemaInfo() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlAsyncCheckReaderWithLineInfoNSSchema();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlAsyncCheckReaderWithLineInfoNSSchema", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlAsyncCheckReaderWithLineInfoNSSchema(XmlAsyncCheckReaderWithLineInfoNSSchema&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlAsyncCheckReaderWithLineInfoNSSchema", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlAsyncCheckReaderWithLineInfoNSSchema(XmlAsyncCheckReaderWithLineInfoNSSchema const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7217 };

  /// @brief Field readerAsIXmlSchemaInfo, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::Schema::IXmlSchemaInfo* ___readerAsIXmlSchemaInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlAsyncCheckReaderWithLineInfoNSSchema, ___readerAsIXmlSchemaInfo) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlAsyncCheckReaderWithLineInfoNSSchema, 0x38>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlAsyncCheckReaderWithLineInfoNSSchema);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlAsyncCheckReaderWithLineInfoNSSchema*, "System.Xml", "XmlAsyncCheckReaderWithLineInfoNSSchema");
