#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/IPlatformInternal.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformInternal_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__PlatformInitParams_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatformInternal.InitializeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::OculusStudios::Platform::Core::IPlatformInternal::*)(::OculusStudios::Platform::Core::PlatformInitParams*)>(
    &::OculusStudios::Platform::Core::IPlatformInternal::InitializeAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatformInternal*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformInternal*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task* OculusStudios::Platform::Core::IPlatformInternal::InitializeAsync(::OculusStudios::Platform::Core::PlatformInitParams* initParams) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformInternal*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, initParams);
}
