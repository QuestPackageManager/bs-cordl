#pragma once
// IWYU pragma private; include "GlobalNamespace/IgnoreForReflectionProbeBaking.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__IgnoreForReflectionProbeBaking_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IgnoreForReflectionProbeBaking._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoreForReflectionProbeBaking::*)()>(
    &::GlobalNamespace::IgnoreForReflectionProbeBaking::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2681a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoreForReflectionProbeBaking*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IgnoreForReflectionProbeBaking* GlobalNamespace::IgnoreForReflectionProbeBaking::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::IgnoreForReflectionProbeBaking*>());
}
inline void GlobalNamespace::IgnoreForReflectionProbeBaking::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoreForReflectionProbeBaking*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IgnoreForReflectionProbeBaking::IgnoreForReflectionProbeBaking() {}
