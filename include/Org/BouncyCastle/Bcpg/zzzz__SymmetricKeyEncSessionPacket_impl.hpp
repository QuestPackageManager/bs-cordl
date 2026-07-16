#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/SymmetricKeyEncSessionPacket.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyEncSessionPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__S2k_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3698cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::*)(
    ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::S2k*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x369f024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>(),
            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::S2k*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket.get_EncAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag (::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::*)()>(
    &::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::get_EncAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x369f034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>(), { "get_EncAlgorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket.get_S2k
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::S2k* (::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::*)()>(
    &::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::get_S2k)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x369f03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>(), { "get_S2k", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket.GetSecKeyData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::*)()>(
    &::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::GetSecKeyData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x369f044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>(), { "GetSecKeyData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::*)()>(&::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x369f04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(
    &::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::Encode)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x369f054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>(), 4 }));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::__cordl_internal_set_version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag& Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::__cordl_internal_get_encAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encAlgorithm;
}
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const& Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::__cordl_internal_get_encAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encAlgorithm;
}
constexpr void Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::__cordl_internal_set_encAlgorithm(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encAlgorithm = value;
}
constexpr ::Org::BouncyCastle::Bcpg::S2k*& Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::__cordl_internal_get_s2k() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s2k;
}
constexpr ::Org::BouncyCastle::Bcpg::S2k* const& Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::__cordl_internal_get_s2k() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s2k;
}
constexpr void Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::__cordl_internal_set_s2k(::Org::BouncyCastle::Bcpg::S2k* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s2k = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::__cordl_internal_get_secKeyData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secKeyData;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::__cordl_internal_get_secKeyData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secKeyData;
}
constexpr void Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::__cordl_internal_set_secKeyData(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___secKeyData = value;
}
inline void Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgIn);
}
inline void Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::S2k* s2k,
                                                                         ::ArrayW<uint8_t> secKeyData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>(),
          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::S2k*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encAlgorithm, s2k, secKeyData);
}
inline ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::get_EncAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>(), { "get_EncAlgorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::S2k* Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::get_S2k() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>(), { "get_S2k", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::S2k*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::GetSecKeyData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>(), { "GetSecKeyData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgOut);
}
inline ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket* Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>(bcpgIn));
}
inline ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket* Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                                                                ::Org::BouncyCastle::Bcpg::S2k* s2k, ::ArrayW<uint8_t> secKeyData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>(encAlgorithm, s2k, secKeyData));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::SymmetricKeyEncSessionPacket() {}
