#pragma once
// IWYU pragma private; include "UnityEngine/WhitePoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WhitePoint)
// Forward declare root types
namespace UnityEngine {
struct WhitePoint;
}
// Write type traits
MARK_VAL_T(::UnityEngine::WhitePoint);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.WhitePoint
struct CORDL_TYPE WhitePoint {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __WhitePoint_Unwrapped
  enum struct __WhitePoint_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0xffffffff),
    __E_D65 = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __WhitePoint_Unwrapped() const noexcept {
    return static_cast<__WhitePoint_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr WhitePoint();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr WhitePoint(int32_t value__) noexcept;

  /// @brief Field D65 value: I32(0)
  static ::UnityEngine::WhitePoint const D65;

  /// @brief Field Unknown value: I32(-1)
  static ::UnityEngine::WhitePoint const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10170 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::WhitePoint, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::WhitePoint, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WhitePoint, "UnityEngine", "WhitePoint");
