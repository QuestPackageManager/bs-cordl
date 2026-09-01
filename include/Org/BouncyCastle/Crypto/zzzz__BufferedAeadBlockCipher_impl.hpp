#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\BufferedAeadBlockCipher.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__BufferedCipherBase_impl.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__BufferedAeadBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__IAeadBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::*)(::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*)>(
    &::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x349c2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::*)()>(
    &::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::get_AlgorithmName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x349c3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::Init)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x349c450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher.GetBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::GetBlockSize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x349c55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher.GetUpdateOutputSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::GetUpdateOutputSize)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x349c600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher.GetOutputSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::GetOutputSize)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x349c6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher.ProcessByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::*)(uint8_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::ProcessByte)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x349c770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher.ProcessByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::ProcessByte)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x349c840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher.ProcessBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::ProcessBytes)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x349c934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher.ProcessBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::ProcessBytes)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x349ca9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::DoFinal)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x349cb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::DoFinal)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x349cc5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::DoFinal)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x349cdd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::Reset)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x349ce98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(), 39 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*& Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::__cordl_internal_get_cipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* const& Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::__cordl_internal_get_cipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr void Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::__cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cipher = value;
}
inline void Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::_ctor(::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* cipher) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher);
}
inline ::StringW Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline int32_t Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::GetBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::GetUpdateOutputSize(int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, length);
}
inline int32_t Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::GetOutputSize(int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, length);
}
inline int32_t Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::ProcessByte(uint8_t input, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, output, outOff);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::ProcessByte(uint8_t input) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input, inOff, length);
}
inline int32_t Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, length, output, outOff);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::DoFinal() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::DoFinal(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input, inOff, inLen);
}
inline int32_t Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::DoFinal(::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output, outOff);
}
inline void Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher* Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::New_ctor(::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* cipher) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher*>(cipher));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher::BufferedAeadBlockCipher() {}
