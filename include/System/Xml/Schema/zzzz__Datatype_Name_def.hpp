#pragma once
// IWYU pragma private; include "System/Xml/Schema/Datatype_Name.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_token_def.hpp"
CORDL_MODULE_EXPORT(Datatype_Name)
namespace System::Xml::Schema {
struct XmlTypeCode;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_Name;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_Name);
// Dependencies System.Xml.Schema.Datatype_token
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.Datatype_Name
class CORDL_TYPE Datatype_Name : public ::System::Xml::Schema::Datatype_token {
public:
  // Declarations
  __declspec(property(get = get_TypeCode)) ::System::Xml::Schema::XmlTypeCode TypeCode;

  static inline ::System::Xml::Schema::Datatype_Name* New_ctor();

  /// @brief Method .ctor, addr 0x43a73f8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TypeCode, addr 0x43af014, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_Name();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Datatype_Name", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_Name(Datatype_Name&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_Name", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_Name(Datatype_Name const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7558 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_Name, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_Name);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_Name*, "System.Xml.Schema", "Datatype_Name");
