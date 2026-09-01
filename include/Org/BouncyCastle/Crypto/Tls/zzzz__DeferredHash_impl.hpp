#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\DeferredHash.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DeferredHash_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DigestInputBuffer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsHandshakeHash_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DeferredHash._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DeferredHash::*)()>(&::Org::BouncyCastle::Crypto::Tls::DeferredHash::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3441578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DeferredHash._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DeferredHash::*)(uint8_t, ::Org::BouncyCastle::Crypto::IDigest*)>(
    &::Org::BouncyCastle::Crypto::Tls::DeferredHash::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x3441618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DeferredHash.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DeferredHash::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*)>(
    &::Org::BouncyCastle::Crypto::Tls::DeferredHash::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3441738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DeferredHash.NotifyPrfDetermined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* (::Org::BouncyCastle::Crypto::Tls::DeferredHash::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DeferredHash::NotifyPrfDetermined)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3441740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DeferredHash.TrackHashAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DeferredHash::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::DeferredHash::TrackHashAlgorithm)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3441950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DeferredHash.SealHashAlgorithms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DeferredHash::*)()>(&::Org::BouncyCastle::Crypto::Tls::DeferredHash::SealHashAlgorithms)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x34419b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DeferredHash.StopTracking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* (::Org::BouncyCastle::Crypto::Tls::DeferredHash::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DeferredHash::StopTracking)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x34419c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DeferredHash.ForkPrfHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IDigest* (::Org::BouncyCastle::Crypto::Tls::DeferredHash::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DeferredHash::ForkPrfHash)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x3441b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DeferredHash.GetFinalHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::DeferredHash::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::DeferredHash::GetFinalHash)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x3441d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DeferredHash.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Tls::DeferredHash::*)()>(&::Org::BouncyCastle::Crypto::Tls::DeferredHash::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3441f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DeferredHash.GetByteLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::DeferredHash::*)()>(&::Org::BouncyCastle::Crypto::Tls::DeferredHash::GetByteLength)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3441f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DeferredHash.GetDigestSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::DeferredHash::*)()>(&::Org::BouncyCastle::Crypto::Tls::DeferredHash::GetDigestSize)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3441fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DeferredHash.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DeferredHash::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::DeferredHash::Update)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x3442030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DeferredHash.BlockUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DeferredHash::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DeferredHash::BlockUpdate)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x3442448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DeferredHash.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::DeferredHash::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DeferredHash::DoFinal)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3442884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DeferredHash.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DeferredHash::*)()>(&::Org::BouncyCastle::Crypto::Tls::DeferredHash::Reset)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x34428d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DeferredHash.CheckStopBuffering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DeferredHash::*)()>(&::Org::BouncyCastle::Crypto::Tls::DeferredHash::CheckStopBuffering)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x3442cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DeferredHash.CheckTrackingHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DeferredHash::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::DeferredHash::CheckTrackingHash)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x344310c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 33 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& Org::BouncyCastle::Crypto::Tls::DeferredHash::__cordl_internal_get_mContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mContext;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* const& Org::BouncyCastle::Crypto::Tls::DeferredHash::__cordl_internal_get_mContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mContext;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DeferredHash::__cordl_internal_set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mContext = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer*& Org::BouncyCastle::Crypto::Tls::DeferredHash::__cordl_internal_get_mBuf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBuf;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer* const& Org::BouncyCastle::Crypto::Tls::DeferredHash::__cordl_internal_get_mBuf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBuf;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DeferredHash::__cordl_internal_set_mBuf(::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mBuf = value;
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Crypto::Tls::DeferredHash::__cordl_internal_get_mHashes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHashes;
}
constexpr ::System::Collections::IDictionary* const& Org::BouncyCastle::Crypto::Tls::DeferredHash::__cordl_internal_get_mHashes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHashes;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DeferredHash::__cordl_internal_set_mHashes(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mHashes = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::DeferredHash::__cordl_internal_get_mPrfHashAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPrfHashAlgorithm;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::DeferredHash::__cordl_internal_get_mPrfHashAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPrfHashAlgorithm;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DeferredHash::__cordl_internal_set_mPrfHashAlgorithm(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPrfHashAlgorithm = value;
}
inline void Org::BouncyCastle::Crypto::Tls::DeferredHash::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DeferredHash::_ctor(uint8_t prfHashAlgorithm, ::Org::BouncyCastle::Crypto::IDigest* prfHash) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prfHashAlgorithm, prfHash);
}
inline void Org::BouncyCastle::Crypto::Tls::DeferredHash::Init(::Org::BouncyCastle::Crypto::Tls::TlsContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* Org::BouncyCastle::Crypto::Tls::DeferredHash::NotifyPrfDetermined() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DeferredHash::TrackHashAlgorithm(uint8_t hashAlgorithm) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hashAlgorithm);
}
inline void Org::BouncyCastle::Crypto::Tls::DeferredHash::SealHashAlgorithms() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* Org::BouncyCastle::Crypto::Tls::DeferredHash::StopTracking() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Crypto::Tls::DeferredHash::ForkPrfHash() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::DeferredHash::GetFinalHash(uint8_t hashAlgorithm) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, hashAlgorithm);
}
inline ::StringW Org::BouncyCastle::Crypto::Tls::DeferredHash::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::DeferredHash::GetByteLength() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::DeferredHash::GetDigestSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DeferredHash::Update(uint8_t input) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Tls::DeferredHash::BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff, len);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::DeferredHash::DoFinal(::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Tls::DeferredHash::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DeferredHash::CheckStopBuffering() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DeferredHash::CheckTrackingHash(uint8_t hashAlgorithm) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hashAlgorithm);
}
inline ::Org::BouncyCastle::Crypto::Tls::DeferredHash* Org::BouncyCastle::Crypto::Tls::DeferredHash::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>());
}
inline ::Org::BouncyCastle::Crypto::Tls::DeferredHash* Org::BouncyCastle::Crypto::Tls::DeferredHash::New_ctor(uint8_t prfHashAlgorithm, ::Org::BouncyCastle::Crypto::IDigest* prfHash) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::DeferredHash*>(prfHashAlgorithm, prfHash));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash"
constexpr Org::BouncyCastle::Crypto::Tls::DeferredHash::operator ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* Org::BouncyCastle::Crypto::Tls::DeferredHash::i___Org__BouncyCastle__Crypto__Tls__TlsHandshakeHash() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
constexpr Org::BouncyCastle::Crypto::Tls::DeferredHash::operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDigest*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IDigest"
constexpr ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Crypto::Tls::DeferredHash::i___Org__BouncyCastle__Crypto__IDigest() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDigest*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DeferredHash::DeferredHash() {}
