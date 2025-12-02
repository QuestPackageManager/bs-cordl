#pragma once
// IWYU pragma private; include "Oculus/Platform/ProductType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProductType)
// Forward declare root types
namespace Oculus::Platform {
struct ProductType;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::ProductType);
// Dependencies
namespace Oculus::Platform {
// Is value type: true
// CS Name: Oculus.Platform.ProductType
struct CORDL_TYPE ProductType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ProductType_Unwrapped
  enum struct __ProductType_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_DURABLE = static_cast<int32_t>(0x1),
    __E_CONSUMABLE = static_cast<int32_t>(0x2),
    __E_SUBSCRIPTION = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProductType_Unwrapped() const noexcept {
    return static_cast<__ProductType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProductType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ProductType(int32_t value__) noexcept;

  /// @brief Field CONSUMABLE value: I32(2)
  static ::Oculus::Platform::ProductType const CONSUMABLE;

  /// @brief Field DURABLE value: I32(1)
  static ::Oculus::Platform::ProductType const DURABLE;

  /// @brief Field SUBSCRIPTION value: I32(3)
  static ::Oculus::Platform::ProductType const SUBSCRIPTION;

  /// @brief Field Unknown value: I32(0)
  static ::Oculus::Platform::ProductType const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17930 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::ProductType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::ProductType, 0x4>, "Size mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::ProductType, "Oculus.Platform", "ProductType");
