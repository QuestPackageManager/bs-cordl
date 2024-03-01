#pragma once
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
// Type: ENet::Event
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ENet {
// Is value type: true
// CS Name: ::ENet::Event
struct CORDL_TYPE Event {
public:
  // Declarations
  __declspec(property(get = get_ChannelID)) uint8_t ChannelID;

  __declspec(property(get = get_Data)) uint32_t Data;

  __declspec(property(get = get_NativeData, put = set_NativeData))::ENet::ENetEvent NativeData;

  __declspec(property(get = get_Packet))::ENet::Packet Packet;

  __declspec(property(get = get_Peer))::ENet::Peer Peer;

  __declspec(property(get = get_Type))::ENet::EventType Type;

  /// @brief Method .ctor, addr 0x2351cc8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::ENet::ENetEvent event);

  /// @brief Method get_ChannelID, addr 0x2351d84, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_ChannelID();

  /// @brief Method get_Data, addr 0x2351d8c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_Data();

  /// @brief Method get_NativeData, addr 0x2351cb0, size 0xc, virtual false, abstract: false, final false
  inline ::ENet::ENetEvent get_NativeData();

  /// @brief Method get_Packet, addr 0x2351d94, size 0x8, virtual false, abstract: false, final false
  inline ::ENet::Packet get_Packet();

  /// @brief Method get_Peer, addr 0x2351cdc, size 0x28, virtual false, abstract: false, final false
  inline ::ENet::Peer get_Peer();

  /// @brief Method get_Type, addr 0x2351cd4, size 0x8, virtual false, abstract: false, final false
  inline ::ENet::EventType get_Type();

  /// @brief Method set_NativeData, addr 0x2351cbc, size 0xc, virtual false, abstract: false, final false
  inline void set_NativeData(::ENet::ENetEvent value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Event();

  // Ctor Parameters [CppParam { name: "nativeEvent", ty: "::ENet::ENetEvent", modifiers: "", def_value: None }]
  constexpr Event(::ENet::ENetEvent nativeEvent) noexcept;

  /// @brief Field nativeEvent, offset: 0x0, size: 0x20, def value: None
  ::ENet::ENetEvent nativeEvent;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::Event, 0x20>, "Size mismatch!");

static_assert(offsetof(::ENet::Event, nativeEvent) == 0x0, "Offset mismatch!");

} // namespace ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::Event, "ENet", "Event");
