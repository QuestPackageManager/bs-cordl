#pragma once
// IWYU pragma private; include "OculusStudios\GraphQL\ClientInterface\ApplicationSuspendedException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__ApplicationSuspendedException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException::*)()>(
    &::OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f2c264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException::*)(::StringW)>(
    &::OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f2c2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException::*)(::StringW, ::System::Exception*)>(
    &::OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f2c328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException::_ctor(::StringW message, ::System::Exception* inner) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, inner);
}
inline ::OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException* OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException*>());
}
inline ::OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException* OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException*>(message));
}
inline ::OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException* OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException::New_ctor(::StringW message,
                                                                                                                                                                  ::System::Exception* inner) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException*>(message, inner));
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::ClientInterface::ApplicationSuspendedException::ApplicationSuspendedException() {}
