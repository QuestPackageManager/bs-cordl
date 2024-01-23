#pragma once
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_impl.hpp"
#include "GlobalNamespace/zzzz__SteamNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SteamNetworkPlayerModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SteamNetworkPlayerModel::*)()>(&::GlobalNamespace::SteamNetworkPlayerModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2639c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamNetworkPlayerModel*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModel"
constexpr GlobalNamespace::SteamNetworkPlayerModel::operator ::GlobalNamespace::INetworkPlayerModel*() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INetworkPlayerModel"
constexpr ::GlobalNamespace::INetworkPlayerModel* GlobalNamespace::SteamNetworkPlayerModel::i___GlobalNamespace__INetworkPlayerModel() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModel*>(static_cast<void*>(this));
}
inline ::GlobalNamespace::SteamNetworkPlayerModel* GlobalNamespace::SteamNetworkPlayerModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SteamNetworkPlayerModel*>());
}
inline void GlobalNamespace::SteamNetworkPlayerModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamNetworkPlayerModel*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SteamNetworkPlayerModel::SteamNetworkPlayerModel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
