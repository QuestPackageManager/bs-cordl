#pragma once
// IWYU pragma private; include "GlobalNamespace/IMultiplayerSessionMessageProcessor_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
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
template <typename TMessageType, typename TConnectedPlayer>
  requires(::cordl_internals::type_constraint<TMessageType, ::System::IConvertible*> && ::cordl_internals::value_type_constraint<TMessageType> &&
           ::cordl_internals::default_constructor_constraint<TMessageType> && ::cordl_internals::type_constraint<TConnectedPlayer, ::GlobalNamespace::IConnectedPlayer*>)
class IMultiplayerSessionMessageProcessor_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::IMultiplayerSessionMessageProcessor_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::IMultiplayerSessionMessageProcessor_2, "", "IMultiplayerSessionMessageProcessor`2");
// Dependencies IConnectedPlayer, LiteNetLib.Utils.INetSerializable, System.IConvertible
namespace GlobalNamespace {
// cpp template
template <typename TMessageType, typename TConnectedPlayer>
  requires(::cordl_internals::type_constraint<TMessageType, ::System::IConvertible*> && ::cordl_internals::value_type_constraint<TMessageType> &&
           ::cordl_internals::default_constructor_constraint<TMessageType> && ::cordl_internals::type_constraint<TConnectedPlayer, ::GlobalNamespace::IConnectedPlayer*>)
// Is value type: false
// CS Name: IMultiplayerSessionMessageProcessor`2<TMessageType,TConnectedPlayer>
class CORDL_TYPE IMultiplayerSessionMessageProcessor_2 {
public:
  // Declarations
  /// @brief Method RegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::LiteNetLib::Utils::INetSerializable*>)
  inline void RegisterCallback(TMessageType serializerType, ::System::Action_2<T, TConnectedPlayer>* callback, ::System::Func_1<T>* constructor);

  /// @brief Method RegisterSerializer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RegisterSerializer(TMessageType serializerType, ::GlobalNamespace::INetworkPacketSubSerializer_1<TConnectedPlayer>* subSerializer);

  /// @brief Method UnregisterCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::LiteNetLib::Utils::INetSerializable*>)
  inline void UnregisterCallback(TMessageType serializerType);

  /// @brief Method UnregisterSerializer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UnregisterSerializer(TMessageType serializerType, ::GlobalNamespace::INetworkPacketSubSerializer_1<TConnectedPlayer>* subSerializer);

  // Ctor Parameters [CppParam { name: "", ty: "IMultiplayerSessionMessageProcessor_2", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMultiplayerSessionMessageProcessor_2(IMultiplayerSessionMessageProcessor_2const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18189 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
