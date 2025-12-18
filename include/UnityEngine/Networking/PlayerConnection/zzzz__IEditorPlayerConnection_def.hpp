#pragma once
// IWYU pragma private; include "UnityEngine/Networking/PlayerConnection/IEditorPlayerConnection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IEditorPlayerConnection)
namespace System {
struct Guid;
}
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
namespace UnityEngine::Networking::PlayerConnection {
class MessageEventArgs;
}
// Forward declare root types
namespace UnityEngine::Networking::PlayerConnection {
class IEditorPlayerConnection;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection);
// Dependencies
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// CS Name: UnityEngine.Networking.PlayerConnection.IEditorPlayerConnection
class CORDL_TYPE IEditorPlayerConnection {
public:
  // Declarations
  /// @brief Method Register, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Register(::System::Guid messageId, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* callback);

  /// @brief Method RegisterConnection, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RegisterConnection(::UnityEngine::Events::UnityAction_1<int32_t>* callback);

  /// @brief Method RegisterDisconnection, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RegisterDisconnection(::UnityEngine::Events::UnityAction_1<int32_t>* callback);

  /// @brief Method Send, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Send(::System::Guid messageId, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  // Ctor Parameters [CppParam { name: "", ty: "IEditorPlayerConnection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEditorPlayerConnection(IEditorPlayerConnection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10627 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Networking::PlayerConnection
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*, "UnityEngine.Networking.PlayerConnection", "IEditorPlayerConnection");
