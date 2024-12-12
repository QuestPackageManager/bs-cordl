#pragma once
// IWYU pragma private; include "Oculus/Platform/ChallengeVisibility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChallengeVisibility)
// Forward declare root types
namespace Oculus::Platform {
struct ChallengeVisibility;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::ChallengeVisibility);
// Dependencies
namespace Oculus::Platform {
// Is value type: true
// CS Name: Oculus.Platform.ChallengeVisibility
struct CORDL_TYPE ChallengeVisibility {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ChallengeVisibility_Unwrapped
  enum struct __ChallengeVisibility_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_InviteOnly = static_cast<int32_t>(0x1),
    __E_Public = static_cast<int32_t>(0x2),
    __E_Private = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ChallengeVisibility_Unwrapped() const noexcept {
    return static_cast<__ChallengeVisibility_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ChallengeVisibility();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ChallengeVisibility(int32_t value__) noexcept;

  /// @brief Field InviteOnly value: I32(1)
  static ::Oculus::Platform::ChallengeVisibility const InviteOnly;

  /// @brief Field Private value: I32(3)
  static ::Oculus::Platform::ChallengeVisibility const Private;

  /// @brief Field Public value: I32(2)
  static ::Oculus::Platform::ChallengeVisibility const Public;

  /// @brief Field Unknown value: I32(0)
  static ::Oculus::Platform::ChallengeVisibility const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15326 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::ChallengeVisibility, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::ChallengeVisibility, 0x4>, "Size mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::ChallengeVisibility, "Oculus.Platform", "ChallengeVisibility");
