#pragma once
// IWYU pragma private; include "System/Xml/Schema/RangePositionInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(RangePositionInfo)
namespace System::Xml::Schema {
class BitSet;
}
namespace System {
struct Decimal;
}
// Forward declare root types
namespace System::Xml::Schema {
struct RangePositionInfo;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::RangePositionInfo);
// Dependencies
namespace System::Xml::Schema {
// Is value type: true
// CS Name: System.Xml.Schema.RangePositionInfo
struct CORDL_TYPE RangePositionInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RangePositionInfo();

  // Ctor Parameters [CppParam { name: "curpos", ty: "::System::Xml::Schema::BitSet*", modifiers: "", def_value: None }, CppParam { name: "rangeCounters", ty:
  // "::ArrayW<::System::Decimal,::Array<::System::Decimal>*>", modifiers: "", def_value: None }]
  constexpr RangePositionInfo(::System::Xml::Schema::BitSet* curpos, ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> rangeCounters) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7509 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field curpos, offset: 0x0, size: 0x8, def value: None
  ::System::Xml::Schema::BitSet* curpos;

  /// @brief Field rangeCounters, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> rangeCounters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::RangePositionInfo, curpos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::RangePositionInfo, rangeCounters) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::RangePositionInfo, 0x10>, "Size mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::RangePositionInfo, "System.Xml.Schema", "RangePositionInfo");
