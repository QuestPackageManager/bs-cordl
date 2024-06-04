#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaGroupBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaGroupBase)
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaGroupBase;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaGroupBase);
// Type: System.Xml.Schema::XmlSchemaGroupBase
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 116, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaGroupBase*
class CORDL_TYPE XmlSchemaGroupBase : public ::System::Xml::Schema::XmlSchemaParticle {
public:
  // Declarations
  __declspec(property(get = get_Items))::System::Xml::Schema::XmlSchemaObjectCollection* Items;

  static inline ::System::Xml::Schema::XmlSchemaGroupBase* New_ctor();

  /// @brief Method SetItems, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetItems(::System::Xml::Schema::XmlSchemaObjectCollection* newItems);

  /// @brief Method .ctor, addr 0x2e2ef54, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Items, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::Schema::XmlSchemaObjectCollection* get_Items();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaGroupBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaGroupBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaGroupBase(XmlSchemaGroupBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaGroupBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaGroupBase(XmlSchemaGroupBase const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaGroupBase, 0x78>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaGroupBase);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaGroupBase*, "System.Xml.Schema", "XmlSchemaGroupBase");
