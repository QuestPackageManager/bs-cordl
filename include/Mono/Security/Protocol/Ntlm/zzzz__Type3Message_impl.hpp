#pragma once
// IWYU pragma private; include "Mono/Security/Protocol/Ntlm/Type3Message.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__MessageBase_impl.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmAuthLevel_impl.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__Type3Message_def.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__Type2Message_def.hpp"
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type3Message._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type3Message::*)(::Mono::Security::Protocol::Ntlm::Type2Message*)>(
    &::Mono::Security::Protocol::Ntlm::Type3Message::_ctor)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5a9ae54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type3Message*>(), { ".ctor", {}, { ::i2c::type_of<::Mono::Security::Protocol::Ntlm::Type2Message*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type3Message.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type3Message::*)()>(&::Mono::Security::Protocol::Ntlm::Type3Message::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a9b03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type3Message*>(), { ::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type3Message*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type3Message.set_Domain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type3Message::*)(::StringW)>(&::Mono::Security::Protocol::Ntlm::Type3Message::set_Domain)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a9b0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type3Message*>(), { "set_Domain", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type3Message.set_Password
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type3Message::*)(::StringW)>(&::Mono::Security::Protocol::Ntlm::Type3Message::set_Password)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9b154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type3Message*>(), { "set_Password", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type3Message.set_Username
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type3Message::*)(::StringW)>(&::Mono::Security::Protocol::Ntlm::Type3Message::set_Username)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9b15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type3Message*>(), { "set_Username", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type3Message.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type3Message::*)(::ArrayW<uint8_t>)>(&::Mono::Security::Protocol::Ntlm::Type3Message::Decode)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5a9b164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type3Message*>(), { ::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type3Message*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type3Message.DecodeString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::Protocol::Ntlm::Type3Message::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Mono::Security::Protocol::Ntlm::Type3Message::DecodeString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a9b388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type3Message*>(),
                                                             { "DecodeString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type3Message.EncodeString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Protocol::Ntlm::Type3Message::*)(::StringW)>(
    &::Mono::Security::Protocol::Ntlm::Type3Message::EncodeString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5a9b3e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type3Message*>(), { "EncodeString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type3Message.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Protocol::Ntlm::Type3Message::*)()>(&::Mono::Security::Protocol::Ntlm::Type3Message::GetBytes)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0x5a9b480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type3Message*>(), { ::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type3Message*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__level() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____level;
}
constexpr ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel const& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__level() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____level;
}
constexpr void Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_set__level(::Mono::Security::Protocol::Ntlm::NtlmAuthLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____level = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__challenge() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____challenge;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__challenge() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____challenge;
}
constexpr void Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_set__challenge(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____challenge = value;
}
constexpr ::StringW& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__host() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____host;
}
constexpr ::StringW const& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__host() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____host;
}
constexpr void Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_set__host(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____host = value;
}
constexpr ::StringW& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__domain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____domain;
}
constexpr ::StringW const& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__domain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____domain;
}
constexpr void Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_set__domain(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____domain = value;
}
constexpr ::StringW& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__username() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____username;
}
constexpr ::StringW const& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__username() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____username;
}
constexpr void Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_set__username(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____username = value;
}
constexpr ::StringW& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__password() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____password;
}
constexpr ::StringW const& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__password() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____password;
}
constexpr void Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_set__password(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____password = value;
}
constexpr ::Mono::Security::Protocol::Ntlm::Type2Message*& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__type2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type2;
}
constexpr ::Mono::Security::Protocol::Ntlm::Type2Message* const& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__type2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type2;
}
constexpr void Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_set__type2(::Mono::Security::Protocol::Ntlm::Type2Message* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type2 = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__lm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lm;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__lm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lm;
}
constexpr void Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_set__lm(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lm = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__nt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nt;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_get__nt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nt;
}
constexpr void Mono::Security::Protocol::Ntlm::Type3Message::__cordl_internal_set__nt(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nt = value;
}
inline void Mono::Security::Protocol::Ntlm::Type3Message::_ctor(::Mono::Security::Protocol::Ntlm::Type2Message* type2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type3Message*>(), { ".ctor", {}, { ::i2c::type_of<::Mono::Security::Protocol::Ntlm::Type2Message*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type2);
}
inline void Mono::Security::Protocol::Ntlm::Type3Message::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type3Message*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::Protocol::Ntlm::Type3Message::set_Domain(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type3Message*>(), { "set_Domain", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mono::Security::Protocol::Ntlm::Type3Message::set_Password(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type3Message*>(), { "set_Password", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mono::Security::Protocol::Ntlm::Type3Message::set_Username(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type3Message*>(), { "set_Username", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mono::Security::Protocol::Ntlm::Type3Message::Decode(::ArrayW<uint8_t> message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type3Message*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::StringW Mono::Security::Protocol::Ntlm::Type3Message::DecodeString(::ArrayW<uint8_t> buffer, int32_t offset, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type3Message*>(),
                                                           { "DecodeString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, buffer, offset, len);
}
inline ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::Type3Message::EncodeString(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type3Message*>(), { "EncodeString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, text);
}
inline ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::Type3Message::GetBytes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type3Message*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Mono::Security::Protocol::Ntlm::Type3Message* Mono::Security::Protocol::Ntlm::Type3Message::New_ctor(::Mono::Security::Protocol::Ntlm::Type2Message* type2) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Protocol::Ntlm::Type3Message*>(type2));
}
// Ctor Parameters []
constexpr ::Mono::Security::Protocol::Ntlm::Type3Message::Type3Message() {}
