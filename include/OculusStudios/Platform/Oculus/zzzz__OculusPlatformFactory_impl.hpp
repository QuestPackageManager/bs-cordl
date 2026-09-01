#pragma once
// IWYU pragma private; include "OculusStudios\Platform\Oculus\OculusPlatformFactory.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/Platform/Oculus/zzzz__OculusPlatformFactory_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformFactory_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatform_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__PlatformInitParams_def.hpp"
#include "OculusStudios/Platform/Oculus/zzzz__OculusPlatformFactory_def.hpp"
#include "OculusStudios/Platform/Oculus/zzzz__OculusPlatform_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatformFactory__CreateAsync_d__0.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatformFactory__CreateAsync_d__0::*)()>(
    &::OculusStudios::Platform::Oculus::OculusPlatformFactory__CreateAsync_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5f34600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatformFactory__CreateAsync_d__0>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatformFactory__CreateAsync_d__0.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatformFactory__CreateAsync_d__0::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::OculusStudios::Platform::Oculus::OculusPlatformFactory__CreateAsync_d__0::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f348b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatformFactory__CreateAsync_d__0>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void OculusStudios::Platform::Oculus::OculusPlatformFactory__CreateAsync_d__0::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatformFactory__CreateAsync_d__0>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void OculusStudios::Platform::Oculus::OculusPlatformFactory__CreateAsync_d__0::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatformFactory__CreateAsync_d__0>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OculusStudios::Platform::Oculus::OculusPlatformFactory__CreateAsync_d__0::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::Platform::Oculus::OculusPlatformFactory__CreateAsync_d__0::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::Platform::Core::IPlatform*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "initParams", ty:
// "::OculusStudios::Platform::Core::PlatformInitParams*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_result_5__2", ty: "::OculusStudios::Platform::Oculus::OculusPlatform*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::Platform::Oculus::OculusPlatformFactory__CreateAsync_d__0::OculusPlatformFactory__CreateAsync_d__0(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::Platform::Core::IPlatform*> __t__builder,
    ::OculusStudios::Platform::Core::PlatformInitParams* initParams, ::OculusStudios::Platform::Oculus::OculusPlatform* _result_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->initParams = initParams;
  this->_result_5__2 = _result_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Oculus::OculusPlatformFactory__CreateAsync_d__0::OculusPlatformFactory__CreateAsync_d__0() {}
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatformFactory.CreateAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::IPlatform*>* (*)(::OculusStudios::Platform::Core::PlatformInitParams*)>(
    &::OculusStudios::Platform::Oculus::OculusPlatformFactory::CreateAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5f34514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatformFactory*>(),
                                                                                           { "CreateAsync", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::PlatformInitParams*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatformFactory.OculusStudios_Platform_Core_IPlatformFactory_CreateAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::IPlatform*>* (
    ::OculusStudios::Platform::Oculus::OculusPlatformFactory::*)(::OculusStudios::Platform::Core::PlatformInitParams*)>(
    &::OculusStudios::Platform::Oculus::OculusPlatformFactory::OculusStudios_Platform_Core_IPlatformFactory_CreateAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f345f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatformFactory*>(),
                                                { "OculusStudios.Platform.Core.IPlatformFactory.CreateAsync", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::PlatformInitParams*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatformFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatformFactory::*)()>(&::OculusStudios::Platform::Oculus::OculusPlatformFactory::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f345fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatformFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::IPlatform*>*
OculusStudios::Platform::Oculus::OculusPlatformFactory::CreateAsync(::OculusStudios::Platform::Core::PlatformInitParams* initParams) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatformFactory*>(),
                                                                                         { "CreateAsync", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::PlatformInitParams*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::IPlatform*>*>(nullptr, ___internal_method, initParams);
}
inline ::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::IPlatform*>*
OculusStudios::Platform::Oculus::OculusPlatformFactory::OculusStudios_Platform_Core_IPlatformFactory_CreateAsync(::OculusStudios::Platform::Core::PlatformInitParams* initParams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatformFactory*>(),
                                              { "OculusStudios.Platform.Core.IPlatformFactory.CreateAsync", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::PlatformInitParams*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::IPlatform*>*>(this, ___internal_method, initParams);
}
inline void OculusStudios::Platform::Oculus::OculusPlatformFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatformFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Oculus::OculusPlatformFactory* OculusStudios::Platform::Oculus::OculusPlatformFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::Platform::Oculus::OculusPlatformFactory*>());
}
/// @brief Convert operator to "::OculusStudios::Platform::Core::IPlatformFactory"
constexpr OculusStudios::Platform::Oculus::OculusPlatformFactory::operator ::OculusStudios::Platform::Core::IPlatformFactory*() noexcept {
  return static_cast<::OculusStudios::Platform::Core::IPlatformFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::Platform::Core::IPlatformFactory"
constexpr ::OculusStudios::Platform::Core::IPlatformFactory* OculusStudios::Platform::Oculus::OculusPlatformFactory::i___OculusStudios__Platform__Core__IPlatformFactory() noexcept {
  return static_cast<::OculusStudios::Platform::Core::IPlatformFactory*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Oculus::OculusPlatformFactory::OculusPlatformFactory() {}
