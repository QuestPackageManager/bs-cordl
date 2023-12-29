#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IHandshakeClientToServerMessage)
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
namespace BGNet::Core::Messages {
class IHandshakeMessage;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class IHandshakeClientToServerMessage;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::Messages::IHandshakeClientToServerMessage);
// Type: BGNet.Core.Messages::IHandshakeClientToServerMessage
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12967))
// CS Name: ::BGNet.Core.Messages::IHandshakeClientToServerMessage*
class CORDL_TYPE IHandshakeClientToServerMessage {
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

  // Ctor Parameters [CppParam { name: "", ty: "IHandshakeClientToServerMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IHandshakeClientToServerMessage(IHandshakeClientToServerMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IHandshakeClientToServerMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IHandshakeClientToServerMessage(IHandshakeClientToServerMessage const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::IHandshakeClientToServerMessage);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::IHandshakeClientToServerMessage*, "BGNet.Core.Messages", "IHandshakeClientToServerMessage");
