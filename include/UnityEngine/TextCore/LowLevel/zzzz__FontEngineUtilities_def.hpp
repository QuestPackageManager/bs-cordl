#pragma once
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
// Type: UnityEngine.TextCore.LowLevel::FontEngineUtilities
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// CS Name: ::UnityEngine.TextCore.LowLevel::FontEngineUtilities
#pragma pack(push, 0)
struct CORDL_TYPE FontEngineUtilities {
public:
  // Declarations
  /// @brief Method MaxValue, addr 0x326eb40, size 0x20, virtual false, abstract: false, final false
  static inline int32_t MaxValue(int32_t a, int32_t b, int32_t c);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FontEngineUtilities();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::FontEngineUtilities, 0x1>, "Size mismatch!");

} // namespace UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::FontEngineUtilities, "UnityEngine.TextCore.LowLevel", "FontEngineUtilities");
