#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\PublicKeyPacket.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__IBcpgKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::PublicKeyPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::PublicKeyPacket::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::PublicKeyPacket::_ctor)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x369b484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::PublicKeyPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::PublicKeyPacket::*)(
    ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, ::System::DateTime, ::Org::BouncyCastle::Bcpg::IBcpgKey*)>(&::Org::BouncyCastle::Bcpg::PublicKeyPacket::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x369efc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(),
            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::IBcpgKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::PublicKeyPacket.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::PublicKeyPacket::*)()>(&::Org::BouncyCastle::Bcpg::PublicKeyPacket::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x369f06c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::PublicKeyPacket.get_Algorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag (::Org::BouncyCastle::Bcpg::PublicKeyPacket::*)()>(
    &::Org::BouncyCastle::Bcpg::PublicKeyPacket::get_Algorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x369f074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::PublicKeyPacket.get_ValidDays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::PublicKeyPacket::*)()>(&::Org::BouncyCastle::Bcpg::PublicKeyPacket::get_ValidDays)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x369f07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::PublicKeyPacket.GetTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Org::BouncyCastle::Bcpg::PublicKeyPacket::*)()>(&::Org::BouncyCastle::Bcpg::PublicKeyPacket::GetTime)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x369f084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::PublicKeyPacket.get_Key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::IBcpgKey* (::Org::BouncyCastle::Bcpg::PublicKeyPacket::*)()>(&::Org::BouncyCastle::Bcpg::PublicKeyPacket::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x369f0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::PublicKeyPacket.GetEncodedContents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::PublicKeyPacket::*)()>(&::Org::BouncyCastle::Bcpg::PublicKeyPacket::GetEncodedContents)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x369f0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::PublicKeyPacket.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::PublicKeyPacket::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(
    &::Org::BouncyCastle::Bcpg::PublicKeyPacket::Encode)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x369f258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), 4 }));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Bcpg::PublicKeyPacket::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::PublicKeyPacket::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Bcpg::PublicKeyPacket::__cordl_internal_set_version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr int64_t& Org::BouncyCastle::Bcpg::PublicKeyPacket::__cordl_internal_get_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr int64_t const& Org::BouncyCastle::Bcpg::PublicKeyPacket::__cordl_internal_get_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr void Org::BouncyCastle::Bcpg::PublicKeyPacket::__cordl_internal_set_time(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___time = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::PublicKeyPacket::__cordl_internal_get_validDays() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validDays;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::PublicKeyPacket::__cordl_internal_get_validDays() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validDays;
}
constexpr void Org::BouncyCastle::Bcpg::PublicKeyPacket::__cordl_internal_set_validDays(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validDays = value;
}
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag& Org::BouncyCastle::Bcpg::PublicKeyPacket::__cordl_internal_get_algorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const& Org::BouncyCastle::Bcpg::PublicKeyPacket::__cordl_internal_get_algorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr void Org::BouncyCastle::Bcpg::PublicKeyPacket::__cordl_internal_set_algorithm(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___algorithm = value;
}
constexpr ::Org::BouncyCastle::Bcpg::IBcpgKey*& Org::BouncyCastle::Bcpg::PublicKeyPacket::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::Org::BouncyCastle::Bcpg::IBcpgKey* const& Org::BouncyCastle::Bcpg::PublicKeyPacket::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void Org::BouncyCastle::Bcpg::PublicKeyPacket::__cordl_internal_set_key(::Org::BouncyCastle::Bcpg::IBcpgKey* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
inline void Org::BouncyCastle::Bcpg::PublicKeyPacket::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgIn);
}
inline void Org::BouncyCastle::Bcpg::PublicKeyPacket::_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::System::DateTime time, ::Org::BouncyCastle::Bcpg::IBcpgKey* key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(),
          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::IBcpgKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algorithm, time, key);
}
inline int32_t Org::BouncyCastle::Bcpg::PublicKeyPacket::get_Version() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag Org::BouncyCastle::Bcpg::PublicKeyPacket::get_Algorithm() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::PublicKeyPacket::get_ValidDays() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::DateTime Org::BouncyCastle::Bcpg::PublicKeyPacket::GetTime() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::IBcpgKey* Org::BouncyCastle::Bcpg::PublicKeyPacket::get_Key() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::IBcpgKey*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::PublicKeyPacket::GetEncodedContents() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::PublicKeyPacket::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgOut);
}
inline ::Org::BouncyCastle::Bcpg::PublicKeyPacket* Org::BouncyCastle::Bcpg::PublicKeyPacket::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(bcpgIn));
}
inline ::Org::BouncyCastle::Bcpg::PublicKeyPacket* Org::BouncyCastle::Bcpg::PublicKeyPacket::New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::System::DateTime time,
                                                                                                      ::Org::BouncyCastle::Bcpg::IBcpgKey* key) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(algorithm, time, key));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyPacket::PublicKeyPacket() {}
