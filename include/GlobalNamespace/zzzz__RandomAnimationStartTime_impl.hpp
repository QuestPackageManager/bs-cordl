#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomAnimationStartTime.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RandomAnimationStartTime_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RandomAnimationStartTime.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RandomAnimationStartTime::*)()>(&::GlobalNamespace::RandomAnimationStartTime::Start)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x24ef384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomAnimationStartTime*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomAnimationStartTime._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RandomAnimationStartTime::*)()>(&::GlobalNamespace::RandomAnimationStartTime::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24ef668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomAnimationStartTime*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animation>& GlobalNamespace::RandomAnimationStartTime::__cordl_internal_get__animation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animation;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GlobalNamespace::RandomAnimationStartTime::__cordl_internal_get__animation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animation;
}
constexpr void GlobalNamespace::RandomAnimationStartTime::__cordl_internal_set__animation(::UnityW<::UnityEngine::Animation> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::RandomAnimationStartTime::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomAnimationStartTime*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::RandomAnimationStartTime* GlobalNamespace::RandomAnimationStartTime::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RandomAnimationStartTime*>());
}
inline void GlobalNamespace::RandomAnimationStartTime::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomAnimationStartTime*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RandomAnimationStartTime::RandomAnimationStartTime() {}
