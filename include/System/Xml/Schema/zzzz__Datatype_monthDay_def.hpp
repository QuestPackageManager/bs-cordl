#pragma once
// IWYU pragma private; include "System/Xml/Schema/Datatype_monthDay.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_dateTimeBase_def.hpp"
CORDL_MODULE_EXPORT(Datatype_monthDay)
namespace System::Xml::Schema {
struct XmlTypeCode;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_monthDay;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_monthDay);
// Dependencies System.Xml.Schema.Datatype_dateTimeBase
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.Datatype_monthDay
class CORDL_TYPE Datatype_monthDay : public ::System::Xml::Schema::Datatype_dateTimeBase {
public:
  // Declarations
  __declspec(property(get = get_TypeCode)) ::System::Xml::Schema::XmlTypeCode TypeCode;

  static inline ::System::Xml::Schema::Datatype_monthDay* New_ctor();

  /// @brief Method .ctor, addr 0x43a577c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TypeCode, addr 0x43ac0a0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_monthDay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Datatype_monthDay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_monthDay(Datatype_monthDay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_monthDay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_monthDay(Datatype_monthDay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7547 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_monthDay, 0x40>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_monthDay);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_monthDay*, "System.Xml.Schema", "Datatype_monthDay");
