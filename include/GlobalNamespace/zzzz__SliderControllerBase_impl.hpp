#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SliderControllerBase_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "GlobalNamespace/zzzz__CutoutAnimateEffect_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SliderControllerBase.AnimateCutout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderControllerBase::*)(float_t, float_t, float_t)>(
    &::GlobalNamespace::SliderControllerBase::AnimateCutout)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2391ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderControllerBase*>::get(), "AnimateCutout", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderControllerBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderControllerBase::*)()>(&::GlobalNamespace::SliderControllerBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23925e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderControllerBase*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MaterialPropertyBlockController*& GlobalNamespace::SliderControllerBase::__get__materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____materialPropertyBlockController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> const& GlobalNamespace::SliderControllerBase::__get__materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____materialPropertyBlockController;
}
constexpr void GlobalNamespace::SliderControllerBase::__set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialPropertyBlockController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::CutoutAnimateEffect*& GlobalNamespace::SliderControllerBase::__get__cutoutAnimateEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cutoutAnimateEffect;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CutoutAnimateEffect*> const& GlobalNamespace::SliderControllerBase::__get__cutoutAnimateEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cutoutAnimateEffect;
}
constexpr void GlobalNamespace::SliderControllerBase::__set__cutoutAnimateEffect(::GlobalNamespace::CutoutAnimateEffect* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cutoutAnimateEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::SliderControllerBase::__get__dissolving() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____dissolving;
}
constexpr bool const& GlobalNamespace::SliderControllerBase::__get__dissolving() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____dissolving;
}
constexpr void GlobalNamespace::SliderControllerBase::__set__dissolving(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____dissolving = value;
}
inline void GlobalNamespace::SliderControllerBase::AnimateCutout(float_t cutoutStart, float_t cutoutEnd, float_t duration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderControllerBase*>::get(), "AnimateCutout", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cutoutStart, cutoutEnd, duration);
}
inline ::GlobalNamespace::SliderControllerBase* GlobalNamespace::SliderControllerBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SliderControllerBase*>());
}
inline void GlobalNamespace::SliderControllerBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderControllerBase*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderControllerBase::SliderControllerBase() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
