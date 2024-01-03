#pragma once
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_impl.hpp"
#include "GlobalNamespace/zzzz__PointLightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__PointLight_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PointLightWithIds.ColorWasSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PointLightWithIds::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::PointLightWithIds::ColorWasSet)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2112910;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PointLightWithIds*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PointLightWithIds*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PointLightWithIds._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PointLightWithIds::*)()>(&::GlobalNamespace::PointLightWithIds::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2112930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PointLightWithIds*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PointLight*& GlobalNamespace::PointLightWithIds::__get__pointLight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointLight;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PointLight*> const& GlobalNamespace::PointLightWithIds::__get__pointLight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointLight;
}
constexpr void GlobalNamespace::PointLightWithIds::__set__pointLight(::GlobalNamespace::PointLight* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pointLight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PointLightWithIds::ColorWasSet(::UnityEngine::Color color) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PointLightWithIds*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline ::GlobalNamespace::PointLightWithIds* GlobalNamespace::PointLightWithIds::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PointLightWithIds*>());
}
inline void GlobalNamespace::PointLightWithIds::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PointLightWithIds*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PointLightWithIds::PointLightWithIds() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
