#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IUnconnectedMultipartMessage)
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace BGNet::Core::Messages {
class IUnconnectedReliableRequest;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class IUnconnectedMultipartMessage;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::Messages::IUnconnectedMultipartMessage);
// Type: BGNet.Core.Messages::IUnconnectedMultipartMessage
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12987))
// CS Name: ::BGNet.Core.Messages::IUnconnectedMultipartMessage*
class CORDL_TYPE IUnconnectedMultipartMessage {
public:
  // Declarations
  __declspec(property(get = get_multipartMessageId)) uint32_t multipartMessageId;

  __declspec(property(get = get_offset)) int32_t offset;

  __declspec(property(get = get_length)) int32_t length;

  __declspec(property(get = get_totalLength)) int32_t totalLength;

  __declspec(property(get = get_data))::ArrayW<uint8_t, ::Array<uint8_t>*> data;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedReliableRequest"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedReliableRequest*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Method get_multipartMessageId addr 0x0 size 0xffffffffffffffff virtual true final false
  inline uint32_t get_multipartMessageId();

  /// @brief Method get_offset addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_offset();

  /// @brief Method get_length addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_length();

  /// @brief Method get_totalLength addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_totalLength();

  /// @brief Method get_data addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_data();

  // Ctor Parameters [CppParam { name: "", ty: "IUnconnectedMultipartMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IUnconnectedMultipartMessage(IUnconnectedMultipartMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IUnconnectedMultipartMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IUnconnectedMultipartMessage(IUnconnectedMultipartMessage const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::IUnconnectedMultipartMessage);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::IUnconnectedMultipartMessage*, "BGNet.Core.Messages", "IUnconnectedMultipartMessage");
