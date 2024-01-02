#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_NMTOKEN_def.hpp"
CORDL_MODULE_EXPORT(Datatype_ENUMERATION)
namespace System::Xml {
struct XmlTokenizedType;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_ENUMERATION;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_ENUMERATION);
// Type: System.Xml.Schema::Datatype_ENUMERATION
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11657))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11680))
// CS Name: ::System.Xml.Schema::Datatype_ENUMERATION*
class CORDL_TYPE Datatype_ENUMERATION : public ::System::Xml::Schema::Datatype_NMTOKEN {
public:
  // Declarations
  __declspec(property(get = get_TokenizedType))::System::Xml::XmlTokenizedType TokenizedType;

  /// @brief Method get_TokenizedType, addr 0x28bf3bc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlTokenizedType get_TokenizedType();

  static inline ::System::Xml::Schema::Datatype_ENUMERATION* New_ctor();

  /// @brief Method .ctor, addr 0x28bf3c4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_ENUMERATION", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_ENUMERATION(Datatype_ENUMERATION&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_ENUMERATION", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_ENUMERATION(Datatype_ENUMERATION const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_ENUMERATION();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_ENUMERATION, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_ENUMERATION);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_ENUMERATION*, "System.Xml.Schema", "Datatype_ENUMERATION");
