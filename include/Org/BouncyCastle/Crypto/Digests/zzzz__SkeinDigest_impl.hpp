#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Digests\SkeinDigest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Digests/zzzz__SkeinDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/Digests/zzzz__SkeinEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__SkeinParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Utilities/zzzz__IMemoable_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinDigest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinDigest::*)(int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Digests::SkeinDigest::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3386ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinDigest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinDigest::*)(::Org::BouncyCastle::Crypto::Digests::SkeinDigest*)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinDigest::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3386cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinDigest.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinDigest::*)(::Org::BouncyCastle::Utilities::IMemoable*)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinDigest::Reset)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3386da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>(), { "Reset", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::IMemoable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinDigest.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::IMemoable* (::Org::BouncyCastle::Crypto::Digests::SkeinDigest::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinDigest::Copy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3386f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>(), { "Copy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinDigest.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Digests::SkeinDigest::*)()>(&::Org::BouncyCastle::Crypto::Digests::SkeinDigest::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x3386fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>(), { "get_AlgorithmName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinDigest.GetDigestSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Digests::SkeinDigest::*)()>(&::Org::BouncyCastle::Crypto::Digests::SkeinDigest::GetDigestSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3387194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>(), { "GetDigestSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinDigest.GetByteLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Digests::SkeinDigest::*)()>(&::Org::BouncyCastle::Crypto::Digests::SkeinDigest::GetByteLength)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x33871ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>(), { "GetByteLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinDigest.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinDigest::*)(::Org::BouncyCastle::Crypto::Parameters::SkeinParameters*)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinDigest::Init)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3386cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>(),
                                                                                           { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::SkeinParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinDigest.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinDigest::*)()>(&::Org::BouncyCastle::Crypto::Digests::SkeinDigest::Reset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x338728c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinDigest.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinDigest::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Digests::SkeinDigest::Update)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x33872e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>(), { "Update", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinDigest.BlockUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinDigest::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinDigest::BlockUpdate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3387328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>(),
                                                             { "BlockUpdate", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinDigest.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Digests::SkeinDigest::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinDigest::DoFinal)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3387388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>(),
                                                                                           { "DoFinal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine*& Org::BouncyCastle::Crypto::Digests::SkeinDigest::__cordl_internal_get_engine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engine;
}
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine* const& Org::BouncyCastle::Crypto::Digests::SkeinDigest::__cordl_internal_get_engine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engine;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinDigest::__cordl_internal_set_engine(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___engine = value;
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinDigest::_ctor(int32_t stateSizeBits, int32_t digestSizeBits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateSizeBits, digestSizeBits);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinDigest::_ctor(::Org::BouncyCastle::Crypto::Digests::SkeinDigest* digest) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digest);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinDigest::Reset(::Org::BouncyCastle::Utilities::IMemoable* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>(), { "Reset", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::IMemoable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::Org::BouncyCastle::Utilities::IMemoable* Org::BouncyCastle::Crypto::Digests::SkeinDigest::Copy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>(), { "Copy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::IMemoable*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Crypto::Digests::SkeinDigest::get_AlgorithmName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>(), { "get_AlgorithmName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Digests::SkeinDigest::GetDigestSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>(), { "GetDigestSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Digests::SkeinDigest::GetByteLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>(), { "GetByteLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinDigest::Init(::Org::BouncyCastle::Crypto::Parameters::SkeinParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>(),
                                                                                         { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::SkeinParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinDigest::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinDigest::Update(uint8_t inByte) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>(), { "Update", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inByte);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinDigest::BlockUpdate(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>(),
                                                           { "BlockUpdate", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inBytes, inOff, len);
}
inline int32_t Org::BouncyCastle::Crypto::Digests::SkeinDigest::DoFinal(::ArrayW<uint8_t> outBytes, int32_t outOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>(), { "DoFinal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, outBytes, outOff);
}
inline ::Org::BouncyCastle::Crypto::Digests::SkeinDigest* Org::BouncyCastle::Crypto::Digests::SkeinDigest::New_ctor(int32_t stateSizeBits, int32_t digestSizeBits) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>(stateSizeBits, digestSizeBits));
}
inline ::Org::BouncyCastle::Crypto::Digests::SkeinDigest* Org::BouncyCastle::Crypto::Digests::SkeinDigest::New_ctor(::Org::BouncyCastle::Crypto::Digests::SkeinDigest* digest) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Digests::SkeinDigest*>(digest));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
constexpr Org::BouncyCastle::Crypto::Digests::SkeinDigest::operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDigest*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IDigest"
constexpr ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Crypto::Digests::SkeinDigest::i___Org__BouncyCastle__Crypto__IDigest() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDigest*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Utilities::IMemoable"
constexpr Org::BouncyCastle::Crypto::Digests::SkeinDigest::operator ::Org::BouncyCastle::Utilities::IMemoable*() noexcept {
  return static_cast<::Org::BouncyCastle::Utilities::IMemoable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Utilities::IMemoable"
constexpr ::Org::BouncyCastle::Utilities::IMemoable* Org::BouncyCastle::Crypto::Digests::SkeinDigest::i___Org__BouncyCastle__Utilities__IMemoable() noexcept {
  return static_cast<::Org::BouncyCastle::Utilities::IMemoable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinDigest::SkeinDigest() {}
