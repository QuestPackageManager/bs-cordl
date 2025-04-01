#pragma once
// IWYU pragma private; include "Oculus/Platform/LaunchType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LaunchType)
// Forward declare root types
namespace Oculus::Platform {
struct LaunchType;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::LaunchType);
// Dependencies
namespace Oculus::Platform {
// Is value type: true
// CS Name: Oculus.Platform.LaunchType
struct CORDL_TYPE LaunchType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LaunchType_Unwrapped
  enum struct __LaunchType_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Normal = static_cast<int32_t>(0x1),
    __E_Invite = static_cast<int32_t>(0x2),
    __E_Coordinated = static_cast<int32_t>(0x3),
    __E_Deeplink = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LaunchType_Unwrapped() const noexcept {
    return static_cast<__LaunchType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LaunchType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LaunchType(int32_t value__) noexcept;

  /// @brief Field Coordinated value: I32(3)
  static ::Oculus::Platform::LaunchType const Coordinated;

  /// @brief Field Deeplink value: I32(4)
  static ::Oculus::Platform::LaunchType const Deeplink;

  /// @brief Field Invite value: I32(2)
  static ::Oculus::Platform::LaunchType const Invite;

  /// @brief Field Normal value: I32(1)
  static ::Oculus::Platform::LaunchType const Normal;

  /// @brief Field Unknown value: I32(0)
  static ::Oculus::Platform::LaunchType const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15341 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::LaunchType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::LaunchType, 0x4>, "Size mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::LaunchType, "Oculus.Platform", "LaunchType");
