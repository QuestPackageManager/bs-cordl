#pragma once
// IWYU pragma private; include "System/Xml/Schema/IXmlSchemaInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXmlSchemaInfo)
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
// Forward declare root types
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::IXmlSchemaInfo);
// Dependencies
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.IXmlSchemaInfo
class CORDL_TYPE IXmlSchemaInfo {
public:
  // Declarations
  __declspec(property(get = get_IsDefault)) bool IsDefault;

  __declspec(property(get = get_IsNil)) bool IsNil;

  __declspec(property(get = get_MemberType)) ::System::Xml::Schema::XmlSchemaSimpleType* MemberType;

  __declspec(property(get = get_SchemaAttribute)) ::System::Xml::Schema::XmlSchemaAttribute* SchemaAttribute;

  __declspec(property(get = get_SchemaElement)) ::System::Xml::Schema::XmlSchemaElement* SchemaElement;

  __declspec(property(get = get_SchemaType)) ::System::Xml::Schema::XmlSchemaType* SchemaType;

  __declspec(property(get = get_Validity)) ::System::Xml::Schema::XmlSchemaValidity Validity;

  /// @brief Method get_IsDefault, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsDefault();

  /// @brief Method get_IsNil, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsNil();

  /// @brief Method get_MemberType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaSimpleType* get_MemberType();

  /// @brief Method get_SchemaAttribute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaAttribute* get_SchemaAttribute();

  /// @brief Method get_SchemaElement, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaElement* get_SchemaElement();

  /// @brief Method get_SchemaType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaType* get_SchemaType();

  /// @brief Method get_Validity, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaValidity get_Validity();

  // Ctor Parameters [CppParam { name: "", ty: "IXmlSchemaInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXmlSchemaInfo(IXmlSchemaInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7601 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::IXmlSchemaInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::IXmlSchemaInfo*, "System.Xml.Schema", "IXmlSchemaInfo");
