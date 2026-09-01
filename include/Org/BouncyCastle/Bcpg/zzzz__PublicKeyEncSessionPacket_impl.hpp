#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\PublicKeyEncSessionPacket.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyEncSessionPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::_ctor)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x3699fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::*)(
    int64_t, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, ::ArrayW<::ArrayW<uint8_t>>)>(&::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x369ec74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*>(),
                            { ".ctor", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(), ::i2c::type_of<::ArrayW<::ArrayW<uint8_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::*)()>(&::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x369ed8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket.get_KeyId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::*)()>(&::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::get_KeyId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x369ed94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*>(), { "get_KeyId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket.get_Algorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag (::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::*)()>(
    &::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::get_Algorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x369ed9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*>(), { "get_Algorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket.GetEncSessionKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::ArrayW<uint8_t>> (::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::*)()>(
    &::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::GetEncSessionKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x369eda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*>(), { "GetEncSessionKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(
    &::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::Encode)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x369edac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*>(), 4 }));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::__cordl_internal_set_version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr int64_t& Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::__cordl_internal_get_keyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyId;
}
constexpr int64_t const& Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::__cordl_internal_get_keyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyId;
}
constexpr void Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::__cordl_internal_set_keyId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyId = value;
}
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag& Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::__cordl_internal_get_algorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const& Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::__cordl_internal_get_algorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr void Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::__cordl_internal_set_algorithm(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___algorithm = value;
}
constexpr ::ArrayW<::ArrayW<uint8_t>>& Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::ArrayW<::ArrayW<uint8_t>> const& Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::__cordl_internal_set_data(::ArrayW<::ArrayW<uint8_t>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
inline void Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgIn);
}
inline void Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::_ctor(int64_t keyId, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::ArrayW<::ArrayW<uint8_t>> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*>(),
                          { ".ctor", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(), ::i2c::type_of<::ArrayW<::ArrayW<uint8_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyId, algorithm, data);
}
inline int32_t Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::get_KeyId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*>(), { "get_KeyId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::get_Algorithm() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*>(), { "get_Algorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(this, ___internal_method);
}
inline ::ArrayW<::ArrayW<uint8_t>> Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::GetEncSessionKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*>(), { "GetEncSessionKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<uint8_t>>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgOut);
}
inline ::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket* Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*>(bcpgIn));
}
inline ::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket* Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::New_ctor(int64_t keyId, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm,
                                                                                                                          ::ArrayW<::ArrayW<uint8_t>> data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*>(keyId, algorithm, data));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket::PublicKeyEncSessionPacket() {}
