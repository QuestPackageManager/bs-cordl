#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/FontEngineUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FontEngineUtilities)
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct FontEngineUtilities;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::FontEngineUtilities);
// Dependencies
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// CS Name: UnityEngine.TextCore.LowLevel.FontEngineUtilities
#pragma pack(push, 0)
struct CORDL_TYPE FontEngineUtilities {
public:
  // Declarations
  /// @brief Method MaxValue, addr 0x698a174, size 0x14, virtual false, abstract: false, final false
  static inline int32_t MaxValue(int32_t a, int32_t b, int32_t c);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FontEngineUtilities();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21648 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::FontEngineUtilities, 0x1>, "Size mismatch!");

} // namespace UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::FontEngineUtilities, "UnityEngine.TextCore.LowLevel", "FontEngineUtilities");
