#pragma once
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLightWithId_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightWithId.get_color
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::TubeBloomPrePassLightWithId::*)()>(
    &::GlobalNamespace::TubeBloomPrePassLightWithId::get_color)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2114030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightWithId*>::get(),
                                                                               "get_color", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightWithId.ColorWasSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightWithId::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::TubeBloomPrePassLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2114050;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightWithId*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightWithId*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightWithId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightWithId::*)()>(&::GlobalNamespace::TubeBloomPrePassLightWithId::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21140a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightWithId*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TubeBloomPrePassLight*& GlobalNamespace::TubeBloomPrePassLightWithId::__get__tubeBloomPrePassLight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tubeBloomPrePassLight;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TubeBloomPrePassLight*> const& GlobalNamespace::TubeBloomPrePassLightWithId::__get__tubeBloomPrePassLight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tubeBloomPrePassLight;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightWithId::__set__tubeBloomPrePassLight(::GlobalNamespace::TubeBloomPrePassLight* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tubeBloomPrePassLight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::TubeBloomPrePassLightWithId::__get__setOnlyOnce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setOnlyOnce;
}
constexpr bool const& GlobalNamespace::TubeBloomPrePassLightWithId::__get__setOnlyOnce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setOnlyOnce;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightWithId::__set__setOnlyOnce(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setOnlyOnce = value;
}
constexpr bool& GlobalNamespace::TubeBloomPrePassLightWithId::__get__setColorOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setColorOnly;
}
constexpr bool const& GlobalNamespace::TubeBloomPrePassLightWithId::__get__setColorOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setColorOnly;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightWithId::__set__setColorOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setColorOnly = value;
}
inline ::UnityEngine::Color GlobalNamespace::TubeBloomPrePassLightWithId::get_color() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightWithId*>::get(),
                                                                             "get_color", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void GlobalNamespace::TubeBloomPrePassLightWithId::ColorWasSet(::UnityEngine::Color color) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightWithId*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline ::GlobalNamespace::TubeBloomPrePassLightWithId* GlobalNamespace::TubeBloomPrePassLightWithId::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TubeBloomPrePassLightWithId*>());
}
inline void GlobalNamespace::TubeBloomPrePassLightWithId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightWithId*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TubeBloomPrePassLightWithId::TubeBloomPrePassLightWithId() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
