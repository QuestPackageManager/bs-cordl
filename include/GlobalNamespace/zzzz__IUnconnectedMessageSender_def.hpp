#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IUnconnectedMessageSender)
namespace GlobalNamespace {
class PacketEncryptionLayer;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System::Net {
class IPEndPoint;
}
namespace GlobalNamespace {
class IUnconnectedMessageReceiver;
}
// Forward declare root types
namespace GlobalNamespace {
class IUnconnectedMessageSender;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IUnconnectedMessageSender);
// Type: ::IUnconnectedMessageSender
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12794))
// CS Name: ::IUnconnectedMessageSender*
class CORDL_TYPE IUnconnectedMessageSender {
public:
  // Declarations
  __declspec(property(get = get_unconnectedPacketHeader))::ArrayW<uint8_t, ::Array<uint8_t>*> unconnectedPacketHeader;

  __declspec(property(get = get_encryptionLayer))::GlobalNamespace::PacketEncryptionLayer* encryptionLayer;

  /// @brief Method get_unconnectedPacketHeader addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_unconnectedPacketHeader();

  /// @brief Method get_encryptionLayer addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::PacketEncryptionLayer* get_encryptionLayer();

  /// @brief Method SendUnconnectedMessage addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void SendUnconnectedMessage(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method RegisterReceiver addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void RegisterReceiver(::GlobalNamespace::IUnconnectedMessageReceiver* receiver);

  /// @brief Method UnregisterReceiver addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void UnregisterReceiver(::GlobalNamespace::IUnconnectedMessageReceiver* receiver);

  // Ctor Parameters [CppParam { name: "", ty: "IUnconnectedMessageSender", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IUnconnectedMessageSender(IUnconnectedMessageSender&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IUnconnectedMessageSender", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IUnconnectedMessageSender(IUnconnectedMessageSender const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IUnconnectedMessageSender);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IUnconnectedMessageSender*, "", "IUnconnectedMessageSender");
