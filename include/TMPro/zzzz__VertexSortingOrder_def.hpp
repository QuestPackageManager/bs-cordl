#pragma once
// IWYU pragma private; include "TMPro/VertexSortingOrder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VertexSortingOrder)
// Forward declare root types
namespace TMPro {
struct VertexSortingOrder;
}
// Write type traits
MARK_VAL_T(::TMPro::VertexSortingOrder);
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.VertexSortingOrder
struct CORDL_TYPE VertexSortingOrder {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VertexSortingOrder_Unwrapped
  enum struct __VertexSortingOrder_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Reverse = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VertexSortingOrder_Unwrapped() const noexcept {
    return static_cast<__VertexSortingOrder_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VertexSortingOrder();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VertexSortingOrder(int32_t value__) noexcept;

  /// @brief Field Normal value: I32(0)
  static ::TMPro::VertexSortingOrder const Normal;

  /// @brief Field Reverse value: I32(1)
  static ::TMPro::VertexSortingOrder const Reverse;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15932 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::VertexSortingOrder, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::VertexSortingOrder, 0x4>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::VertexSortingOrder, "TMPro", "VertexSortingOrder");
