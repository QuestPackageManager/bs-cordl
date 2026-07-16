#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/ServerName.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ServerName_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ServerName._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::ServerName::*)(uint8_t, ::System::Object*)>(&::Org::BouncyCastle::Crypto::Tls::ServerName::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x346c8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerName*>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ServerName.get_NameType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Org::BouncyCastle::Crypto::Tls::ServerName::*)()>(&::Org::BouncyCastle::Crypto::Tls::ServerName::get_NameType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346ca04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerName*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerName*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ServerName.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Crypto::Tls::ServerName::*)()>(&::Org::BouncyCastle::Crypto::Tls::ServerName::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346ca0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerName*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerName*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ServerName.GetHostName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Tls::ServerName::*)()>(&::Org::BouncyCastle::Crypto::Tls::ServerName::GetHostName)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x346ca14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerName*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerName*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ServerName.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::ServerName::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::ServerName::Encode)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x346ca80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerName*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerName*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ServerName.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::ServerName* (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::ServerName::Parse)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x346cb9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerName*>(), { "Parse", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ServerName.IsCorrectType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t, ::System::Object*)>(&::Org::BouncyCastle::Crypto::Tls::ServerName::IsCorrectType)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x346c974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerName*>(),
                                                                                           { "IsCorrectType", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr uint8_t& Org::BouncyCastle::Crypto::Tls::ServerName::__cordl_internal_get_mNameType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mNameType;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Tls::ServerName::__cordl_internal_get_mNameType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mNameType;
}
constexpr void Org::BouncyCastle::Crypto::Tls::ServerName::__cordl_internal_set_mNameType(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mNameType = value;
}
constexpr ::System::Object*& Org::BouncyCastle::Crypto::Tls::ServerName::__cordl_internal_get_mName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mName;
}
constexpr ::System::Object* const& Org::BouncyCastle::Crypto::Tls::ServerName::__cordl_internal_get_mName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mName;
}
constexpr void Org::BouncyCastle::Crypto::Tls::ServerName::__cordl_internal_set_mName(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mName = value;
}
inline void Org::BouncyCastle::Crypto::Tls::ServerName::_ctor(uint8_t nameType, ::System::Object* name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerName*>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameType, name);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::ServerName::get_NameType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerName*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline ::System::Object* Org::BouncyCastle::Crypto::Tls::ServerName::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerName*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Crypto::Tls::ServerName::GetHostName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerName*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::ServerName::Encode(::System::IO::Stream* output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerName*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline ::Org::BouncyCastle::Crypto::Tls::ServerName* Org::BouncyCastle::Crypto::Tls::ServerName::Parse(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerName*>(), { "Parse", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::ServerName*>(nullptr, ___internal_method, input);
}
inline bool Org::BouncyCastle::Crypto::Tls::ServerName::IsCorrectType(uint8_t nameType, ::System::Object* name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerName*>(), { "IsCorrectType", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nameType, name);
}
inline ::Org::BouncyCastle::Crypto::Tls::ServerName* Org::BouncyCastle::Crypto::Tls::ServerName::New_ctor(uint8_t nameType, ::System::Object* name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::ServerName*>(nameType, name));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::ServerName::ServerName() {}
