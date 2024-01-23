#pragma once
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
// Type: UnityEngine::CubemapFace
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10116))
// CS Name: ::UnityEngine::CubemapFace
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CubemapFace(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr CubemapFace();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0xffffffff)
  static ::UnityEngine::CubemapFace const Unknown;

  /// @brief Field PositiveX value: static_cast<int32_t>(0x0)
  static ::UnityEngine::CubemapFace const PositiveX;

  /// @brief Field NegativeX value: static_cast<int32_t>(0x1)
  static ::UnityEngine::CubemapFace const NegativeX;

  /// @brief Field PositiveY value: static_cast<int32_t>(0x2)
  static ::UnityEngine::CubemapFace const PositiveY;

  /// @brief Field NegativeY value: static_cast<int32_t>(0x3)
  static ::UnityEngine::CubemapFace const NegativeY;

  /// @brief Field PositiveZ value: static_cast<int32_t>(0x4)
  static ::UnityEngine::CubemapFace const PositiveZ;

  /// @brief Field NegativeZ value: static_cast<int32_t>(0x5)
  static ::UnityEngine::CubemapFace const NegativeZ;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CubemapFace, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::CubemapFace, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CubemapFace, "UnityEngine", "CubemapFace");
