#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageEventArgs)
// Forward declare root types
namespace UnityEngine::Networking::PlayerConnection {
class MessageEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::MessageEventArgs);
// Type: UnityEngine.Networking.PlayerConnection::MessageEventArgs
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10312))
// CS Name: ::UnityEngine.Networking.PlayerConnection::MessageEventArgs*
class CORDL_TYPE MessageEventArgs : public ::System::Object {
public:
  // Declarations
  /// @brief Field playerId, offset 0x10, size 0x4
  __declspec(property(get = __get_playerId, put = __set_playerId)) int32_t playerId;

  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __get_data, put = __set_data))::ArrayW<uint8_t, ::Array<uint8_t>*> data;

  constexpr int32_t& __get_playerId();

  constexpr int32_t const& __get_playerId() const;

  constexpr void __set_playerId(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_data();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_data() const;

  constexpr void __set_data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::UnityEngine::Networking::PlayerConnection::MessageEventArgs* New_ctor();

  /// @brief Method .ctor, addr 0x2ce75bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MessageEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageEventArgs(MessageEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageEventArgs(MessageEventArgs const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageEventArgs();

public:
  /// @brief Field playerId, offset: 0x10, size: 0x4, def value: None
  int32_t ___playerId;

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::MessageEventArgs, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::MessageEventArgs, ___playerId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::PlayerConnection::MessageEventArgs, ___data) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Networking::PlayerConnection
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::MessageEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*, "UnityEngine.Networking.PlayerConnection", "MessageEventArgs");
