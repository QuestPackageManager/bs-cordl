#pragma once
// IWYU pragma private; include "Oculus/Haptics/Controller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Controller)
// Forward declare root types
namespace Oculus::Haptics {
struct Controller;
}
// Write type traits
MARK_VAL_T(::Oculus::Haptics::Controller);
// Dependencies
namespace Oculus::Haptics {
// Is value type: true
// CS Name: Oculus.Haptics.Controller
struct CORDL_TYPE Controller {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Controller_Unwrapped
  enum struct __Controller_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x0),
    __E_Right = static_cast<int32_t>(0x1),
    __E_Both = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Controller_Unwrapped() const noexcept {
    return static_cast<__Controller_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Controller();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Controller(int32_t value__) noexcept;

  /// @brief Field Both value: I32(2)
  static ::Oculus::Haptics::Controller const Both;

  /// @brief Field Left value: I32(0)
  static ::Oculus::Haptics::Controller const Left;

  /// @brief Field Right value: I32(1)
  static ::Oculus::Haptics::Controller const Right;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18777 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Haptics::Controller, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Haptics::Controller, 0x4>, "Size mismatch!");

} // namespace Oculus::Haptics
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Haptics::Controller, "Oculus.Haptics", "Controller");
