#pragma once
// IWYU pragma private; include "UnityEngine/UnityEngineModuleAssembly.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__UnityEngineModuleAssembly_def.hpp"
//  Writing Method size for method: ::UnityEngine::UnityEngineModuleAssembly._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UnityEngineModuleAssembly::*)()>(&::UnityEngine::UnityEngineModuleAssembly::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x491c0b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnityEngineModuleAssembly*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UnityEngineModuleAssembly::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UnityEngineModuleAssembly*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UnityEngineModuleAssembly* UnityEngine::UnityEngineModuleAssembly::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UnityEngineModuleAssembly*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UnityEngineModuleAssembly::UnityEngineModuleAssembly() {}
