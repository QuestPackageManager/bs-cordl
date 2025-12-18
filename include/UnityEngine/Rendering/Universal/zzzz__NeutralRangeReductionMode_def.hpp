#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/NeutralRangeReductionMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NeutralRangeReductionMode)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct NeutralRangeReductionMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::NeutralRangeReductionMode);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.NeutralRangeReductionMode
struct CORDL_TYPE NeutralRangeReductionMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NeutralRangeReductionMode_Unwrapped
  enum struct __NeutralRangeReductionMode_Unwrapped : int32_t {
    __E_Reinhard = static_cast<int32_t>(0x1),
    __E_BT2390 = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NeutralRangeReductionMode_Unwrapped() const noexcept {
    return static_cast<__NeutralRangeReductionMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NeutralRangeReductionMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NeutralRangeReductionMode(int32_t value__) noexcept;

  /// @brief Field BT2390 value: I32(2)
  static ::UnityEngine::Rendering::Universal::NeutralRangeReductionMode const BT2390;

  /// @brief Field Reinhard value: I32(1)
  static ::UnityEngine::Rendering::Universal::NeutralRangeReductionMode const Reinhard;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12786 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::NeutralRangeReductionMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::NeutralRangeReductionMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::NeutralRangeReductionMode, "UnityEngine.Rendering.Universal", "NeutralRangeReductionMode");
