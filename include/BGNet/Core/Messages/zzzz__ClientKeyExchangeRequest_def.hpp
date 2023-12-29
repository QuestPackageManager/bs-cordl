#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGNet/Core/Messages/zzzz__BaseReliableResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClientKeyExchangeRequest)
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
namespace GlobalNamespace {
class ByteArrayNetSerializable;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace BGNet::Core::Messages {
class IHandshakeClientToServerMessage;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
}
namespace BGNet::Core::Messages {
class IHandshakeMessage;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class ClientKeyExchangeRequest;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::Messages::ClientKeyExchangeRequest);
// Type: BGNet.Core.Messages::ClientKeyExchangeRequest
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12954))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12975))
// CS Name: ::BGNet.Core.Messages::ClientKeyExchangeRequest*
class CORDL_TYPE ClientKeyExchangeRequest : public ::BGNet::Core::Messages::BaseReliableResponse {
public:
  // Declarations
  /// @brief Field clientPublicKey, offset 0x18, size 0x8
  __declspec(property(get = __get_clientPublicKey, put = __set_clientPublicKey))::GlobalNamespace::ByteArrayNetSerializable* clientPublicKey;

  /// @brief Convert operator to "::BGNet::Core::Messages::IHandshakeClientToServerMessage"
  constexpr operator ::BGNet::Core::Messages::IHandshakeClientToServerMessage*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IHandshakeMessage"
  constexpr operator ::BGNet::Core::Messages::IHandshakeMessage*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  constexpr ::GlobalNamespace::ByteArrayNetSerializable*& __get_clientPublicKey();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ByteArrayNetSerializable*> const& __get_clientPublicKey() const;

  constexpr void __set_clientPublicKey(::GlobalNamespace::ByteArrayNetSerializable* value);

  /// @brief Method get_pool addr 0xdddbec size 0x40 virtual false final false
  static inline ::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::ClientKeyExchangeRequest*>* get_pool();

  /// @brief Method Init addr 0xdddc2c size 0x28 virtual false final false
  inline ::BGNet::Core::Messages::ClientKeyExchangeRequest* Init(::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey);

  /// @brief Method Serialize addr 0xde3b24 size 0x34 virtual true final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xde3b58 size 0x34 virtual true final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Release addr 0xde3b8c size 0x64 virtual true final false
  inline void Release();

  static inline ::BGNet::Core::Messages::ClientKeyExchangeRequest* New_ctor();

  /// @brief Method .ctor addr 0xde3bf0 size 0x8c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ClientKeyExchangeRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClientKeyExchangeRequest(ClientKeyExchangeRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClientKeyExchangeRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClientKeyExchangeRequest(ClientKeyExchangeRequest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClientKeyExchangeRequest();

public:
  /// @brief Field clientPublicKey, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ByteArrayNetSerializable* ___clientPublicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::ClientKeyExchangeRequest, 0x20>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::ClientKeyExchangeRequest, ___clientPublicKey) == 0x18, "Offset mismatch!");

} // namespace BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::ClientKeyExchangeRequest);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::ClientKeyExchangeRequest*, "BGNet.Core.Messages", "ClientKeyExchangeRequest");
