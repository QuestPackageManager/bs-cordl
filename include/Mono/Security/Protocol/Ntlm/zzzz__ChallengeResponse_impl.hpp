#pragma once
// IWYU pragma private; include "Mono/Security/Protocol/Ntlm/ChallengeResponse.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__ChallengeResponse_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Protocol::Ntlm::ChallengeResponse::*)()>(&::Mono::Security::Protocol::Ntlm::ChallengeResponse::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a97dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Protocol::Ntlm::ChallengeResponse::*)(::StringW, ::ArrayW<uint8_t>)>(
    &::Mono::Security::Protocol::Ntlm::ChallengeResponse::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5a97e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Protocol::Ntlm::ChallengeResponse::*)()>(&::Mono::Security::Protocol::Ntlm::ChallengeResponse::Finalize)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5a9838c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(),
                                                                                          { ::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse.set_Password
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Protocol::Ntlm::ChallengeResponse::*)(::StringW)>(&::Mono::Security::Protocol::Ntlm::ChallengeResponse::set_Password)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x5a97e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(), { "set_Password", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse.set_Challenge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Protocol::Ntlm::ChallengeResponse::*)(::ArrayW<uint8_t>)>(
    &::Mono::Security::Protocol::Ntlm::ChallengeResponse::set_Challenge)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5a9826c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(), { "set_Challenge", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse.get_LM
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Protocol::Ntlm::ChallengeResponse::*)()>(&::Mono::Security::Protocol::Ntlm::ChallengeResponse::get_LM)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a9858c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(), { "get_LM", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse.get_NT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Protocol::Ntlm::ChallengeResponse::*)()>(&::Mono::Security::Protocol::Ntlm::ChallengeResponse::get_NT)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a988d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(), { "get_NT", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Protocol::Ntlm::ChallengeResponse::*)()>(&::Mono::Security::Protocol::Ntlm::ChallengeResponse::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5a983d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Protocol::Ntlm::ChallengeResponse::*)(bool)>(&::Mono::Security::Protocol::Ntlm::ChallengeResponse::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a9892c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse.GetResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Protocol::Ntlm::ChallengeResponse::*)(::ArrayW<uint8_t>)>(
    &::Mono::Security::Protocol::Ntlm::ChallengeResponse::GetResponse)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x5a985e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(), { "GetResponse", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse.PrepareDESKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Protocol::Ntlm::ChallengeResponse::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Mono::Security::Protocol::Ntlm::ChallengeResponse::PrepareDESKey)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5a98998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(),
                                                                                           { "PrepareDESKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::ChallengeResponse.PasswordToKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Protocol::Ntlm::ChallengeResponse::*)(::StringW, int32_t)>(
    &::Mono::Security::Protocol::Ntlm::ChallengeResponse::PasswordToKey)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5a98440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(),
                                                                                           { "PasswordToKey", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr bool& Mono::Security::Protocol::Ntlm::ChallengeResponse::__cordl_internal_get__disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr bool const& Mono::Security::Protocol::Ntlm::ChallengeResponse::__cordl_internal_get__disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr void Mono::Security::Protocol::Ntlm::ChallengeResponse::__cordl_internal_set__disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::Protocol::Ntlm::ChallengeResponse::__cordl_internal_get__challenge() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____challenge;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::Protocol::Ntlm::ChallengeResponse::__cordl_internal_get__challenge() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____challenge;
}
constexpr void Mono::Security::Protocol::Ntlm::ChallengeResponse::__cordl_internal_set__challenge(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____challenge = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::Protocol::Ntlm::ChallengeResponse::__cordl_internal_get__lmpwd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lmpwd;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::Protocol::Ntlm::ChallengeResponse::__cordl_internal_get__lmpwd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lmpwd;
}
constexpr void Mono::Security::Protocol::Ntlm::ChallengeResponse::__cordl_internal_set__lmpwd(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lmpwd = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::Protocol::Ntlm::ChallengeResponse::__cordl_internal_get__ntpwd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ntpwd;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::Protocol::Ntlm::ChallengeResponse::__cordl_internal_get__ntpwd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ntpwd;
}
constexpr void Mono::Security::Protocol::Ntlm::ChallengeResponse::__cordl_internal_set__ntpwd(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ntpwd = value;
}
inline void Mono::Security::Protocol::Ntlm::ChallengeResponse::setStaticF_magic(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "magic", ::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::ChallengeResponse::getStaticF_magic() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "magic", ::Mono::Security::Protocol::Ntlm::ChallengeResponse*>();
}
inline void Mono::Security::Protocol::Ntlm::ChallengeResponse::setStaticF_nullEncMagic(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "nullEncMagic", ::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::ChallengeResponse::getStaticF_nullEncMagic() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "nullEncMagic", ::Mono::Security::Protocol::Ntlm::ChallengeResponse*>();
}
inline void Mono::Security::Protocol::Ntlm::ChallengeResponse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::Protocol::Ntlm::ChallengeResponse::_ctor(::StringW password, ::ArrayW<uint8_t> challenge) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, password, challenge);
}
inline void Mono::Security::Protocol::Ntlm::ChallengeResponse::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::Protocol::Ntlm::ChallengeResponse::set_Password(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(), { "set_Password", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mono::Security::Protocol::Ntlm::ChallengeResponse::set_Challenge(::ArrayW<uint8_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(), { "set_Challenge", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::ChallengeResponse::get_LM() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(), { "get_LM", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::ChallengeResponse::get_NT() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(), { "get_NT", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Mono::Security::Protocol::Ntlm::ChallengeResponse::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::Protocol::Ntlm::ChallengeResponse::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::ChallengeResponse::GetResponse(::ArrayW<uint8_t> pwd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(), { "GetResponse", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, pwd);
}
inline ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::ChallengeResponse::PrepareDESKey(::ArrayW<uint8_t> key56bits, int32_t position) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(),
                                                                                         { "PrepareDESKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, key56bits, position);
}
inline ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::ChallengeResponse::PasswordToKey(::StringW password, int32_t position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(), { "PasswordToKey", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, password, position);
}
inline ::Mono::Security::Protocol::Ntlm::ChallengeResponse* Mono::Security::Protocol::Ntlm::ChallengeResponse::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Protocol::Ntlm::ChallengeResponse*>());
}
inline ::Mono::Security::Protocol::Ntlm::ChallengeResponse* Mono::Security::Protocol::Ntlm::ChallengeResponse::New_ctor(::StringW password, ::ArrayW<uint8_t> challenge) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Protocol::Ntlm::ChallengeResponse*>(password, challenge));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Mono::Security::Protocol::Ntlm::ChallengeResponse::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Mono::Security::Protocol::Ntlm::ChallengeResponse::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mono::Security::Protocol::Ntlm::ChallengeResponse::ChallengeResponse() {}
