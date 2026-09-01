#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\BufferedAsymmetricBlockCipher.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__BufferedCipherBase_impl.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__BufferedAsymmetricBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::*)(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*)>(
    &::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x349dae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher.GetBufferPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::*)()>(
    &::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::GetBufferPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x349db4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(), { "GetBufferPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::*)()>(
    &::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::get_AlgorithmName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x349db54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher.GetBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::*)()>(
    &::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::GetBlockSize)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x349dbf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher.GetOutputSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::GetOutputSize)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x349dca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher.GetUpdateOutputSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::GetUpdateOutputSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x349dd48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::Init)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x349dd50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher.ProcessByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::ProcessByte)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x349dec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher.ProcessBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::ProcessBytes)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x349df50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::*)()>(
    &::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::DoFinal)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x349e038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::DoFinal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x349e15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::Reset)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x349e18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(), 39 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::__cordl_internal_get_cipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* const& Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::__cordl_internal_get_cipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr void Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::__cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cipher = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::__cordl_internal_get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::__cordl_internal_get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr void Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::__cordl_internal_set_buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buffer = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::__cordl_internal_get_bufOff() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufOff;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::__cordl_internal_get_bufOff() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufOff;
}
constexpr void Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::__cordl_internal_set_bufOff(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufOff = value;
}
inline void Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher);
}
inline int32_t Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::GetBufferPosition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(), { "GetBufferPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::GetBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::GetOutputSize(int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, length);
}
inline int32_t Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::GetUpdateOutputSize(int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, length);
}
inline void Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::ProcessByte(uint8_t input) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input, inOff, length);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::DoFinal() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::DoFinal(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input, inOff, length);
}
inline void Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher* Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher*>(cipher));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher::BufferedAsymmetricBlockCipher() {}
