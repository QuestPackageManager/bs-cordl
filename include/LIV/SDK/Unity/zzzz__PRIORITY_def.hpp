#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/PRIORITY.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PRIORITY)
// Forward declare root types
namespace LIV::SDK::Unity {
struct PRIORITY;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::PRIORITY);
// Dependencies
namespace LIV::SDK::Unity {
// Is value type: true
// CS Name: LIV.SDK.Unity.PRIORITY
struct CORDL_TYPE PRIORITY {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int8_t;

  /// @brief Nested struct __PRIORITY_Unwrapped
  enum struct __PRIORITY_Unwrapped : int8_t {
    __E_NONE = static_cast<int8_t>(0x0),
    __E_GAME = static_cast<int8_t>(0x3f),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PRIORITY_Unwrapped() const noexcept {
    return static_cast<__PRIORITY_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int8_t() const noexcept {
    return static_cast<int8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PRIORITY();

  // Ctor Parameters [CppParam { name: "value__", ty: "int8_t", modifiers: "", def_value: None }]
  constexpr PRIORITY(int8_t value__) noexcept;

  /// @brief Field GAME value: I8(63)
  static ::LIV::SDK::Unity::PRIORITY const GAME;

  /// @brief Field NONE value: I8(0)
  static ::LIV::SDK::Unity::PRIORITY const NONE;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21297 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  int8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LIV::SDK::Unity::PRIORITY, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::PRIORITY, 0x1>, "Size mismatch!");

} // namespace LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::PRIORITY, "LIV.SDK.Unity", "PRIORITY");
