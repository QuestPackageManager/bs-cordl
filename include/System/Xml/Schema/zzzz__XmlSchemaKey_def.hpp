#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaIdentityConstraint_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaKey)
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaKey;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaKey);
// Dependencies System.Xml.Schema.XmlSchemaIdentityConstraint
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaKey
class CORDL_TYPE XmlSchemaKey : public ::System::Xml::Schema::XmlSchemaIdentityConstraint {
public:
  // Declarations
  static inline ::System::Xml::Schema::XmlSchemaKey* New_ctor();

  /// @brief Method .ctor, addr 0x42bef54, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaKey(XmlSchemaKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaKey(XmlSchemaKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7700 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaKey, 0x78>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaKey);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaKey*, "System.Xml.Schema", "XmlSchemaKey");
