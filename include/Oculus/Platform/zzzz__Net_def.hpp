#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Net)
namespace Oculus::Platform::Models {
class NetworkingPeer;
}
namespace Oculus::Platform::Models {
class PingResult;
}
namespace Oculus::Platform {
class Packet;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
namespace Oculus::Platform {
struct SendPolicy;
}
namespace Oculus::Platform {
template <typename T> class __Message_1__Callback;
}
// Forward declare root types
namespace Oculus::Platform {
class Net;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Net);
// Type: Oculus.Platform::Net
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13275))
// CS Name: ::Oculus.Platform::Net*
class CORDL_TYPE Net : public ::System::Object {
public:
  // Declarations
  /// @brief Method ReadPacket, addr 0x27240a4, size 0x16c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Packet* ReadPacket();

  /// @brief Method SendPacket, addr 0x2724210, size 0x128, virtual false, abstract: false, final false
  static inline bool SendPacket(uint64_t userID, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, ::Oculus::Platform::SendPolicy policy);

  /// @brief Method Connect, addr 0x2724338, size 0xc4, virtual false, abstract: false, final false
  static inline void Connect(uint64_t userID);

  /// @brief Method Accept, addr 0x27243fc, size 0xc4, virtual false, abstract: false, final false
  static inline void Accept(uint64_t userID);

  /// @brief Method Close, addr 0x27244c0, size 0xc4, virtual false, abstract: false, final false
  static inline void Close(uint64_t userID);

  /// @brief Method IsConnected, addr 0x2724584, size 0xc8, virtual false, abstract: false, final false
  static inline bool IsConnected(uint64_t userID);

  /// @brief Method SendPacketToCurrentRoom, addr 0x272464c, size 0x120, virtual false, abstract: false, final false
  static inline bool SendPacketToCurrentRoom(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, ::Oculus::Platform::SendPolicy policy);

  /// @brief Method AcceptForCurrentRoom, addr 0x272476c, size 0xc0, virtual false, abstract: false, final false
  static inline bool AcceptForCurrentRoom();

  /// @brief Method CloseForCurrentRoom, addr 0x272482c, size 0xbc, virtual false, abstract: false, final false
  static inline void CloseForCurrentRoom();

  /// @brief Method Ping, addr 0x27248e8, size 0x160, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PingResult*>* Ping(uint64_t userID);

  /// @brief Method SetConnectionStateChangedCallback, addr 0x2724a48, size 0x74, virtual false, abstract: false, final false
  static inline void SetConnectionStateChangedCallback(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::NetworkingPeer*>* callback);

  /// @brief Method SetPeerConnectRequestCallback, addr 0x2724abc, size 0x74, virtual false, abstract: false, final false
  static inline void SetPeerConnectRequestCallback(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::NetworkingPeer*>* callback);

  /// @brief Method SetPingResultNotificationCallback, addr 0x2724b30, size 0x74, virtual false, abstract: false, final false
  static inline void SetPingResultNotificationCallback(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::PingResult*>* callback);

  // Ctor Parameters [CppParam { name: "", ty: "Net", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Net(Net&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Net", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Net(Net const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Net();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Net, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Net);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Net*, "Oculus.Platform", "Net");
