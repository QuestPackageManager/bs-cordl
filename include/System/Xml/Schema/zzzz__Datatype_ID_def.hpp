#pragma once
// IWYU pragma private; include "System/Xml/Schema/Datatype_ID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_NCName_def.hpp"
CORDL_MODULE_EXPORT(Datatype_ID)
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml {
struct XmlTokenizedType;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_ID;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_ID);
// Dependencies System.Xml.Schema.Datatype_NCName
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.Datatype_ID
class CORDL_TYPE Datatype_ID : public ::System::Xml::Schema::Datatype_NCName {
public:
  // Declarations
  __declspec(property(get = get_TokenizedType)) ::System::Xml::XmlTokenizedType TokenizedType;

  __declspec(property(get = get_TypeCode)) ::System::Xml::Schema::XmlTypeCode TypeCode;

  static inline ::System::Xml::Schema::Datatype_ID* New_ctor();

  /// @brief Method .ctor, addr 0x43a566c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TokenizedType, addr 0x43ad504, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlTokenizedType get_TokenizedType();

  /// @brief Method get_TypeCode, addr 0x43ad4fc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_ID();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Datatype_ID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_ID(Datatype_ID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_ID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_ID(Datatype_ID const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7562 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_ID, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_ID);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_ID*, "System.Xml.Schema", "Datatype_ID");
