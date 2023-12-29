#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IUnconnectedResponse)
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
class IUnconnectedResponse;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::Messages::IUnconnectedResponse);
// Type: BGNet.Core.Messages::IUnconnectedResponse
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12981))
// CS Name: ::BGNet.Core.Messages::IUnconnectedResponse*
class CORDL_TYPE IUnconnectedResponse {
public:
  // Declarations
  __declspec(property(get = get_responseId)) uint32_t responseId;

  __declspec(property(get = get_resultCode)) uint8_t resultCode;

  __declspec(property(get = get_resultCodeString))::StringW resultCodeString;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Method get_responseId addr 0x0 size 0xffffffffffffffff virtual true final false
  inline uint32_t get_responseId();

  /// @brief Method get_resultCode addr 0x0 size 0xffffffffffffffff virtual true final false
  inline uint8_t get_resultCode();

  /// @brief Method get_resultCodeString addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_resultCodeString();

  /// @brief Method WithResponseId addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::BGNet::Core::Messages::IUnconnectedResponse* WithResponseId(uint32_t responseId);

  // Ctor Parameters [CppParam { name: "", ty: "IUnconnectedResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IUnconnectedResponse(IUnconnectedResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IUnconnectedResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IUnconnectedResponse(IUnconnectedResponse const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::IUnconnectedResponse);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::IUnconnectedResponse*, "BGNet.Core.Messages", "IUnconnectedResponse");
