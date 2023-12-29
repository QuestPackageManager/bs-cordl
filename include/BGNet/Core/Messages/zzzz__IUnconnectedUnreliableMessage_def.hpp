#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IUnconnectedUnreliableMessage)
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class IUnconnectedUnreliableMessage;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::Messages::IUnconnectedUnreliableMessage);
// Type: BGNet.Core.Messages::IUnconnectedUnreliableMessage
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12983))
// CS Name: ::BGNet.Core.Messages::IUnconnectedUnreliableMessage*
class CORDL_TYPE IUnconnectedUnreliableMessage {
public:
  // Declarations
  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IUnconnectedUnreliableMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IUnconnectedUnreliableMessage(IUnconnectedUnreliableMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IUnconnectedUnreliableMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IUnconnectedUnreliableMessage(IUnconnectedUnreliableMessage const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::IUnconnectedUnreliableMessage);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::IUnconnectedUnreliableMessage*, "BGNet.Core.Messages", "IUnconnectedUnreliableMessage");
