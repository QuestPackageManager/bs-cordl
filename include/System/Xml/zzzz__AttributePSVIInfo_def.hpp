#pragma once
// IWYU pragma private; include "System/Xml/AttributePSVIInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AttributePSVIInfo)
namespace System::Xml::Schema {
class XmlSchemaInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
class AttributePSVIInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::AttributePSVIInfo);
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.AttributePSVIInfo
class CORDL_TYPE AttributePSVIInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field attributeSchemaInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeSchemaInfo, put = __cordl_internal_set_attributeSchemaInfo)) ::System::Xml::Schema::XmlSchemaInfo* attributeSchemaInfo;

  /// @brief Field localName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_localName, put = __cordl_internal_set_localName)) ::StringW localName;

  /// @brief Field namespaceUri, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_namespaceUri, put = __cordl_internal_set_namespaceUri)) ::StringW namespaceUri;

  /// @brief Field typedAttributeValue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_typedAttributeValue, put = __cordl_internal_set_typedAttributeValue)) ::System::Object* typedAttributeValue;

  static inline ::System::Xml::AttributePSVIInfo* New_ctor();

  /// @brief Method Reset, addr 0x432d728, size 0x64, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::System::Xml::Schema::XmlSchemaInfo* const& __cordl_internal_get_attributeSchemaInfo() const;

  constexpr ::System::Xml::Schema::XmlSchemaInfo*& __cordl_internal_get_attributeSchemaInfo();

  constexpr ::StringW const& __cordl_internal_get_localName() const;

  constexpr ::StringW& __cordl_internal_get_localName();

  constexpr ::StringW const& __cordl_internal_get_namespaceUri() const;

  constexpr ::StringW& __cordl_internal_get_namespaceUri();

  constexpr ::System::Object* const& __cordl_internal_get_typedAttributeValue() const;

  constexpr ::System::Object*& __cordl_internal_get_typedAttributeValue();

  constexpr void __cordl_internal_set_attributeSchemaInfo(::System::Xml::Schema::XmlSchemaInfo* value);

  constexpr void __cordl_internal_set_localName(::StringW value);

  constexpr void __cordl_internal_set_namespaceUri(::StringW value);

  constexpr void __cordl_internal_set_typedAttributeValue(::System::Object* value);

  /// @brief Method .ctor, addr 0x432d6c4, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributePSVIInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AttributePSVIInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttributePSVIInfo(AttributePSVIInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttributePSVIInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttributePSVIInfo(AttributePSVIInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7278 };

  /// @brief Field localName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___localName;

  /// @brief Field namespaceUri, offset: 0x18, size: 0x8, def value: None
  ::StringW ___namespaceUri;

  /// @brief Field typedAttributeValue, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___typedAttributeValue;

  /// @brief Field attributeSchemaInfo, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaInfo* ___attributeSchemaInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::AttributePSVIInfo, ___localName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::AttributePSVIInfo, ___namespaceUri) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::AttributePSVIInfo, ___typedAttributeValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::AttributePSVIInfo, ___attributeSchemaInfo) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::AttributePSVIInfo, 0x30>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::AttributePSVIInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::AttributePSVIInfo*, "System.Xml", "AttributePSVIInfo");
