#pragma once
// IWYU pragma private; include "GlobalNamespace/IMultiplayerSessionMessageProcessor_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMultiplayerSessionMessageProcessor_1)
namespace GlobalNamespace {
class IConnectedPlayer;
}
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
template <typename TMessageType> class IMultiplayerSessionMessageProcessor_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::IMultiplayerSessionMessageProcessor_1);
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename TMessageType>
// Is value type: false
// CS Name: IMultiplayerSessionMessageProcessor`1<TMessageType>
class CORDL_TYPE IMultiplayerSessionMessageProcessor_1 {
public:
  // Declarations
  /// @brief Method RegisterCallback, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline void RegisterCallback(TMessageType serializerType, ::System::Action_2<T, ::GlobalNamespace::IConnectedPlayer*>* callback, ::System::Func_1<T>* constructor);

  /// @brief Method RegisterSerializer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RegisterSerializer(TMessageType serializerType, ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>* subSerializer);

  /// @brief Method UnregisterCallback, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline void UnregisterCallback(TMessageType serializerType);

  /// @brief Method UnregisterSerializer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UnregisterSerializer(TMessageType serializerType, ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>* subSerializer);

  // Ctor Parameters [CppParam { name: "", ty: "IMultiplayerSessionMessageProcessor_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMultiplayerSessionMessageProcessor_1(IMultiplayerSessionMessageProcessor_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18144 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::IMultiplayerSessionMessageProcessor_1, "", "IMultiplayerSessionMessageProcessor`1");
