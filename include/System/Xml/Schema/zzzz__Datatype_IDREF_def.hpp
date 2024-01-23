#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_NCName_def.hpp"
CORDL_MODULE_EXPORT(Datatype_IDREF)
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml {
struct XmlTokenizedType;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_IDREF;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_IDREF);
// Type: System.Xml.Schema::Datatype_IDREF
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11659))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11661))
// CS Name: ::System.Xml.Schema::Datatype_IDREF*
class CORDL_TYPE Datatype_IDREF : public ::System::Xml::Schema::Datatype_NCName {
public:
  // Declarations
  __declspec(property(get = get_TypeCode))::System::Xml::Schema::XmlTypeCode TypeCode;

  __declspec(property(get = get_TokenizedType))::System::Xml::XmlTokenizedType TokenizedType;

  /// @brief Method get_TypeCode, addr 0x28bb7d8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

  /// @brief Method get_TokenizedType, addr 0x28bb7e0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlTokenizedType get_TokenizedType();

  static inline ::System::Xml::Schema::Datatype_IDREF* New_ctor();

  /// @brief Method .ctor, addr 0x28bb7e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_IDREF", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_IDREF(Datatype_IDREF&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_IDREF", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_IDREF(Datatype_IDREF const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_IDREF();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_IDREF, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_IDREF);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_IDREF*, "System.Xml.Schema", "Datatype_IDREF");
