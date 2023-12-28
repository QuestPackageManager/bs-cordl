#pragma once
#include "GlobalNamespace/zzzz__MaterialPropertyBlockAnimator_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockFloatCurve_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockFloatCurve.SetProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockFloatCurve::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockFloatCurve::SetProperty)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x21150a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockFloatCurve*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockFloatCurve*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockFloatCurve._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockFloatCurve::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockFloatCurve::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2115140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockFloatCurve*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::MaterialPropertyBlockFloatCurve::__get__curve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curve;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::MaterialPropertyBlockFloatCurve::__get__curve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curve;
}
constexpr void GlobalNamespace::MaterialPropertyBlockFloatCurve::__set__curve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____curve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MaterialPropertyBlockFloatCurve::__get__valueMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueMultiplier;
}
constexpr float_t const& GlobalNamespace::MaterialPropertyBlockFloatCurve::__get__valueMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueMultiplier;
}
constexpr void GlobalNamespace::MaterialPropertyBlockFloatCurve::__set__valueMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____valueMultiplier = value;
}
constexpr float_t& GlobalNamespace::MaterialPropertyBlockFloatCurve::__get__speedMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____speedMultiplier;
}
constexpr float_t const& GlobalNamespace::MaterialPropertyBlockFloatCurve::__get__speedMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____speedMultiplier;
}
constexpr void GlobalNamespace::MaterialPropertyBlockFloatCurve::__set__speedMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____speedMultiplier = value;
}
inline void GlobalNamespace::MaterialPropertyBlockFloatCurve::SetProperty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockFloatCurve*>::get(),
                                                                             "SetProperty", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialPropertyBlockFloatCurve* GlobalNamespace::MaterialPropertyBlockFloatCurve::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MaterialPropertyBlockFloatCurve*>());
}
inline void GlobalNamespace::MaterialPropertyBlockFloatCurve::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockFloatCurve*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialPropertyBlockFloatCurve::MaterialPropertyBlockFloatCurve() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
