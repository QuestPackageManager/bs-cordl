#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGameLiftServerToClientMessage)
namespace GameLift {
class IGameLiftMessage;
}
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
namespace GameLift {
class IGameLiftServerToClientMessage;
}
// Write type traits
MARK_REF_PTR_T(::GameLift::IGameLiftServerToClientMessage);
// Type: GameLift::IGameLiftServerToClientMessage
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GameLift {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12924))
// CS Name: ::GameLift::IGameLiftServerToClientMessage*
class CORDL_TYPE IGameLiftServerToClientMessage {
public:
  // Declarations
  /// @brief Convert operator to "::GameLift::IGameLiftMessage"
  constexpr operator ::GameLift::IGameLiftMessage*() noexcept;

  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IGameLiftServerToClientMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IGameLiftServerToClientMessage(IGameLiftServerToClientMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IGameLiftServerToClientMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGameLiftServerToClientMessage(IGameLiftServerToClientMessage const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GameLift
NEED_NO_BOX(::GameLift::IGameLiftServerToClientMessage);
DEFINE_IL2CPP_ARG_TYPE(::GameLift::IGameLiftServerToClientMessage*, "GameLift", "IGameLiftServerToClientMessage");
