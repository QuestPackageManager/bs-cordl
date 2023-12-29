#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGNet/Core/Messages/zzzz__BaseAcknowledgeMessage_def.hpp"
CORDL_MODULE_EXPORT(GameLiftMessageReceivedAcknowledge)
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
namespace GameLift {
class IGameLiftMessage;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
}
// Forward declare root types
namespace GameLift {
class GameLiftMessageReceivedAcknowledge;
}
// Write type traits
MARK_REF_PTR_T(::GameLift::GameLiftMessageReceivedAcknowledge);
// Type: GameLift::GameLiftMessageReceivedAcknowledge
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 21, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GameLift {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12937))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12928))
// CS Name: ::GameLift::GameLiftMessageReceivedAcknowledge*
class CORDL_TYPE GameLiftMessageReceivedAcknowledge : public ::BGNet::Core::Messages::BaseAcknowledgeMessage {
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

  /// @brief Method get_pool addr 0xdd8120 size 0x40 virtual false final false
  static inline ::GlobalNamespace::PacketPool_1<::GameLift::GameLiftMessageReceivedAcknowledge*>* get_pool();

  /// @brief Method Release addr 0xdd8160 size 0x54 virtual true final false
  inline void Release();

  static inline ::GameLift::GameLiftMessageReceivedAcknowledge* New_ctor();

  /// @brief Method .ctor addr 0xdd81b4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GameLiftMessageReceivedAcknowledge", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameLiftMessageReceivedAcknowledge(GameLiftMessageReceivedAcknowledge&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameLiftMessageReceivedAcknowledge", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameLiftMessageReceivedAcknowledge(GameLiftMessageReceivedAcknowledge const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameLiftMessageReceivedAcknowledge();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameLift::GameLiftMessageReceivedAcknowledge, 0x18>, "Size mismatch!");

} // namespace GameLift
NEED_NO_BOX(::GameLift::GameLiftMessageReceivedAcknowledge);
DEFINE_IL2CPP_ARG_TYPE(::GameLift::GameLiftMessageReceivedAcknowledge*, "GameLift", "GameLiftMessageReceivedAcknowledge");
