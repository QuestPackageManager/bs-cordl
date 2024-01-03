#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ClassLibraryInitializer_def.hpp"
//  Writing Method size for method: ::UnityEngine::ClassLibraryInitializer.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::ClassLibraryInitializer::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ccd2c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ClassLibraryInitializer*>::get(), "Init",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void UnityEngine::ClassLibraryInitializer::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ClassLibraryInitializer*>::get(), "Init",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ClassLibraryInitializer::ClassLibraryInitializer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
