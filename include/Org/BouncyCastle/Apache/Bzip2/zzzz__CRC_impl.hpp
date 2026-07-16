#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Apache/Bzip2/CRC.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Apache/Bzip2/zzzz__CRC_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CRC._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::CRC::*)()>(&::Org::BouncyCastle::Apache::Bzip2::CRC::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3655824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CRC*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CRC.InitialiseCRC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::CRC::*)()>(&::Org::BouncyCastle::Apache::Bzip2::CRC::InitialiseCRC)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3656cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CRC*>(), { "InitialiseCRC", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CRC.GetFinalCRC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Apache::Bzip2::CRC::*)()>(&::Org::BouncyCastle::Apache::Bzip2::CRC::GetFinalCRC)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3656d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CRC*>(), { "GetFinalCRC", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CRC.GetGlobalCRC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Apache::Bzip2::CRC::*)()>(&::Org::BouncyCastle::Apache::Bzip2::CRC::GetGlobalCRC)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3657824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CRC*>(), { "GetGlobalCRC", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CRC.SetGlobalCRC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::CRC::*)(int32_t)>(&::Org::BouncyCastle::Apache::Bzip2::CRC::SetGlobalCRC)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x365782c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CRC*>(), { "SetGlobalCRC", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CRC.UpdateCRC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::CRC::*)(int32_t)>(&::Org::BouncyCastle::Apache::Bzip2::CRC::UpdateCRC)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3657698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CRC*>(), { "UpdateCRC", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Apache::Bzip2::CRC::__cordl_internal_get_globalCrc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___globalCrc;
}
constexpr int32_t const& Org::BouncyCastle::Apache::Bzip2::CRC::__cordl_internal_get_globalCrc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___globalCrc;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CRC::__cordl_internal_set_globalCrc(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___globalCrc = value;
}
inline void Org::BouncyCastle::Apache::Bzip2::CRC::setStaticF_crc32Table(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "crc32Table", ::Org::BouncyCastle::Apache::Bzip2::CRC*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Apache::Bzip2::CRC::getStaticF_crc32Table() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "crc32Table", ::Org::BouncyCastle::Apache::Bzip2::CRC*>();
}
inline void Org::BouncyCastle::Apache::Bzip2::CRC::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CRC*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Apache::Bzip2::CRC::InitialiseCRC() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CRC*>(), { "InitialiseCRC", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Apache::Bzip2::CRC::GetFinalCRC() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CRC*>(), { "GetFinalCRC", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Apache::Bzip2::CRC::GetGlobalCRC() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CRC*>(), { "GetGlobalCRC", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Apache::Bzip2::CRC::SetGlobalCRC(int32_t newCrc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CRC*>(), { "SetGlobalCRC", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newCrc);
}
inline void Org::BouncyCastle::Apache::Bzip2::CRC::UpdateCRC(int32_t inCh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CRC*>(), { "UpdateCRC", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inCh);
}
inline ::Org::BouncyCastle::Apache::Bzip2::CRC* Org::BouncyCastle::Apache::Bzip2::CRC::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Apache::Bzip2::CRC*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Apache::Bzip2::CRC::CRC() {}
