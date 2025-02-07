#pragma once
// IWYU pragma private; include "ENet/ENetEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ENet/zzzz__EventType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ENetEvent)
// Forward declare root types
namespace ENet {
struct ENetEvent;
}
// Write type traits
MARK_VAL_T(::ENet::ENetEvent);
// Dependencies ENet.EventType, System.IntPtr
namespace ENet {
// Is value type: true
// CS Name: ENet.ENetEvent
struct CORDL_TYPE ENetEvent {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ENetEvent();

  // Ctor Parameters [CppParam { name: "type", ty: "::ENet::EventType", modifiers: "", def_value: None }, CppParam { name: "peer", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam {
  // name: "channelID", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "data", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "packet", ty: "::System::IntPtr",
  // modifiers: "", def_value: None }]
  constexpr ENetEvent(::ENet::EventType type, ::System::IntPtr peer, uint8_t channelID, uint32_t data, ::System::IntPtr packet) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17736 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field type, offset: 0x0, size: 0x4, def value: None
  ::ENet::EventType type;

  /// @brief Field peer, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr peer;

  /// @brief Field channelID, offset: 0x10, size: 0x1, def value: None
  uint8_t channelID;

  /// @brief Field data, offset: 0x14, size: 0x4, def value: None
  uint32_t data;

  /// @brief Field packet, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr packet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ENet::ENetEvent, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::ENet::ENetEvent, peer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::ENet::ENetEvent, channelID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ENet::ENetEvent, data) == 0x14, "Offset mismatch!");

static_assert(offsetof(::ENet::ENetEvent, packet) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::ENet::ENetEvent, 0x20>, "Size mismatch!");

} // namespace ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::ENetEvent, "ENet", "ENetEvent");
