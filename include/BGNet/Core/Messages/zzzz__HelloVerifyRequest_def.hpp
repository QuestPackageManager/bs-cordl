#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGNet/Core/Messages/zzzz__BaseReliableResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HelloVerifyRequest)
namespace BGNet::Core::Messages {
class IHandshakeMessage;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
class ByteArrayNetSerializable;
}
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
}
namespace BGNet::Core::Messages {
class IHandshakeServerToClientMessage;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class HelloVerifyRequest;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::Messages::HelloVerifyRequest);
// Type: BGNet.Core.Messages::HelloVerifyRequest
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12954))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12971))
// CS Name: ::BGNet.Core.Messages::HelloVerifyRequest*
class CORDL_TYPE HelloVerifyRequest : public ::BGNet::Core::Messages::BaseReliableResponse {
public:
  // Declarations
  /// @brief Field cookie, offset 0x18, size 0x8
  __declspec(property(get = __get_cookie, put = __set_cookie))::GlobalNamespace::ByteArrayNetSerializable* cookie;

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

  constexpr ::GlobalNamespace::ByteArrayNetSerializable*& __get_cookie();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ByteArrayNetSerializable*> const& __get_cookie() const;

  constexpr void __set_cookie(::GlobalNamespace::ByteArrayNetSerializable* value);

  /// @brief Method get_pool addr 0xde002c size 0x40 virtual false final false
  static inline ::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::HelloVerifyRequest*>* get_pool();

  /// @brief Method Init addr 0xde034c size 0x28 virtual false final false
  inline ::BGNet::Core::Messages::HelloVerifyRequest* Init(::ArrayW<uint8_t, ::Array<uint8_t>*> cookie);

  /// @brief Method Serialize addr 0xde2f08 size 0x34 virtual true final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xde2f3c size 0x34 virtual true final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Release addr 0xde2f70 size 0x64 virtual true final false
  inline void Release();

  static inline ::BGNet::Core::Messages::HelloVerifyRequest* New_ctor();

  /// @brief Method .ctor addr 0xde2fd4 size 0x88 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HelloVerifyRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HelloVerifyRequest(HelloVerifyRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HelloVerifyRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HelloVerifyRequest(HelloVerifyRequest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HelloVerifyRequest();

public:
  /// @brief Field cookie, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ByteArrayNetSerializable* ___cookie;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::HelloVerifyRequest, 0x20>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::HelloVerifyRequest, ___cookie) == 0x18, "Offset mismatch!");

} // namespace BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::HelloVerifyRequest);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::HelloVerifyRequest*, "BGNet.Core.Messages", "HelloVerifyRequest");
