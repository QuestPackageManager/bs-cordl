#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaAttributeGroupRef.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaAttributeGroupRef)
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaAttributeGroupRef;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaAttributeGroupRef);
// Dependencies System.Xml.Schema.XmlSchemaAnnotated
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaAttributeGroupRef
class CORDL_TYPE XmlSchemaAttributeGroupRef : public ::System::Xml::Schema::XmlSchemaAnnotated {
public:
  // Declarations
  __declspec(property(get = get_RefName, put = set_RefName)) ::System::Xml::XmlQualifiedName* RefName;

  /// @brief Field refName, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_refName, put = __cordl_internal_set_refName)) ::System::Xml::XmlQualifiedName* refName;

  static inline ::System::Xml::Schema::XmlSchemaAttributeGroupRef* New_ctor();

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get_refName() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_refName();

  constexpr void __cordl_internal_set_refName(::System::Xml::XmlQualifiedName* value);

  /// @brief Method .ctor, addr 0x42bac98, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_RefName, addr 0x42babf8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_RefName();

  /// @brief Method set_RefName, addr 0x42bac00, size 0x98, virtual false, abstract: false, final false
  inline void set_RefName(::System::Xml::XmlQualifiedName* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaAttributeGroupRef();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAttributeGroupRef", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaAttributeGroupRef(XmlSchemaAttributeGroupRef&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAttributeGroupRef", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaAttributeGroupRef(XmlSchemaAttributeGroupRef const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7658 };

  /// @brief Field refName, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___refName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaAttributeGroupRef, ___refName) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaAttributeGroupRef, 0x58>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaAttributeGroupRef);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaAttributeGroupRef*, "System.Xml.Schema", "XmlSchemaAttributeGroupRef");
