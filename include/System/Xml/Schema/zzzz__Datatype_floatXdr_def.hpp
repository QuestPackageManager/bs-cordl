#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_float_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Datatype_floatXdr)
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_floatXdr;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_floatXdr);
// Type: System.Xml.Schema::Datatype_floatXdr
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11527))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11576))
// CS Name: ::System.Xml.Schema::Datatype_floatXdr*
class CORDL_TYPE Datatype_floatXdr : public ::System::Xml::Schema::Datatype_float {
public:
  // Declarations
  /// @brief Method ParseValue, addr 0x28c1318, size 0x27c, virtual true, abstract: false, final false
  inline ::System::Object* ParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr);

  static inline ::System::Xml::Schema::Datatype_floatXdr* New_ctor();

  /// @brief Method .ctor, addr 0x28c1594, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_floatXdr", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_floatXdr(Datatype_floatXdr&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_floatXdr", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_floatXdr(Datatype_floatXdr const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_floatXdr();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_floatXdr, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_floatXdr);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_floatXdr*, "System.Xml.Schema", "Datatype_floatXdr");
