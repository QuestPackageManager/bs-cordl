#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IUnconnectedAuthenticateResponse)
namespace BGNet::Core::Messages {
class IUnconnectedReliableRequest;
}
namespace BGNet::Core::Messages {
class IUnconnectedResponse;
}
namespace BGNet::Core::Messages {
class IUnconnectedReliableResponse;
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
class IUnconnectedAuthenticateResponse;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::Messages::IUnconnectedAuthenticateResponse);
// Type: BGNet.Core.Messages::IUnconnectedAuthenticateResponse
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12986))
// CS Name: ::BGNet.Core.Messages::IUnconnectedAuthenticateResponse*
class CORDL_TYPE IUnconnectedAuthenticateResponse {
public:
  // Declarations
  __declspec(property(get = get_isAuthenticated)) bool isAuthenticated;

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

  /// @brief Method get_isAuthenticated addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_isAuthenticated();

  // Ctor Parameters [CppParam { name: "", ty: "IUnconnectedAuthenticateResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IUnconnectedAuthenticateResponse(IUnconnectedAuthenticateResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IUnconnectedAuthenticateResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IUnconnectedAuthenticateResponse(IUnconnectedAuthenticateResponse const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::IUnconnectedAuthenticateResponse);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::IUnconnectedAuthenticateResponse*, "BGNet.Core.Messages", "IUnconnectedAuthenticateResponse");
