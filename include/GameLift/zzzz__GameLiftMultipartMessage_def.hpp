#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGNet/Core/Messages/zzzz__BaseMultipartMessage_def.hpp"
CORDL_MODULE_EXPORT(GameLiftMultipartMessage)
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
}
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
// Forward declare root types
namespace GameLift {
class GameLiftMultipartMessage;
}
// Write type traits
MARK_REF_PTR_T(::GameLift::GameLiftMultipartMessage);
// Type: GameLift::GameLiftMultipartMessage
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GameLift {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12952))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12929))
// CS Name: ::GameLift::GameLiftMultipartMessage*
class CORDL_TYPE GameLiftMultipartMessage : public ::BGNet::Core::Messages::BaseMultipartMessage {
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

  /// @brief Method get_pool addr 0xdd81c4 size 0x40 virtual false final false
  static inline ::GlobalNamespace::PacketPool_1<::GameLift::GameLiftMultipartMessage*>* get_pool();

  /// @brief Method Release addr 0xdd8204 size 0x54 virtual true final false
  inline void Release();

  static inline ::GameLift::GameLiftMultipartMessage* New_ctor();

  /// @brief Method .ctor addr 0xdd8258 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GameLiftMultipartMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameLiftMultipartMessage(GameLiftMultipartMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameLiftMultipartMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameLiftMultipartMessage(GameLiftMultipartMessage const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameLiftMultipartMessage();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameLift::GameLiftMultipartMessage, 0x30>, "Size mismatch!");

} // namespace GameLift
NEED_NO_BOX(::GameLift::GameLiftMultipartMessage);
DEFINE_IL2CPP_ARG_TYPE(::GameLift::GameLiftMultipartMessage*, "GameLift", "GameLiftMultipartMessage");
