#pragma once
// IWYU pragma private; include "UnityEngine/CubemapFace.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CubemapFace)
// Forward declare root types
namespace UnityEngine {
struct CubemapFace;
}
// Write type traits
MARK_VAL_T(::UnityEngine::CubemapFace);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.CubemapFace
struct CORDL_TYPE CubemapFace {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CubemapFace_Unwrapped
  enum struct __CubemapFace_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0xffffffff),
    __E_PositiveX = static_cast<int32_t>(0x0),
    __E_NegativeX = static_cast<int32_t>(0x1),
    __E_PositiveY = static_cast<int32_t>(0x2),
    __E_NegativeY = static_cast<int32_t>(0x3),
    __E_PositiveZ = static_cast<int32_t>(0x4),
    __E_NegativeZ = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CubemapFace_Unwrapped() const noexcept {
    return static_cast<__CubemapFace_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CubemapFace();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CubemapFace(int32_t value__) noexcept;

  /// @brief Field NegativeX value: I32(1)
  static ::UnityEngine::CubemapFace const NegativeX;

  /// @brief Field NegativeY value: I32(3)
  static ::UnityEngine::CubemapFace const NegativeY;

  /// @brief Field NegativeZ value: I32(5)
  static ::UnityEngine::CubemapFace const NegativeZ;

  /// @brief Field PositiveX value: I32(0)
  static ::UnityEngine::CubemapFace const PositiveX;

  /// @brief Field PositiveY value: I32(2)
  static ::UnityEngine::CubemapFace const PositiveY;

  /// @brief Field PositiveZ value: I32(4)
  static ::UnityEngine::CubemapFace const PositiveZ;

  /// @brief Field Unknown value: I32(-1)
  static ::UnityEngine::CubemapFace const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10177 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::CubemapFace, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::CubemapFace, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CubemapFace, "UnityEngine", "CubemapFace");
