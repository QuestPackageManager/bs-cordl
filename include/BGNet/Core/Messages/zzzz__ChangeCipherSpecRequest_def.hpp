#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGNet/Core/Messages/zzzz__BaseReliableResponse_def.hpp"
CORDL_MODULE_EXPORT(ChangeCipherSpecRequest)
namespace BGNet::Core::Messages {
class IHandshakeMessage;
}
namespace BGNet::Core::Messages {
class IHandshakeServerToClientMessage;
}
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class ChangeCipherSpecRequest;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::Messages::ChangeCipherSpecRequest);
// Type: BGNet.Core.Messages::ChangeCipherSpecRequest
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12954))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12976))
// CS Name: ::BGNet.Core.Messages::ChangeCipherSpecRequest*
class CORDL_TYPE ChangeCipherSpecRequest : public ::BGNet::Core::Messages::BaseReliableResponse {
public:
  // Declarations
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

  /// @brief Method get_pool addr 0xde00ec size 0x40 virtual false final false
  static inline ::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::ChangeCipherSpecRequest*>* get_pool();

  /// @brief Method Release addr 0xde3c7c size 0x54 virtual true final false
  inline void Release();

  static inline ::BGNet::Core::Messages::ChangeCipherSpecRequest* New_ctor();

  /// @brief Method .ctor addr 0xde3cd0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ChangeCipherSpecRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChangeCipherSpecRequest(ChangeCipherSpecRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChangeCipherSpecRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChangeCipherSpecRequest(ChangeCipherSpecRequest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChangeCipherSpecRequest();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::ChangeCipherSpecRequest, 0x18>, "Size mismatch!");

} // namespace BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::ChangeCipherSpecRequest);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::ChangeCipherSpecRequest*, "BGNet.Core.Messages", "ChangeCipherSpecRequest");
