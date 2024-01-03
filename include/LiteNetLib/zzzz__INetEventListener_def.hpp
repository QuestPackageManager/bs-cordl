#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(INetEventListener)
namespace LiteNetLib {
class ConnectionRequest;
}
namespace LiteNetLib {
struct DeliveryMethod;
}
namespace LiteNetLib {
struct DisconnectInfo;
}
namespace LiteNetLib {
class NetPacketReader;
}
namespace LiteNetLib {
class NetPeer;
}
namespace LiteNetLib {
struct UnconnectedMessageType;
}
namespace System::Net::Sockets {
struct SocketError;
}
namespace System::Net {
class IPEndPoint;
}
// Forward declare root types
namespace LiteNetLib {
class INetEventListener;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::INetEventListener);
// Type: LiteNetLib::INetEventListener
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14133))
// CS Name: ::LiteNetLib::INetEventListener*
class CORDL_TYPE INetEventListener {
public:
  // Declarations
  /// @brief Method OnPeerConnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnPeerConnected(::LiteNetLib::NetPeer* peer);

  /// @brief Method OnPeerDisconnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnPeerDisconnected(::LiteNetLib::NetPeer* peer, ::LiteNetLib::DisconnectInfo disconnectInfo);

  /// @brief Method OnNetworkError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnNetworkError(::System::Net::IPEndPoint* endPoint, ::System::Net::Sockets::SocketError socketError);

  /// @brief Method OnNetworkReceive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnNetworkReceive(::LiteNetLib::NetPeer* peer, ::LiteNetLib::NetPacketReader* reader, ::LiteNetLib::DeliveryMethod deliveryMethod);

  /// @brief Method OnNetworkReceiveUnconnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnNetworkReceiveUnconnected(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::NetPacketReader* reader, ::LiteNetLib::UnconnectedMessageType messageType);

  /// @brief Method OnNetworkLatencyUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnNetworkLatencyUpdate(::LiteNetLib::NetPeer* peer, int32_t latency);

  /// @brief Method OnConnectionRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnConnectionRequest(::LiteNetLib::ConnectionRequest* request);

  // Ctor Parameters [CppParam { name: "", ty: "INetEventListener", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INetEventListener(INetEventListener&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INetEventListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INetEventListener(INetEventListener const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::INetEventListener);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::INetEventListener*, "LiteNetLib", "INetEventListener");
