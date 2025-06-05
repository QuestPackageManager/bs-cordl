#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaKeyref.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaIdentityConstraint_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaKeyref)
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaKeyref;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaKeyref);
// Dependencies System.Xml.Schema.XmlSchemaIdentityConstraint
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaKeyref
class CORDL_TYPE XmlSchemaKeyref : public ::System::Xml::Schema::XmlSchemaIdentityConstraint {
public:
  // Declarations
  __declspec(property(get = get_Refer, put = set_Refer)) ::System::Xml::XmlQualifiedName* Refer;

  /// @brief Field refer, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_refer, put = __cordl_internal_set_refer)) ::System::Xml::XmlQualifiedName* refer;

  static inline ::System::Xml::Schema::XmlSchemaKeyref* New_ctor();

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get_refer() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_refer();

  constexpr void __cordl_internal_set_refer(::System::Xml::XmlQualifiedName* value);

  /// @brief Method .ctor, addr 0x42bf360, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Refer, addr 0x42bf2c0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_Refer();

  /// @brief Method set_Refer, addr 0x42bf2c8, size 0x98, virtual false, abstract: false, final false
  inline void set_Refer(::System::Xml::XmlQualifiedName* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaKeyref();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaKeyref", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaKeyref(XmlSchemaKeyref&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaKeyref", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaKeyref(XmlSchemaKeyref const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7701 };

  /// @brief Field refer, offset: 0x78, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___refer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaKeyref, ___refer) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaKeyref, 0x80>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaKeyref);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaKeyref*, "System.Xml.Schema", "XmlSchemaKeyref");
