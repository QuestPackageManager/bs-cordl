#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Macs\HMac.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Macs/zzzz__HMac_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "Org/BouncyCastle/Utilities/zzzz__IMemoable_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::HMac._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::HMac::*)(::Org::BouncyCastle::Crypto::IDigest*)>(&::Org::BouncyCastle::Crypto::Macs::HMac::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x33ec150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::HMac.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Macs::HMac::*)()>(&::Org::BouncyCastle::Crypto::Macs::HMac::get_AlgorithmName)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x33ec2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::HMac.GetUnderlyingDigest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IDigest* (::Org::BouncyCastle::Crypto::Macs::HMac::*)()>(
    &::Org::BouncyCastle::Crypto::Macs::HMac::GetUnderlyingDigest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33ec378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::HMac.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::HMac::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Macs::HMac::Init)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x33ec380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::HMac.GetMacSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Macs::HMac::*)()>(&::Org::BouncyCastle::Crypto::Macs::HMac::GetMacSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33ec8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::HMac.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::HMac::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Macs::HMac::Update)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x33ec904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::HMac.BlockUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::HMac::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Macs::HMac::BlockUpdate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x33ec9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::HMac.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Macs::HMac::*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Macs::HMac::DoFinal)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x33eca8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::HMac.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::HMac::*)()>(&::Org::BouncyCastle::Crypto::Macs::HMac::Reset)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x33ecf3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::HMac.XorPad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, uint8_t)>(&::Org::BouncyCastle::Crypto::Macs::HMac::XorPad)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x33ec8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(),
                                                             { "XorPad", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Macs::HMac::__cordl_internal_get_digest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Crypto::Macs::HMac::__cordl_internal_get_digest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr void Org::BouncyCastle::Crypto::Macs::HMac::__cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digest = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Macs::HMac::__cordl_internal_get_digestSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestSize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Macs::HMac::__cordl_internal_get_digestSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestSize;
}
constexpr void Org::BouncyCastle::Crypto::Macs::HMac::__cordl_internal_set_digestSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digestSize = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Macs::HMac::__cordl_internal_get_blockLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockLength;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Macs::HMac::__cordl_internal_get_blockLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockLength;
}
constexpr void Org::BouncyCastle::Crypto::Macs::HMac::__cordl_internal_set_blockLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blockLength = value;
}
constexpr ::Org::BouncyCastle::Utilities::IMemoable*& Org::BouncyCastle::Crypto::Macs::HMac::__cordl_internal_get_ipadState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ipadState;
}
constexpr ::Org::BouncyCastle::Utilities::IMemoable* const& Org::BouncyCastle::Crypto::Macs::HMac::__cordl_internal_get_ipadState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ipadState;
}
constexpr void Org::BouncyCastle::Crypto::Macs::HMac::__cordl_internal_set_ipadState(::Org::BouncyCastle::Utilities::IMemoable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ipadState = value;
}
constexpr ::Org::BouncyCastle::Utilities::IMemoable*& Org::BouncyCastle::Crypto::Macs::HMac::__cordl_internal_get_opadState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opadState;
}
constexpr ::Org::BouncyCastle::Utilities::IMemoable* const& Org::BouncyCastle::Crypto::Macs::HMac::__cordl_internal_get_opadState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opadState;
}
constexpr void Org::BouncyCastle::Crypto::Macs::HMac::__cordl_internal_set_opadState(::Org::BouncyCastle::Utilities::IMemoable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___opadState = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Macs::HMac::__cordl_internal_get_inputPad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputPad;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Macs::HMac::__cordl_internal_get_inputPad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputPad;
}
constexpr void Org::BouncyCastle::Crypto::Macs::HMac::__cordl_internal_set_inputPad(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputPad = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Macs::HMac::__cordl_internal_get_outputBuf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputBuf;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Macs::HMac::__cordl_internal_get_outputBuf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputBuf;
}
constexpr void Org::BouncyCastle::Crypto::Macs::HMac::__cordl_internal_set_outputBuf(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___outputBuf = value;
}
inline void Org::BouncyCastle::Crypto::Macs::HMac::_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digest);
}
inline ::StringW Org::BouncyCastle::Crypto::Macs::HMac::get_AlgorithmName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Crypto::Macs::HMac::GetUnderlyingDigest() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Macs::HMac::Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline int32_t Org::BouncyCastle::Crypto::Macs::HMac::GetMacSize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Macs::HMac::Update(uint8_t input) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Macs::HMac::BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t len) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff, len);
}
inline int32_t Org::BouncyCastle::Crypto::Macs::HMac::DoFinal(::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Macs::HMac::Reset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Macs::HMac::XorPad(::ArrayW<uint8_t> pad, int32_t len, uint8_t n) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::HMac*>(),
                                                           { "XorPad", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pad, len, n);
}
inline ::Org::BouncyCastle::Crypto::Macs::HMac* Org::BouncyCastle::Crypto::Macs::HMac::New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Macs::HMac*>(digest));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
constexpr Org::BouncyCastle::Crypto::Macs::HMac::operator ::Org::BouncyCastle::Crypto::IMac*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IMac*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IMac"
constexpr ::Org::BouncyCastle::Crypto::IMac* Org::BouncyCastle::Crypto::Macs::HMac::i___Org__BouncyCastle__Crypto__IMac() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IMac*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Macs::HMac::HMac() {}
