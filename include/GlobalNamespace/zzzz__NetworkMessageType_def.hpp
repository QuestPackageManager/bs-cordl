#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkMessageType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkMessageType)
// Forward declare root types
namespace GlobalNamespace {
struct NetworkMessageType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkMessageType);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: NetworkMessageType
struct CORDL_TYPE NetworkMessageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __NetworkMessageType_Unwrapped
  enum struct __NetworkMessageType_Unwrapped : uint8_t {
    __E_MenuRpc = static_cast<uint8_t>(0x0u),
    __E_GameplayRpc = static_cast<uint8_t>(0x1u),
    __E_NodePoseSyncState = static_cast<uint8_t>(0x2u),
    __E_ScoreSyncState = static_cast<uint8_t>(0x3u),
    __E_NodePoseSyncStateDelta = static_cast<uint8_t>(0x4u),
    __E_ScoreSyncStateDelta = static_cast<uint8_t>(0x5u),
    __E_OptionalAvatarData = static_cast<uint8_t>(0x6u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NetworkMessageType_Unwrapped() const noexcept {
    return static_cast<__NetworkMessageType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkMessageType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr NetworkMessageType(uint8_t value__) noexcept;

  /// @brief Field GameplayRpc value: U8(1)
  static ::GlobalNamespace::NetworkMessageType const GameplayRpc;

  /// @brief Field MenuRpc value: U8(0)
  static ::GlobalNamespace::NetworkMessageType const MenuRpc;

  /// @brief Field NodePoseSyncState value: U8(2)
  static ::GlobalNamespace::NetworkMessageType const NodePoseSyncState;

  /// @brief Field NodePoseSyncStateDelta value: U8(4)
  static ::GlobalNamespace::NetworkMessageType const NodePoseSyncStateDelta;

  /// @brief Field OptionalAvatarData value: U8(6)
  static ::GlobalNamespace::NetworkMessageType const OptionalAvatarData;

  /// @brief Field ScoreSyncState value: U8(3)
  static ::GlobalNamespace::NetworkMessageType const ScoreSyncState;

  /// @brief Field ScoreSyncStateDelta value: U8(5)
  static ::GlobalNamespace::NetworkMessageType const ScoreSyncStateDelta;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18929 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkMessageType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkMessageType, 0x1>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkMessageType, "", "NetworkMessageType");
