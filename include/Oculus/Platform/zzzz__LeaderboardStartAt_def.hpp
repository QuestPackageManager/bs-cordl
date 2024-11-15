#pragma once
// IWYU pragma private; include "Oculus/Platform/LeaderboardStartAt.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardStartAt)
// Forward declare root types
namespace Oculus::Platform {
struct LeaderboardStartAt;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::LeaderboardStartAt);
// Type: Oculus.Platform::LeaderboardStartAt
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// CS Name: ::Oculus.Platform::LeaderboardStartAt
struct CORDL_TYPE LeaderboardStartAt {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LeaderboardStartAt_Unwrapped
  enum struct __LeaderboardStartAt_Unwrapped : int32_t {
    __E_Top = static_cast<int32_t>(0x0),
    __E_CenteredOnViewer = static_cast<int32_t>(0x1),
    __E_CenteredOnViewerOrTop = static_cast<int32_t>(0x2),
    __E_Unknown = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LeaderboardStartAt_Unwrapped() const noexcept {
    return static_cast<__LeaderboardStartAt_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardStartAt();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LeaderboardStartAt(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field CenteredOnViewer value: static_cast<int32_t>(0x1)
  static ::Oculus::Platform::LeaderboardStartAt const CenteredOnViewer;

  /// @brief Field CenteredOnViewerOrTop value: static_cast<int32_t>(0x2)
  static ::Oculus::Platform::LeaderboardStartAt const CenteredOnViewerOrTop;

  /// @brief Field Top value: static_cast<int32_t>(0x0)
  static ::Oculus::Platform::LeaderboardStartAt const Top;

  /// @brief Field Unknown value: static_cast<int32_t>(0x3)
  static ::Oculus::Platform::LeaderboardStartAt const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15301 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::LeaderboardStartAt, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::LeaderboardStartAt, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::LeaderboardStartAt, "Oculus.Platform", "LeaderboardStartAt");
