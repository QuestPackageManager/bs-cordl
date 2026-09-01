#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\BufferedBlockCipher.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__BufferedCipherBase_impl.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__BufferedBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedBlockCipher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::BufferedBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::BufferedBlockCipher::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x33f8234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedBlockCipher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::BufferedBlockCipher::*)(::Org::BouncyCastle::Crypto::IBlockCipher*)>(
    &::Org::BouncyCastle::Crypto::BufferedBlockCipher::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x33f828c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedBlockCipher.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::BufferedBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::BufferedBlockCipher::get_AlgorithmName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x33f83e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedBlockCipher.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::BufferedBlockCipher::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::BufferedBlockCipher::Init)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x33f8484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedBlockCipher.GetBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::BufferedBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::BufferedBlockCipher::GetBlockSize)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x33f85b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedBlockCipher.GetUpdateOutputSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::BufferedBlockCipher::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::BufferedBlockCipher::GetUpdateOutputSize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x33f865c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedBlockCipher.GetOutputSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::BufferedBlockCipher::*)(int32_t)>(&::Org::BouncyCastle::Crypto::BufferedBlockCipher::GetOutputSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33f8684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedBlockCipher.ProcessByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::BufferedBlockCipher::*)(uint8_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::BufferedBlockCipher::ProcessByte)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x33f8690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedBlockCipher.ProcessByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::BufferedBlockCipher::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::BufferedBlockCipher::ProcessByte)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x33f8820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedBlockCipher.ProcessBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::BufferedBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::BufferedBlockCipher::ProcessBytes)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x33f8914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedBlockCipher.ProcessBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::BufferedBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::BufferedBlockCipher::ProcessBytes)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x33f8a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedBlockCipher.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::BufferedBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::BufferedBlockCipher::DoFinal)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x33f8dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedBlockCipher.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::BufferedBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::BufferedBlockCipher::DoFinal)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x33f8f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedBlockCipher.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::BufferedBlockCipher::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::BufferedBlockCipher::DoFinal)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x33f90d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedBlockCipher.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::BufferedBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::BufferedBlockCipher::Reset)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x33f9340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), 39 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::BufferedBlockCipher::__cordl_internal_get_buf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::BufferedBlockCipher::__cordl_internal_get_buf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf;
}
constexpr void Org::BouncyCastle::Crypto::BufferedBlockCipher::__cordl_internal_set_buf(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buf = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::BufferedBlockCipher::__cordl_internal_get_bufOff() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufOff;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::BufferedBlockCipher::__cordl_internal_get_bufOff() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufOff;
}
constexpr void Org::BouncyCastle::Crypto::BufferedBlockCipher::__cordl_internal_set_bufOff(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufOff = value;
}
constexpr bool& Org::BouncyCastle::Crypto::BufferedBlockCipher::__cordl_internal_get_forEncryption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr bool const& Org::BouncyCastle::Crypto::BufferedBlockCipher::__cordl_internal_get_forEncryption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr void Org::BouncyCastle::Crypto::BufferedBlockCipher::__cordl_internal_set_forEncryption(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forEncryption = value;
}
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& Org::BouncyCastle::Crypto::BufferedBlockCipher::__cordl_internal_get_cipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* const& Org::BouncyCastle::Crypto::BufferedBlockCipher::__cordl_internal_get_cipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr void Org::BouncyCastle::Crypto::BufferedBlockCipher::__cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cipher = value;
}
inline void Org::BouncyCastle::Crypto::BufferedBlockCipher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::BufferedBlockCipher::_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher);
}
inline ::StringW Org::BouncyCastle::Crypto::BufferedBlockCipher::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::BufferedBlockCipher::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline int32_t Org::BouncyCastle::Crypto::BufferedBlockCipher::GetBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::BufferedBlockCipher::GetUpdateOutputSize(int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, length);
}
inline int32_t Org::BouncyCastle::Crypto::BufferedBlockCipher::GetOutputSize(int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, length);
}
inline int32_t Org::BouncyCastle::Crypto::BufferedBlockCipher::ProcessByte(uint8_t input, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, output, outOff);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::BufferedBlockCipher::ProcessByte(uint8_t input) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::BufferedBlockCipher::ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input, inOff, length);
}
inline int32_t Org::BouncyCastle::Crypto::BufferedBlockCipher::ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, length, output, outOff);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::BufferedBlockCipher::DoFinal() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::BufferedBlockCipher::DoFinal(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input, inOff, inLen);
}
inline int32_t Org::BouncyCastle::Crypto::BufferedBlockCipher::DoFinal(::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output, outOff);
}
inline void Org::BouncyCastle::Crypto::BufferedBlockCipher::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::BufferedBlockCipher* Org::BouncyCastle::Crypto::BufferedBlockCipher::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>());
}
inline ::Org::BouncyCastle::Crypto::BufferedBlockCipher* Org::BouncyCastle::Crypto::BufferedBlockCipher::New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>(cipher));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::BufferedBlockCipher::BufferedBlockCipher() {}
