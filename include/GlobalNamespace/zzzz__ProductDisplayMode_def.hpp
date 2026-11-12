#pragma once
// IWYU pragma private; include "GlobalNamespace/ProductDisplayMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProductDisplayMode)
// Forward declare root types
namespace GlobalNamespace {
struct ProductDisplayMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProductDisplayMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProductDisplayMode, "", "ProductDisplayMode");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: ProductDisplayMode
struct CORDL_TYPE ProductDisplayMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ProductDisplayMode_Unwrapped
  enum struct __ProductDisplayMode_Unwrapped : int32_t {
    __E_Always = static_cast<int32_t>(0x0),
    __E_WhenOwned = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProductDisplayMode_Unwrapped() const noexcept {
    return static_cast<__ProductDisplayMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProductDisplayMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr ProductDisplayMode(int32_t value__) noexcept;

  /// @brief Field Always value: I32(0)
  static ::GlobalNamespace::ProductDisplayMode const Always;

  /// @brief Field WhenOwned value: I32(1)
  static ::GlobalNamespace::ProductDisplayMode const WhenOwned;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14603 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProductDisplayMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProductDisplayMode) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
