#pragma once
// IWYU pragma private; include "System/Xml/Schema/RedefineEntry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RedefineEntry)
namespace System::Xml::Schema {
class XmlSchemaRedefine;
}
namespace System::Xml::Schema {
class XmlSchema;
}
// Forward declare root types
namespace System::Xml::Schema {
class RedefineEntry;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::RedefineEntry);
// Type: System.Xml.Schema::RedefineEntry
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::RedefineEntry*
class CORDL_TYPE RedefineEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field redefine, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_redefine, put = __cordl_internal_set_redefine)) ::System::Xml::Schema::XmlSchemaRedefine* redefine;

  /// @brief Field schemaToUpdate, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaToUpdate, put = __cordl_internal_set_schemaToUpdate)) ::System::Xml::Schema::XmlSchema* schemaToUpdate;

  static inline ::System::Xml::Schema::RedefineEntry* New_ctor(::System::Xml::Schema::XmlSchemaRedefine* external, ::System::Xml::Schema::XmlSchema* schema);

  constexpr ::System::Xml::Schema::XmlSchemaRedefine*& __cordl_internal_get_redefine();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaRedefine*> const& __cordl_internal_get_redefine() const;

  constexpr ::System::Xml::Schema::XmlSchema*& __cordl_internal_get_schemaToUpdate();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchema*> const& __cordl_internal_get_schemaToUpdate() const;

  constexpr void __cordl_internal_set_redefine(::System::Xml::Schema::XmlSchemaRedefine* value);

  constexpr void __cordl_internal_set_schemaToUpdate(::System::Xml::Schema::XmlSchema* value);

  /// @brief Method .ctor, addr 0x420c180, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaRedefine* external, ::System::Xml::Schema::XmlSchema* schema);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RedefineEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RedefineEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RedefineEntry(RedefineEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RedefineEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RedefineEntry(RedefineEntry const&) = delete;

  /// @brief Field redefine, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaRedefine* ___redefine;

  /// @brief Field schemaToUpdate, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchema* ___schemaToUpdate;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7580 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::RedefineEntry, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::RedefineEntry, ___redefine) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::RedefineEntry, ___schemaToUpdate) == 0x18, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::RedefineEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::RedefineEntry*, "System.Xml.Schema", "RedefineEntry");
