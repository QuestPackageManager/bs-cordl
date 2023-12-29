#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGNet/Core/Messages/zzzz__BaseReliableRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClientHelloWithCookieRequest)
namespace GlobalNamespace {
class ByteArrayNetSerializable;
}
namespace BGNet::Core::Messages {
class IHandshakeClientToServerMessage;
}
namespace BGNet::Core::Messages {
class IHandshakeMessage;
}
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class ClientHelloWithCookieRequest;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::Messages::ClientHelloWithCookieRequest);
// Type: BGNet.Core.Messages::ClientHelloWithCookieRequest
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12953))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12970))
// CS Name: ::BGNet.Core.Messages::ClientHelloWithCookieRequest*
class CORDL_TYPE ClientHelloWithCookieRequest : public ::BGNet::Core::Messages::BaseReliableRequest {
public:
  // Declarations
  /// @brief Field certificateResponseId, offset 0x14, size 0x4
  __declspec(property(get = __get_certificateResponseId, put = __set_certificateResponseId)) uint32_t certificateResponseId;

  /// @brief Field random, offset 0x18, size 0x8
  __declspec(property(get = __get_random, put = __set_random))::GlobalNamespace::ByteArrayNetSerializable* random;

  /// @brief Field cookie, offset 0x20, size 0x8
  __declspec(property(get = __get_cookie, put = __set_cookie))::GlobalNamespace::ByteArrayNetSerializable* cookie;

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

  constexpr uint32_t& __get_certificateResponseId();

  constexpr uint32_t const& __get_certificateResponseId() const;

  constexpr void __set_certificateResponseId(uint32_t value);

  constexpr ::GlobalNamespace::ByteArrayNetSerializable*& __get_random();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ByteArrayNetSerializable*> const& __get_random() const;

  constexpr void __set_random(::GlobalNamespace::ByteArrayNetSerializable* value);

  constexpr ::GlobalNamespace::ByteArrayNetSerializable*& __get_cookie();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ByteArrayNetSerializable*> const& __get_cookie() const;

  constexpr void __set_cookie(::GlobalNamespace::ByteArrayNetSerializable* value);

  /// @brief Method get_pool addr 0xdddae4 size 0x40 virtual false final false
  static inline ::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::ClientHelloWithCookieRequest*>* get_pool();

  /// @brief Method Init addr 0xdddb24 size 0x50 virtual false final false
  inline ::BGNet::Core::Messages::ClientHelloWithCookieRequest* Init(uint32_t certificateResponseId, ::ArrayW<uint8_t, ::Array<uint8_t>*> random, ::ArrayW<uint8_t, ::Array<uint8_t>*> cookie);

  /// @brief Method Serialize addr 0xde2cfc size 0x68 virtual true final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xde2d64 size 0x6c virtual true final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Release addr 0xde2dd0 size 0x74 virtual true final false
  inline void Release();

  static inline ::BGNet::Core::Messages::ClientHelloWithCookieRequest* New_ctor();

  /// @brief Method .ctor addr 0xde2e44 size 0xc4 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ClientHelloWithCookieRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClientHelloWithCookieRequest(ClientHelloWithCookieRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClientHelloWithCookieRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClientHelloWithCookieRequest(ClientHelloWithCookieRequest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClientHelloWithCookieRequest();

public:
  /// @brief Field certificateResponseId, offset: 0x14, size: 0x4, def value: None
  uint32_t ___certificateResponseId;

  /// @brief Field random, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ByteArrayNetSerializable* ___random;

  /// @brief Field cookie, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ByteArrayNetSerializable* ___cookie;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::ClientHelloWithCookieRequest, 0x28>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::ClientHelloWithCookieRequest, ___certificateResponseId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::ClientHelloWithCookieRequest, ___random) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::ClientHelloWithCookieRequest, ___cookie) == 0x20, "Offset mismatch!");

} // namespace BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::ClientHelloWithCookieRequest);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::ClientHelloWithCookieRequest*, "BGNet.Core.Messages", "ClientHelloWithCookieRequest");
