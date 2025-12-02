#pragma once
// IWYU pragma private; include "TMPro/AlternateSubstitutionRecord.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(AlternateSubstitutionRecord)
// Forward declare root types
namespace TMPro {
struct AlternateSubstitutionRecord;
}
// Write type traits
MARK_VAL_T(::TMPro::AlternateSubstitutionRecord);
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.AlternateSubstitutionRecord
#pragma pack(push, 0)
struct CORDL_TYPE AlternateSubstitutionRecord {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr AlternateSubstitutionRecord();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15810 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::AlternateSubstitutionRecord, 0x1>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::AlternateSubstitutionRecord, "TMPro", "AlternateSubstitutionRecord");
