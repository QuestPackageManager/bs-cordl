#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IUnconnectedReliableRequest)
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class IUnconnectedReliableRequest;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::Messages::IUnconnectedReliableRequest);
// Type: BGNet.Core.Messages::IUnconnectedReliableRequest
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12980))
// CS Name: ::BGNet.Core.Messages::IUnconnectedReliableRequest*
class CORDL_TYPE IUnconnectedReliableRequest {
public:
  // Declarations
  __declspec(property(get = get_requestId)) uint32_t requestId;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Method get_requestId addr 0x0 size 0xffffffffffffffff virtual true final false
  inline uint32_t get_requestId();

  /// @brief Method WithRequestId addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::BGNet::Core::Messages::IUnconnectedReliableRequest* WithRequestId(uint32_t requestId);

  // Ctor Parameters [CppParam { name: "", ty: "IUnconnectedReliableRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IUnconnectedReliableRequest(IUnconnectedReliableRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IUnconnectedReliableRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IUnconnectedReliableRequest(IUnconnectedReliableRequest const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::IUnconnectedReliableRequest);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::IUnconnectedReliableRequest*, "BGNet.Core.Messages", "IUnconnectedReliableRequest");
