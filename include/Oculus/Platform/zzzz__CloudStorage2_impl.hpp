#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__CloudStorage2_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::CloudStorage2.GetUserDirectoryPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::StringW>* (*)()>(&::Oculus::Platform::CloudStorage2::GetUserDirectoryPath)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x272dc98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::CloudStorage2*>::get(),
                                                                               "GetUserDirectoryPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request_1<::StringW>* Oculus::Platform::CloudStorage2::GetUserDirectoryPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::CloudStorage2*>::get(), "GetUserDirectoryPath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::StringW>*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::CloudStorage2::CloudStorage2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
