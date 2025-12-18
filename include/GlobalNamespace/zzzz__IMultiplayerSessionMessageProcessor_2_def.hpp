#pragma once
// IWYU pragma private; include "GlobalNamespace/IMultiplayerSessionMessageProcessor_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMultiplayerSessionMessageProcessor_2)
namespace GlobalNamespace {
template <typename TData> class INetworkPacketSubSerializer_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TMessageType, typename TConnectedPlayer> class IMultiplayerSessionMessageProcessor_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::IMultiplayerSessionMessageProcessor_2);
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename TMessageType, typename TConnectedPlayer>
// Is value type: false
// CS Name: IMultiplayerSessionMessageProcessor`2<TMessageType,TConnectedPlayer>
class CORDL_TYPE IMultiplayerSessionMessageProcessor_2 {
public:
  // Declarations
  /// @brief Method RegisterCallback, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline void RegisterCallback(TMessageType serializerType, ::System::Action_2<T, TConnectedPlayer>* callback, ::System::Func_1<T>* constructor);

  /// @brief Method RegisterSerializer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RegisterSerializer(TMessageType serializerType, ::GlobalNamespace::INetworkPacketSubSerializer_1<TConnectedPlayer>* subSerializer);

  /// @brief Method UnregisterCallback, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline void UnregisterCallback(TMessageType serializerType);

  /// @brief Method UnregisterSerializer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UnregisterSerializer(TMessageType serializerType, ::GlobalNamespace::INetworkPacketSubSerializer_1<TConnectedPlayer>* subSerializer);

  // Ctor Parameters [CppParam { name: "", ty: "IMultiplayerSessionMessageProcessor_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMultiplayerSessionMessageProcessor_2(IMultiplayerSessionMessageProcessor_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18157 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::IMultiplayerSessionMessageProcessor_2, "", "IMultiplayerSessionMessageProcessor`2");
