#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGNet/Core/Messages/zzzz__BaseAcknowledgeMessage_def.hpp"
CORDL_MODULE_EXPORT(HandshakeMessageReceivedAcknowledge)
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
}
namespace BGNet::Core::Messages {
class IHandshakeMessage;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class HandshakeMessageReceivedAcknowledge;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge);
// Type: BGNet.Core.Messages::HandshakeMessageReceivedAcknowledge
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 21, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12937))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12977))
// CS Name: ::BGNet.Core.Messages::HandshakeMessageReceivedAcknowledge*
class CORDL_TYPE HandshakeMessageReceivedAcknowledge : public ::BGNet::Core::Messages::BaseAcknowledgeMessage {
public:
  // Declarations
  /// @brief Convert operator to "::BGNet::Core::Messages::IHandshakeMessage"
  constexpr operator ::BGNet::Core::Messages::IHandshakeMessage*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Method get_pool addr 0xde012c size 0x40 virtual false final false
  static inline ::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge*>* get_pool();

  /// @brief Method Release addr 0xde3cd8 size 0x54 virtual true final false
  inline void Release();

  static inline ::BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge* New_ctor();

  /// @brief Method .ctor addr 0xde3d2c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HandshakeMessageReceivedAcknowledge", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HandshakeMessageReceivedAcknowledge(HandshakeMessageReceivedAcknowledge&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HandshakeMessageReceivedAcknowledge", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HandshakeMessageReceivedAcknowledge(HandshakeMessageReceivedAcknowledge const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HandshakeMessageReceivedAcknowledge();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge, 0x18>, "Size mismatch!");

} // namespace BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge*, "BGNet.Core.Messages", "HandshakeMessageReceivedAcknowledge");
