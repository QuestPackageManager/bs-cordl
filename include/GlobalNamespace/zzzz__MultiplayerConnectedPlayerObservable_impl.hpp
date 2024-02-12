#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerObservable_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerObservable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerObservable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerObservable::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerObservable::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23a4d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerObservable*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerObservable.get_offsetSyncTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::MultiplayerConnectedPlayerObservable::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerObservable::get_offsetSyncTime)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x23a4d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerObservable*>::get(),
                                                                               "get_offsetSyncTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerObservable.get_isFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerConnectedPlayerObservable::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerObservable::get_isFailed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23a4de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerObservable*>::get(),
                                                                               "get_isFailed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerObservable"
constexpr GlobalNamespace::MultiplayerConnectedPlayerObservable::operator ::GlobalNamespace::IMultiplayerObservable*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerObservable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMultiplayerObservable"
constexpr ::GlobalNamespace::IMultiplayerObservable* GlobalNamespace::MultiplayerConnectedPlayerObservable::i___GlobalNamespace__IMultiplayerObservable() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerObservable*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::IConnectedPlayer*& GlobalNamespace::MultiplayerConnectedPlayerObservable::__cordl_internal_get__connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& GlobalNamespace::MultiplayerConnectedPlayerObservable::__cordl_internal_get__connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerObservable::__cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerObservable* GlobalNamespace::MultiplayerConnectedPlayerObservable::New_ctor(::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerConnectedPlayerObservable*>(connectedPlayer));
}
inline void GlobalNamespace::MultiplayerConnectedPlayerObservable::_ctor(::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerObservable*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connectedPlayer);
}
inline int64_t GlobalNamespace::MultiplayerConnectedPlayerObservable::get_offsetSyncTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerObservable*>::get(),
                                                                             "get_offsetSyncTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerConnectedPlayerObservable::get_isFailed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerObservable*>::get(),
                                                                             "get_isFailed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerObservable::MultiplayerConnectedPlayerObservable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
