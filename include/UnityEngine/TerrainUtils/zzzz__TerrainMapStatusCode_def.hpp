#pragma once
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
// Type: UnityEngine.TerrainUtils::TerrainMapStatusCode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TerrainUtils {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15476))
// CS Name: ::UnityEngine.TerrainUtils::TerrainMapStatusCode
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TerrainMapStatusCode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TerrainMapStatusCode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field OK value: static_cast<int32_t>(0x0)
  static ::UnityEngine::TerrainUtils::TerrainMapStatusCode const OK;

  /// @brief Field Overlapping value: static_cast<int32_t>(0x1)
  static ::UnityEngine::TerrainUtils::TerrainMapStatusCode const Overlapping;

  /// @brief Field SizeMismatch value: static_cast<int32_t>(0x4)
  static ::UnityEngine::TerrainUtils::TerrainMapStatusCode const SizeMismatch;

  /// @brief Field EdgeAlignmentMismatch value: static_cast<int32_t>(0x8)
  static ::UnityEngine::TerrainUtils::TerrainMapStatusCode const EdgeAlignmentMismatch;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainUtils::TerrainMapStatusCode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TerrainUtils::TerrainMapStatusCode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::TerrainUtils
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainUtils::TerrainMapStatusCode, "UnityEngine.TerrainUtils", "TerrainMapStatusCode");
