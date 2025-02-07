#pragma once
// IWYU pragma private; include "GlobalNamespace/EntitlementsStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EntitlementsStatus)
// Forward declare root types
namespace GlobalNamespace {
struct EntitlementsStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EntitlementsStatus);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: EntitlementsStatus
struct CORDL_TYPE EntitlementsStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EntitlementsStatus_Unwrapped
  enum struct __EntitlementsStatus_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_NotOwned = static_cast<int32_t>(0x1),
    __E_NotDownloaded = static_cast<int32_t>(0x2),
    __E_Ok = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EntitlementsStatus_Unwrapped() const noexcept {
    return static_cast<__EntitlementsStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EntitlementsStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EntitlementsStatus(int32_t value__) noexcept;

  /// @brief Field NotDownloaded value: I32(2)
  static ::GlobalNamespace::EntitlementsStatus const NotDownloaded;

  /// @brief Field NotOwned value: I32(1)
  static ::GlobalNamespace::EntitlementsStatus const NotOwned;

  /// @brief Field Ok value: I32(3)
  static ::GlobalNamespace::EntitlementsStatus const Ok;

  /// @brief Field Unknown value: I32(0)
  static ::GlobalNamespace::EntitlementsStatus const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14734 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EntitlementsStatus, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EntitlementsStatus, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EntitlementsStatus, "", "EntitlementsStatus");
