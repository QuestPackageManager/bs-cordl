#pragma once
// IWYU pragma private; include "Zenject/ToChoices.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ToChoices)
// Forward declare root types
namespace Zenject {
struct ToChoices;
}
// Write type traits
MARK_VAL_T(::Zenject::ToChoices);
// Dependencies
namespace Zenject {
// Is value type: true
// CS Name: Zenject.ToChoices
struct CORDL_TYPE ToChoices {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ToChoices_Unwrapped
  enum struct __ToChoices_Unwrapped : int32_t {
    __E_Self = static_cast<int32_t>(0x0),
    __E_Concrete = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ToChoices_Unwrapped() const noexcept {
    return static_cast<__ToChoices_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ToChoices();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ToChoices(int32_t value__) noexcept;

  /// @brief Field Concrete value: I32(1)
  static ::Zenject::ToChoices const Concrete;

  /// @brief Field Self value: I32(0)
  static ::Zenject::ToChoices const Self;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14266 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Zenject::ToChoices, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::ToChoices, 0x4>, "Size mismatch!");

} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ToChoices, "Zenject", "ToChoices");
