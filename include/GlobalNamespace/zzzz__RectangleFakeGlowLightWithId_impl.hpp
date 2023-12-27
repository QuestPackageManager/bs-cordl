#pragma once
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RectangleFakeGlowLightWithId_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__RectangleFakeGlow_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RectangleFakeGlowLightWithId.get_color
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::RectangleFakeGlowLightWithId::*)()>(
    &::GlobalNamespace::RectangleFakeGlowLightWithId::get_color)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23b5220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RectangleFakeGlowLightWithId*>::get(),
                                                                               "get_color", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RectangleFakeGlowLightWithId.ColorWasSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RectangleFakeGlowLightWithId::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::RectangleFakeGlowLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23b5240;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RectangleFakeGlowLightWithId*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RectangleFakeGlowLightWithId*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RectangleFakeGlowLightWithId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RectangleFakeGlowLightWithId::*)()>(
    &::GlobalNamespace::RectangleFakeGlowLightWithId::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23b526c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RectangleFakeGlowLightWithId*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::RectangleFakeGlowLightWithId::__get__minAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minAlpha;
}
constexpr float_t const& GlobalNamespace::RectangleFakeGlowLightWithId::__get__minAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minAlpha;
}
constexpr void GlobalNamespace::RectangleFakeGlowLightWithId::__set__minAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____minAlpha = value;
}
constexpr float_t& GlobalNamespace::RectangleFakeGlowLightWithId::__get__alphaMul() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____alphaMul;
}
constexpr float_t const& GlobalNamespace::RectangleFakeGlowLightWithId::__get__alphaMul() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____alphaMul;
}
constexpr void GlobalNamespace::RectangleFakeGlowLightWithId::__set__alphaMul(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____alphaMul = value;
}
constexpr ::GlobalNamespace::RectangleFakeGlow*& GlobalNamespace::RectangleFakeGlowLightWithId::__get__rectangleFakeGlow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rectangleFakeGlow;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RectangleFakeGlow*> const& GlobalNamespace::RectangleFakeGlowLightWithId::__get__rectangleFakeGlow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rectangleFakeGlow;
}
constexpr void GlobalNamespace::RectangleFakeGlowLightWithId::__set__rectangleFakeGlow(::GlobalNamespace::RectangleFakeGlow* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rectangleFakeGlow)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Color GlobalNamespace::RectangleFakeGlowLightWithId::get_color() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RectangleFakeGlowLightWithId*>::get(),
                                                                             "get_color", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void GlobalNamespace::RectangleFakeGlowLightWithId::ColorWasSet(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RectangleFakeGlowLightWithId*>::get(), "ColorWasSet",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline ::GlobalNamespace::RectangleFakeGlowLightWithId* GlobalNamespace::RectangleFakeGlowLightWithId::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RectangleFakeGlowLightWithId*>());
}
inline void GlobalNamespace::RectangleFakeGlowLightWithId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RectangleFakeGlowLightWithId*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RectangleFakeGlowLightWithId::RectangleFakeGlowLightWithId() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
