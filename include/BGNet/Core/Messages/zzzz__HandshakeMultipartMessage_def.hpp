#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGNet/Core/Messages/zzzz__BaseMultipartMessage_def.hpp"
CORDL_MODULE_EXPORT(HandshakeMultipartMessage)
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace BGNet::Core::Messages {
class IHandshakeMessage;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class HandshakeMultipartMessage;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::Messages::HandshakeMultipartMessage);
// Type: BGNet.Core.Messages::HandshakeMultipartMessage
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12952))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12978))
// CS Name: ::BGNet.Core.Messages::HandshakeMultipartMessage*
class CORDL_TYPE HandshakeMultipartMessage : public ::BGNet::Core::Messages::BaseMultipartMessage {
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

  /// @brief Method get_pool addr 0xde016c size 0x40 virtual false final false
  static inline ::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::HandshakeMultipartMessage*>* get_pool();

  /// @brief Method Release addr 0xde3d34 size 0x54 virtual true final false
  inline void Release();

  static inline ::BGNet::Core::Messages::HandshakeMultipartMessage* New_ctor();

  /// @brief Method .ctor addr 0xde3d88 size 0x4 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HandshakeMultipartMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HandshakeMultipartMessage(HandshakeMultipartMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HandshakeMultipartMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HandshakeMultipartMessage(HandshakeMultipartMessage const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HandshakeMultipartMessage();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::HandshakeMultipartMessage, 0x30>, "Size mismatch!");

} // namespace BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::HandshakeMultipartMessage);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::HandshakeMultipartMessage*, "BGNet.Core.Messages", "HandshakeMultipartMessage");
