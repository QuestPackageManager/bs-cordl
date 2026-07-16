#pragma once
// IWYU pragma private; include "BGLib/DotnetExtension/ExternalProcessHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/DotnetExtension/zzzz__ExternalProcessHelper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Diagnostics/zzzz__Process_def.hpp"
//  Writing Method size for method: ::BGLib::DotnetExtension::ExternalProcessHelper.StartBackgroundProcess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::Process* (*)(::StringW, ::StringW)>(&::BGLib::DotnetExtension::ExternalProcessHelper::StartBackgroundProcess)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x330d7ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::ExternalProcessHelper*>(),
                                                                                           { "StartBackgroundProcess", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::ExternalProcessHelper.GetProcessOutputLines
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (*)(::StringW, ::StringW)>(
    &::BGLib::DotnetExtension::ExternalProcessHelper::GetProcessOutputLines)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x330d860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::ExternalProcessHelper*>(),
                                                                                           { "GetProcessOutputLines", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::System::Diagnostics::Process* BGLib::DotnetExtension::ExternalProcessHelper::StartBackgroundProcess(::StringW path, ::StringW arguments) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::ExternalProcessHelper*>(),
                                                                                         { "StartBackgroundProcess", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::Process*>(nullptr, ___internal_method, path, arguments);
}
inline ::System::Collections::Generic::List_1<::StringW>* BGLib::DotnetExtension::ExternalProcessHelper::GetProcessOutputLines(::StringW path, ::StringW arguments) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::ExternalProcessHelper*>(),
                                                                                         { "GetProcessOutputLines", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(nullptr, ___internal_method, path, arguments);
}
// Ctor Parameters []
constexpr ::BGLib::DotnetExtension::ExternalProcessHelper::ExternalProcessHelper() {}
