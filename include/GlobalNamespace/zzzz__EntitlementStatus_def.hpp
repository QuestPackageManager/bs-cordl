#pragma once
// IWYU pragma private; include "GlobalNamespace/EntitlementStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EntitlementStatus)
// Forward declare root types
namespace GlobalNamespace {
struct EntitlementStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EntitlementStatus);
// Type: ::EntitlementStatus
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::EntitlementStatus
struct CORDL_TYPE EntitlementStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EntitlementStatus_Unwrapped
  enum struct __EntitlementStatus_Unwrapped : int32_t {
    __E_Failed = static_cast<int32_t>(0x0),
    __E_Owned = static_cast<int32_t>(0x1),
    __E_NotOwned = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EntitlementStatus_Unwrapped() const noexcept {
    return static_cast<__EntitlementStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EntitlementStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EntitlementStatus(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Failed value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::EntitlementStatus const Failed;

  /// @brief Field NotOwned value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::EntitlementStatus const NotOwned;

  /// @brief Field Owned value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::EntitlementStatus const Owned;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19128 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EntitlementStatus, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EntitlementStatus, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EntitlementStatus, "", "EntitlementStatus");
