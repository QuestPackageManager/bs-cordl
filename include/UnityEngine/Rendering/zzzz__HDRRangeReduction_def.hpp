#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/HDRRangeReduction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HDRRangeReduction)
// Forward declare root types
namespace UnityEngine::Rendering {
struct HDRRangeReduction;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::HDRRangeReduction);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.HDRRangeReduction
struct CORDL_TYPE HDRRangeReduction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HDRRangeReduction_Unwrapped
  enum struct __HDRRangeReduction_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Reinhard = static_cast<int32_t>(0x1),
    __E_BT2390 = static_cast<int32_t>(0x2),
    __E_ACES1000Nits = static_cast<int32_t>(0x3),
    __E_ACES2000Nits = static_cast<int32_t>(0x4),
    __E_ACES4000Nits = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HDRRangeReduction_Unwrapped() const noexcept {
    return static_cast<__HDRRangeReduction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HDRRangeReduction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HDRRangeReduction(int32_t value__) noexcept;

  /// @brief Field ACES1000Nits value: I32(3)
  static ::UnityEngine::Rendering::HDRRangeReduction const ACES1000Nits;

  /// @brief Field ACES2000Nits value: I32(4)
  static ::UnityEngine::Rendering::HDRRangeReduction const ACES2000Nits;

  /// @brief Field ACES4000Nits value: I32(5)
  static ::UnityEngine::Rendering::HDRRangeReduction const ACES4000Nits;

  /// @brief Field BT2390 value: I32(2)
  static ::UnityEngine::Rendering::HDRRangeReduction const BT2390;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::HDRRangeReduction const None;

  /// @brief Field Reinhard value: I32(1)
  static ::UnityEngine::Rendering::HDRRangeReduction const Reinhard;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12138 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::HDRRangeReduction, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::HDRRangeReduction, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::HDRRangeReduction, "UnityEngine.Rendering", "HDRRangeReduction");
