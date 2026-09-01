#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Macs\VmpcMac.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Macs/zzzz__VmpcMac_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::VmpcMac.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Macs::VmpcMac::*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Macs::VmpcMac::DoFinal)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x33ef960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::VmpcMac*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::VmpcMac*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::VmpcMac.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Macs::VmpcMac::*)()>(&::Org::BouncyCastle::Crypto::Macs::VmpcMac::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33efd98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::VmpcMac*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::VmpcMac*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::VmpcMac.GetMacSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Macs::VmpcMac::*)()>(&::Org::BouncyCastle::Crypto::Macs::VmpcMac::GetMacSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33efddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::VmpcMac*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::VmpcMac*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::VmpcMac.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::VmpcMac::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Macs::VmpcMac::Init)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x33efde4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::VmpcMac*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::VmpcMac*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::VmpcMac.initKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::VmpcMac::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Macs::VmpcMac::initKey)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x33eff9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::VmpcMac*>(),
                                                                                           { "initKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::VmpcMac.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::VmpcMac::*)()>(&::Org::BouncyCastle::Crypto::Macs::VmpcMac::Reset)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x33f0190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::VmpcMac*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::VmpcMac*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::VmpcMac.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::VmpcMac::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Macs::VmpcMac::Update)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x33f0230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::VmpcMac*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::VmpcMac*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::VmpcMac.BlockUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::VmpcMac::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Macs::VmpcMac::BlockUpdate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x33f0468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::VmpcMac*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::VmpcMac*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::VmpcMac._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::VmpcMac::*)()>(&::Org::BouncyCastle::Crypto::Macs::VmpcMac::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x33f0548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::VmpcMac*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr uint8_t& Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_get_g() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_get_g() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr void Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_set_g(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___g = value;
}
constexpr uint8_t& Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_get_n() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___n;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_get_n() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___n;
}
constexpr void Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_set_n(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___n = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_get_P() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___P;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_get_P() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___P;
}
constexpr void Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_set_P(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___P = value;
}
constexpr uint8_t& Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_get_s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_get_s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr void Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_set_s(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_get_T() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___T;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_get_T() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___T;
}
constexpr void Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_set_T(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___T = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_get_workingIV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workingIV;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_get_workingIV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workingIV;
}
constexpr void Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_set_workingIV(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___workingIV = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_get_workingKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workingKey;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_get_workingKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workingKey;
}
constexpr void Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_set_workingKey(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___workingKey = value;
}
constexpr uint8_t& Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_get_x1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x1;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_get_x1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x1;
}
constexpr void Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_set_x1(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x1 = value;
}
constexpr uint8_t& Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_get_x2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x2;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_get_x2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x2;
}
constexpr void Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_set_x2(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x2 = value;
}
constexpr uint8_t& Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_get_x3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x3;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_get_x3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x3;
}
constexpr void Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_set_x3(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x3 = value;
}
constexpr uint8_t& Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_get_x4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x4;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_get_x4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x4;
}
constexpr void Org::BouncyCastle::Crypto::Macs::VmpcMac::__cordl_internal_set_x4(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x4 = value;
}
inline int32_t Org::BouncyCastle::Crypto::Macs::VmpcMac::DoFinal(::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::VmpcMac*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output, outOff);
}
inline ::StringW Org::BouncyCastle::Crypto::Macs::VmpcMac::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::VmpcMac*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Macs::VmpcMac::GetMacSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::VmpcMac*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Macs::VmpcMac::Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::VmpcMac*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void Org::BouncyCastle::Crypto::Macs::VmpcMac::initKey(::ArrayW<uint8_t> keyBytes, ::ArrayW<uint8_t> ivBytes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::VmpcMac*>(),
                                                                                         { "initKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyBytes, ivBytes);
}
inline void Org::BouncyCastle::Crypto::Macs::VmpcMac::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::VmpcMac*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Macs::VmpcMac::Update(uint8_t input) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::VmpcMac*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Macs::VmpcMac::BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::VmpcMac*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff, len);
}
inline void Org::BouncyCastle::Crypto::Macs::VmpcMac::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::VmpcMac*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Macs::VmpcMac* Org::BouncyCastle::Crypto::Macs::VmpcMac::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Macs::VmpcMac*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
constexpr Org::BouncyCastle::Crypto::Macs::VmpcMac::operator ::Org::BouncyCastle::Crypto::IMac*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IMac*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IMac"
constexpr ::Org::BouncyCastle::Crypto::IMac* Org::BouncyCastle::Crypto::Macs::VmpcMac::i___Org__BouncyCastle__Crypto__IMac() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IMac*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Macs::VmpcMac::VmpcMac() {}
