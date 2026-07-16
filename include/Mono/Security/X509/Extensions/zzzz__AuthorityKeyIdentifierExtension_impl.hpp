#pragma once
// IWYU pragma private; include "Mono/Security/X509/Extensions/AuthorityKeyIdentifierExtension.hpp"
#include "Mono/Security/X509/zzzz__X509Extension_impl.hpp"
#include "Mono/Security/X509/Extensions/zzzz__AuthorityKeyIdentifierExtension_def.hpp"
#include "Mono/Security/X509/zzzz__X509Extension_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::*)(::Mono::Security::X509::X509Extension*)>(
    &::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a975a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Mono::Security::X509::X509Extension*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::*)()>(
    &::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::Decode)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5a975a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>(),
                                                                                          { ::i2c::class_of<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::*)()>(
    &::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::Encode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a976c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>(),
                                                                                          { ::i2c::class_of<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension.get_Identifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::*)()>(
    &::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::get_Identifier)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a977b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>(), { "get_Identifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::*)()>(
    &::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::ToString)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5a97824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>(),
                                                                                          { ::i2c::class_of<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::__cordl_internal_get_aki() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aki;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::__cordl_internal_get_aki() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aki;
}
constexpr void Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::__cordl_internal_set_aki(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___aki = value;
}
inline void Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::_ctor(::Mono::Security::X509::X509Extension* extension) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Mono::Security::X509::X509Extension*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, extension);
}
inline void Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::Decode() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::Encode() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::get_Identifier() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>(), { "get_Identifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::ToString() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*
Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::New_ctor(::Mono::Security::X509::X509Extension* extension) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>(extension));
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::AuthorityKeyIdentifierExtension() {}
