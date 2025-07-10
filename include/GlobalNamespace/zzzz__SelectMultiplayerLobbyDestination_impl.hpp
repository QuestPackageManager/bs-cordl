#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectMultiplayerLobbyDestination.hpp"
#include "GlobalNamespace/zzzz__MenuDestination_impl.hpp"
#include "GlobalNamespace/zzzz__SelectMultiplayerLobbyDestination_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SelectMultiplayerLobbyDestination._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectMultiplayerLobbyDestination::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::SelectMultiplayerLobbyDestination::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26aef04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectMultiplayerLobbyDestination*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectMultiplayerLobbyDestination._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectMultiplayerLobbyDestination::*)(::StringW)>(
    &::GlobalNamespace::SelectMultiplayerLobbyDestination::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26aef30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectMultiplayerLobbyDestination*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::SelectMultiplayerLobbyDestination::__cordl_internal_get_lobbySecret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lobbySecret;
}
constexpr ::StringW const& GlobalNamespace::SelectMultiplayerLobbyDestination::__cordl_internal_get_lobbySecret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lobbySecret;
}
constexpr void GlobalNamespace::SelectMultiplayerLobbyDestination::__cordl_internal_set_lobbySecret(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lobbySecret)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::SelectMultiplayerLobbyDestination::__cordl_internal_get_lobbyCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lobbyCode;
}
constexpr ::StringW const& GlobalNamespace::SelectMultiplayerLobbyDestination::__cordl_internal_get_lobbyCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lobbyCode;
}
constexpr void GlobalNamespace::SelectMultiplayerLobbyDestination::__cordl_internal_set_lobbyCode(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lobbyCode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SelectMultiplayerLobbyDestination::_ctor(::StringW lobbySecret, ::StringW lobbyCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectMultiplayerLobbyDestination*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lobbySecret, lobbyCode);
}
inline void GlobalNamespace::SelectMultiplayerLobbyDestination::_ctor(::StringW lobbyCode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectMultiplayerLobbyDestination*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lobbyCode);
}
inline ::GlobalNamespace::SelectMultiplayerLobbyDestination* GlobalNamespace::SelectMultiplayerLobbyDestination::New_ctor(::StringW lobbySecret, ::StringW lobbyCode) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SelectMultiplayerLobbyDestination*>(lobbySecret, lobbyCode));
}
inline ::GlobalNamespace::SelectMultiplayerLobbyDestination* GlobalNamespace::SelectMultiplayerLobbyDestination::New_ctor(::StringW lobbyCode) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SelectMultiplayerLobbyDestination*>(lobbyCode));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectMultiplayerLobbyDestination::SelectMultiplayerLobbyDestination() {}
