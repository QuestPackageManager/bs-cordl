#pragma once
// IWYU pragma private; include "GlobalNamespace/BaseTransitionSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BaseTransitionSO_def.hpp"
#include "GlobalNamespace/zzzz__TransitionTimingSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BaseTransitionSO.GetTransitionTiming
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::TransitionTimingSO> (::GlobalNamespace::BaseTransitionSO::*)()>(
    &::GlobalNamespace::BaseTransitionSO::GetTransitionTiming)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44d9ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseTransitionSO*>::get(),
                                                                               "GetTransitionTiming", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseTransitionSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BaseTransitionSO::*)()>(&::GlobalNamespace::BaseTransitionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44d9ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseTransitionSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TransitionTimingSO>& GlobalNamespace::BaseTransitionSO::__cordl_internal_get__transitionTiming() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transitionTiming;
}
constexpr ::UnityW<::GlobalNamespace::TransitionTimingSO> const& GlobalNamespace::BaseTransitionSO::__cordl_internal_get__transitionTiming() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transitionTiming;
}
constexpr void GlobalNamespace::BaseTransitionSO::__cordl_internal_set__transitionTiming(::UnityW<::GlobalNamespace::TransitionTimingSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transitionTiming)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::TransitionTimingSO> GlobalNamespace::BaseTransitionSO::GetTransitionTiming() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseTransitionSO*>::get(), "GetTransitionTiming",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::TransitionTimingSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::BaseTransitionSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseTransitionSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BaseTransitionSO* GlobalNamespace::BaseTransitionSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BaseTransitionSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BaseTransitionSO::BaseTransitionSO() {}
