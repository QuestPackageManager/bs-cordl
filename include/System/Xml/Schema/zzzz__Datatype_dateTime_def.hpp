#pragma once
// IWYU pragma private; include "System/Xml/Schema/Datatype_dateTime.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_dateTimeBase_def.hpp"
CORDL_MODULE_EXPORT(Datatype_dateTime)
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_dateTime;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_dateTime);
// Type: System.Xml.Schema::Datatype_dateTime
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::Datatype_dateTime*
class CORDL_TYPE Datatype_dateTime : public ::System::Xml::Schema::Datatype_dateTimeBase {
public:
  // Declarations
  static inline ::System::Xml::Schema::Datatype_dateTime* New_ctor();

  /// @brief Method .ctor, addr 0x2f320d8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_dateTime();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Datatype_dateTime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_dateTime(Datatype_dateTime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_dateTime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_dateTime(Datatype_dateTime const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_dateTime, 0x40>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_dateTime);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_dateTime*, "System.Xml.Schema", "Datatype_dateTime");
