#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StaticEnvironmentLights_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StaticEnvironmentLights.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StaticEnvironmentLights::*)()>(&::GlobalNamespace::StaticEnvironmentLights::Awake)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x23b76fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticEnvironmentLights*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StaticEnvironmentLights._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StaticEnvironmentLights::*)()>(&::GlobalNamespace::StaticEnvironmentLights::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b7790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticEnvironmentLights*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>& GlobalNamespace::StaticEnvironmentLights::__get__lightColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightColors;
}
constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> const& GlobalNamespace::StaticEnvironmentLights::__get__lightColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightColors;
}
constexpr void GlobalNamespace::StaticEnvironmentLights::__set__lightColors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightColors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>& GlobalNamespace::StaticEnvironmentLights::__get__materials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____materials;
}
constexpr ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> const& GlobalNamespace::StaticEnvironmentLights::__get__materials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____materials;
}
constexpr void GlobalNamespace::StaticEnvironmentLights::__set__materials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::StaticEnvironmentLights::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticEnvironmentLights*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::StaticEnvironmentLights* GlobalNamespace::StaticEnvironmentLights::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::StaticEnvironmentLights*>());
}
inline void GlobalNamespace::StaticEnvironmentLights::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticEnvironmentLights*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StaticEnvironmentLights::StaticEnvironmentLights() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
