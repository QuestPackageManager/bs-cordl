#pragma once
#include "GlobalNamespace/zzzz__RuntimeLightWithLightGroupIds_impl.hpp"
#include "GlobalNamespace/zzzz__DirectionalLightWithLightGroupIds_def.hpp"
#include "GlobalNamespace/zzzz__DirectionalLight_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithLightGroupIds.ColorWasSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DirectionalLightWithLightGroupIds::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::DirectionalLightWithLightGroupIds::ColorWasSet)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x210f1f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithLightGroupIds*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithLightGroupIds*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithLightGroupIds._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DirectionalLightWithLightGroupIds::*)()>(
    &::GlobalNamespace::DirectionalLightWithLightGroupIds::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210f214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithLightGroupIds*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::DirectionalLight*& GlobalNamespace::DirectionalLightWithLightGroupIds::__get__directionalLight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLight;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DirectionalLight*> const& GlobalNamespace::DirectionalLightWithLightGroupIds::__get__directionalLight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLight;
}
constexpr void GlobalNamespace::DirectionalLightWithLightGroupIds::__set__directionalLight(::GlobalNamespace::DirectionalLight* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____directionalLight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::DirectionalLightWithLightGroupIds::ColorWasSet(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithLightGroupIds*>::get(), "ColorWasSet",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline ::GlobalNamespace::DirectionalLightWithLightGroupIds* GlobalNamespace::DirectionalLightWithLightGroupIds::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DirectionalLightWithLightGroupIds*>());
}
inline void GlobalNamespace::DirectionalLightWithLightGroupIds::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithLightGroupIds*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DirectionalLightWithLightGroupIds::DirectionalLightWithLightGroupIds() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
