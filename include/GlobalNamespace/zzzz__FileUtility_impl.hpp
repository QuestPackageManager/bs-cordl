#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FileUtility_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FileUtility.GetPlatformPersistentDataPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::GlobalNamespace::FileUtility::GetPlatformPersistentDataPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ed920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileUtility*>::get(),
                                                                               "GetPlatformPersistentDataPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::FileUtility::GetPlatformPersistentDataPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileUtility*>::get(),
                                                                             "GetPlatformPersistentDataPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileUtility::FileUtility() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
