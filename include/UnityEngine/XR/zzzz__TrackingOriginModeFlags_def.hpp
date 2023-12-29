#pragma once
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
// Type: UnityEngine.XR::TrackingOriginModeFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15588))
// CS Name: ::UnityEngine.XR::TrackingOriginModeFlags
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TrackingOriginModeFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackingOriginModeFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::TrackingOriginModeFlags const Unknown;

  /// @brief Field Device value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::TrackingOriginModeFlags const Device;

  /// @brief Field Floor value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::TrackingOriginModeFlags const Floor;

  /// @brief Field TrackingReference value: static_cast<int32_t>(0x4)
  static ::UnityEngine::XR::TrackingOriginModeFlags const TrackingReference;

  /// @brief Field Unbounded value: static_cast<int32_t>(0x8)
  static ::UnityEngine::XR::TrackingOriginModeFlags const Unbounded;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::TrackingOriginModeFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::TrackingOriginModeFlags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::TrackingOriginModeFlags, "UnityEngine.XR", "TrackingOriginModeFlags");
