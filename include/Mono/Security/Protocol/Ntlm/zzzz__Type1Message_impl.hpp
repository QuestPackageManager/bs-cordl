#pragma once
// IWYU pragma private; include "Mono/Security/Protocol/Ntlm/Type1Message.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__MessageBase_impl.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__Type1Message_def.hpp"
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type1Message._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type1Message::*)()>(&::Mono::Security::Protocol::Ntlm::Type1Message::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a9a654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type1Message*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type1Message.set_Domain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type1Message::*)(::StringW)>(&::Mono::Security::Protocol::Ntlm::Type1Message::set_Domain)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a9a6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type1Message*>(), { "set_Domain", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type1Message.set_Host
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type1Message::*)(::StringW)>(&::Mono::Security::Protocol::Ntlm::Type1Message::set_Host)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a9a74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type1Message*>(), { "set_Host", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type1Message.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type1Message::*)(::ArrayW<uint8_t>)>(&::Mono::Security::Protocol::Ntlm::Type1Message::Decode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a9a7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type1Message*>(), { ::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type1Message*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type1Message.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Protocol::Ntlm::Type1Message::*)()>(&::Mono::Security::Protocol::Ntlm::Type1Message::GetBytes)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5a9a8c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type1Message*>(), { ::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type1Message*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::StringW& Mono::Security::Protocol::Ntlm::Type1Message::__cordl_internal_get__host() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____host;
}
constexpr ::StringW const& Mono::Security::Protocol::Ntlm::Type1Message::__cordl_internal_get__host() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____host;
}
constexpr void Mono::Security::Protocol::Ntlm::Type1Message::__cordl_internal_set__host(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____host = value;
}
constexpr ::StringW& Mono::Security::Protocol::Ntlm::Type1Message::__cordl_internal_get__domain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____domain;
}
constexpr ::StringW const& Mono::Security::Protocol::Ntlm::Type1Message::__cordl_internal_get__domain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____domain;
}
constexpr void Mono::Security::Protocol::Ntlm::Type1Message::__cordl_internal_set__domain(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____domain = value;
}
inline void Mono::Security::Protocol::Ntlm::Type1Message::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type1Message*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::Protocol::Ntlm::Type1Message::set_Domain(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type1Message*>(), { "set_Domain", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mono::Security::Protocol::Ntlm::Type1Message::set_Host(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type1Message*>(), { "set_Host", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mono::Security::Protocol::Ntlm::Type1Message::Decode(::ArrayW<uint8_t> message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type1Message*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::Type1Message::GetBytes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type1Message*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Mono::Security::Protocol::Ntlm::Type1Message* Mono::Security::Protocol::Ntlm::Type1Message::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Protocol::Ntlm::Type1Message*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::Protocol::Ntlm::Type1Message::Type1Message() {}
