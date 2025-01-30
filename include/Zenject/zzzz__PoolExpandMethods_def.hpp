#pragma once
// IWYU pragma private; include "Zenject/PoolExpandMethods.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PoolExpandMethods)
// Forward declare root types
namespace Zenject {
struct PoolExpandMethods;
}
// Write type traits
MARK_VAL_T(::Zenject::PoolExpandMethods);
// Dependencies
namespace Zenject {
// Is value type: true
// CS Name: Zenject.PoolExpandMethods
struct CORDL_TYPE PoolExpandMethods {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PoolExpandMethods_Unwrapped
  enum struct __PoolExpandMethods_Unwrapped : int32_t {
    __E_OneAtATime = static_cast<int32_t>(0x0),
    __E_Double = static_cast<int32_t>(0x1),
    __E_Disabled = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PoolExpandMethods_Unwrapped() const noexcept {
    return static_cast<__PoolExpandMethods_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PoolExpandMethods();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PoolExpandMethods(int32_t value__) noexcept;

  /// @brief Field Disabled value: I32(2)
  static ::Zenject::PoolExpandMethods const Disabled;

  /// @brief Field Double value: I32(1)
  static ::Zenject::PoolExpandMethods const Double;

  /// @brief Field OneAtATime value: I32(0)
  static ::Zenject::PoolExpandMethods const OneAtATime;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12290 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Zenject::PoolExpandMethods, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::PoolExpandMethods, 0x4>, "Size mismatch!");

} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PoolExpandMethods, "Zenject", "PoolExpandMethods");
