#pragma once
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
// Type: Oculus.Platform::ChallengeVisibility
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13244))
// CS Name: ::Oculus.Platform::ChallengeVisibility
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ChallengeVisibility(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ChallengeVisibility();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::Oculus::Platform::ChallengeVisibility const Unknown;

  /// @brief Field InviteOnly value: static_cast<int32_t>(0x1)
  static ::Oculus::Platform::ChallengeVisibility const InviteOnly;

  /// @brief Field Public value: static_cast<int32_t>(0x2)
  static ::Oculus::Platform::ChallengeVisibility const Public;

  /// @brief Field Private value: static_cast<int32_t>(0x3)
  static ::Oculus::Platform::ChallengeVisibility const Private;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::ChallengeVisibility, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::ChallengeVisibility, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::ChallengeVisibility, "Oculus.Platform", "ChallengeVisibility");
