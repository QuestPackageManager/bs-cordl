#pragma once
// IWYU pragma private; include "ENet/Event.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ENet/zzzz__ENetEvent_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Event)
namespace ENet {
struct ENetEvent;
}
namespace ENet {
struct EventType;
}
namespace ENet {
struct Packet;
}
namespace ENet {
struct Peer;
}
// Forward declare root types
namespace ENet {
struct Event;
}
// Write type traits
MARK_VAL_T(::ENet::Event);
// Dependencies ENet.ENetEvent
namespace ENet {
// Is value type: true
// CS Name: ENet.Event
struct CORDL_TYPE Event {
public:
  // Declarations
  __declspec(property(get = get_ChannelID)) uint8_t ChannelID;

  __declspec(property(get = get_Data)) uint32_t Data;

  __declspec(property(get = get_NativeData, put = set_NativeData)) ::ENet::ENetEvent NativeData;

  __declspec(property(get = get_Packet)) ::ENet::Packet Packet;

  __declspec(property(get = get_Peer)) ::ENet::Peer Peer;

  __declspec(property(get = get_Type)) ::ENet::EventType Type;

  /// @brief Method .ctor, addr 0x3aa8b88, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::ENet::ENetEvent event);

  /// @brief Method get_ChannelID, addr 0x3aa8c10, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_ChannelID();

  /// @brief Method get_Data, addr 0x3aa8c18, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_Data();

  /// @brief Method get_NativeData, addr 0x3aa8b70, size 0xc, virtual false, abstract: false, final false
  inline ::ENet::ENetEvent get_NativeData();

  /// @brief Method get_Packet, addr 0x3aa8c20, size 0x8, virtual false, abstract: false, final false
  inline ::ENet::Packet get_Packet();

  /// @brief Method get_Peer, addr 0x3aa8b9c, size 0x38, virtual false, abstract: false, final false
  inline ::ENet::Peer get_Peer();

  /// @brief Method get_Type, addr 0x3aa8b94, size 0x8, virtual false, abstract: false, final false
  inline ::ENet::EventType get_Type();

  /// @brief Method set_NativeData, addr 0x3aa8b7c, size 0xc, virtual false, abstract: false, final false
  inline void set_NativeData(::ENet::ENetEvent value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Event();

  // Ctor Parameters [CppParam { name: "nativeEvent", ty: "::ENet::ENetEvent", modifiers: "", def_value: None }]
  constexpr Event(::ENet::ENetEvent nativeEvent) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17747 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field nativeEvent, offset: 0x0, size: 0x20, def value: None
  ::ENet::ENetEvent nativeEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ENet::Event, nativeEvent) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::ENet::Event, 0x20>, "Size mismatch!");

} // namespace ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::Event, "ENet", "Event");
