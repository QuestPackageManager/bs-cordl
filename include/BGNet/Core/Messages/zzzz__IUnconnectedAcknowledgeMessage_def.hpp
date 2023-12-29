#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IUnconnectedAcknowledgeMessage)
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace BGNet::Core::Messages {
class IUnconnectedResponse;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class IUnconnectedAcknowledgeMessage;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::Messages::IUnconnectedAcknowledgeMessage);
// Type: BGNet.Core.Messages::IUnconnectedAcknowledgeMessage
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12984))
// CS Name: ::BGNet.Core.Messages::IUnconnectedAcknowledgeMessage*
class CORDL_TYPE IUnconnectedAcknowledgeMessage {
public:
  // Declarations
  __declspec(property(get = get_messageHandled)) bool messageHandled;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedResponse"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedResponse*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Method get_messageHandled addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_messageHandled();

  // Ctor Parameters [CppParam { name: "", ty: "IUnconnectedAcknowledgeMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IUnconnectedAcknowledgeMessage(IUnconnectedAcknowledgeMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IUnconnectedAcknowledgeMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IUnconnectedAcknowledgeMessage(IUnconnectedAcknowledgeMessage const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::IUnconnectedAcknowledgeMessage);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::IUnconnectedAcknowledgeMessage*, "BGNet.Core.Messages", "IUnconnectedAcknowledgeMessage");
