#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseResponse)
namespace BGNet::Core::Messages {
class IUnconnectedResponse;
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
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class BaseResponse;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::Messages::BaseResponse);
// Type: BGNet.Core.Messages::BaseResponse
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12955))
// CS Name: ::BGNet.Core.Messages::BaseResponse*
class CORDL_TYPE BaseResponse : public ::System::Object {
public:
  // Declarations
  /// @brief Field <responseId>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__responseId_k__BackingField, put = __set__responseId_k__BackingField)) uint32_t _responseId_k__BackingField;

  __declspec(property(get = get_responseId, put = set_responseId)) uint32_t responseId;

  __declspec(property(get = get_resultCode)) uint8_t resultCode;

  __declspec(property(get = get_resultCodeString))::StringW resultCodeString;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedResponse"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedResponse*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  constexpr uint32_t& __get__responseId_k__BackingField();

  constexpr uint32_t const& __get__responseId_k__BackingField() const;

  constexpr void __set__responseId_k__BackingField(uint32_t value);

  /// @brief Method get_responseId addr 0xdde814 size 0x8 virtual true final true
  inline uint32_t get_responseId();

  /// @brief Method set_responseId addr 0xdde81c size 0x8 virtual false final false
  inline void set_responseId(uint32_t value);

  /// @brief Method get_resultCode addr 0xdde824 size 0x8 virtual true final false
  inline uint8_t get_resultCode();

  /// @brief Method get_resultCodeString addr 0xdde82c size 0x40 virtual true final false
  inline ::StringW get_resultCodeString();

  /// @brief Method Serialize addr 0xdde86c size 0x24 virtual true final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xdde890 size 0x28 virtual true final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Release();

  /// @brief Method BGNet.Core.Messages.IUnconnectedResponse.WithResponseId addr 0xdde8b8 size 0x8 virtual true final true
  inline ::BGNet::Core::Messages::IUnconnectedResponse* BGNet_Core_Messages_IUnconnectedResponse_WithResponseId(uint32_t responseId);

  static inline ::BGNet::Core::Messages::BaseResponse* New_ctor();

  /// @brief Method .ctor addr 0xdde8c0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BaseResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseResponse(BaseResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseResponse(BaseResponse const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseResponse();

public:
  /// @brief Field <responseId>k__BackingField, offset: 0x10, size: 0x4, def value: None
  uint32_t ____responseId_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::BaseResponse, 0x18>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::BaseResponse, ____responseId_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::BaseResponse);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseResponse*, "BGNet.Core.Messages", "BaseResponse");
