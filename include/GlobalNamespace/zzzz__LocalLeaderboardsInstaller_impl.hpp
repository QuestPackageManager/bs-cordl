#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsInstaller_def.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsSettingsSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsInstaller::*)()>(
    &::GlobalNamespace::LocalLeaderboardsInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x25ff844;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsInstaller*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsInstaller::*)()>(&::GlobalNamespace::LocalLeaderboardsInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ff8f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsInstaller*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LocalLeaderboardsSettingsSO>& GlobalNamespace::LocalLeaderboardsInstaller::__cordl_internal_get__localLeaderboardsSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localLeaderboardsSettings;
}
constexpr ::UnityW<::GlobalNamespace::LocalLeaderboardsSettingsSO> const& GlobalNamespace::LocalLeaderboardsInstaller::__cordl_internal_get__localLeaderboardsSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localLeaderboardsSettings;
}
constexpr void GlobalNamespace::LocalLeaderboardsInstaller::__cordl_internal_set__localLeaderboardsSettings(::UnityW<::GlobalNamespace::LocalLeaderboardsSettingsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localLeaderboardsSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LocalLeaderboardsInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsInstaller*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalLeaderboardsInstaller* GlobalNamespace::LocalLeaderboardsInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LocalLeaderboardsInstaller*>());
}
inline void GlobalNamespace::LocalLeaderboardsInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsInstaller*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalLeaderboardsInstaller::LocalLeaderboardsInstaller() {}
