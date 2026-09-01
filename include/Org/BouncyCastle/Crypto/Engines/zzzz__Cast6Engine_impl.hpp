#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Engines\Cast6Engine.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Cast5Engine_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Cast6Engine_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Cast6Engine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Cast6Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::Cast6Engine::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x33a7488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Cast6Engine*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Cast6Engine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::Cast6Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::Cast6Engine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33a7574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Cast6Engine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Cast6Engine*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Cast6Engine.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Cast6Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::Cast6Engine::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33a75b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Cast6Engine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Cast6Engine*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Cast6Engine.GetBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::Cast6Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::Cast6Engine::GetBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33a75bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Cast6Engine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Cast6Engine*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Cast6Engine.SetKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Cast6Engine::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Engines::Cast6Engine::SetKey)> {
  constexpr static std::size_t size = 0x9c0;
  constexpr static std::size_t addrs = 0x33a75c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Cast6Engine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Cast6Engine*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Cast6Engine.EncryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::Cast6Engine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::Cast6Engine::EncryptBlock)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x33a7f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Cast6Engine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Cast6Engine*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Cast6Engine.DecryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::Cast6Engine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::Cast6Engine::DecryptBlock)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x33a8444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Cast6Engine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Cast6Engine*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Cast6Engine.CAST_Encipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Cast6Engine::*)(uint32_t, uint32_t, uint32_t, uint32_t, ::ArrayW<uint32_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::Cast6Engine::CAST_Encipher)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x33a80fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Cast6Engine*>(),
            { "CAST_Encipher", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Cast6Engine.CAST_Decipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Cast6Engine::*)(uint32_t, uint32_t, uint32_t, uint32_t, ::ArrayW<uint32_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::Cast6Engine::CAST_Decipher)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x33a85bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Cast6Engine*>(),
            { "CAST_Decipher", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& Org::BouncyCastle::Crypto::Engines::Cast6Engine::__cordl_internal_get__Kr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Kr;
}
constexpr ::ArrayW<int32_t> const& Org::BouncyCastle::Crypto::Engines::Cast6Engine::__cordl_internal_get__Kr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Kr;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Cast6Engine::__cordl_internal_set__Kr(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Kr = value;
}
constexpr ::ArrayW<uint32_t>& Org::BouncyCastle::Crypto::Engines::Cast6Engine::__cordl_internal_get__Km() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Km;
}
constexpr ::ArrayW<uint32_t> const& Org::BouncyCastle::Crypto::Engines::Cast6Engine::__cordl_internal_get__Km() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Km;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Cast6Engine::__cordl_internal_set__Km(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Km = value;
}
constexpr ::ArrayW<int32_t>& Org::BouncyCastle::Crypto::Engines::Cast6Engine::__cordl_internal_get__Tr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Tr;
}
constexpr ::ArrayW<int32_t> const& Org::BouncyCastle::Crypto::Engines::Cast6Engine::__cordl_internal_get__Tr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Tr;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Cast6Engine::__cordl_internal_set__Tr(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Tr = value;
}
constexpr ::ArrayW<uint32_t>& Org::BouncyCastle::Crypto::Engines::Cast6Engine::__cordl_internal_get__Tm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Tm;
}
constexpr ::ArrayW<uint32_t> const& Org::BouncyCastle::Crypto::Engines::Cast6Engine::__cordl_internal_get__Tm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Tm;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Cast6Engine::__cordl_internal_set__Tm(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Tm = value;
}
constexpr ::ArrayW<uint32_t>& Org::BouncyCastle::Crypto::Engines::Cast6Engine::__cordl_internal_get__workingKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____workingKey;
}
constexpr ::ArrayW<uint32_t> const& Org::BouncyCastle::Crypto::Engines::Cast6Engine::__cordl_internal_get__workingKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____workingKey;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Cast6Engine::__cordl_internal_set__workingKey(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____workingKey = value;
}
inline void Org::BouncyCastle::Crypto::Engines::Cast6Engine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Cast6Engine*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Crypto::Engines::Cast6Engine::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Cast6Engine*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::Cast6Engine::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Cast6Engine*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::Cast6Engine::GetBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Cast6Engine*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::Cast6Engine::SetKey(::ArrayW<uint8_t> key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Cast6Engine*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::Cast6Engine::EncryptBlock(::ArrayW<uint8_t> src, int32_t srcIndex, ::ArrayW<uint8_t> dst, int32_t dstIndex) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Cast6Engine*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, src, srcIndex, dst, dstIndex);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::Cast6Engine::DecryptBlock(::ArrayW<uint8_t> src, int32_t srcIndex, ::ArrayW<uint8_t> dst, int32_t dstIndex) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Cast6Engine*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, src, srcIndex, dst, dstIndex);
}
inline void Org::BouncyCastle::Crypto::Engines::Cast6Engine::CAST_Encipher(uint32_t A, uint32_t B, uint32_t C, uint32_t D, ::ArrayW<uint32_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Cast6Engine*>(),
          { "CAST_Encipher", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, A, B, C, D, result);
}
inline void Org::BouncyCastle::Crypto::Engines::Cast6Engine::CAST_Decipher(uint32_t A, uint32_t B, uint32_t C, uint32_t D, ::ArrayW<uint32_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Cast6Engine*>(),
          { "CAST_Decipher", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, A, B, C, D, result);
}
inline ::Org::BouncyCastle::Crypto::Engines::Cast6Engine* Org::BouncyCastle::Crypto::Engines::Cast6Engine::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::Cast6Engine*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::Cast6Engine::Cast6Engine() {}
