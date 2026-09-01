#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Macs\Gost28147Mac.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Macs/zzzz__Gost28147Mac_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Gost28147Mac._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::Gost28147Mac::*)()>(&::Org::BouncyCastle::Crypto::Macs::Gost28147Mac::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x33eb494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Gost28147Mac.GenerateWorkingKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Macs::Gost28147Mac::GenerateWorkingKey)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x33eb544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(), { "GenerateWorkingKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Gost28147Mac.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::Gost28147Mac::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Macs::Gost28147Mac::Init)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x33eb6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(), { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Gost28147Mac.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Macs::Gost28147Mac::*)()>(&::Org::BouncyCastle::Crypto::Macs::Gost28147Mac::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33eb970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(), { "get_AlgorithmName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Gost28147Mac.GetMacSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Macs::Gost28147Mac::*)()>(&::Org::BouncyCastle::Crypto::Macs::Gost28147Mac::GetMacSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33eb9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(), { "GetMacSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Gost28147Mac.gost28147_mainStep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Macs::Gost28147Mac::*)(int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Macs::Gost28147Mac::gost28147_mainStep)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x33eb9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(), { "gost28147_mainStep", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Gost28147Mac.gost28147MacFunc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::Gost28147Mac::*)(::ArrayW<int32_t>, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Macs::Gost28147Mac::gost28147MacFunc)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x33ebaa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(),
                                                                                           { "gost28147MacFunc",
                                                                                             {},
                                                                                             { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Gost28147Mac.bytesToint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Macs::Gost28147Mac::bytesToint)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x33eb640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(),
                                                                                           { "bytesToint", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Gost28147Mac.intTobytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Macs::Gost28147Mac::intTobytes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x33ebb88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(),
                                                             { "intTobytes", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Gost28147Mac.CM5func
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Macs::Gost28147Mac::CM5func)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x33ebc08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(),
                                                             { "CM5func", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Gost28147Mac.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::Gost28147Mac::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Macs::Gost28147Mac::Update)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x33ebcf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(), { "Update", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Gost28147Mac.BlockUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::Gost28147Mac::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Macs::Gost28147Mac::BlockUpdate)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x33ebe0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(),
                                                             { "BlockUpdate", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Gost28147Mac.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Macs::Gost28147Mac::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Macs::Gost28147Mac::DoFinal)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x33ec004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(), { "DoFinal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Gost28147Mac.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::Gost28147Mac::*)()>(&::Org::BouncyCastle::Crypto::Macs::Gost28147Mac::Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x33eb938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Macs::Gost28147Mac::__cordl_internal_get_bufOff() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufOff;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Macs::Gost28147Mac::__cordl_internal_get_bufOff() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufOff;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Gost28147Mac::__cordl_internal_set_bufOff(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufOff = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Macs::Gost28147Mac::__cordl_internal_get_buf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Macs::Gost28147Mac::__cordl_internal_get_buf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Gost28147Mac::__cordl_internal_set_buf(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buf = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Macs::Gost28147Mac::__cordl_internal_get_mac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Macs::Gost28147Mac::__cordl_internal_get_mac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Gost28147Mac::__cordl_internal_set_mac(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mac = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Macs::Gost28147Mac::__cordl_internal_get_firstStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstStep;
}
constexpr bool const& Org::BouncyCastle::Crypto::Macs::Gost28147Mac::__cordl_internal_get_firstStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstStep;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Gost28147Mac::__cordl_internal_set_firstStep(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___firstStep = value;
}
constexpr ::ArrayW<int32_t>& Org::BouncyCastle::Crypto::Macs::Gost28147Mac::__cordl_internal_get_workingKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workingKey;
}
constexpr ::ArrayW<int32_t> const& Org::BouncyCastle::Crypto::Macs::Gost28147Mac::__cordl_internal_get_workingKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workingKey;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Gost28147Mac::__cordl_internal_set_workingKey(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___workingKey = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Macs::Gost28147Mac::__cordl_internal_get_macIV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macIV;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Macs::Gost28147Mac::__cordl_internal_get_macIV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macIV;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Gost28147Mac::__cordl_internal_set_macIV(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___macIV = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Macs::Gost28147Mac::__cordl_internal_get_S() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Macs::Gost28147Mac::__cordl_internal_get_S() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Gost28147Mac::__cordl_internal_set_S(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___S = value;
}
inline void Org::BouncyCastle::Crypto::Macs::Gost28147Mac::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Macs::Gost28147Mac::GenerateWorkingKey(::ArrayW<uint8_t> userKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(), { "GenerateWorkingKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, userKey);
}
inline void Org::BouncyCastle::Crypto::Macs::Gost28147Mac::Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(), { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline ::StringW Org::BouncyCastle::Crypto::Macs::Gost28147Mac::get_AlgorithmName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(), { "get_AlgorithmName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Macs::Gost28147Mac::GetMacSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(), { "GetMacSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Macs::Gost28147Mac::gost28147_mainStep(int32_t n1, int32_t key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(), { "gost28147_mainStep", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, n1, key);
}
inline void Org::BouncyCastle::Crypto::Macs::Gost28147Mac::gost28147MacFunc(::ArrayW<int32_t> workingKey, ::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(),
                                                                                         { "gost28147MacFunc",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, workingKey, input, inOff, output, outOff);
}
inline int32_t Org::BouncyCastle::Crypto::Macs::Gost28147Mac::bytesToint(::ArrayW<uint8_t> input, int32_t inOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(), { "bytesToint", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, input, inOff);
}
inline void Org::BouncyCastle::Crypto::Macs::Gost28147Mac::intTobytes(int32_t num, ::ArrayW<uint8_t> output, int32_t outOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(),
                                                           { "intTobytes", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, num, output, outOff);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Macs::Gost28147Mac::CM5func(::ArrayW<uint8_t> buf, int32_t bufOff, ::ArrayW<uint8_t> mac) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(),
                                                           { "CM5func", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, buf, bufOff, mac);
}
inline void Org::BouncyCastle::Crypto::Macs::Gost28147Mac::Update(uint8_t input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(), { "Update", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Macs::Gost28147Mac::BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(),
                                                           { "BlockUpdate", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff, len);
}
inline int32_t Org::BouncyCastle::Crypto::Macs::Gost28147Mac::DoFinal(::ArrayW<uint8_t> output, int32_t outOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(), { "DoFinal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Macs::Gost28147Mac::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Macs::Gost28147Mac* Org::BouncyCastle::Crypto::Macs::Gost28147Mac::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
constexpr Org::BouncyCastle::Crypto::Macs::Gost28147Mac::operator ::Org::BouncyCastle::Crypto::IMac*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IMac*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IMac"
constexpr ::Org::BouncyCastle::Crypto::IMac* Org::BouncyCastle::Crypto::Macs::Gost28147Mac::i___Org__BouncyCastle__Crypto__IMac() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IMac*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Macs::Gost28147Mac::Gost28147Mac() {}
