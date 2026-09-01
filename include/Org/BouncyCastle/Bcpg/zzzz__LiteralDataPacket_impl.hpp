#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\LiteralDataPacket.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__LiteralDataPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::LiteralDataPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::LiteralDataPacket::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::LiteralDataPacket::_ctor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x369b7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::LiteralDataPacket*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::LiteralDataPacket.get_Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::LiteralDataPacket::*)()>(&::Org::BouncyCastle::Bcpg::LiteralDataPacket::get_Format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x369e768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::LiteralDataPacket*>(), { "get_Format", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::LiteralDataPacket.get_ModificationTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::LiteralDataPacket::*)()>(&::Org::BouncyCastle::Bcpg::LiteralDataPacket::get_ModificationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x369e770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::LiteralDataPacket*>(), { "get_ModificationTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::LiteralDataPacket.get_FileName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Bcpg::LiteralDataPacket::*)()>(&::Org::BouncyCastle::Bcpg::LiteralDataPacket::get_FileName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x369e778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::LiteralDataPacket*>(), { "get_FileName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::LiteralDataPacket.GetRawFileName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::LiteralDataPacket::*)()>(&::Org::BouncyCastle::Bcpg::LiteralDataPacket::GetRawFileName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x369e784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::LiteralDataPacket*>(), { "GetRawFileName", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Bcpg::LiteralDataPacket::__cordl_internal_get_format() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___format;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::LiteralDataPacket::__cordl_internal_get_format() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___format;
}
constexpr void Org::BouncyCastle::Bcpg::LiteralDataPacket::__cordl_internal_set_format(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___format = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Bcpg::LiteralDataPacket::__cordl_internal_get_fileName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileName;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Bcpg::LiteralDataPacket::__cordl_internal_get_fileName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileName;
}
constexpr void Org::BouncyCastle::Bcpg::LiteralDataPacket::__cordl_internal_set_fileName(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fileName = value;
}
constexpr int64_t& Org::BouncyCastle::Bcpg::LiteralDataPacket::__cordl_internal_get_modDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modDate;
}
constexpr int64_t const& Org::BouncyCastle::Bcpg::LiteralDataPacket::__cordl_internal_get_modDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modDate;
}
constexpr void Org::BouncyCastle::Bcpg::LiteralDataPacket::__cordl_internal_set_modDate(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modDate = value;
}
inline void Org::BouncyCastle::Bcpg::LiteralDataPacket::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::LiteralDataPacket*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgIn);
}
inline int32_t Org::BouncyCastle::Bcpg::LiteralDataPacket::get_Format() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::LiteralDataPacket*>(), { "get_Format", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Bcpg::LiteralDataPacket::get_ModificationTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::LiteralDataPacket*>(), { "get_ModificationTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Bcpg::LiteralDataPacket::get_FileName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::LiteralDataPacket*>(), { "get_FileName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::LiteralDataPacket::GetRawFileName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::LiteralDataPacket*>(), { "GetRawFileName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::LiteralDataPacket* Org::BouncyCastle::Bcpg::LiteralDataPacket::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::LiteralDataPacket*>(bcpgIn));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::LiteralDataPacket::LiteralDataPacket() {}
