#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Macs\SkeinMac.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Macs/zzzz__SkeinMac_def.hpp"
#include "Org/BouncyCastle/Crypto/Digests/zzzz__SkeinEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::SkeinMac._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::SkeinMac::*)(int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Macs::SkeinMac::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x33ef420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::SkeinMac*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::SkeinMac._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::SkeinMac::*)(::Org::BouncyCastle::Crypto::Macs::SkeinMac*)>(
    &::Org::BouncyCastle::Crypto::Macs::SkeinMac::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x33ef494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::SkeinMac*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Macs::SkeinMac*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::SkeinMac.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Macs::SkeinMac::*)()>(&::Org::BouncyCastle::Crypto::Macs::SkeinMac::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x33ef50c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::SkeinMac*>(), { "get_AlgorithmName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::SkeinMac.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::SkeinMac::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Macs::SkeinMac::Init)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x33ef6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::SkeinMac*>(), { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::SkeinMac.GetMacSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Macs::SkeinMac::*)()>(&::Org::BouncyCastle::Crypto::Macs::SkeinMac::GetMacSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x33ef8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::SkeinMac*>(), { "GetMacSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::SkeinMac.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::SkeinMac::*)()>(&::Org::BouncyCastle::Crypto::Macs::SkeinMac::Reset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x33ef900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::SkeinMac*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::SkeinMac.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::SkeinMac::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Macs::SkeinMac::Update)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x33ef918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::SkeinMac*>(), { "Update", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::SkeinMac.BlockUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::SkeinMac::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Macs::SkeinMac::BlockUpdate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x33ef930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::SkeinMac*>(),
                                                             { "BlockUpdate", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::SkeinMac.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Macs::SkeinMac::*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Macs::SkeinMac::DoFinal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x33ef948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::SkeinMac*>(), { "DoFinal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine*& Org::BouncyCastle::Crypto::Macs::SkeinMac::__cordl_internal_get_engine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engine;
}
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine* const& Org::BouncyCastle::Crypto::Macs::SkeinMac::__cordl_internal_get_engine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engine;
}
constexpr void Org::BouncyCastle::Crypto::Macs::SkeinMac::__cordl_internal_set_engine(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___engine = value;
}
inline void Org::BouncyCastle::Crypto::Macs::SkeinMac::_ctor(int32_t stateSizeBits, int32_t digestSizeBits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::SkeinMac*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateSizeBits, digestSizeBits);
}
inline void Org::BouncyCastle::Crypto::Macs::SkeinMac::_ctor(::Org::BouncyCastle::Crypto::Macs::SkeinMac* mac) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::SkeinMac*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Macs::SkeinMac*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mac);
}
inline ::StringW Org::BouncyCastle::Crypto::Macs::SkeinMac::get_AlgorithmName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::SkeinMac*>(), { "get_AlgorithmName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Macs::SkeinMac::Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::SkeinMac*>(), { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline int32_t Org::BouncyCastle::Crypto::Macs::SkeinMac::GetMacSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::SkeinMac*>(), { "GetMacSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Macs::SkeinMac::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::SkeinMac*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Macs::SkeinMac::Update(uint8_t inByte) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::SkeinMac*>(), { "Update", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inByte);
}
inline void Org::BouncyCastle::Crypto::Macs::SkeinMac::BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::SkeinMac*>(),
                                                           { "BlockUpdate", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff, len);
}
inline int32_t Org::BouncyCastle::Crypto::Macs::SkeinMac::DoFinal(::ArrayW<uint8_t> output, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::SkeinMac*>(), { "DoFinal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output, outOff);
}
inline ::Org::BouncyCastle::Crypto::Macs::SkeinMac* Org::BouncyCastle::Crypto::Macs::SkeinMac::New_ctor(int32_t stateSizeBits, int32_t digestSizeBits) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Macs::SkeinMac*>(stateSizeBits, digestSizeBits));
}
inline ::Org::BouncyCastle::Crypto::Macs::SkeinMac* Org::BouncyCastle::Crypto::Macs::SkeinMac::New_ctor(::Org::BouncyCastle::Crypto::Macs::SkeinMac* mac) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Macs::SkeinMac*>(mac));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
constexpr Org::BouncyCastle::Crypto::Macs::SkeinMac::operator ::Org::BouncyCastle::Crypto::IMac*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IMac*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IMac"
constexpr ::Org::BouncyCastle::Crypto::IMac* Org::BouncyCastle::Crypto::Macs::SkeinMac::i___Org__BouncyCastle__Crypto__IMac() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IMac*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Macs::SkeinMac::SkeinMac() {}
