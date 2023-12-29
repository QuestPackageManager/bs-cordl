#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGNet/Core/Messages/zzzz__BaseReliableResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AuthenticateGameLiftUserRequest)
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace BGNet::Core::Messages {
class IUnconnectedResponse;
}
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
namespace BGNet::Core::Messages {
class IUnconnectedReliableResponse;
}
namespace BGNet::Core::Messages {
class IUnconnectedReliableRequest;
}
namespace GameLift {
class IGameLiftMessage;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace BGNet::Core::Messages {
class IUnconnectedAuthenticateRequest;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GameLift {
class IGameLiftClientToServerMessage;
}
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
}
// Forward declare root types
namespace GameLift {
class AuthenticateGameLiftUserRequest;
}
// Write type traits
MARK_REF_PTR_T(::GameLift::AuthenticateGameLiftUserRequest);
// Type: GameLift::AuthenticateGameLiftUserRequest
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GameLift {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12954))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12925))
// CS Name: ::GameLift::AuthenticateGameLiftUserRequest*
class CORDL_TYPE AuthenticateGameLiftUserRequest : public ::BGNet::Core::Messages::BaseReliableResponse {
public:
  // Declarations
  /// @brief Field <userId>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__userId_k__BackingField, put = __set__userId_k__BackingField))::StringW _userId_k__BackingField;

  /// @brief Field <userName>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__userName_k__BackingField, put = __set__userName_k__BackingField))::StringW _userName_k__BackingField;

  /// @brief Field playerSessionId, offset 0x28, size 0x8
  __declspec(property(get = __get_playerSessionId, put = __set_playerSessionId))::StringW playerSessionId;

  __declspec(property(get = get_userId, put = set_userId))::StringW userId;

  __declspec(property(get = get_userName, put = set_userName))::StringW userName;

  /// @brief Convert operator to "::GameLift::IGameLiftClientToServerMessage"
  constexpr operator ::GameLift::IGameLiftClientToServerMessage*() noexcept;

  /// @brief Convert operator to "::GameLift::IGameLiftMessage"
  constexpr operator ::GameLift::IGameLiftMessage*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedAuthenticateRequest"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedReliableResponse"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedReliableResponse*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedReliableRequest"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedReliableRequest*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedResponse"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedResponse*() noexcept;

  constexpr ::StringW& __get__userId_k__BackingField();

  constexpr ::StringW const& __get__userId_k__BackingField() const;

  constexpr void __set__userId_k__BackingField(::StringW value);

  constexpr ::StringW& __get__userName_k__BackingField();

  constexpr ::StringW const& __get__userName_k__BackingField() const;

  constexpr void __set__userName_k__BackingField(::StringW value);

  constexpr ::StringW& __get_playerSessionId();

  constexpr ::StringW const& __get_playerSessionId() const;

  constexpr void __set_playerSessionId(::StringW value);

  /// @brief Method get_pool addr 0xdd7e08 size 0x40 virtual false final false
  static inline ::GlobalNamespace::PacketPool_1<::GameLift::AuthenticateGameLiftUserRequest*>* get_pool();

  /// @brief Method get_userId addr 0xdd7e48 size 0x8 virtual true final true
  inline ::StringW get_userId();

  /// @brief Method set_userId addr 0xdd7e50 size 0x8 virtual false final false
  inline void set_userId(::StringW value);

  /// @brief Method get_userName addr 0xdd7e58 size 0x8 virtual true final true
  inline ::StringW get_userName();

  /// @brief Method set_userName addr 0xdd7e60 size 0x8 virtual false final false
  inline void set_userName(::StringW value);

  /// @brief Method Init addr 0xdd7e68 size 0xc virtual false final false
  inline ::GameLift::AuthenticateGameLiftUserRequest* Init(::StringW userId, ::StringW userName, ::StringW playerSessionId);

  /// @brief Method Serialize addr 0xdd7e74 size 0x58 virtual true final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xdd7ecc size 0x5c virtual true final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Release addr 0xdd7f28 size 0x54 virtual true final false
  inline void Release();

  static inline ::GameLift::AuthenticateGameLiftUserRequest* New_ctor();

  /// @brief Method .ctor addr 0xdd7f7c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AuthenticateGameLiftUserRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthenticateGameLiftUserRequest(AuthenticateGameLiftUserRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthenticateGameLiftUserRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthenticateGameLiftUserRequest(AuthenticateGameLiftUserRequest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthenticateGameLiftUserRequest();

public:
  /// @brief Field <userId>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____userId_k__BackingField;

  /// @brief Field <userName>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____userName_k__BackingField;

  /// @brief Field playerSessionId, offset: 0x28, size: 0x8, def value: None
  ::StringW ___playerSessionId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameLift::AuthenticateGameLiftUserRequest, 0x30>, "Size mismatch!");

static_assert(offsetof(::GameLift::AuthenticateGameLiftUserRequest, ____userId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GameLift::AuthenticateGameLiftUserRequest, ____userName_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GameLift::AuthenticateGameLiftUserRequest, ___playerSessionId) == 0x28, "Offset mismatch!");

} // namespace GameLift
NEED_NO_BOX(::GameLift::AuthenticateGameLiftUserRequest);
DEFINE_IL2CPP_ARG_TYPE(::GameLift::AuthenticateGameLiftUserRequest*, "GameLift", "AuthenticateGameLiftUserRequest");
