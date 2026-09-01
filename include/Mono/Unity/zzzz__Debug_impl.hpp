#pragma once
// IWYU pragma private; include "Mono\Unity\Debug.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Unity/zzzz__Debug_def.hpp"
#include "Mono/Security/Interface/zzzz__AlertDescription_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
//  Writing Method size for method: ::Mono::Unity::Debug.CheckAndThrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mono::Unity::UnityTls_unitytls_errorstate, ::StringW, ::Mono::Security::Interface::AlertDescription)>(
    &::Mono::Unity::Debug::CheckAndThrow)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5fd0fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Mono::Unity::Debug*>(),
            { "CheckAndThrow", {}, { ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Mono::Security::Interface::AlertDescription>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::Debug.CheckAndThrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mono::Unity::UnityTls_unitytls_errorstate, ::Mono::Unity::UnityTls_unitytls_x509verify_result, ::StringW,
                                                                ::Mono::Security::Interface::AlertDescription)>(&::Mono::Unity::Debug::CheckAndThrow)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5fd1050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Unity::Debug*>(),
                                                             { "CheckAndThrow",
                                                               {},
                                                               { ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509verify_result>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::Mono::Security::Interface::AlertDescription>() } })));
    return ___internal_method;
  }
};
inline void Mono::Unity::Debug::CheckAndThrow(::Mono::Unity::UnityTls_unitytls_errorstate errorState, ::StringW context, ::Mono::Security::Interface::AlertDescription defaultAlert) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Mono::Unity::Debug*>(),
          { "CheckAndThrow", {}, { ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Mono::Security::Interface::AlertDescription>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorState, context, defaultAlert);
}
inline void Mono::Unity::Debug::CheckAndThrow(::Mono::Unity::UnityTls_unitytls_errorstate errorState, ::Mono::Unity::UnityTls_unitytls_x509verify_result verifyResult, ::StringW context,
                                              ::Mono::Security::Interface::AlertDescription defaultAlert) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Unity::Debug*>(),
                                                           { "CheckAndThrow",
                                                             {},
                                                             { ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_errorstate>(), ::i2c::type_of<::Mono::Unity::UnityTls_unitytls_x509verify_result>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::Mono::Security::Interface::AlertDescription>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorState, verifyResult, context, defaultAlert);
}
// Ctor Parameters []
constexpr ::Mono::Unity::Debug::Debug() {}
