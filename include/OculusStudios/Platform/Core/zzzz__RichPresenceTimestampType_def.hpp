#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/RichPresenceTimestampType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RichPresenceTimestampType)
// Forward declare root types
namespace OculusStudios::Platform::Core {
struct RichPresenceTimestampType;
}
// Write type traits
MARK_VAL_T(::OculusStudios::Platform::Core::RichPresenceTimestampType);
// Dependencies
namespace OculusStudios::Platform::Core {
// Is value type: true
// CS Name: OculusStudios.Platform.Core.RichPresenceTimestampType
struct CORDL_TYPE RichPresenceTimestampType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RichPresenceTimestampType_Unwrapped
  enum struct __RichPresenceTimestampType_Unwrapped : int32_t {
    __E_countdown = static_cast<int32_t>(0x0),
    __E_countup = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RichPresenceTimestampType_Unwrapped() const noexcept {
    return static_cast<__RichPresenceTimestampType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RichPresenceTimestampType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RichPresenceTimestampType(int32_t value__) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22173 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field countdown value: I32(0)
  static ::OculusStudios::Platform::Core::RichPresenceTimestampType const countdown;

  /// @brief Field countup value: I32(1)
  static ::OculusStudios::Platform::Core::RichPresenceTimestampType const countup;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Core::RichPresenceTimestampType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Core::RichPresenceTimestampType, 0x4>, "Size mismatch!");

} // namespace OculusStudios::Platform::Core
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::RichPresenceTimestampType, "OculusStudios.Platform.Core", "RichPresenceTimestampType");
