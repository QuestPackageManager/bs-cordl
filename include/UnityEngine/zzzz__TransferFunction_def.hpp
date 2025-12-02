#pragma once
// IWYU pragma private; include "UnityEngine/TransferFunction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransferFunction)
// Forward declare root types
namespace UnityEngine {
struct TransferFunction;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TransferFunction);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TransferFunction
struct CORDL_TYPE TransferFunction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TransferFunction_Unwrapped
  enum struct __TransferFunction_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0xffffffff),
    __E_sRGB = static_cast<int32_t>(0x0),
    __E_BT1886 = static_cast<int32_t>(0x1),
    __E_PQ = static_cast<int32_t>(0x2),
    __E_Linear = static_cast<int32_t>(0x3),
    __E_Gamma22 = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TransferFunction_Unwrapped() const noexcept {
    return static_cast<__TransferFunction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TransferFunction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TransferFunction(int32_t value__) noexcept;

  /// @brief Field BT1886 value: I32(1)
  static ::UnityEngine::TransferFunction const BT1886;

  /// @brief Field Gamma22 value: I32(4)
  static ::UnityEngine::TransferFunction const Gamma22;

  /// @brief Field Linear value: I32(3)
  static ::UnityEngine::TransferFunction const Linear;

  /// @brief Field PQ value: I32(2)
  static ::UnityEngine::TransferFunction const PQ;

  /// @brief Field Unknown value: I32(-1)
  static ::UnityEngine::TransferFunction const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10167 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field sRGB value: I32(0)
  static ::UnityEngine::TransferFunction const sRGB;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TransferFunction, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TransferFunction, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TransferFunction, "UnityEngine", "TransferFunction");
