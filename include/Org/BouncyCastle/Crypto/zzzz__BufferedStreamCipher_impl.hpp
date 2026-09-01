#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\BufferedStreamCipher.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__BufferedCipherBase_impl.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__BufferedStreamCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCipher_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedStreamCipher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::BufferedStreamCipher::*)(::Org::BouncyCastle::Crypto::IStreamCipher*)>(
    &::Org::BouncyCastle::Crypto::BufferedStreamCipher::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x349e5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IStreamCipher*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedStreamCipher.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::BufferedStreamCipher::*)()>(&::Org::BouncyCastle::Crypto::BufferedStreamCipher::get_AlgorithmName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x349e670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedStreamCipher.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::BufferedStreamCipher::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::BufferedStreamCipher::Init)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x349e714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedStreamCipher.GetBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::BufferedStreamCipher::*)()>(&::Org::BouncyCastle::Crypto::BufferedStreamCipher::GetBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x349e820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedStreamCipher.GetOutputSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::BufferedStreamCipher::*)(int32_t)>(&::Org::BouncyCastle::Crypto::BufferedStreamCipher::GetOutputSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x349e828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedStreamCipher.GetUpdateOutputSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::BufferedStreamCipher::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::BufferedStreamCipher::GetUpdateOutputSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x349e830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedStreamCipher.ProcessByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::BufferedStreamCipher::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::BufferedStreamCipher::ProcessByte)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x349e838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedStreamCipher.ProcessByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::BufferedStreamCipher::*)(uint8_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::BufferedStreamCipher::ProcessByte)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x349e938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedStreamCipher.ProcessBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::BufferedStreamCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::BufferedStreamCipher::ProcessBytes)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x349ea78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedStreamCipher.ProcessBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::BufferedStreamCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::BufferedStreamCipher::ProcessBytes)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x349eb90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedStreamCipher.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::BufferedStreamCipher::*)()>(&::Org::BouncyCastle::Crypto::BufferedStreamCipher::DoFinal)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x349ec90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedStreamCipher.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::BufferedStreamCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::BufferedStreamCipher::DoFinal)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x349ed04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::BufferedStreamCipher.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::BufferedStreamCipher::*)()>(&::Org::BouncyCastle::Crypto::BufferedStreamCipher::Reset)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x349edc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), 39 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IStreamCipher*& Org::BouncyCastle::Crypto::BufferedStreamCipher::__cordl_internal_get_cipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr ::Org::BouncyCastle::Crypto::IStreamCipher* const& Org::BouncyCastle::Crypto::BufferedStreamCipher::__cordl_internal_get_cipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr void Org::BouncyCastle::Crypto::BufferedStreamCipher::__cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IStreamCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cipher = value;
}
inline void Org::BouncyCastle::Crypto::BufferedStreamCipher::_ctor(::Org::BouncyCastle::Crypto::IStreamCipher* cipher) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IStreamCipher*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher);
}
inline ::StringW Org::BouncyCastle::Crypto::BufferedStreamCipher::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::BufferedStreamCipher::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline int32_t Org::BouncyCastle::Crypto::BufferedStreamCipher::GetBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::BufferedStreamCipher::GetOutputSize(int32_t inputLen) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, inputLen);
}
inline int32_t Org::BouncyCastle::Crypto::BufferedStreamCipher::GetUpdateOutputSize(int32_t inputLen) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, inputLen);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::BufferedStreamCipher::ProcessByte(uint8_t input) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input);
}
inline int32_t Org::BouncyCastle::Crypto::BufferedStreamCipher::ProcessByte(uint8_t input, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, output, outOff);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::BufferedStreamCipher::ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input, inOff, length);
}
inline int32_t Org::BouncyCastle::Crypto::BufferedStreamCipher::ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, length, output, outOff);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::BufferedStreamCipher::DoFinal() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::BufferedStreamCipher::DoFinal(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input, inOff, length);
}
inline void Org::BouncyCastle::Crypto::BufferedStreamCipher::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::BufferedStreamCipher* Org::BouncyCastle::Crypto::BufferedStreamCipher::New_ctor(::Org::BouncyCastle::Crypto::IStreamCipher* cipher) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::BufferedStreamCipher*>(cipher));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::BufferedStreamCipher::BufferedStreamCipher() {}
