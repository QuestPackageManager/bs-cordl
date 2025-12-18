#pragma once
// IWYU pragma private; include "UnityEngine/XR/TrackingOriginModeFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackingOriginModeFlags)
// Forward declare root types
namespace UnityEngine::XR {
struct TrackingOriginModeFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::TrackingOriginModeFlags);
// Dependencies
namespace UnityEngine::XR {
// Is value type: true
// CS Name: UnityEngine.XR.TrackingOriginModeFlags
struct CORDL_TYPE TrackingOriginModeFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TrackingOriginModeFlags_Unwrapped
  enum struct __TrackingOriginModeFlags_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Device = static_cast<int32_t>(0x1),
    __E_Floor = static_cast<int32_t>(0x2),
    __E_TrackingReference = static_cast<int32_t>(0x4),
    __E_Unbounded = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TrackingOriginModeFlags_Unwrapped() const noexcept {
    return static_cast<__TrackingOriginModeFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackingOriginModeFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TrackingOriginModeFlags(int32_t value__) noexcept;

  /// @brief Field Device value: I32(1)
  static ::UnityEngine::XR::TrackingOriginModeFlags const Device;

  /// @brief Field Floor value: I32(2)
  static ::UnityEngine::XR::TrackingOriginModeFlags const Floor;

  /// @brief Field TrackingReference value: I32(4)
  static ::UnityEngine::XR::TrackingOriginModeFlags const TrackingReference;

  /// @brief Field Unbounded value: I32(8)
  static ::UnityEngine::XR::TrackingOriginModeFlags const Unbounded;

  /// @brief Field Unknown value: I32(0)
  static ::UnityEngine::XR::TrackingOriginModeFlags const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21958 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::TrackingOriginModeFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::TrackingOriginModeFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::TrackingOriginModeFlags, "UnityEngine.XR", "TrackingOriginModeFlags");
