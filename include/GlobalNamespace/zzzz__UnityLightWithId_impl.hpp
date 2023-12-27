#pragma once
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__UnityLightWithId_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnityLightWithId.get_color
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::UnityLightWithId::*)()>(&::GlobalNamespace::UnityLightWithId::get_color)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21140b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityLightWithId*>::get(), "get_color",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityLightWithId.ColorWasSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityLightWithId::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::UnityLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x21140cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityLightWithId*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityLightWithId*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityLightWithId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityLightWithId::*)()>(&::GlobalNamespace::UnityLightWithId::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2114118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityLightWithId*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Light*& GlobalNamespace::UnityLightWithId::__get__light() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____light;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Light*> const& GlobalNamespace::UnityLightWithId::__get__light() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____light;
}
constexpr void GlobalNamespace::UnityLightWithId::__set__light(::UnityEngine::Light* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____light)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::UnityLightWithId::__get__intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____intensity;
}
constexpr float_t const& GlobalNamespace::UnityLightWithId::__get__intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____intensity;
}
constexpr void GlobalNamespace::UnityLightWithId::__set__intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____intensity = value;
}
constexpr float_t& GlobalNamespace::UnityLightWithId::__get__minAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minAlpha;
}
constexpr float_t const& GlobalNamespace::UnityLightWithId::__get__minAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minAlpha;
}
constexpr void GlobalNamespace::UnityLightWithId::__set__minAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____minAlpha = value;
}
inline ::UnityEngine::Color GlobalNamespace::UnityLightWithId::get_color() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityLightWithId*>::get(), "get_color",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void GlobalNamespace::UnityLightWithId::ColorWasSet(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityLightWithId*>::get(), "ColorWasSet", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline ::GlobalNamespace::UnityLightWithId* GlobalNamespace::UnityLightWithId::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::UnityLightWithId*>());
}
inline void GlobalNamespace::UnityLightWithId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityLightWithId*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityLightWithId::UnityLightWithId() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
