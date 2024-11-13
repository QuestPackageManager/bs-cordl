#pragma once
// IWYU pragma private; include "UnityEngine/Events/UnityEventTools.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEventTools_def.hpp"
//  Writing Method size for method: ::UnityEngine::Events::UnityEventTools.TidyAssemblyTypeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::Events::UnityEventTools::TidyAssemblyTypeName)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x485a00c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventTools*>::get(), "TidyAssemblyTypeName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::Events::UnityEventTools::TidyAssemblyTypeName(::StringW assemblyTypeName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventTools*>::get(), "TidyAssemblyTypeName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, assemblyTypeName);
}
// Ctor Parameters []
constexpr ::UnityEngine::Events::UnityEventTools::UnityEventTools() {}
