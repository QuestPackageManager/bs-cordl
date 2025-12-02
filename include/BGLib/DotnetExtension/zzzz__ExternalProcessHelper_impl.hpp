#pragma once
// IWYU pragma private; include "BGLib/DotnetExtension/ExternalProcessHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/DotnetExtension/zzzz__ExternalProcessHelper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Diagnostics/zzzz__Process_def.hpp"
//  Writing Method size for method: ::BGLib::DotnetExtension::ExternalProcessHelper.StartBackgroundProcess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Process* (*)(::StringW, ::StringW)>(
    &::BGLib::DotnetExtension::ExternalProcessHelper::StartBackgroundProcess)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x31e7414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::ExternalProcessHelper*>::get(), "StartBackgroundProcess", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::ExternalProcessHelper.GetProcessOutputLines
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (*)(::StringW, ::StringW)>(
    &::BGLib::DotnetExtension::ExternalProcessHelper::GetProcessOutputLines)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x31e7488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::ExternalProcessHelper*>::get(), "GetProcessOutputLines", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::System::Diagnostics::Process* BGLib::DotnetExtension::ExternalProcessHelper::StartBackgroundProcess(::StringW path, ::StringW arguments) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::ExternalProcessHelper*>::get(), "StartBackgroundProcess", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::Process*, false>(nullptr, ___internal_method, path, arguments);
}
inline ::System::Collections::Generic::List_1<::StringW>* BGLib::DotnetExtension::ExternalProcessHelper::GetProcessOutputLines(::StringW path, ::StringW arguments) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::ExternalProcessHelper*>::get(), "GetProcessOutputLines", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(nullptr, ___internal_method, path, arguments);
}
// Ctor Parameters []
constexpr ::BGLib::DotnetExtension::ExternalProcessHelper::ExternalProcessHelper() {}
