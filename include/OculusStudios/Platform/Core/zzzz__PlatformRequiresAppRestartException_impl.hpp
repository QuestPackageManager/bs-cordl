#pragma once
// IWYU pragma private; include "OculusStudios\Platform\Core\PlatformRequiresAppRestartException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "OculusStudios/Platform/Core/zzzz__PlatformRequiresAppRestartException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Core::PlatformRequiresAppRestartException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Core::PlatformRequiresAppRestartException::*)()>(
    &::OculusStudios::Platform::Core::PlatformRequiresAppRestartException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f2e8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::PlatformRequiresAppRestartException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::PlatformRequiresAppRestartException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Core::PlatformRequiresAppRestartException::*)(::StringW)>(
    &::OculusStudios::Platform::Core::PlatformRequiresAppRestartException::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f2e8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::PlatformRequiresAppRestartException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::PlatformRequiresAppRestartException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Core::PlatformRequiresAppRestartException::*)(::StringW, ::System::Exception*)>(
    &::OculusStudios::Platform::Core::PlatformRequiresAppRestartException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f2e968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::PlatformRequiresAppRestartException*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
inline void OculusStudios::Platform::Core::PlatformRequiresAppRestartException::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::PlatformRequiresAppRestartException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OculusStudios::Platform::Core::PlatformRequiresAppRestartException::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::PlatformRequiresAppRestartException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void OculusStudios::Platform::Core::PlatformRequiresAppRestartException::_ctor(::StringW message, ::System::Exception* inner) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::PlatformRequiresAppRestartException*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, inner);
}
inline ::OculusStudios::Platform::Core::PlatformRequiresAppRestartException* OculusStudios::Platform::Core::PlatformRequiresAppRestartException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::Platform::Core::PlatformRequiresAppRestartException*>());
}
inline ::OculusStudios::Platform::Core::PlatformRequiresAppRestartException* OculusStudios::Platform::Core::PlatformRequiresAppRestartException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::Platform::Core::PlatformRequiresAppRestartException*>(message));
}
inline ::OculusStudios::Platform::Core::PlatformRequiresAppRestartException* OculusStudios::Platform::Core::PlatformRequiresAppRestartException::New_ctor(::StringW message,
                                                                                                                                                          ::System::Exception* inner) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::Platform::Core::PlatformRequiresAppRestartException*>(message, inner));
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Core::PlatformRequiresAppRestartException::PlatformRequiresAppRestartException() {}
