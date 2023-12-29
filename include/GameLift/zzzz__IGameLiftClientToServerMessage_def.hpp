#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IGameLiftClientToServerMessage)
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GameLift {
class IGameLiftMessage;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
// Forward declare root types
namespace GameLift {
class IGameLiftClientToServerMessage;
}
// Write type traits
MARK_REF_PTR_T(::GameLift::IGameLiftClientToServerMessage);
// Type: GameLift::IGameLiftClientToServerMessage
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GameLift {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12923))
// CS Name: ::GameLift::IGameLiftClientToServerMessage*
class CORDL_TYPE IGameLiftClientToServerMessage {
public:
  // Declarations
  __declspec(property(get = get_userId))::StringW userId;

  __declspec(property(get = get_userName))::StringW userName;

  /// @brief Convert operator to "::GameLift::IGameLiftMessage"
  constexpr operator ::GameLift::IGameLiftMessage*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Method get_userId addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_userId();

  /// @brief Method get_userName addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_userName();

  // Ctor Parameters [CppParam { name: "", ty: "IGameLiftClientToServerMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IGameLiftClientToServerMessage(IGameLiftClientToServerMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IGameLiftClientToServerMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGameLiftClientToServerMessage(IGameLiftClientToServerMessage const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GameLift
NEED_NO_BOX(::GameLift::IGameLiftClientToServerMessage);
DEFINE_IL2CPP_ARG_TYPE(::GameLift::IGameLiftClientToServerMessage*, "GameLift", "IGameLiftClientToServerMessage");
