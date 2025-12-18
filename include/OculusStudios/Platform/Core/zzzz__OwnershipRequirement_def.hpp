#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/OwnershipRequirement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OwnershipRequirement)
// Forward declare root types
namespace OculusStudios::Platform::Core {
struct OwnershipRequirement;
}
// Write type traits
MARK_VAL_T(::OculusStudios::Platform::Core::OwnershipRequirement);
// Dependencies
namespace OculusStudios::Platform::Core {
// Is value type: true
// CS Name: OculusStudios.Platform.Core.OwnershipRequirement
struct CORDL_TYPE OwnershipRequirement {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OwnershipRequirement_Unwrapped
  enum struct __OwnershipRequirement_Unwrapped : int32_t {
    __E_Self = static_cast<int32_t>(0x0),
    __E_AnyChildren = static_cast<int32_t>(0x1),
    __E_AllChildren = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OwnershipRequirement_Unwrapped() const noexcept {
    return static_cast<__OwnershipRequirement_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OwnershipRequirement();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OwnershipRequirement(int32_t value__) noexcept;

  /// @brief Field AllChildren value: I32(2)
  static ::OculusStudios::Platform::Core::OwnershipRequirement const AllChildren;

  /// @brief Field AnyChildren value: I32(1)
  static ::OculusStudios::Platform::Core::OwnershipRequirement const AnyChildren;

  /// @brief Field Self value: I32(0)
  static ::OculusStudios::Platform::Core::OwnershipRequirement const Self;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22167 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Core::OwnershipRequirement, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Core::OwnershipRequirement, 0x4>, "Size mismatch!");

} // namespace OculusStudios::Platform::Core
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::OwnershipRequirement, "OculusStudios.Platform.Core", "OwnershipRequirement");
