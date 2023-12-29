#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGNet/Core/Messages/zzzz__BaseResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseAcknowledgeMessage)
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace BGNet::Core::Messages {
class IUnconnectedAcknowledgeMessage;
}
namespace BGNet::Core::Messages {
class IUnconnectedResponse;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class BaseAcknowledgeMessage;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::Messages::BaseAcknowledgeMessage);
// Type: BGNet.Core.Messages::BaseAcknowledgeMessage
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 21, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12955))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12937))
// CS Name: ::BGNet.Core.Messages::BaseAcknowledgeMessage*
class CORDL_TYPE BaseAcknowledgeMessage : public ::BGNet::Core::Messages::BaseResponse {
public:
  // Declarations
  /// @brief Field <messageHandled>k__BackingField, offset 0x14, size 0x1
  __declspec(property(get = __get__messageHandled_k__BackingField, put = __set__messageHandled_k__BackingField)) bool _messageHandled_k__BackingField;

  __declspec(property(get = get_resultCode)) uint8_t resultCode;

  __declspec(property(get = get_resultCodeString))::StringW resultCodeString;

  __declspec(property(get = get_messageHandled, put = set_messageHandled)) bool messageHandled;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedAcknowledgeMessage"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedAcknowledgeMessage*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedResponse"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedResponse*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  constexpr bool& __get__messageHandled_k__BackingField();

  constexpr bool const& __get__messageHandled_k__BackingField() const;

  constexpr void __set__messageHandled_k__BackingField(bool value);

  /// @brief Method get_resultCode addr 0xdd84dc size 0x8 virtual true final false
  inline uint8_t get_resultCode();

  /// @brief Method get_resultCodeString addr 0xdd84e4 size 0x6c virtual true final false
  inline ::StringW get_resultCodeString();

  /// @brief Method get_messageHandled addr 0xdd8550 size 0x8 virtual true final true
  inline bool get_messageHandled();

  /// @brief Method set_messageHandled addr 0xdd8558 size 0xc virtual false final false
  inline void set_messageHandled(bool value);

  /// @brief Method Init addr 0xdd8564 size 0xc virtual false final false
  inline ::BGNet::Core::Messages::BaseAcknowledgeMessage* Init(bool messageHandled);

  /// @brief Method Serialize addr 0xdd8570 size 0x38 virtual true final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xdd85a8 size 0x40 virtual true final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  static inline ::BGNet::Core::Messages::BaseAcknowledgeMessage* New_ctor();

  /// @brief Method .ctor addr 0xdd81bc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BaseAcknowledgeMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseAcknowledgeMessage(BaseAcknowledgeMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseAcknowledgeMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseAcknowledgeMessage(BaseAcknowledgeMessage const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseAcknowledgeMessage();

public:
  /// @brief Field <messageHandled>k__BackingField, offset: 0x14, size: 0x1, def value: None
  bool ____messageHandled_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::BaseAcknowledgeMessage, 0x18>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::BaseAcknowledgeMessage, ____messageHandled_k__BackingField) == 0x14, "Offset mismatch!");

} // namespace BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::BaseAcknowledgeMessage);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseAcknowledgeMessage*, "BGNet.Core.Messages", "BaseAcknowledgeMessage");
