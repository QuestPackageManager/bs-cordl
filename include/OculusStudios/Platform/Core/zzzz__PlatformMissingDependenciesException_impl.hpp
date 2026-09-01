#pragma once
// IWYU pragma private; include "OculusStudios\Platform\Core\PlatformMissingDependenciesException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "OculusStudios/Platform/Core/zzzz__PlatformMissingDependenciesException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Core::PlatformMissingDependenciesException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Core::PlatformMissingDependenciesException::*)()>(
    &::OculusStudios::Platform::Core::PlatformMissingDependenciesException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f2e634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::PlatformMissingDependenciesException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::PlatformMissingDependenciesException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Core::PlatformMissingDependenciesException::*)(::StringW)>(
    &::OculusStudios::Platform::Core::PlatformMissingDependenciesException::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f2e68c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::PlatformMissingDependenciesException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::PlatformMissingDependenciesException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Core::PlatformMissingDependenciesException::*)(::StringW, ::System::Exception*)>(
    &::OculusStudios::Platform::Core::PlatformMissingDependenciesException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f2e6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::PlatformMissingDependenciesException*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
inline void OculusStudios::Platform::Core::PlatformMissingDependenciesException::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::PlatformMissingDependenciesException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OculusStudios::Platform::Core::PlatformMissingDependenciesException::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::PlatformMissingDependenciesException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void OculusStudios::Platform::Core::PlatformMissingDependenciesException::_ctor(::StringW message, ::System::Exception* inner) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::PlatformMissingDependenciesException*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, inner);
}
inline ::OculusStudios::Platform::Core::PlatformMissingDependenciesException* OculusStudios::Platform::Core::PlatformMissingDependenciesException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::Platform::Core::PlatformMissingDependenciesException*>());
}
inline ::OculusStudios::Platform::Core::PlatformMissingDependenciesException* OculusStudios::Platform::Core::PlatformMissingDependenciesException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::Platform::Core::PlatformMissingDependenciesException*>(message));
}
inline ::OculusStudios::Platform::Core::PlatformMissingDependenciesException* OculusStudios::Platform::Core::PlatformMissingDependenciesException::New_ctor(::StringW message,
                                                                                                                                                            ::System::Exception* inner) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::Platform::Core::PlatformMissingDependenciesException*>(message, inner));
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Core::PlatformMissingDependenciesException::PlatformMissingDependenciesException() {}
