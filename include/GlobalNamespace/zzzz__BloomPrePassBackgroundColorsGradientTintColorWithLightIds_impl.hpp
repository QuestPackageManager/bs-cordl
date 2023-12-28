#pragma once
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundColorsGradientTintColorWithLightIds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundColorsGradient_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds.ColorWasSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::ColorWasSet)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x210e958;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x210e978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BloomPrePassBackgroundColorsGradient*& GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::__get__bloomPrePassBackgroundColorsGradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassBackgroundColorsGradient;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassBackgroundColorsGradient*> const&
GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::__get__bloomPrePassBackgroundColorsGradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassBackgroundColorsGradient;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::__set__bloomPrePassBackgroundColorsGradient(::GlobalNamespace::BloomPrePassBackgroundColorsGradient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomPrePassBackgroundColorsGradient)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::ColorWasSet(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds*>::get(), "ColorWasSet",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline ::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds* GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds*>());
}
inline void GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::BloomPrePassBackgroundColorsGradientTintColorWithLightIds() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
