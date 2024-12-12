#pragma once
// IWYU pragma private; include "UnityEngine/SpatialTracking/PoseDataFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PoseDataFlags)
// Forward declare root types
namespace UnityEngine::SpatialTracking {
struct PoseDataFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SpatialTracking::PoseDataFlags);
// Dependencies
namespace UnityEngine::SpatialTracking {
// Is value type: true
// CS Name: UnityEngine.SpatialTracking.PoseDataFlags
struct CORDL_TYPE PoseDataFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PoseDataFlags_Unwrapped
  enum struct __PoseDataFlags_Unwrapped : int32_t {
    __E_NoData = static_cast<int32_t>(0x0),
    __E_Position = static_cast<int32_t>(0x1),
    __E_Rotation = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PoseDataFlags_Unwrapped() const noexcept {
    return static_cast<__PoseDataFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PoseDataFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PoseDataFlags(int32_t value__) noexcept;

  /// @brief Field NoData value: I32(0)
  static ::UnityEngine::SpatialTracking::PoseDataFlags const NoData;

  /// @brief Field Position value: I32(1)
  static ::UnityEngine::SpatialTracking::PoseDataFlags const Position;

  /// @brief Field Rotation value: I32(2)
  static ::UnityEngine::SpatialTracking::PoseDataFlags const Rotation;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19008 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SpatialTracking::PoseDataFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::SpatialTracking::PoseDataFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::SpatialTracking
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::PoseDataFlags, "UnityEngine.SpatialTracking", "PoseDataFlags");
