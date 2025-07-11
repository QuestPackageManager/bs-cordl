#pragma once
// IWYU pragma private; include "UnityEngine/XR/TrackingSpaceType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackingSpaceType)
// Forward declare root types
namespace UnityEngine::XR {
struct TrackingSpaceType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::TrackingSpaceType);
// Dependencies
namespace UnityEngine::XR {
// Is value type: true
// CS Name: UnityEngine.XR.TrackingSpaceType
struct CORDL_TYPE TrackingSpaceType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TrackingSpaceType_Unwrapped
  enum struct __TrackingSpaceType_Unwrapped : int32_t {
    __E_Stationary = static_cast<int32_t>(0x0),
    __E_RoomScale = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TrackingSpaceType_Unwrapped() const noexcept {
    return static_cast<__TrackingSpaceType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackingSpaceType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TrackingSpaceType(int32_t value__) noexcept;

  /// @brief Field RoomScale value: I32(1)
  static ::UnityEngine::XR::TrackingSpaceType const RoomScale;

  /// @brief Field Stationary value: I32(0)
  static ::UnityEngine::XR::TrackingSpaceType const Stationary;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19002 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::TrackingSpaceType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::TrackingSpaceType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::TrackingSpaceType, "UnityEngine.XR", "TrackingSpaceType");
