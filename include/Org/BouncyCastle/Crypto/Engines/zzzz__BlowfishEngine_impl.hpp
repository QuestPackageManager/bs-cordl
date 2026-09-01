#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Engines\BlowfishEngine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__BlowfishEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x339db88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::Init)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x339dc7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(),
                                                             { "Init", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x339e0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(), { "get_AlgorithmName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine.get_IsPartialBlockOkay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::get_IsPartialBlockOkay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x339e10c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(), { "get_IsPartialBlockOkay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::ProcessBlock)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x339e114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(),
                                         { "ProcessBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x339e580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine.GetBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::GetBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x339e584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(), { "GetBlockSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine.F
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)(uint32_t)>(&::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::F)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x339e58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(), { "F", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine.ProcessTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)(uint32_t, uint32_t, ::ArrayW<uint32_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::ProcessTable)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x339e62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(),
                                                             { "ProcessTable", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine.SetKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::SetKey)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x339ddc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(), { "SetKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine.EncryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::EncryptBlock)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x339e250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(),
                                         { "EncryptBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine.DecryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::DecryptBlock)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x339e3f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(),
                                         { "DecryptBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint32_t>& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__cordl_internal_get_S0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S0;
}
constexpr ::ArrayW<uint32_t> const& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__cordl_internal_get_S0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S0;
}
constexpr void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__cordl_internal_set_S0(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___S0 = value;
}
constexpr ::ArrayW<uint32_t>& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__cordl_internal_get_S1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S1;
}
constexpr ::ArrayW<uint32_t> const& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__cordl_internal_get_S1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S1;
}
constexpr void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__cordl_internal_set_S1(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___S1 = value;
}
constexpr ::ArrayW<uint32_t>& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__cordl_internal_get_S2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S2;
}
constexpr ::ArrayW<uint32_t> const& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__cordl_internal_get_S2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S2;
}
constexpr void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__cordl_internal_set_S2(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___S2 = value;
}
constexpr ::ArrayW<uint32_t>& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__cordl_internal_get_S3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S3;
}
constexpr ::ArrayW<uint32_t> const& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__cordl_internal_get_S3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S3;
}
constexpr void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__cordl_internal_set_S3(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___S3 = value;
}
constexpr ::ArrayW<uint32_t>& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__cordl_internal_get_P() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___P;
}
constexpr ::ArrayW<uint32_t> const& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__cordl_internal_get_P() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___P;
}
constexpr void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__cordl_internal_set_P(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___P = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__cordl_internal_get_encrypting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encrypting;
}
constexpr bool const& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__cordl_internal_get_encrypting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encrypting;
}
constexpr void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__cordl_internal_set_encrypting(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encrypting = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__cordl_internal_get_workingKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workingKey;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__cordl_internal_get_workingKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workingKey;
}
constexpr void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::__cordl_internal_set_workingKey(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___workingKey = value;
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::setStaticF_KP(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "KP", ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Engines::BlowfishEngine::getStaticF_KP() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "KP", ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::setStaticF_KS0(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "KS0", ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Engines::BlowfishEngine::getStaticF_KS0() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "KS0", ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::setStaticF_KS1(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "KS1", ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Engines::BlowfishEngine::getStaticF_KS1() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "KS1", ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::setStaticF_KS2(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "KS2", ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Engines::BlowfishEngine::getStaticF_KS2() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "KS2", ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::setStaticF_KS3(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "KS3", ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Engines::BlowfishEngine::getStaticF_KS3() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "KS3", ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::setStaticF_ROUNDS(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ROUNDS", ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Engines::BlowfishEngine::getStaticF_ROUNDS() {
  return ::cordl_internals::getStaticField<int32_t, "ROUNDS", ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::setStaticF_SBOX_SK(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "SBOX_SK", ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Engines::BlowfishEngine::getStaticF_SBOX_SK() {
  return ::cordl_internals::getStaticField<int32_t, "SBOX_SK", ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::setStaticF_P_SZ(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "P_SZ", ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Engines::BlowfishEngine::getStaticF_P_SZ() {
  return ::cordl_internals::getStaticField<int32_t, "P_SZ", ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(),
                                                           { "Init", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline ::StringW Org::BouncyCastle::Crypto::Engines::BlowfishEngine::get_AlgorithmName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(), { "get_AlgorithmName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Engines::BlowfishEngine::get_IsPartialBlockOkay() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(), { "get_IsPartialBlockOkay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::BlowfishEngine::ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(),
                                       { "ProcessBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::BlowfishEngine::GetBlockSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(), { "GetBlockSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline uint32_t Org::BouncyCastle::Crypto::Engines::BlowfishEngine::F(uint32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(), { "F", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, x);
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::ProcessTable(uint32_t xl, uint32_t xr, ::ArrayW<uint32_t> table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(),
                                                           { "ProcessTable", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xl, xr, table);
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::SetKey(::ArrayW<uint8_t> key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(), { "SetKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::EncryptBlock(::ArrayW<uint8_t> src, int32_t srcIndex, ::ArrayW<uint8_t> dst, int32_t dstIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(),
                                       { "EncryptBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, srcIndex, dst, dstIndex);
}
inline void Org::BouncyCastle::Crypto::Engines::BlowfishEngine::DecryptBlock(::ArrayW<uint8_t> src, int32_t srcIndex, ::ArrayW<uint8_t> dst, int32_t dstIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>(),
                                       { "DecryptBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, srcIndex, dst, dstIndex);
}
inline ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine* Org::BouncyCastle::Crypto::Engines::BlowfishEngine::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr Org::BouncyCastle::Crypto::Engines::BlowfishEngine::operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Engines::BlowfishEngine::i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine::BlowfishEngine() {}
