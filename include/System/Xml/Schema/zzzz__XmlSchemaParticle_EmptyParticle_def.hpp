#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaParticle_EmptyParticle)
// Forward declare root types
namespace System::Xml::Schema {
class __XmlSchemaParticle__EmptyParticle;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::__XmlSchemaParticle__EmptyParticle);
// Type: ::EmptyParticle
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11662))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11661))
// CS Name: ::XmlSchemaParticle::EmptyParticle*
class CORDL_TYPE __XmlSchemaParticle__EmptyParticle : public ::System::Xml::Schema::XmlSchemaParticle {
public:
  // Declarations
  static inline ::System::Xml::Schema::__XmlSchemaParticle__EmptyParticle* New_ctor();

  /// @brief Method .ctor addr 0x274ad30 size 0x54 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__XmlSchemaParticle__EmptyParticle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlSchemaParticle__EmptyParticle(__XmlSchemaParticle__EmptyParticle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlSchemaParticle__EmptyParticle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlSchemaParticle__EmptyParticle(__XmlSchemaParticle__EmptyParticle const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlSchemaParticle__EmptyParticle();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XmlSchemaParticle__EmptyParticle, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::__XmlSchemaParticle__EmptyParticle);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XmlSchemaParticle__EmptyParticle*, "System.Xml.Schema", "XmlSchemaParticle/EmptyParticle");
