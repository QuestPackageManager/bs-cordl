#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Macs\Dstu7564Mac.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Macs/zzzz__Dstu7564Mac_def.hpp"
#include "Org/BouncyCastle/Crypto/Digests/zzzz__Dstu7564Digest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::*)()>(&::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33ea188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac*>(), { "get_AlgorithmName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x33ea1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::Init)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x33ea24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac*>(), { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac.GetMacSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::*)()>(&::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::GetMacSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33ea588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac*>(), { "GetMacSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac.BlockUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::BlockUpdate)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x33ea590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac*>(),
                                                             { "BlockUpdate", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::Update)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x33ea6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac*>(), { "Update", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::DoFinal)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x33ea6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac*>(), { "DoFinal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::*)()>(&::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::Reset)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x33ea934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac.Pad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::*)()>(&::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::Pad)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x33ea804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac*>(), { "Pad", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac.PadKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::PadKey)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x33ea3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac*>(), { "PadKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*& Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::__cordl_internal_get_engine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engine;
}
constexpr ::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest* const& Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::__cordl_internal_get_engine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engine;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::__cordl_internal_set_engine(::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___engine = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::__cordl_internal_get_macSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macSize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::__cordl_internal_get_macSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macSize;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::__cordl_internal_set_macSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___macSize = value;
}
constexpr uint64_t& Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::__cordl_internal_get_inputLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputLength;
}
constexpr uint64_t const& Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::__cordl_internal_get_inputLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputLength;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::__cordl_internal_set_inputLength(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputLength = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::__cordl_internal_get_paddedKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paddedKey;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::__cordl_internal_get_paddedKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paddedKey;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::__cordl_internal_set_paddedKey(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___paddedKey = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::__cordl_internal_get_invertedKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invertedKey;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::__cordl_internal_get_invertedKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invertedKey;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::__cordl_internal_set_invertedKey(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___invertedKey = value;
}
inline ::StringW Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::get_AlgorithmName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac*>(), { "get_AlgorithmName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::_ctor(int32_t macSizeBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, macSizeBits);
}
inline void Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac*>(), { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline int32_t Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::GetMacSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac*>(), { "GetMacSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac*>(),
                                                           { "BlockUpdate", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff, len);
}
inline void Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::Update(uint8_t input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac*>(), { "Update", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline int32_t Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::DoFinal(::ArrayW<uint8_t> output, int32_t outOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac*>(), { "DoFinal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::Pad() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac*>(), { "Pad", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::PadKey(::ArrayW<uint8_t> input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac*>(), { "PadKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input);
}
inline ::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac* Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::New_ctor(int32_t macSizeBits) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac*>(macSizeBits));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
constexpr Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::operator ::Org::BouncyCastle::Crypto::IMac*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IMac*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IMac"
constexpr ::Org::BouncyCastle::Crypto::IMac* Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::i___Org__BouncyCastle__Crypto__IMac() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IMac*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac::Dstu7564Mac() {}
