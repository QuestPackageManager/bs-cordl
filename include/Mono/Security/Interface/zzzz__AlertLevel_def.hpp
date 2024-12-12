#pragma once
// IWYU pragma private; include "Mono/Security/Interface/AlertLevel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AlertLevel)
// Forward declare root types
namespace Mono::Security::Interface {
struct AlertLevel;
}
// Write type traits
MARK_VAL_T(::Mono::Security::Interface::AlertLevel);
// Dependencies
namespace Mono::Security::Interface {
// Is value type: true
// CS Name: Mono.Security.Interface.AlertLevel
struct CORDL_TYPE AlertLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __AlertLevel_Unwrapped
  enum struct __AlertLevel_Unwrapped : uint8_t {
    __E_Warning = static_cast<uint8_t>(0x1u),
    __E_Fatal = static_cast<uint8_t>(0x2u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AlertLevel_Unwrapped() const noexcept {
    return static_cast<__AlertLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AlertLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr AlertLevel(uint8_t value__) noexcept;

  /// @brief Field Fatal value: U8(2)
  static ::Mono::Security::Interface::AlertLevel const Fatal;

  /// @brief Field Warning value: U8(1)
  static ::Mono::Security::Interface::AlertLevel const Warning;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15943 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::Interface::AlertLevel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::Interface::AlertLevel, 0x1>, "Size mismatch!");

} // namespace Mono::Security::Interface
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::AlertLevel, "Mono.Security.Interface", "AlertLevel");
