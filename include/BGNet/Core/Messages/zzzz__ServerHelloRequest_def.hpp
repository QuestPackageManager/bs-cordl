#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGNet/Core/Messages/zzzz__BaseReliableResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ServerHelloRequest)
namespace BGNet::Core::Messages {
class IHandshakeServerToClientMessage;
}
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
}
namespace BGNet::Core::Messages {
class IHandshakeMessage;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
class ByteArrayNetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class ServerHelloRequest;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::Messages::ServerHelloRequest);
// Type: BGNet.Core.Messages::ServerHelloRequest
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12954))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12972))
// CS Name: ::BGNet.Core.Messages::ServerHelloRequest*
class CORDL_TYPE ServerHelloRequest : public ::BGNet::Core::Messages::BaseReliableResponse {
public:
  // Declarations
  /// @brief Field random, offset 0x18, size 0x8
  __declspec(property(get = __get_random, put = __set_random))::GlobalNamespace::ByteArrayNetSerializable* random;

  /// @brief Field publicKey, offset 0x20, size 0x8
  __declspec(property(get = __get_publicKey, put = __set_publicKey))::GlobalNamespace::ByteArrayNetSerializable* publicKey;

  /// @brief Field signature, offset 0x28, size 0x8
  __declspec(property(get = __get_signature, put = __set_signature))::GlobalNamespace::ByteArrayNetSerializable* signature;

  /// @brief Convert operator to "::BGNet::Core::Messages::IHandshakeServerToClientMessage"
  constexpr operator ::BGNet::Core::Messages::IHandshakeServerToClientMessage*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IHandshakeMessage"
  constexpr operator ::BGNet::Core::Messages::IHandshakeMessage*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  constexpr ::GlobalNamespace::ByteArrayNetSerializable*& __get_random();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ByteArrayNetSerializable*> const& __get_random() const;

  constexpr void __set_random(::GlobalNamespace::ByteArrayNetSerializable* value);

  constexpr ::GlobalNamespace::ByteArrayNetSerializable*& __get_publicKey();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ByteArrayNetSerializable*> const& __get_publicKey() const;

  constexpr void __set_publicKey(::GlobalNamespace::ByteArrayNetSerializable* value);

  constexpr ::GlobalNamespace::ByteArrayNetSerializable*& __get_signature();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ByteArrayNetSerializable*> const& __get_signature() const;

  constexpr void __set_signature(::GlobalNamespace::ByteArrayNetSerializable* value);

  /// @brief Method get_pool addr 0xde006c size 0x40 virtual false final false
  static inline ::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::ServerHelloRequest*>* get_pool();

  /// @brief Method Init addr 0xde2020 size 0x60 virtual false final false
  inline ::BGNet::Core::Messages::ServerHelloRequest* Init(::ArrayW<uint8_t, ::Array<uint8_t>*> random, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  /// @brief Method Serialize addr 0xde305c size 0x5c virtual true final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xde30b8 size 0x5c virtual true final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Release addr 0xde3114 size 0x84 virtual true final false
  inline void Release();

  static inline ::BGNet::Core::Messages::ServerHelloRequest* New_ctor();

  /// @brief Method .ctor addr 0xde3198 size 0x108 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ServerHelloRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServerHelloRequest(ServerHelloRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServerHelloRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServerHelloRequest(ServerHelloRequest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServerHelloRequest();

public:
  /// @brief Field random, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ByteArrayNetSerializable* ___random;

  /// @brief Field publicKey, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ByteArrayNetSerializable* ___publicKey;

  /// @brief Field signature, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ByteArrayNetSerializable* ___signature;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::ServerHelloRequest, 0x30>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::ServerHelloRequest, ___random) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::ServerHelloRequest, ___publicKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::ServerHelloRequest, ___signature) == 0x28, "Offset mismatch!");

} // namespace BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::ServerHelloRequest);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::ServerHelloRequest*, "BGNet.Core.Messages", "ServerHelloRequest");
