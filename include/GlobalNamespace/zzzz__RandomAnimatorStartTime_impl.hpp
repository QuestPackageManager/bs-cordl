#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RandomAnimatorStartTime_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RandomAnimatorStartTime.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RandomAnimatorStartTime::*)()>(&::GlobalNamespace::RandomAnimatorStartTime::Start)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1f98480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomAnimatorStartTime*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomAnimatorStartTime._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RandomAnimatorStartTime::*)()>(&::GlobalNamespace::RandomAnimatorStartTime::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1f984c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomAnimatorStartTime*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Animator*& GlobalNamespace::RandomAnimatorStartTime::__get__animator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animator;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animator*> const& GlobalNamespace::RandomAnimatorStartTime::__get__animator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animator;
}
constexpr void GlobalNamespace::RandomAnimatorStartTime::__set__animator(::UnityEngine::Animator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::RandomAnimatorStartTime::__get__stateName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateName;
}
constexpr ::StringW const& GlobalNamespace::RandomAnimatorStartTime::__get__stateName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateName;
}
constexpr void GlobalNamespace::RandomAnimatorStartTime::__set__stateName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stateName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::RandomAnimatorStartTime::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomAnimatorStartTime*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::RandomAnimatorStartTime* GlobalNamespace::RandomAnimatorStartTime::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RandomAnimatorStartTime*>());
}
inline void GlobalNamespace::RandomAnimatorStartTime::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomAnimatorStartTime*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RandomAnimatorStartTime::RandomAnimatorStartTime() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
