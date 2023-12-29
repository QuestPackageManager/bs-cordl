#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__EnvironmentHelpers_def.hpp"
//  Writing Method size for method: ::System::EnvironmentHelpers.IsWindowsVistaOrAbove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::EnvironmentHelpers::IsWindowsVistaOrAbove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27d0390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::EnvironmentHelpers*>::get(), "IsWindowsVistaOrAbove",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline bool System::EnvironmentHelpers::IsWindowsVistaOrAbove() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::EnvironmentHelpers*>::get(), "IsWindowsVistaOrAbove",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::EnvironmentHelpers::EnvironmentHelpers() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
