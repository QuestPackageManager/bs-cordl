#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/IPlatformFactory.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformFactory_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatform_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__PlatformInitParams_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatformFactory.CreateAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::IPlatform*>* (
    ::OculusStudios::Platform::Core::IPlatformFactory::*)(::OculusStudios::Platform::Core::PlatformInitParams*)>(&::OculusStudios::Platform::Core::IPlatformFactory::CreateAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatformFactory*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformFactory*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::IPlatform*>*
OculusStudios::Platform::Core::IPlatformFactory::CreateAsync(::OculusStudios::Platform::Core::PlatformInitParams* initParams) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformFactory*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::IPlatform*>*>(this, ___internal_method, initParams);
}
