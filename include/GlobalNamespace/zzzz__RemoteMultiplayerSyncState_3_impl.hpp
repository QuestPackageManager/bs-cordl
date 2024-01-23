#pragma once
#include "GlobalNamespace/zzzz__MultiplayerSyncState_3_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteMultiplayerSyncState_3_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RemoteStateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::IConnectedPlayer*& GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>::__cordl_internal_get__player() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____player;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const&
GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>::__cordl_internal_get__player() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____player;
}
template <typename TStateTable, typename TType, typename TState>
constexpr void GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>::__cordl_internal_set__player(::GlobalNamespace::IConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____player)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>*& GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>::__cordl_internal_get__stateBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateBuffer;
}
template <typename TStateTable, typename TType, typename TState>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>*> const&
GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>::__cordl_internal_get__stateBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateBuffer;
}
template <typename TStateTable, typename TType, typename TState>
constexpr void GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>::__cordl_internal_set__stateBuffer(::GlobalNamespace::RemoteStateBuffer_3<TStateTable, TType, TState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stateBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TStateTable, typename TType, typename TState>
inline ::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>* GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>::get_stateBuffer() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>*, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState> inline ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>::get_player() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer*, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState>
template <typename T>
inline void GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>::UpdateState(T serializable) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>::get(),
                                               "UpdateState", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializable);
}
template <typename TStateTable, typename TType, typename TState>
template <typename T>
inline void GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>::UpdateDelta(T serializable) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>::get(),
                                               "UpdateDelta", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializable);
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable,TType,TState>* (default: nullptr)
template <typename TStateTable, typename TType, typename TState>
inline ::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*
GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>::New_ctor(::GlobalNamespace::IConnectedPlayer* player, int32_t size,
                                                                                    ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                                                                                    ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>* smoother) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>(player, size, interpolator, smoother));
}
/// @param smoother: ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable,TType,TState>* (default: nullptr)
template <typename TStateTable, typename TType, typename TState>
inline void GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>::_ctor(::GlobalNamespace::IConnectedPlayer* player, int32_t size,
                                                                                             ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>* interpolator,
                                                                                             ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>* smoother) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<TStateTable, TType, TState>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<TStateTable, TType, TState>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player, size, interpolator, smoother);
}
// Ctor Parameters []
template <typename TStateTable, typename TType, typename TState> constexpr ::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>::RemoteMultiplayerSyncState_3() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
