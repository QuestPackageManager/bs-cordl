#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/CustomizableEnvironmentCommandLineArgsProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__CustomizableEnvironmentCommandLineArgsProvider_def.hpp"
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::CustomizableEnvironmentCommandLineArgsProvider.GetCommandLineArgs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::BGLib::AppFlow::Initialization::CustomizableEnvironmentCommandLineArgsProvider::GetCommandLineArgs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33083ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::CustomizableEnvironmentCommandLineArgsProvider*>(), { "GetCommandLineArgs", {}, {} })));
    return ___internal_method;
  }
};
inline ::ArrayW<::StringW> BGLib::AppFlow::Initialization::CustomizableEnvironmentCommandLineArgsProvider::GetCommandLineArgs() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::CustomizableEnvironmentCommandLineArgsProvider*>(), { "GetCommandLineArgs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::CustomizableEnvironmentCommandLineArgsProvider::CustomizableEnvironmentCommandLineArgsProvider() {}
