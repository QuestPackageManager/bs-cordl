#pragma once
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundColorsGradientTintColorWithLightId_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundColorsGradient_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId.ColorWasSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::ColorWasSet)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x210e8b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x210e928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BloomPrePassBackgroundColorsGradient*& GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::__get__bloomPrePassBackgroundColorsGradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bloomPrePassBackgroundColorsGradient;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassBackgroundColorsGradient*> const&
GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::__get__bloomPrePassBackgroundColorsGradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bloomPrePassBackgroundColorsGradient;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::__set__bloomPrePassBackgroundColorsGradient(::GlobalNamespace::BloomPrePassBackgroundColorsGradient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomPrePassBackgroundColorsGradient)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::__get__useGrayscale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____useGrayscale;
}
constexpr bool const& GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::__get__useGrayscale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____useGrayscale;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::__set__useGrayscale(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____useGrayscale = value;
}
constexpr float_t& GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::__get_grayscaleFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___grayscaleFactor;
}
constexpr float_t const& GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::__get_grayscaleFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___grayscaleFactor;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::__set_grayscaleFactor(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___grayscaleFactor = value;
}
inline void GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::ColorWasSet(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId*>::get(), "ColorWasSet",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline ::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId* GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId*>());
}
inline void GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::BloomPrePassBackgroundColorsGradientTintColorWithLightId() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
