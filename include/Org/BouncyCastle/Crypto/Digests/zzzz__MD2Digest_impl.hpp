#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Digests\MD2Digest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Digests/zzzz__MD2Digest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Utilities/zzzz__IMemoable_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::MD2Digest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::MD2Digest::*)()>(&::Org::BouncyCastle::Crypto::Digests::MD2Digest::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x36f0dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::MD2Digest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::MD2Digest::*)(::Org::BouncyCastle::Crypto::Digests::MD2Digest*)>(
    &::Org::BouncyCastle::Crypto::Digests::MD2Digest::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x36f0f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::MD2Digest.CopyIn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::MD2Digest::*)(::Org::BouncyCastle::Crypto::Digests::MD2Digest*)>(
    &::Org::BouncyCastle::Crypto::Digests::MD2Digest::CopyIn)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x36f0fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(),
                                                                                           { "CopyIn", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::MD2Digest.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Digests::MD2Digest::*)()>(&::Org::BouncyCastle::Crypto::Digests::MD2Digest::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x36f103c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(), { "get_AlgorithmName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::MD2Digest.GetDigestSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Digests::MD2Digest::*)()>(&::Org::BouncyCastle::Crypto::Digests::MD2Digest::GetDigestSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f1080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(), { "GetDigestSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::MD2Digest.GetByteLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Digests::MD2Digest::*)()>(&::Org::BouncyCastle::Crypto::Digests::MD2Digest::GetByteLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f1088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(), { "GetByteLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::MD2Digest.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Digests::MD2Digest::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::MD2Digest::DoFinal)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x36f1090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(), { "DoFinal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::MD2Digest.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::MD2Digest::*)()>(&::Org::BouncyCastle::Crypto::Digests::MD2Digest::Reset)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x36f0e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::MD2Digest.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::MD2Digest::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Digests::MD2Digest::Update)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x36f13f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(), { "Update", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::MD2Digest.BlockUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::MD2Digest::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::MD2Digest::BlockUpdate)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x36f145c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(),
                                                             { "BlockUpdate", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::MD2Digest.ProcessChecksum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::MD2Digest::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Digests::MD2Digest::ProcessChecksum)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x36f1140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(), { "ProcessChecksum", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::MD2Digest.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::MD2Digest::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Digests::MD2Digest::ProcessBlock)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x36f1260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(), { "ProcessBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::MD2Digest.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::IMemoable* (::Org::BouncyCastle::Crypto::Digests::MD2Digest::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::MD2Digest::Copy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x36f1578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(), { "Copy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::MD2Digest.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::MD2Digest::*)(::Org::BouncyCastle::Utilities::IMemoable*)>(
    &::Org::BouncyCastle::Crypto::Digests::MD2Digest::Reset)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x36f15d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(), { "Reset", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::IMemoable*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Digests::MD2Digest::__cordl_internal_get_X() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___X;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Digests::MD2Digest::__cordl_internal_get_X() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___X;
}
constexpr void Org::BouncyCastle::Crypto::Digests::MD2Digest::__cordl_internal_set_X(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___X = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Digests::MD2Digest::__cordl_internal_get_xOff() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xOff;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Digests::MD2Digest::__cordl_internal_get_xOff() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xOff;
}
constexpr void Org::BouncyCastle::Crypto::Digests::MD2Digest::__cordl_internal_set_xOff(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xOff = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Digests::MD2Digest::__cordl_internal_get_M() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___M;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Digests::MD2Digest::__cordl_internal_get_M() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___M;
}
constexpr void Org::BouncyCastle::Crypto::Digests::MD2Digest::__cordl_internal_set_M(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___M = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Digests::MD2Digest::__cordl_internal_get_mOff() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOff;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Digests::MD2Digest::__cordl_internal_get_mOff() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mOff;
}
constexpr void Org::BouncyCastle::Crypto::Digests::MD2Digest::__cordl_internal_set_mOff(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mOff = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Digests::MD2Digest::__cordl_internal_get_C() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___C;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Digests::MD2Digest::__cordl_internal_get_C() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___C;
}
constexpr void Org::BouncyCastle::Crypto::Digests::MD2Digest::__cordl_internal_set_C(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___C = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Digests::MD2Digest::__cordl_internal_get_COff() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___COff;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Digests::MD2Digest::__cordl_internal_get_COff() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___COff;
}
constexpr void Org::BouncyCastle::Crypto::Digests::MD2Digest::__cordl_internal_set_COff(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___COff = value;
}
inline void Org::BouncyCastle::Crypto::Digests::MD2Digest::setStaticF_S(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "S", ::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Digests::MD2Digest::getStaticF_S() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "S", ::Org::BouncyCastle::Crypto::Digests::MD2Digest*>();
}
inline void Org::BouncyCastle::Crypto::Digests::MD2Digest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::MD2Digest::_ctor(::Org::BouncyCastle::Crypto::Digests::MD2Digest* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void Org::BouncyCastle::Crypto::Digests::MD2Digest::CopyIn(::Org::BouncyCastle::Crypto::Digests::MD2Digest* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(), { "CopyIn", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::StringW Org::BouncyCastle::Crypto::Digests::MD2Digest::get_AlgorithmName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(), { "get_AlgorithmName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Digests::MD2Digest::GetDigestSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(), { "GetDigestSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Digests::MD2Digest::GetByteLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(), { "GetByteLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Digests::MD2Digest::DoFinal(::ArrayW<uint8_t> output, int32_t outOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(), { "DoFinal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Digests::MD2Digest::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::MD2Digest::Update(uint8_t input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(), { "Update", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Digests::MD2Digest::BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(),
                                                           { "BlockUpdate", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff, length);
}
inline void Org::BouncyCastle::Crypto::Digests::MD2Digest::ProcessChecksum(::ArrayW<uint8_t> m) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(), { "ProcessChecksum", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m);
}
inline void Org::BouncyCastle::Crypto::Digests::MD2Digest::ProcessBlock(::ArrayW<uint8_t> m) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(), { "ProcessBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m);
}
inline ::Org::BouncyCastle::Utilities::IMemoable* Org::BouncyCastle::Crypto::Digests::MD2Digest::Copy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(), { "Copy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::IMemoable*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::MD2Digest::Reset(::Org::BouncyCastle::Utilities::IMemoable* other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(), { "Reset", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::IMemoable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::Org::BouncyCastle::Crypto::Digests::MD2Digest* Org::BouncyCastle::Crypto::Digests::MD2Digest::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>());
}
inline ::Org::BouncyCastle::Crypto::Digests::MD2Digest* Org::BouncyCastle::Crypto::Digests::MD2Digest::New_ctor(::Org::BouncyCastle::Crypto::Digests::MD2Digest* t) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Digests::MD2Digest*>(t));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
constexpr Org::BouncyCastle::Crypto::Digests::MD2Digest::operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDigest*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IDigest"
constexpr ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Crypto::Digests::MD2Digest::i___Org__BouncyCastle__Crypto__IDigest() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDigest*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Utilities::IMemoable"
constexpr Org::BouncyCastle::Crypto::Digests::MD2Digest::operator ::Org::BouncyCastle::Utilities::IMemoable*() noexcept {
  return static_cast<::Org::BouncyCastle::Utilities::IMemoable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Utilities::IMemoable"
constexpr ::Org::BouncyCastle::Utilities::IMemoable* Org::BouncyCastle::Crypto::Digests::MD2Digest::i___Org__BouncyCastle__Utilities__IMemoable() noexcept {
  return static_cast<::Org::BouncyCastle::Utilities::IMemoable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Digests::MD2Digest::MD2Digest() {}
