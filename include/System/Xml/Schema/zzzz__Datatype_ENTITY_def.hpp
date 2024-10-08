#pragma once
// IWYU pragma private; include "System/Xml/Schema/Datatype_ENTITY.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_NCName_def.hpp"
CORDL_MODULE_EXPORT(Datatype_ENTITY)
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml {
struct XmlTokenizedType;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_ENTITY;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_ENTITY);
// Type: System.Xml.Schema::Datatype_ENTITY
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::Datatype_ENTITY*
class CORDL_TYPE Datatype_ENTITY : public ::System::Xml::Schema::Datatype_NCName {
public:
  // Declarations
  __declspec(property(get = get_TokenizedType)) ::System::Xml::XmlTokenizedType TokenizedType;

  __declspec(property(get = get_TypeCode)) ::System::Xml::Schema::XmlTypeCode TypeCode;

  static inline ::System::Xml::Schema::Datatype_ENTITY* New_ctor();

  /// @brief Method .ctor, addr 0x432e328, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TokenizedType, addr 0x43364b8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlTokenizedType get_TokenizedType();

  /// @brief Method get_TypeCode, addr 0x43364b0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_ENTITY();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Datatype_ENTITY", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_ENTITY(Datatype_ENTITY&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_ENTITY", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_ENTITY(Datatype_ENTITY const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7529 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_ENTITY, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_ENTITY);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_ENTITY*, "System.Xml.Schema", "Datatype_ENTITY");
