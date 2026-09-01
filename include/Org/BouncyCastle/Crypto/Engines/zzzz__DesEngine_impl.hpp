#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Engines\DesEngine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__DesEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::DesEngine.GetWorkingKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Org::BouncyCastle::Crypto::Engines::DesEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::DesEngine::GetWorkingKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33aa374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEngine*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::DesEngine.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::DesEngine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Engines::DesEngine::Init)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x33aa37c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEngine*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::DesEngine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::DesEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::DesEngine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33aa9fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEngine*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::DesEngine.get_IsPartialBlockOkay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Engines::DesEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::DesEngine::get_IsPartialBlockOkay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33aaa40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEngine*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::DesEngine.GetBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::DesEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::DesEngine::GetBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33aaa48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEngine*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::DesEngine.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::DesEngine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::DesEngine::ProcessBlock)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x33aaa50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEngine*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::DesEngine.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::DesEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::DesEngine::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33aafac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEngine*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::DesEngine.GenerateWorkingKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(bool, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Engines::DesEngine::GenerateWorkingKey)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x33aa4c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEngine*>(),
                                                                                           { "GenerateWorkingKey", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::DesEngine.DesFunc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::DesEngine::DesFunc)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x33aab94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEngine*>(),
                                                                                           { "DesFunc",
                                                                                             {},
                                                                                             { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::DesEngine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::DesEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::DesEngine::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33ab390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEngine*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& Org::BouncyCastle::Crypto::Engines::DesEngine::__cordl_internal_get_workingKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workingKey;
}
constexpr ::ArrayW<int32_t> const& Org::BouncyCastle::Crypto::Engines::DesEngine::__cordl_internal_get_workingKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workingKey;
}
constexpr void Org::BouncyCastle::Crypto::Engines::DesEngine::__cordl_internal_set_workingKey(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___workingKey = value;
}
inline void Org::BouncyCastle::Crypto::Engines::DesEngine::setStaticF_bytebit(::ArrayW<int16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int16_t>, "bytebit", ::Org::BouncyCastle::Crypto::Engines::DesEngine*>(std::forward<::ArrayW<int16_t>>(value));
}
inline ::ArrayW<int16_t> Org::BouncyCastle::Crypto::Engines::DesEngine::getStaticF_bytebit() {
  return ::cordl_internals::getStaticField<::ArrayW<int16_t>, "bytebit", ::Org::BouncyCastle::Crypto::Engines::DesEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::DesEngine::setStaticF_bigbyte(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "bigbyte", ::Org::BouncyCastle::Crypto::Engines::DesEngine*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Engines::DesEngine::getStaticF_bigbyte() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "bigbyte", ::Org::BouncyCastle::Crypto::Engines::DesEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::DesEngine::setStaticF_pc1(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "pc1", ::Org::BouncyCastle::Crypto::Engines::DesEngine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::DesEngine::getStaticF_pc1() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "pc1", ::Org::BouncyCastle::Crypto::Engines::DesEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::DesEngine::setStaticF_totrot(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "totrot", ::Org::BouncyCastle::Crypto::Engines::DesEngine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::DesEngine::getStaticF_totrot() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "totrot", ::Org::BouncyCastle::Crypto::Engines::DesEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::DesEngine::setStaticF_pc2(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "pc2", ::Org::BouncyCastle::Crypto::Engines::DesEngine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::DesEngine::getStaticF_pc2() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "pc2", ::Org::BouncyCastle::Crypto::Engines::DesEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::DesEngine::setStaticF_SP1(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "SP1", ::Org::BouncyCastle::Crypto::Engines::DesEngine*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Engines::DesEngine::getStaticF_SP1() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "SP1", ::Org::BouncyCastle::Crypto::Engines::DesEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::DesEngine::setStaticF_SP2(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "SP2", ::Org::BouncyCastle::Crypto::Engines::DesEngine*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Engines::DesEngine::getStaticF_SP2() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "SP2", ::Org::BouncyCastle::Crypto::Engines::DesEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::DesEngine::setStaticF_SP3(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "SP3", ::Org::BouncyCastle::Crypto::Engines::DesEngine*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Engines::DesEngine::getStaticF_SP3() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "SP3", ::Org::BouncyCastle::Crypto::Engines::DesEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::DesEngine::setStaticF_SP4(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "SP4", ::Org::BouncyCastle::Crypto::Engines::DesEngine*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Engines::DesEngine::getStaticF_SP4() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "SP4", ::Org::BouncyCastle::Crypto::Engines::DesEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::DesEngine::setStaticF_SP5(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "SP5", ::Org::BouncyCastle::Crypto::Engines::DesEngine*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Engines::DesEngine::getStaticF_SP5() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "SP5", ::Org::BouncyCastle::Crypto::Engines::DesEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::DesEngine::setStaticF_SP6(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "SP6", ::Org::BouncyCastle::Crypto::Engines::DesEngine*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Engines::DesEngine::getStaticF_SP6() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "SP6", ::Org::BouncyCastle::Crypto::Engines::DesEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::DesEngine::setStaticF_SP7(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "SP7", ::Org::BouncyCastle::Crypto::Engines::DesEngine*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Engines::DesEngine::getStaticF_SP7() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "SP7", ::Org::BouncyCastle::Crypto::Engines::DesEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::DesEngine::setStaticF_SP8(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "SP8", ::Org::BouncyCastle::Crypto::Engines::DesEngine*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Engines::DesEngine::getStaticF_SP8() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "SP8", ::Org::BouncyCastle::Crypto::Engines::DesEngine*>();
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Engines::DesEngine::GetWorkingKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEngine*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::DesEngine::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEngine*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline ::StringW Org::BouncyCastle::Crypto::Engines::DesEngine::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEngine*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Engines::DesEngine::get_IsPartialBlockOkay() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEngine*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::DesEngine::GetBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEngine*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::DesEngine::ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEngine*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Engines::DesEngine::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEngine*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Engines::DesEngine::GenerateWorkingKey(bool encrypting, ::ArrayW<uint8_t> key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEngine*>(),
                                                                                         { "GenerateWorkingKey", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, encrypting, key);
}
inline void Org::BouncyCastle::Crypto::Engines::DesEngine::DesFunc(::ArrayW<int32_t> wKey, ::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEngine*>(),
          { "DesFunc", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, wKey, input, inOff, outBytes, outOff);
}
inline void Org::BouncyCastle::Crypto::Engines::DesEngine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEngine*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Engines::DesEngine* Org::BouncyCastle::Crypto::Engines::DesEngine::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::DesEngine*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr Org::BouncyCastle::Crypto::Engines::DesEngine::operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Engines::DesEngine::i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::DesEngine::DesEngine() {}
