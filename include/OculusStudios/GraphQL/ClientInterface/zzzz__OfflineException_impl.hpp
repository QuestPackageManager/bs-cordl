#pragma once
// IWYU pragma private; include "OculusStudios\GraphQL\ClientInterface\OfflineException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__OfflineException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::OfflineException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::OfflineException::*)()>(&::OculusStudios::GraphQL::ClientInterface::OfflineException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f2c4d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::OfflineException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::OfflineException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::OfflineException::*)(::StringW)>(
    &::OculusStudios::GraphQL::ClientInterface::OfflineException::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f2c52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::OfflineException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::OfflineException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::OfflineException::*)(::StringW, ::System::Exception*)>(
    &::OculusStudios::GraphQL::ClientInterface::OfflineException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f2c598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::OfflineException*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::ClientInterface::OfflineException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::OfflineException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::ClientInterface::OfflineException::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::OfflineException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void OculusStudios::GraphQL::ClientInterface::OfflineException::_ctor(::StringW message, ::System::Exception* inner) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::OfflineException*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, inner);
}
inline ::OculusStudios::GraphQL::ClientInterface::OfflineException* OculusStudios::GraphQL::ClientInterface::OfflineException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::ClientInterface::OfflineException*>());
}
inline ::OculusStudios::GraphQL::ClientInterface::OfflineException* OculusStudios::GraphQL::ClientInterface::OfflineException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::ClientInterface::OfflineException*>(message));
}
inline ::OculusStudios::GraphQL::ClientInterface::OfflineException* OculusStudios::GraphQL::ClientInterface::OfflineException::New_ctor(::StringW message, ::System::Exception* inner) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::ClientInterface::OfflineException*>(message, inner));
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::ClientInterface::OfflineException::OfflineException() {}
