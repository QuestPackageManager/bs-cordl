#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BaseTransitionSO_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__TransitionTimingSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BaseTransitionSO.get_easeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EaseType (::GlobalNamespace::BaseTransitionSO::*)()>(
    &::GlobalNamespace::BaseTransitionSO::get_easeType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x227cddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseTransitionSO*>::get(), "get_easeType",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseTransitionSO.get_easeDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BaseTransitionSO::*)()>(&::GlobalNamespace::BaseTransitionSO::get_easeDuration)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x227cdf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseTransitionSO*>::get(), "get_easeDuration",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseTransitionSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BaseTransitionSO::*)()>(&::GlobalNamespace::BaseTransitionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x227ce14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseTransitionSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TransitionTimingSO*& GlobalNamespace::BaseTransitionSO::__get__transitionTiming() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transitionTiming;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TransitionTimingSO*> const& GlobalNamespace::BaseTransitionSO::__get__transitionTiming() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transitionTiming;
}
constexpr void GlobalNamespace::BaseTransitionSO::__set__transitionTiming(::GlobalNamespace::TransitionTimingSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transitionTiming)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::EaseType GlobalNamespace::BaseTransitionSO::get_easeType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseTransitionSO*>::get(), "get_easeType",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EaseType, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BaseTransitionSO::get_easeDuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseTransitionSO*>::get(), "get_easeDuration",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BaseTransitionSO* GlobalNamespace::BaseTransitionSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BaseTransitionSO*>());
}
inline void GlobalNamespace::BaseTransitionSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseTransitionSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BaseTransitionSO::BaseTransitionSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
