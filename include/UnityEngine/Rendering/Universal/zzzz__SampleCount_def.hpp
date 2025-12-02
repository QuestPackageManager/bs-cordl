#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/SampleCount.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SampleCount)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct SampleCount;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::SampleCount);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.SampleCount
struct CORDL_TYPE SampleCount {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SampleCount_Unwrapped
  enum struct __SampleCount_Unwrapped : int32_t {
    __E_One = static_cast<int32_t>(0x1),
    __E_Two = static_cast<int32_t>(0x2),
    __E_Four = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SampleCount_Unwrapped() const noexcept {
    return static_cast<__SampleCount_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SampleCount();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SampleCount(int32_t value__) noexcept;

  /// @brief Field Four value: I32(4)
  static ::UnityEngine::Rendering::Universal::SampleCount const Four;

  /// @brief Field One value: I32(1)
  static ::UnityEngine::Rendering::Universal::SampleCount const One;

  /// @brief Field Two value: I32(2)
  static ::UnityEngine::Rendering::Universal::SampleCount const Two;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12916 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::SampleCount, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::SampleCount, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::SampleCount, "UnityEngine.Rendering.Universal", "SampleCount");
