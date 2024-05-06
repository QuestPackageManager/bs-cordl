#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/WindingOrder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WindingOrder)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct WindingOrder;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::WindingOrder);
// Type: UnityEngine.ProBuilder::WindingOrder
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: ::UnityEngine.ProBuilder::WindingOrder
struct CORDL_TYPE WindingOrder {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __WindingOrder_Unwrapped
  enum struct __WindingOrder_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Clockwise = static_cast<int32_t>(0x1),
    __E_CounterClockwise = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __WindingOrder_Unwrapped() const noexcept {
    return static_cast<__WindingOrder_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr WindingOrder();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr WindingOrder(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Clockwise value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ProBuilder::WindingOrder const Clockwise;

  /// @brief Field CounterClockwise value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ProBuilder::WindingOrder const CounterClockwise;

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ProBuilder::WindingOrder const Unknown;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::WindingOrder, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::WindingOrder, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::WindingOrder, "UnityEngine.ProBuilder", "WindingOrder");
