#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGNet/Core/Messages/zzzz__BaseReliableRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClientHelloRequest)
namespace BGNet::Core::Messages {
class IHandshakeMessage;
}
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
}
namespace BGNet::Core::Messages {
class IHandshakeClientToServerMessage;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class ClientHelloRequest;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::Messages::ClientHelloRequest);
// Type: BGNet.Core.Messages::ClientHelloRequest
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12953))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12969))
// CS Name: ::BGNet.Core.Messages::ClientHelloRequest*
class CORDL_TYPE ClientHelloRequest : public ::BGNet::Core::Messages::BaseReliableRequest {
public:
  // Declarations
  /// @brief Field random, offset 0x18, size 0x8
  __declspec(property(get = __get_random, put = __set_random))::ArrayW<uint8_t, ::Array<uint8_t>*> random;

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

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_random();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_random() const;

  constexpr void __set_random(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method get_pool addr 0xddda3c size 0x40 virtual false final false
  static inline ::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::ClientHelloRequest*>* get_pool();

  /// @brief Method Init addr 0xddda7c size 0x38 virtual false final false
  inline ::BGNet::Core::Messages::ClientHelloRequest* Init(::ArrayW<uint8_t, ::Array<uint8_t>*> random);

  /// @brief Method Serialize addr 0xde2bc8 size 0x40 virtual true final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xde2c08 size 0x48 virtual true final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Release addr 0xde2c50 size 0x54 virtual true final false
  inline void Release();

  static inline ::BGNet::Core::Messages::ClientHelloRequest* New_ctor();

  /// @brief Method .ctor addr 0xde2ca4 size 0x58 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ClientHelloRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClientHelloRequest(ClientHelloRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClientHelloRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClientHelloRequest(ClientHelloRequest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClientHelloRequest();

public:
  /// @brief Field random, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::ClientHelloRequest, 0x20>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::ClientHelloRequest, ___random) == 0x18, "Offset mismatch!");

} // namespace BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::ClientHelloRequest);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::ClientHelloRequest*, "BGNet.Core.Messages", "ClientHelloRequest");
