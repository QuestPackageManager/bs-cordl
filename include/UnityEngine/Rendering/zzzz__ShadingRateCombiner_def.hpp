#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShadingRateCombiner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShadingRateCombiner)
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShadingRateCombiner;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ShadingRateCombiner);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ShadingRateCombiner, "UnityEngine.Rendering", "ShadingRateCombiner");
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ShadingRateCombiner
struct CORDL_TYPE ShadingRateCombiner {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ShadingRateCombiner_Unwrapped
  enum struct __ShadingRateCombiner_Unwrapped : int32_t {
    __E_Keep = static_cast<int32_t>(0x0),
    __E_Override = static_cast<int32_t>(0x1),
    __E_Min = static_cast<int32_t>(0x2),
    __E_Max = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ShadingRateCombiner_Unwrapped() const noexcept {
    return static_cast<__ShadingRateCombiner_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShadingRateCombiner();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr ShadingRateCombiner(int32_t value__) noexcept;

  /// @brief Field Keep value: I32(0)
  static ::UnityEngine::Rendering::ShadingRateCombiner const Keep;

  /// @brief Field Max value: I32(3)
  static ::UnityEngine::Rendering::ShadingRateCombiner const Max;

  /// @brief Field Min value: I32(2)
  static ::UnityEngine::Rendering::ShadingRateCombiner const Min;

  /// @brief Field Override value: I32(1)
  static ::UnityEngine::Rendering::ShadingRateCombiner const Override;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10355 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ShadingRateCombiner, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::ShadingRateCombiner) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering
