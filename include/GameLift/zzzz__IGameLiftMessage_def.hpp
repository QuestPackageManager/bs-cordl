#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGameLiftMessage)
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
namespace GameLift {
class IGameLiftMessage;
}
// Write type traits
MARK_REF_PTR_T(::GameLift::IGameLiftMessage);
// Type: GameLift::IGameLiftMessage
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GameLift {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12922))
// CS Name: ::GameLift::IGameLiftMessage*
class CORDL_TYPE IGameLiftMessage {
public:
  // Declarations
  /// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
  constexpr operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IGameLiftMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IGameLiftMessage(IGameLiftMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IGameLiftMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGameLiftMessage(IGameLiftMessage const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GameLift
NEED_NO_BOX(::GameLift::IGameLiftMessage);
DEFINE_IL2CPP_ARG_TYPE(::GameLift::IGameLiftMessage*, "GameLift", "IGameLiftMessage");
