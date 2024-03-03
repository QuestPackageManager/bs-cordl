#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerUnavailableReason)
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerUnavailableReason;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiplayerUnavailableReason);
// Type: ::MultiplayerUnavailableReason
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MultiplayerUnavailableReason
struct CORDL_TYPE MultiplayerUnavailableReason {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MultiplayerUnavailableReason_Unwrapped
  enum struct __MultiplayerUnavailableReason_Unwrapped : int32_t {
    __E_NetworkUnreachable = static_cast<int32_t>(0x1),
    __E_UpdateRequired = static_cast<int32_t>(0x2),
    __E_ServerOffline = static_cast<int32_t>(0x3),
    __E_MaintenanceMode = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MultiplayerUnavailableReason_Unwrapped() const noexcept {
    return static_cast<__MultiplayerUnavailableReason_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerUnavailableReason();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MultiplayerUnavailableReason(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field MaintenanceMode value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::MultiplayerUnavailableReason const MaintenanceMode;

  /// @brief Field NetworkUnreachable value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::MultiplayerUnavailableReason const NetworkUnreachable;

  /// @brief Field ServerOffline value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::MultiplayerUnavailableReason const ServerOffline;

  /// @brief Field UpdateRequired value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::MultiplayerUnavailableReason const UpdateRequired;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerUnavailableReason, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerUnavailableReason, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerUnavailableReason, "", "MultiplayerUnavailableReason");
