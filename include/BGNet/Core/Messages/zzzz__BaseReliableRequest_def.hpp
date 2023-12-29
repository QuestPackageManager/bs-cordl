#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseReliableRequest)
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace BGNet::Core::Messages {
class IUnconnectedReliableRequest;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class BaseReliableRequest;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::Messages::BaseReliableRequest);
// Type: BGNet.Core.Messages::BaseReliableRequest
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12953))
// CS Name: ::BGNet.Core.Messages::BaseReliableRequest*
class CORDL_TYPE BaseReliableRequest : public ::System::Object {
public:
  // Declarations
  /// @brief Field <requestId>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__requestId_k__BackingField, put = __set__requestId_k__BackingField)) uint32_t _requestId_k__BackingField;

  __declspec(property(get = get_requestId, put = set_requestId)) uint32_t requestId;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedReliableRequest"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedReliableRequest*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  constexpr uint32_t& __get__requestId_k__BackingField();

  constexpr uint32_t const& __get__requestId_k__BackingField() const;

  constexpr void __set__requestId_k__BackingField(uint32_t value);

  /// @brief Method get_requestId addr 0xdde6f0 size 0x8 virtual true final true
  inline uint32_t get_requestId();

  /// @brief Method set_requestId addr 0xdde6f8 size 0x8 virtual false final false
  inline void set_requestId(uint32_t value);

  /// @brief Method Serialize addr 0xdde510 size 0x24 virtual true final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xdde668 size 0x28 virtual true final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Release();

  /// @brief Method BGNet.Core.Messages.IUnconnectedReliableRequest.WithRequestId addr 0xdde700 size 0x8 virtual true final true
  inline ::BGNet::Core::Messages::IUnconnectedReliableRequest* BGNet_Core_Messages_IUnconnectedReliableRequest_WithRequestId(uint32_t requestId);

  static inline ::BGNet::Core::Messages::BaseReliableRequest* New_ctor();

  /// @brief Method .ctor addr 0xdde6e8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BaseReliableRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseReliableRequest(BaseReliableRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseReliableRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseReliableRequest(BaseReliableRequest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseReliableRequest();

public:
  /// @brief Field <requestId>k__BackingField, offset: 0x10, size: 0x4, def value: None
  uint32_t ____requestId_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::BaseReliableRequest, 0x18>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::BaseReliableRequest, ____requestId_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::BaseReliableRequest);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseReliableRequest*, "BGNet.Core.Messages", "BaseReliableRequest");
