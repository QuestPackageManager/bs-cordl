#pragma once
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_impl.hpp"
#include "GlobalNamespace/zzzz__MixedLightsColorSetterRuntimeLightWithIds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockColorSetter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds.ColorWasSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::ColorWasSet)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2111e74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::*)()>(
    &::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2111ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MaterialPropertyBlockColorSetter*& GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::__get__materialPropertyBlockColorSetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockColorSetter;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockColorSetter*> const&
GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::__get__materialPropertyBlockColorSetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockColorSetter;
}
constexpr void GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::__set__materialPropertyBlockColorSetter(::GlobalNamespace::MaterialPropertyBlockColorSetter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialPropertyBlockColorSetter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::__get__lightMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightMultiplier;
}
constexpr float_t const& GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::__get__lightMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightMultiplier;
}
constexpr void GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::__set__lightMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightMultiplier = value;
}
inline void GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::ColorWasSet(::UnityEngine::Color color) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline ::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds* GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds*>());
}
inline void GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::MixedLightsColorSetterRuntimeLightWithIds() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
