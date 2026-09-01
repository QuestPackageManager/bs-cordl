#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\DtlsEpoch.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsEpoch_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsReplayWindow_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipher_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsEpoch::*)(int32_t, ::Org::BouncyCastle::Crypto::Tls::TlsCipher*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsEpoch::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3447ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsCipher*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch.AllocateSequenceNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Crypto::Tls::DtlsEpoch::*)()>(&::Org::BouncyCastle::Crypto::Tls::DtlsEpoch::AllocateSequenceNumber)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3447fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*>(), { "AllocateSequenceNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch.get_Cipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCipher* (::Org::BouncyCastle::Crypto::Tls::DtlsEpoch::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsEpoch::get_Cipher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34480c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*>(), { "get_Cipher", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch.get_Epoch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::DtlsEpoch::*)()>(&::Org::BouncyCastle::Crypto::Tls::DtlsEpoch::get_Epoch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34480cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*>(), { "get_Epoch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch.get_ReplayWindow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow* (::Org::BouncyCastle::Crypto::Tls::DtlsEpoch::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsEpoch::get_ReplayWindow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34480d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*>(), { "get_ReplayWindow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch.get_SequenceNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Crypto::Tls::DtlsEpoch::*)()>(&::Org::BouncyCastle::Crypto::Tls::DtlsEpoch::get_SequenceNumber)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x34480dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*>(), { "get_SequenceNumber", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow*& Org::BouncyCastle::Crypto::Tls::DtlsEpoch::__cordl_internal_get_mReplayWindow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReplayWindow;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow* const& Org::BouncyCastle::Crypto::Tls::DtlsEpoch::__cordl_internal_get_mReplayWindow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReplayWindow;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsEpoch::__cordl_internal_set_mReplayWindow(::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mReplayWindow = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::DtlsEpoch::__cordl_internal_get_mEpoch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEpoch;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::DtlsEpoch::__cordl_internal_get_mEpoch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEpoch;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsEpoch::__cordl_internal_set_mEpoch(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mEpoch = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipher*& Org::BouncyCastle::Crypto::Tls::DtlsEpoch::__cordl_internal_get_mCipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCipher;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipher* const& Org::BouncyCastle::Crypto::Tls::DtlsEpoch::__cordl_internal_get_mCipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCipher;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsEpoch::__cordl_internal_set_mCipher(::Org::BouncyCastle::Crypto::Tls::TlsCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mCipher = value;
}
constexpr int64_t& Org::BouncyCastle::Crypto::Tls::DtlsEpoch::__cordl_internal_get_mSequenceNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSequenceNumber;
}
constexpr int64_t const& Org::BouncyCastle::Crypto::Tls::DtlsEpoch::__cordl_internal_get_mSequenceNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSequenceNumber;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsEpoch::__cordl_internal_set_mSequenceNumber(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSequenceNumber = value;
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsEpoch::_ctor(int32_t epoch, ::Org::BouncyCastle::Crypto::Tls::TlsCipher* cipher) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsCipher*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, epoch, cipher);
}
inline int64_t Org::BouncyCastle::Crypto::Tls::DtlsEpoch::AllocateSequenceNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*>(), { "AllocateSequenceNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsCipher* Org::BouncyCastle::Crypto::Tls::DtlsEpoch::get_Cipher() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*>(), { "get_Cipher", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsCipher*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::DtlsEpoch::get_Epoch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*>(), { "get_Epoch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow* Org::BouncyCastle::Crypto::Tls::DtlsEpoch::get_ReplayWindow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*>(), { "get_ReplayWindow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow*>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Crypto::Tls::DtlsEpoch::get_SequenceNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*>(), { "get_SequenceNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* Org::BouncyCastle::Crypto::Tls::DtlsEpoch::New_ctor(int32_t epoch, ::Org::BouncyCastle::Crypto::Tls::TlsCipher* cipher) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*>(epoch, cipher));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch::DtlsEpoch() {}
