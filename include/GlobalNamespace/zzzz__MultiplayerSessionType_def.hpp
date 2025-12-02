#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerSessionType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerSessionType)
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerSessionType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiplayerSessionType);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiplayerSessionType
struct CORDL_TYPE MultiplayerSessionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MultiplayerSessionType_Unwrapped
  enum struct __MultiplayerSessionType_Unwrapped : int32_t {
    __E_Player = static_cast<int32_t>(0x0),
    __E_Spectator = static_cast<int32_t>(0x1),
    __E_DedicatedServer = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MultiplayerSessionType_Unwrapped() const noexcept {
    return static_cast<__MultiplayerSessionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerSessionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MultiplayerSessionType(int32_t value__) noexcept;

  /// @brief Field DedicatedServer value: I32(2)
  static ::GlobalNamespace::MultiplayerSessionType const DedicatedServer;

  /// @brief Field Player value: I32(0)
  static ::GlobalNamespace::MultiplayerSessionType const Player;

  /// @brief Field Spectator value: I32(1)
  static ::GlobalNamespace::MultiplayerSessionType const Spectator;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19020 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerSessionType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerSessionType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerSessionType, "", "MultiplayerSessionType");
