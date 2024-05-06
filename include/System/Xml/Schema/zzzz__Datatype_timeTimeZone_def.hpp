#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_dateTimeBase_def.hpp"
CORDL_MODULE_EXPORT(Datatype_timeTimeZone)
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_timeTimeZone;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_timeTimeZone);
// Type: System.Xml.Schema::Datatype_timeTimeZone
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::Datatype_timeTimeZone*
class CORDL_TYPE Datatype_timeTimeZone : public ::System::Xml::Schema::Datatype_dateTimeBase {
public:
  // Declarations
  static inline ::System::Xml::Schema::Datatype_timeTimeZone* New_ctor();

  /// @brief Method .ctor, addr 0x2f049dc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_timeTimeZone();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Datatype_timeTimeZone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_timeTimeZone(Datatype_timeTimeZone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_timeTimeZone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_timeTimeZone(Datatype_timeTimeZone const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_timeTimeZone, 0x40>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_timeTimeZone);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_timeTimeZone*, "System.Xml.Schema", "Datatype_timeTimeZone");
