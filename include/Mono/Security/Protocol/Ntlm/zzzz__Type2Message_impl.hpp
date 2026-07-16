#pragma once
// IWYU pragma private; include "Mono/Security/Protocol/Ntlm/Type2Message.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__MessageBase_impl.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__Type2Message_def.hpp"
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type2Message._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type2Message::*)(::ArrayW<uint8_t>)>(&::Mono::Security::Protocol::Ntlm::Type2Message::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a9ab18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type2Message*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type2Message.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type2Message::*)()>(&::Mono::Security::Protocol::Ntlm::Type2Message::Finalize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a9abbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type2Message*>(), { ::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type2Message*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type2Message.get_Nonce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Protocol::Ntlm::Type2Message::*)()>(&::Mono::Security::Protocol::Ntlm::Type2Message::get_Nonce)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5a99c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type2Message*>(), { "get_Nonce", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type2Message.get_TargetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::Protocol::Ntlm::Type2Message::*)()>(&::Mono::Security::Protocol::Ntlm::Type2Message::get_TargetName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9ac14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type2Message*>(), { "get_TargetName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type2Message.get_TargetInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Protocol::Ntlm::Type2Message::*)()>(&::Mono::Security::Protocol::Ntlm::Type2Message::get_TargetInfo)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5a99ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type2Message*>(), { "get_TargetInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type2Message.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type2Message::*)(::ArrayW<uint8_t>)>(&::Mono::Security::Protocol::Ntlm::Type2Message::Decode)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5a9ac1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type2Message*>(), { ::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type2Message*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type2Message.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Protocol::Ntlm::Type2Message::*)()>(&::Mono::Security::Protocol::Ntlm::Type2Message::GetBytes)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a9ada0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type2Message*>(), { ::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type2Message*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Mono::Security::Protocol::Ntlm::Type2Message::__cordl_internal_get__nonce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nonce;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::Protocol::Ntlm::Type2Message::__cordl_internal_get__nonce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nonce;
}
constexpr void Mono::Security::Protocol::Ntlm::Type2Message::__cordl_internal_set__nonce(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nonce = value;
}
constexpr ::StringW& Mono::Security::Protocol::Ntlm::Type2Message::__cordl_internal_get__targetName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetName;
}
constexpr ::StringW const& Mono::Security::Protocol::Ntlm::Type2Message::__cordl_internal_get__targetName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetName;
}
constexpr void Mono::Security::Protocol::Ntlm::Type2Message::__cordl_internal_set__targetName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetName = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::Protocol::Ntlm::Type2Message::__cordl_internal_get__targetInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetInfo;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::Protocol::Ntlm::Type2Message::__cordl_internal_get__targetInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetInfo;
}
constexpr void Mono::Security::Protocol::Ntlm::Type2Message::__cordl_internal_set__targetInfo(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetInfo = value;
}
inline void Mono::Security::Protocol::Ntlm::Type2Message::_ctor(::ArrayW<uint8_t> message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type2Message*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Mono::Security::Protocol::Ntlm::Type2Message::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type2Message*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::Type2Message::get_Nonce() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type2Message*>(), { "get_Nonce", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW Mono::Security::Protocol::Ntlm::Type2Message::get_TargetName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type2Message*>(), { "get_TargetName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::Type2Message::get_TargetInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type2Message*>(), { "get_TargetInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Mono::Security::Protocol::Ntlm::Type2Message::Decode(::ArrayW<uint8_t> message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type2Message*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::Type2Message::GetBytes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Protocol::Ntlm::Type2Message*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Mono::Security::Protocol::Ntlm::Type2Message* Mono::Security::Protocol::Ntlm::Type2Message::New_ctor(::ArrayW<uint8_t> message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Protocol::Ntlm::Type2Message*>(message));
}
// Ctor Parameters []
constexpr ::Mono::Security::Protocol::Ntlm::Type2Message::Type2Message() {}
