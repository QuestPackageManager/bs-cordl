#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseReliableResponse)
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace BGNet::Core::Messages {
class IUnconnectedReliableRequest;
}
namespace BGNet::Core::Messages {
class IUnconnectedResponse;
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
namespace BGNet::Core::Messages {
class IUnconnectedReliableResponse;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class BaseReliableResponse;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::Messages::BaseReliableResponse);
// Type: BGNet.Core.Messages::BaseReliableResponse
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12954))
// CS Name: ::BGNet.Core.Messages::BaseReliableResponse*
class CORDL_TYPE BaseReliableResponse : public ::System::Object {
public:
  // Declarations
  /// @brief Field <requestId>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__requestId_k__BackingField, put = __set__requestId_k__BackingField)) uint32_t _requestId_k__BackingField;

  /// @brief Field <responseId>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __get__responseId_k__BackingField, put = __set__responseId_k__BackingField)) uint32_t _responseId_k__BackingField;

  __declspec(property(get = get_requestId, put = set_requestId)) uint32_t requestId;

  __declspec(property(get = get_responseId, put = set_responseId)) uint32_t responseId;

  __declspec(property(get = get_resultCode)) uint8_t resultCode;

  __declspec(property(get = get_resultCodeString))::StringW resultCodeString;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedReliableResponse"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedReliableResponse*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedReliableRequest"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedReliableRequest*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedResponse"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedResponse*() noexcept;

  constexpr uint32_t& __get__requestId_k__BackingField();

  constexpr uint32_t const& __get__requestId_k__BackingField() const;

  constexpr void __set__requestId_k__BackingField(uint32_t value);

  constexpr uint32_t& __get__responseId_k__BackingField();

  constexpr uint32_t const& __get__responseId_k__BackingField() const;

  constexpr void __set__responseId_k__BackingField(uint32_t value);

  /// @brief Method get_requestId addr 0xdde708 size 0x8 virtual true final true
  inline uint32_t get_requestId();

  /// @brief Method set_requestId addr 0xdde710 size 0x8 virtual false final false
  inline void set_requestId(uint32_t value);

  /// @brief Method get_responseId addr 0xdde718 size 0x8 virtual true final true
  inline uint32_t get_responseId();

  /// @brief Method set_responseId addr 0xdde720 size 0x8 virtual false final false
  inline void set_responseId(uint32_t value);

  /// @brief Method get_resultCode addr 0xdde728 size 0x8 virtual true final false
  inline uint8_t get_resultCode();

  /// @brief Method get_resultCodeString addr 0xdde730 size 0x40 virtual true final false
  inline ::StringW get_resultCodeString();

  /// @brief Method Serialize addr 0xdde770 size 0x40 virtual true final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xdde7b0 size 0x44 virtual true final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Release();

  /// @brief Method BGNet.Core.Messages.IUnconnectedReliableRequest.WithRequestId addr 0xdde7f4 size 0x8 virtual true final true
  inline ::BGNet::Core::Messages::IUnconnectedReliableRequest* BGNet_Core_Messages_IUnconnectedReliableRequest_WithRequestId(uint32_t requestId);

  /// @brief Method BGNet.Core.Messages.IUnconnectedResponse.WithResponseId addr 0xdde7fc size 0x8 virtual true final true
  inline ::BGNet::Core::Messages::IUnconnectedResponse* BGNet_Core_Messages_IUnconnectedResponse_WithResponseId(uint32_t responseId);

  /// @brief Method BGNet.Core.Messages.IUnconnectedReliableResponse.WithRequestAndResponseId addr 0xdde804 size 0x8 virtual true final true
  inline ::BGNet::Core::Messages::IUnconnectedReliableResponse* BGNet_Core_Messages_IUnconnectedReliableResponse_WithRequestAndResponseId(uint32_t requestId, uint32_t responseId);

  static inline ::BGNet::Core::Messages::BaseReliableResponse* New_ctor();

  /// @brief Method .ctor addr 0xdde80c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BaseReliableResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseReliableResponse(BaseReliableResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseReliableResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseReliableResponse(BaseReliableResponse const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseReliableResponse();

public:
  /// @brief Field <requestId>k__BackingField, offset: 0x10, size: 0x4, def value: None
  uint32_t ____requestId_k__BackingField;

  /// @brief Field <responseId>k__BackingField, offset: 0x14, size: 0x4, def value: None
  uint32_t ____responseId_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::BaseReliableResponse, 0x18>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::BaseReliableResponse, ____requestId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::BaseReliableResponse, ____responseId_k__BackingField) == 0x14, "Offset mismatch!");

} // namespace BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::BaseReliableResponse);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseReliableResponse*, "BGNet.Core.Messages", "BaseReliableResponse");
