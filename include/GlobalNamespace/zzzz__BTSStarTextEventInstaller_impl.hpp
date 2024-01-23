#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__BTSStarTextEventInstaller_def.hpp"
#include "GlobalNamespace/zzzz__BTSStarTextEffectController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BTSStarTextEventInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSStarTextEventInstaller::*)()>(
    &::GlobalNamespace::BTSStarTextEventInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x221dc9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSStarTextEventInstaller*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSStarTextEventInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSStarTextEventInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSStarTextEventInstaller::*)()>(&::GlobalNamespace::BTSStarTextEventInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221dd20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSStarTextEventInstaller*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BTSStarTextEffectController>& GlobalNamespace::BTSStarTextEventInstaller::__cordl_internal_get__btsStarTextEffectController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____btsStarTextEffectController;
}
constexpr ::UnityW<::GlobalNamespace::BTSStarTextEffectController> const& GlobalNamespace::BTSStarTextEventInstaller::__cordl_internal_get__btsStarTextEffectController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____btsStarTextEffectController;
}
constexpr void GlobalNamespace::BTSStarTextEventInstaller::__cordl_internal_set__btsStarTextEffectController(::UnityW<::GlobalNamespace::BTSStarTextEffectController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____btsStarTextEffectController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BTSStarTextEventInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSStarTextEventInstaller*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BTSStarTextEventInstaller* GlobalNamespace::BTSStarTextEventInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BTSStarTextEventInstaller*>());
}
inline void GlobalNamespace::BTSStarTextEventInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSStarTextEventInstaller*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BTSStarTextEventInstaller::BTSStarTextEventInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
