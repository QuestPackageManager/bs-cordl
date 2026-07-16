#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Oculus/MockedOculusPlatform.hpp"
#include "OculusStudios/Platform/Core/zzzz__MockedPlatform_impl.hpp"
#include "OculusStudios/Platform/Oculus/zzzz__MockedOculusPlatform_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformInternal_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformUser_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__PlatformInitParams_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__Vendor_def.hpp"
#include "OculusStudios/Platform/Oculus/zzzz__MockedPlatformUser_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::MockedOculusPlatform.get_displayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::Platform::Oculus::MockedOculusPlatform::*)()>(
    &::OculusStudios::Platform::Oculus::MockedOculusPlatform::get_displayName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f300c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::MockedOculusPlatform*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::Platform::Oculus::MockedOculusPlatform*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::MockedOculusPlatform.get_key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::Platform::Oculus::MockedOculusPlatform::*)()>(&::OculusStudios::Platform::Oculus::MockedOculusPlatform::get_key)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f30104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::MockedOculusPlatform*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::Platform::Oculus::MockedOculusPlatform*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::MockedOculusPlatform.get_vendor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OculusStudios::Platform::Core::Vendor (::OculusStudios::Platform::Oculus::MockedOculusPlatform::*)()>(
    &::OculusStudios::Platform::Oculus::MockedOculusPlatform::get_vendor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f30148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::MockedOculusPlatform*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::Platform::Oculus::MockedOculusPlatform*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::MockedOculusPlatform.get_user
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OculusStudios::Platform::Core::IPlatformUser* (::OculusStudios::Platform::Oculus::MockedOculusPlatform::*)()>(
    &::OculusStudios::Platform::Oculus::MockedOculusPlatform::get_user)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f30150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::MockedOculusPlatform*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::Platform::Oculus::MockedOculusPlatform*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::MockedOculusPlatform.OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task* (::OculusStudios::Platform::Oculus::MockedOculusPlatform::*)(::OculusStudios::Platform::Core::PlatformInitParams*)>(
        &::OculusStudios::Platform::Oculus::MockedOculusPlatform::OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5f30158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::MockedOculusPlatform*>(),
                                                { "OculusStudios.Platform.Core.IPlatformInternal.InitializeAsync", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::PlatformInitParams*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::MockedOculusPlatform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::MockedOculusPlatform::*)()>(&::OculusStudios::Platform::Oculus::MockedOculusPlatform::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f30340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::MockedOculusPlatform*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::OculusStudios::Platform::Oculus::MockedPlatformUser*& OculusStudios::Platform::Oculus::MockedOculusPlatform::__cordl_internal_get__user() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____user;
}
constexpr ::OculusStudios::Platform::Oculus::MockedPlatformUser* const& OculusStudios::Platform::Oculus::MockedOculusPlatform::__cordl_internal_get__user() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____user;
}
constexpr void OculusStudios::Platform::Oculus::MockedOculusPlatform::__cordl_internal_set__user(::OculusStudios::Platform::Oculus::MockedPlatformUser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____user = value;
}
inline ::StringW OculusStudios::Platform::Oculus::MockedOculusPlatform::get_displayName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Oculus::MockedOculusPlatform*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW OculusStudios::Platform::Oculus::MockedOculusPlatform::get_key() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Oculus::MockedOculusPlatform*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Core::Vendor OculusStudios::Platform::Oculus::MockedOculusPlatform::get_vendor() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Oculus::MockedOculusPlatform*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::Platform::Core::Vendor>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Core::IPlatformUser* OculusStudios::Platform::Oculus::MockedOculusPlatform::get_user() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Oculus::MockedOculusPlatform*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::Platform::Core::IPlatformUser*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task*
OculusStudios::Platform::Oculus::MockedOculusPlatform::OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync(::OculusStudios::Platform::Core::PlatformInitParams* initParams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::MockedOculusPlatform*>(),
                                              { "OculusStudios.Platform.Core.IPlatformInternal.InitializeAsync", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::PlatformInitParams*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, initParams);
}
inline void OculusStudios::Platform::Oculus::MockedOculusPlatform::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::MockedOculusPlatform*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Oculus::MockedOculusPlatform* OculusStudios::Platform::Oculus::MockedOculusPlatform::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::Platform::Oculus::MockedOculusPlatform*>());
}
/// @brief Convert operator to "::OculusStudios::Platform::Core::IPlatformInternal"
constexpr OculusStudios::Platform::Oculus::MockedOculusPlatform::operator ::OculusStudios::Platform::Core::IPlatformInternal*() noexcept {
  return static_cast<::OculusStudios::Platform::Core::IPlatformInternal*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::Platform::Core::IPlatformInternal"
constexpr ::OculusStudios::Platform::Core::IPlatformInternal* OculusStudios::Platform::Oculus::MockedOculusPlatform::i___OculusStudios__Platform__Core__IPlatformInternal() noexcept {
  return static_cast<::OculusStudios::Platform::Core::IPlatformInternal*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Oculus::MockedOculusPlatform::MockedOculusPlatform() {}
