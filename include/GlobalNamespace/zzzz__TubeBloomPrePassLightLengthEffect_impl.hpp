#pragma once
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_impl.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLightLengthEffect_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightLengthEffect.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightLengthEffect::*)(float_t)>(
    &::GlobalNamespace::TubeBloomPrePassLightLengthEffect::SetValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23a71f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightLengthEffect*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightLengthEffect*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightLengthEffect.TriggerValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightLengthEffect::*)(float_t)>(
    &::GlobalNamespace::TubeBloomPrePassLightLengthEffect::TriggerValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23a7220;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightLengthEffect*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightLengthEffect*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightLengthEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightLengthEffect::*)()>(
    &::GlobalNamespace::TubeBloomPrePassLightLengthEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a724c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightLengthEffect*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TubeBloomPrePassLight*& GlobalNamespace::TubeBloomPrePassLightLengthEffect::__get__tubeBloomPrePassLight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tubeBloomPrePassLight;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TubeBloomPrePassLight*> const& GlobalNamespace::TubeBloomPrePassLightLengthEffect::__get__tubeBloomPrePassLight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tubeBloomPrePassLight;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightLengthEffect::__set__tubeBloomPrePassLight(::GlobalNamespace::TubeBloomPrePassLight* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tubeBloomPrePassLight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::TubeBloomPrePassLightLengthEffect::SetValue(float_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightLengthEffect*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::TubeBloomPrePassLightLengthEffect::TriggerValue(float_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightLengthEffect*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::TubeBloomPrePassLightLengthEffect* GlobalNamespace::TubeBloomPrePassLightLengthEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TubeBloomPrePassLightLengthEffect*>());
}
inline void GlobalNamespace::TubeBloomPrePassLightLengthEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightLengthEffect*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TubeBloomPrePassLightLengthEffect::TubeBloomPrePassLightLengthEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
