#pragma once
// IWYU pragma private; include "UnityEngine/TerrainUtils/TerrainMapStatusCode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainMapStatusCode)
// Forward declare root types
namespace UnityEngine::TerrainUtils {
struct TerrainMapStatusCode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TerrainUtils::TerrainMapStatusCode);
// Dependencies
namespace UnityEngine::TerrainUtils {
// Is value type: true
// CS Name: UnityEngine.TerrainUtils.TerrainMapStatusCode
struct CORDL_TYPE TerrainMapStatusCode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TerrainMapStatusCode_Unwrapped
  enum struct __TerrainMapStatusCode_Unwrapped : int32_t {
    __E_OK = static_cast<int32_t>(0x0),
    __E_Overlapping = static_cast<int32_t>(0x1),
    __E_SizeMismatch = static_cast<int32_t>(0x4),
    __E_EdgeAlignmentMismatch = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TerrainMapStatusCode_Unwrapped() const noexcept {
    return static_cast<__TerrainMapStatusCode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TerrainMapStatusCode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TerrainMapStatusCode(int32_t value__) noexcept;

  /// @brief Field EdgeAlignmentMismatch value: I32(8)
  static ::UnityEngine::TerrainUtils::TerrainMapStatusCode const EdgeAlignmentMismatch;

  /// @brief Field OK value: I32(0)
  static ::UnityEngine::TerrainUtils::TerrainMapStatusCode const OK;

  /// @brief Field Overlapping value: I32(1)
  static ::UnityEngine::TerrainUtils::TerrainMapStatusCode const Overlapping;

  /// @brief Field SizeMismatch value: I32(4)
  static ::UnityEngine::TerrainUtils::TerrainMapStatusCode const SizeMismatch;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18139 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TerrainUtils::TerrainMapStatusCode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainUtils::TerrainMapStatusCode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::TerrainUtils
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainUtils::TerrainMapStatusCode, "UnityEngine.TerrainUtils", "TerrainMapStatusCode");
