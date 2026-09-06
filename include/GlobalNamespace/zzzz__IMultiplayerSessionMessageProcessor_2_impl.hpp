#pragma once
// IWYU pragma private; include "GlobalNamespace/IMultiplayerSessionMessageProcessor_2.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_impl.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_impl.hpp"
#include "System/zzzz__IConvertible_impl.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionMessageProcessor_2_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPacketSubSerializer_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
template <typename TMessageType, typename TConnectedPlayer>
  requires(::cordl_internals::type_constraint<TMessageType, ::System::IConvertible*> && ::cordl_internals::value_type_constraint<TMessageType> &&
           ::cordl_internals::default_constructor_constraint<TMessageType> && ::cordl_internals::type_constraint<TConnectedPlayer, ::GlobalNamespace::IConnectedPlayer*>)
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::LiteNetLib::Utils::INetSerializable*>)
inline void GlobalNamespace::IMultiplayerSessionMessageProcessor_2<TMessageType, TConnectedPlayer>::RegisterCallback(TMessageType serializerType, ::System::Action_2<T, TConnectedPlayer>* callback,
                                                                                                                     ::System::Func_1<T>* constructor) {
  auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<TMessageType, TConnectedPlayer>*>(), 0 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializerType, callback, constructor);
}
template <typename TMessageType, typename TConnectedPlayer>
  requires(::cordl_internals::type_constraint<TMessageType, ::System::IConvertible*> && ::cordl_internals::value_type_constraint<TMessageType> &&
           ::cordl_internals::default_constructor_constraint<TMessageType> && ::cordl_internals::type_constraint<TConnectedPlayer, ::GlobalNamespace::IConnectedPlayer*>)
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::LiteNetLib::Utils::INetSerializable*>)
inline void GlobalNamespace::IMultiplayerSessionMessageProcessor_2<TMessageType, TConnectedPlayer>::UnregisterCallback(TMessageType serializerType) {
  auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<TMessageType, TConnectedPlayer>*>(), 1 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializerType);
}
template <typename TMessageType, typename TConnectedPlayer>
  requires(::cordl_internals::type_constraint<TMessageType, ::System::IConvertible*> && ::cordl_internals::value_type_constraint<TMessageType> &&
           ::cordl_internals::default_constructor_constraint<TMessageType> && ::cordl_internals::type_constraint<TConnectedPlayer, ::GlobalNamespace::IConnectedPlayer*>)
inline void
GlobalNamespace::IMultiplayerSessionMessageProcessor_2<TMessageType, TConnectedPlayer>::RegisterSerializer(TMessageType serializerType,
                                                                                                           ::GlobalNamespace::INetworkPacketSubSerializer_1<TConnectedPlayer>* subSerializer) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<TMessageType, TConnectedPlayer>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializerType, subSerializer);
}
template <typename TMessageType, typename TConnectedPlayer>
  requires(::cordl_internals::type_constraint<TMessageType, ::System::IConvertible*> && ::cordl_internals::value_type_constraint<TMessageType> &&
           ::cordl_internals::default_constructor_constraint<TMessageType> && ::cordl_internals::type_constraint<TConnectedPlayer, ::GlobalNamespace::IConnectedPlayer*>)
inline void
GlobalNamespace::IMultiplayerSessionMessageProcessor_2<TMessageType, TConnectedPlayer>::UnregisterSerializer(TMessageType serializerType,
                                                                                                             ::GlobalNamespace::INetworkPacketSubSerializer_1<TConnectedPlayer>* subSerializer) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerSessionMessageProcessor_2<TMessageType, TConnectedPlayer>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializerType, subSerializer);
}
