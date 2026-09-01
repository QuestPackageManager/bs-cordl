#pragma once
// IWYU pragma private; include "BGLib\DotnetExtension\EnvironmentVariableHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/DotnetExtension/zzzz__EnvironmentVariableHelper_def.hpp"
//  Writing Method size for method: ::BGLib::DotnetExtension::EnvironmentVariableHelper.GetDirectoryPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::BGLib::DotnetExtension::EnvironmentVariableHelper::GetDirectoryPath)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x330f27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::EnvironmentVariableHelper*>(), { "GetDirectoryPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::EnvironmentVariableHelper.SetDirectoryPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::BGLib::DotnetExtension::EnvironmentVariableHelper::SetDirectoryPath)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x330f320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::EnvironmentVariableHelper*>(),
                                                                                           { "SetDirectoryPath", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::StringW BGLib::DotnetExtension::EnvironmentVariableHelper::GetDirectoryPath(::StringW variableName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::EnvironmentVariableHelper*>(), { "GetDirectoryPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, variableName);
}
inline void BGLib::DotnetExtension::EnvironmentVariableHelper::SetDirectoryPath(::StringW variableName, ::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::EnvironmentVariableHelper*>(),
                                                                                         { "SetDirectoryPath", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, variableName, path);
}
// Ctor Parameters []
constexpr ::BGLib::DotnetExtension::EnvironmentVariableHelper::EnvironmentVariableHelper() {}
