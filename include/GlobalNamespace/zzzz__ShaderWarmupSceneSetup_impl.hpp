#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__ShaderWarmupSceneSetup_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ShaderWarmupSceneSetup.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShaderWarmupSceneSetup::*)()>(&::GlobalNamespace::ShaderWarmupSceneSetup::InstallBindings)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x241ace0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderWarmupSceneSetup*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderWarmupSceneSetup*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShaderWarmupSceneSetup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShaderWarmupSceneSetup::*)()>(&::GlobalNamespace::ShaderWarmupSceneSetup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x241ad98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderWarmupSceneSetup*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO>& GlobalNamespace::ShaderWarmupSceneSetup::__cordl_internal_get__sharedWarmupColorScheme() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sharedWarmupColorScheme;
}
constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO> const& GlobalNamespace::ShaderWarmupSceneSetup::__cordl_internal_get__sharedWarmupColorScheme() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sharedWarmupColorScheme;
}
constexpr void GlobalNamespace::ShaderWarmupSceneSetup::__cordl_internal_set__sharedWarmupColorScheme(::UnityW<::GlobalNamespace::ColorSchemeSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sharedWarmupColorScheme)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ShaderWarmupSceneSetup::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderWarmupSceneSetup*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ShaderWarmupSceneSetup* GlobalNamespace::ShaderWarmupSceneSetup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ShaderWarmupSceneSetup*>());
}
inline void GlobalNamespace::ShaderWarmupSceneSetup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderWarmupSceneSetup*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShaderWarmupSceneSetup::ShaderWarmupSceneSetup() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
