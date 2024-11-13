#pragma once
// IWYU pragma private; include "BGLib/DotnetExtension/EnvironmentVariableHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/DotnetExtension/zzzz__EnvironmentVariableHelper_def.hpp"
//  Writing Method size for method: ::BGLib::DotnetExtension::EnvironmentVariableHelper.GetDirectoryPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::BGLib::DotnetExtension::EnvironmentVariableHelper::GetDirectoryPath)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x226cc70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::EnvironmentVariableHelper*>::get(), "GetDirectoryPath",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::EnvironmentVariableHelper.SetDirectoryPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&::BGLib::DotnetExtension::EnvironmentVariableHelper::SetDirectoryPath)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x226cd18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::EnvironmentVariableHelper*>::get(), "SetDirectoryPath", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::StringW BGLib::DotnetExtension::EnvironmentVariableHelper::GetDirectoryPath(::StringW variableName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::EnvironmentVariableHelper*>::get(), "GetDirectoryPath",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, variableName);
}
inline void BGLib::DotnetExtension::EnvironmentVariableHelper::SetDirectoryPath(::StringW variableName, ::StringW path) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::EnvironmentVariableHelper*>::get(), "SetDirectoryPath", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, variableName, path);
}
// Ctor Parameters []
constexpr ::BGLib::DotnetExtension::EnvironmentVariableHelper::EnvironmentVariableHelper() {}
