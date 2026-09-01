#pragma once
// IWYU pragma private; include "Mono\Security\X509\Extensions\BasicConstraintsExtension.hpp"
#include "Mono/Security/X509/zzzz__X509Extension_impl.hpp"
#include "Mono/Security/X509/Extensions/zzzz__BasicConstraintsExtension_def.hpp"
#include "Mono/Security/X509/zzzz__X509Extension_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::Extensions::BasicConstraintsExtension._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::Extensions::BasicConstraintsExtension::*)(::Mono::Security::X509::X509Extension*)>(
    &::Mono::Security::X509::Extensions::BasicConstraintsExtension::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a981b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Mono::Security::X509::X509Extension*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::BasicConstraintsExtension.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::Extensions::BasicConstraintsExtension::*)()>(
    &::Mono::Security::X509::Extensions::BasicConstraintsExtension::Decode)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5a99cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>(),
                                                                                          { ::i2c::class_of<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::BasicConstraintsExtension.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::Extensions::BasicConstraintsExtension::*)()>(
    &::Mono::Security::X509::Extensions::BasicConstraintsExtension::Encode)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5a99df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>(),
                                                                                          { ::i2c::class_of<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::BasicConstraintsExtension.get_CertificateAuthority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::X509::Extensions::BasicConstraintsExtension::*)()>(
    &::Mono::Security::X509::Extensions::BasicConstraintsExtension::get_CertificateAuthority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a99efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>(), { "get_CertificateAuthority", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::BasicConstraintsExtension.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::X509::Extensions::BasicConstraintsExtension::*)()>(
    &::Mono::Security::X509::Extensions::BasicConstraintsExtension::ToString)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5a99f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>(),
                                                                                          { ::i2c::class_of<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>(), 3 }));
    return ___internal_method;
  }
};
constexpr bool& Mono::Security::X509::Extensions::BasicConstraintsExtension::__cordl_internal_get_cA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cA;
}
constexpr bool const& Mono::Security::X509::Extensions::BasicConstraintsExtension::__cordl_internal_get_cA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cA;
}
constexpr void Mono::Security::X509::Extensions::BasicConstraintsExtension::__cordl_internal_set_cA(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cA = value;
}
constexpr int32_t& Mono::Security::X509::Extensions::BasicConstraintsExtension::__cordl_internal_get_pathLenConstraint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pathLenConstraint;
}
constexpr int32_t const& Mono::Security::X509::Extensions::BasicConstraintsExtension::__cordl_internal_get_pathLenConstraint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pathLenConstraint;
}
constexpr void Mono::Security::X509::Extensions::BasicConstraintsExtension::__cordl_internal_set_pathLenConstraint(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pathLenConstraint = value;
}
inline void Mono::Security::X509::Extensions::BasicConstraintsExtension::_ctor(::Mono::Security::X509::X509Extension* extension) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Mono::Security::X509::X509Extension*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, extension);
}
inline void Mono::Security::X509::Extensions::BasicConstraintsExtension::Decode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::X509::Extensions::BasicConstraintsExtension::Encode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mono::Security::X509::Extensions::BasicConstraintsExtension::get_CertificateAuthority() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>(), { "get_CertificateAuthority", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Mono::Security::X509::Extensions::BasicConstraintsExtension::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Mono::Security::X509::Extensions::BasicConstraintsExtension* Mono::Security::X509::Extensions::BasicConstraintsExtension::New_ctor(::Mono::Security::X509::X509Extension* extension) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>(extension));
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::Extensions::BasicConstraintsExtension::BasicConstraintsExtension() {}
