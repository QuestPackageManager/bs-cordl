#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Utilities\Zlib\Inflate.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__Inflate_def.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__InfBlocks_def.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__ZStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Inflate.inflateReset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Inflate::*)(::Org::BouncyCastle::Utilities::Zlib::ZStream*)>(
    &::Org::BouncyCastle::Utilities::Zlib::Inflate::inflateReset)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x363728c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Inflate*>(),
                                                                                           { "inflateReset", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Inflate.inflateEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Inflate::*)(::Org::BouncyCastle::Utilities::Zlib::ZStream*)>(
    &::Org::BouncyCastle::Utilities::Zlib::Inflate::inflateEnd)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x36372e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Inflate*>(),
                                                                                           { "inflateEnd", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Inflate.inflateInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Inflate::*)(::Org::BouncyCastle::Utilities::Zlib::ZStream*, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Inflate::inflateInit)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3637318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Inflate*>(),
                                                             { "inflateInit", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Inflate.inflate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Inflate::*)(::Org::BouncyCastle::Utilities::Zlib::ZStream*, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Inflate::inflate)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0x36373e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Inflate*>(),
                                                             { "inflate", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Inflate.inflateSetDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Inflate::*)(::Org::BouncyCastle::Utilities::Zlib::ZStream*, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Inflate::inflateSetDictionary)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3637a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Inflate*>(),
                            { "inflateSetDictionary", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Inflate.inflateSync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Inflate::*)(::Org::BouncyCastle::Utilities::Zlib::ZStream*)>(
    &::Org::BouncyCastle::Utilities::Zlib::Inflate::inflateSync)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x3637b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Inflate*>(),
                                                                                           { "inflateSync", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Inflate.inflateSyncPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Inflate::*)(::Org::BouncyCastle::Utilities::Zlib::ZStream*)>(
    &::Org::BouncyCastle::Utilities::Zlib::Inflate::inflateSyncPoint)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3637cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Inflate*>(),
                                                                                           { "inflateSyncPoint", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Inflate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Inflate::*)()>(&::Org::BouncyCastle::Utilities::Zlib::Inflate::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3637dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Inflate*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Inflate::__cordl_internal_get_mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Inflate::__cordl_internal_get_mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Inflate::__cordl_internal_set_mode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mode = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Inflate::__cordl_internal_get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Inflate::__cordl_internal_get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Inflate::__cordl_internal_set_method(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___method = value;
}
constexpr ::ArrayW<int64_t>& Org::BouncyCastle::Utilities::Zlib::Inflate::__cordl_internal_get_was() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___was;
}
constexpr ::ArrayW<int64_t> const& Org::BouncyCastle::Utilities::Zlib::Inflate::__cordl_internal_get_was() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___was;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Inflate::__cordl_internal_set_was(::ArrayW<int64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___was = value;
}
constexpr int64_t& Org::BouncyCastle::Utilities::Zlib::Inflate::__cordl_internal_get_need() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___need;
}
constexpr int64_t const& Org::BouncyCastle::Utilities::Zlib::Inflate::__cordl_internal_get_need() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___need;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Inflate::__cordl_internal_set_need(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___need = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Inflate::__cordl_internal_get_marker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___marker;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Inflate::__cordl_internal_get_marker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___marker;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Inflate::__cordl_internal_set_marker(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___marker = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Inflate::__cordl_internal_get_nowrap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nowrap;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Inflate::__cordl_internal_get_nowrap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nowrap;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Inflate::__cordl_internal_set_nowrap(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nowrap = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Inflate::__cordl_internal_get_wbits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wbits;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Inflate::__cordl_internal_get_wbits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wbits;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Inflate::__cordl_internal_set_wbits(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wbits = value;
}
constexpr ::Org::BouncyCastle::Utilities::Zlib::InfBlocks*& Org::BouncyCastle::Utilities::Zlib::Inflate::__cordl_internal_get_blocks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blocks;
}
constexpr ::Org::BouncyCastle::Utilities::Zlib::InfBlocks* const& Org::BouncyCastle::Utilities::Zlib::Inflate::__cordl_internal_get_blocks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blocks;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Inflate::__cordl_internal_set_blocks(::Org::BouncyCastle::Utilities::Zlib::InfBlocks* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blocks = value;
}
inline void Org::BouncyCastle::Utilities::Zlib::Inflate::setStaticF_mark(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "mark", ::Org::BouncyCastle::Utilities::Zlib::Inflate*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Utilities::Zlib::Inflate::getStaticF_mark() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "mark", ::Org::BouncyCastle::Utilities::Zlib::Inflate*>();
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Inflate::inflateReset(::Org::BouncyCastle::Utilities::Zlib::ZStream* z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Inflate*>(),
                                                                                         { "inflateReset", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, z);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Inflate::inflateEnd(::Org::BouncyCastle::Utilities::Zlib::ZStream* z) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Inflate*>(), { "inflateEnd", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, z);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Inflate::inflateInit(::Org::BouncyCastle::Utilities::Zlib::ZStream* z, int32_t w) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Inflate*>(),
                                                           { "inflateInit", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, z, w);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Inflate::inflate(::Org::BouncyCastle::Utilities::Zlib::ZStream* z, int32_t f) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Inflate*>(),
                                                           { "inflate", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, z, f);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Inflate::inflateSetDictionary(::Org::BouncyCastle::Utilities::Zlib::ZStream* z, ::ArrayW<uint8_t> dictionary, int32_t dictLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Inflate*>(),
                          { "inflateSetDictionary", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, z, dictionary, dictLength);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Inflate::inflateSync(::Org::BouncyCastle::Utilities::Zlib::ZStream* z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Inflate*>(),
                                                                                         { "inflateSync", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, z);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Inflate::inflateSyncPoint(::Org::BouncyCastle::Utilities::Zlib::ZStream* z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Inflate*>(),
                                                                                         { "inflateSyncPoint", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, z);
}
inline void Org::BouncyCastle::Utilities::Zlib::Inflate::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Inflate*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::Zlib::Inflate* Org::BouncyCastle::Utilities::Zlib::Inflate::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::Zlib::Inflate*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Zlib::Inflate::Inflate() {}
