#pragma once
// IWYU pragma private; include "System/Xml/Schema/Datatype_floatXdr.hpp"
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
// Dependencies System.Xml.Schema.Datatype_float
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.Datatype_floatXdr
class CORDL_TYPE Datatype_floatXdr : public ::System::Xml::Schema::Datatype_float {
public:
  // Declarations
  static inline ::System::Xml::Schema::Datatype_floatXdr* New_ctor();

  /// @brief Method ParseValue, addr 0x43b0aec, size 0x1e8, virtual true, abstract: false, final false
  inline ::System::Object* ParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr);

  /// @brief Method .ctor, addr 0x43a59a4, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_floatXdr();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Datatype_floatXdr", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_floatXdr(Datatype_floatXdr&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_floatXdr", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_floatXdr(Datatype_floatXdr const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7580 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_floatXdr, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_floatXdr);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_floatXdr*, "System.Xml.Schema", "Datatype_floatXdr");
