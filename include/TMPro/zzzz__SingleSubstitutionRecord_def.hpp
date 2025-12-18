#pragma once
// IWYU pragma private; include "TMPro/SingleSubstitutionRecord.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(SingleSubstitutionRecord)
// Forward declare root types
namespace TMPro {
struct SingleSubstitutionRecord;
}
// Write type traits
MARK_VAL_T(::TMPro::SingleSubstitutionRecord);
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.SingleSubstitutionRecord
#pragma pack(push, 0)
struct CORDL_TYPE SingleSubstitutionRecord {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr SingleSubstitutionRecord();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15822 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::SingleSubstitutionRecord, 0x1>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::SingleSubstitutionRecord, "TMPro", "SingleSubstitutionRecord");
