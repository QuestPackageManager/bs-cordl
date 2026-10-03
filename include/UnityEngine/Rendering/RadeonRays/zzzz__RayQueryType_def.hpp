#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/RayQueryType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RayQueryType)
// Forward declare root types
namespace UnityEngine::Rendering::RadeonRays {
struct RayQueryType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RadeonRays::RayQueryType);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::RayQueryType, "UnityEngine.Rendering.RadeonRays", "RayQueryType");
// Dependencies
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: true
// CS Name: UnityEngine.Rendering.RadeonRays.RayQueryType
struct CORDL_TYPE RayQueryType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RayQueryType_Unwrapped
  enum struct __RayQueryType_Unwrapped : int32_t {
    __E_ClosestHit = static_cast<int32_t>(0x0),
    __E_AnyHit = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RayQueryType_Unwrapped() const noexcept {
    return static_cast<__RayQueryType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RayQueryType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr RayQueryType(int32_t value__) noexcept;

  /// @brief Field AnyHit value: I32(1)
  static ::UnityEngine::Rendering::RadeonRays::RayQueryType const AnyHit;

  /// @brief Field ClosestHit value: I32(0)
  static ::UnityEngine::Rendering::RadeonRays::RayQueryType const ClosestHit;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20434 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::RayQueryType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::RayQueryType) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
