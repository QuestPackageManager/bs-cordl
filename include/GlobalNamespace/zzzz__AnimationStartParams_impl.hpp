#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AnimationStartParams_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AnimationStartParams.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AnimationStartParams::*)()>(&::GlobalNamespace::AnimationStartParams::Start)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x20f0e28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnimationStartParams*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimationStartParams._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AnimationStartParams::*)()>(&::GlobalNamespace::AnimationStartParams::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x20f1100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnimationStartParams*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::AnimationStartParams::__get__timeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeOffset;
}
constexpr float_t const& GlobalNamespace::AnimationStartParams::__get__timeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeOffset;
}
constexpr void GlobalNamespace::AnimationStartParams::__set__timeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeOffset = value;
}
constexpr float_t& GlobalNamespace::AnimationStartParams::__get__speed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____speed;
}
constexpr float_t const& GlobalNamespace::AnimationStartParams::__get__speed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____speed;
}
constexpr void GlobalNamespace::AnimationStartParams::__set__speed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____speed = value;
}
constexpr ::UnityEngine::Animation*& GlobalNamespace::AnimationStartParams::__get__animation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animation;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animation*> const& GlobalNamespace::AnimationStartParams::__get__animation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animation;
}
constexpr void GlobalNamespace::AnimationStartParams::__set__animation(::UnityEngine::Animation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::AnimationStartParams::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnimationStartParams*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AnimationStartParams* GlobalNamespace::AnimationStartParams::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AnimationStartParams*>());
}
inline void GlobalNamespace::AnimationStartParams::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnimationStartParams*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimationStartParams::AnimationStartParams() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
