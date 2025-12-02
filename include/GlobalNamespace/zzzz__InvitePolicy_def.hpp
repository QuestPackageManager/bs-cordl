#pragma once
// IWYU pragma private; include "GlobalNamespace/InvitePolicy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InvitePolicy)
// Forward declare root types
namespace GlobalNamespace {
struct InvitePolicy;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InvitePolicy);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: InvitePolicy
struct CORDL_TYPE InvitePolicy {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InvitePolicy_Unwrapped
  enum struct __InvitePolicy_Unwrapped : int32_t {
    __E_OnlyConnectionOwnerCanInvite = static_cast<int32_t>(0x0),
    __E_AnyoneCanInvite = static_cast<int32_t>(0x1),
    __E_NobodyCanInvite = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InvitePolicy_Unwrapped() const noexcept {
    return static_cast<__InvitePolicy_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InvitePolicy();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InvitePolicy(int32_t value__) noexcept;

  /// @brief Field AnyoneCanInvite value: I32(1)
  static ::GlobalNamespace::InvitePolicy const AnyoneCanInvite;

  /// @brief Field NobodyCanInvite value: I32(2)
  static ::GlobalNamespace::InvitePolicy const NobodyCanInvite;

  /// @brief Field OnlyConnectionOwnerCanInvite value: I32(0)
  static ::GlobalNamespace::InvitePolicy const OnlyConnectionOwnerCanInvite;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18969 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InvitePolicy, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InvitePolicy, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InvitePolicy, "", "InvitePolicy");
