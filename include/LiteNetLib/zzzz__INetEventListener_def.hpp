#pragma once
// IWYU pragma private; include "LiteNetLib/INetEventListener.hpp"
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
// Dependencies
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.INetEventListener
class CORDL_TYPE INetEventListener {
public:
  // Declarations
  /// @brief Method OnConnectionRequest, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnConnectionRequest(::LiteNetLib::ConnectionRequest* request);

  /// @brief Method OnNetworkError, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnNetworkError(::System::Net::IPEndPoint* endPoint, ::System::Net::Sockets::SocketError socketError);

  /// @brief Method OnNetworkLatencyUpdate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnNetworkLatencyUpdate(::LiteNetLib::NetPeer* peer, int32_t latency);

  /// @brief Method OnNetworkReceive, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnNetworkReceive(::LiteNetLib::NetPeer* peer, ::LiteNetLib::NetPacketReader* reader, ::LiteNetLib::DeliveryMethod deliveryMethod);

  /// @brief Method OnNetworkReceiveUnconnected, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnNetworkReceiveUnconnected(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::NetPacketReader* reader, ::LiteNetLib::UnconnectedMessageType messageType);

  /// @brief Method OnPeerConnected, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnPeerConnected(::LiteNetLib::NetPeer* peer);

  /// @brief Method OnPeerDisconnected, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnPeerDisconnected(::LiteNetLib::NetPeer* peer, ::LiteNetLib::DisconnectInfo disconnectInfo);

  // Ctor Parameters [CppParam { name: "", ty: "INetEventListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INetEventListener(INetEventListener const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16517 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::INetEventListener);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::INetEventListener*, "LiteNetLib", "INetEventListener");
