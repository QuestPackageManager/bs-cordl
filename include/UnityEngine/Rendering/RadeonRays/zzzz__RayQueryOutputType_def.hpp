#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/RayQueryOutputType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RayQueryOutputType)
// Forward declare root types
namespace UnityEngine::Rendering::RadeonRays {
struct RayQueryOutputType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RadeonRays::RayQueryOutputType);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::RayQueryOutputType, "UnityEngine.Rendering.RadeonRays", "RayQueryOutputType");
// Dependencies
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: true
// CS Name: UnityEngine.Rendering.RadeonRays.RayQueryOutputType
struct CORDL_TYPE RayQueryOutputType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RayQueryOutputType_Unwrapped
  enum struct __RayQueryOutputType_Unwrapped : int32_t {
    __E_FullHitData = static_cast<int32_t>(0x0),
    __E_InstanceID = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RayQueryOutputType_Unwrapped() const noexcept {
    return static_cast<__RayQueryOutputType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RayQueryOutputType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr RayQueryOutputType(int32_t value__) noexcept;

  /// @brief Field FullHitData value: I32(0)
  static ::UnityEngine::Rendering::RadeonRays::RayQueryOutputType const FullHitData;

  /// @brief Field InstanceID value: I32(1)
  static ::UnityEngine::Rendering::RadeonRays::RayQueryOutputType const InstanceID;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20435 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::RayQueryOutputType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::RayQueryOutputType) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
