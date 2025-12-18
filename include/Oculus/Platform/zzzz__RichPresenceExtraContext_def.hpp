#pragma once
// IWYU pragma private; include "Oculus/Platform/RichPresenceExtraContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RichPresenceExtraContext)
// Forward declare root types
namespace Oculus::Platform {
struct RichPresenceExtraContext;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::RichPresenceExtraContext);
// Dependencies
namespace Oculus::Platform {
// Is value type: true
// CS Name: Oculus.Platform.RichPresenceExtraContext
struct CORDL_TYPE RichPresenceExtraContext {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RichPresenceExtraContext_Unwrapped
  enum struct __RichPresenceExtraContext_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_None = static_cast<int32_t>(0x1),
    __E_CurrentCapacity = static_cast<int32_t>(0x2),
    __E_StartedAgo = static_cast<int32_t>(0x3),
    __E_EndingIn = static_cast<int32_t>(0x4),
    __E_LookingForAMatch = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RichPresenceExtraContext_Unwrapped() const noexcept {
    return static_cast<__RichPresenceExtraContext_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RichPresenceExtraContext();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RichPresenceExtraContext(int32_t value__) noexcept;

  /// @brief Field CurrentCapacity value: I32(2)
  static ::Oculus::Platform::RichPresenceExtraContext const CurrentCapacity;

  /// @brief Field EndingIn value: I32(4)
  static ::Oculus::Platform::RichPresenceExtraContext const EndingIn;

  /// @brief Field LookingForAMatch value: I32(5)
  static ::Oculus::Platform::RichPresenceExtraContext const LookingForAMatch;

  /// @brief Field None value: I32(1)
  static ::Oculus::Platform::RichPresenceExtraContext const None;

  /// @brief Field StartedAgo value: I32(3)
  static ::Oculus::Platform::RichPresenceExtraContext const StartedAgo;

  /// @brief Field Unknown value: I32(0)
  static ::Oculus::Platform::RichPresenceExtraContext const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17948 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::RichPresenceExtraContext, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::RichPresenceExtraContext, 0x4>, "Size mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::RichPresenceExtraContext, "Oculus.Platform", "RichPresenceExtraContext");
