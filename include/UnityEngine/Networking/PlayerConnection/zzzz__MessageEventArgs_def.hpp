#pragma once
// IWYU pragma private; include "UnityEngine/Networking/PlayerConnection/MessageEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageEventArgs)
// Forward declare root types
namespace UnityEngine::Networking::PlayerConnection {
class MessageEventArgs;
}
// Write type traits
MARK_REF_T(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*, "UnityEngine.Networking.PlayerConnection", "MessageEventArgs");
// Dependencies System.Object
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// CS Name: UnityEngine.Networking.PlayerConnection.MessageEventArgs
class CORDL_TYPE MessageEventArgs : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::ArrayW<uint8_t> data;

  /// @brief Field playerId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_playerId, put = __cordl_internal_set_playerId)) int32_t playerId;

  static inline ::UnityEngine::Networking::PlayerConnection::MessageEventArgs* New_ctor();

  constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_data() const;

  constexpr ::ArrayW<uint8_t>& __cordl_internal_get_data();

  constexpr int32_t const& __cordl_internal_get_playerId() const;

  constexpr int32_t& __cordl_internal_get_playerId();

  constexpr void __cordl_internal_set_data(::ArrayW<uint8_t> value);

  constexpr void __cordl_internal_set_playerId(int32_t value);

  /// @brief Method .ctor, addr 0x6afe7c8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageEventArgs(MessageEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageEventArgs(MessageEventArgs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10621 };

  /// @brief Field playerId, offset: 0x10, size: 0x4, def value: None
  int32_t ___playerId;

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t> ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::MessageEventArgs, ___playerId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::MessageEventArgs, ___data) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Networking::PlayerConnection::MessageEventArgs) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Networking::PlayerConnection
