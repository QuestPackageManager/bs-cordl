#pragma once
// IWYU pragma private; include "Oculus/Platform/LeaderboardFilterType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardFilterType)
// Forward declare root types
namespace Oculus::Platform {
struct LeaderboardFilterType;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::LeaderboardFilterType);
// Dependencies
namespace Oculus::Platform {
// Is value type: true
// CS Name: Oculus.Platform.LeaderboardFilterType
struct CORDL_TYPE LeaderboardFilterType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LeaderboardFilterType_Unwrapped
  enum struct __LeaderboardFilterType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Friends = static_cast<int32_t>(0x1),
    __E_Unknown = static_cast<int32_t>(0x2),
    __E_UserIds = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LeaderboardFilterType_Unwrapped() const noexcept {
    return static_cast<__LeaderboardFilterType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardFilterType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LeaderboardFilterType(int32_t value__) noexcept;

  /// @brief Field Friends value: I32(1)
  static ::Oculus::Platform::LeaderboardFilterType const Friends;

  /// @brief Field None value: I32(0)
  static ::Oculus::Platform::LeaderboardFilterType const None;

  /// @brief Field Unknown value: I32(2)
  static ::Oculus::Platform::LeaderboardFilterType const Unknown;

  /// @brief Field UserIds value: I32(3)
  static ::Oculus::Platform::LeaderboardFilterType const UserIds;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15338 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::LeaderboardFilterType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::LeaderboardFilterType, 0x4>, "Size mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::LeaderboardFilterType, "Oculus.Platform", "LeaderboardFilterType");
