#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\SignatureSubpacket.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacketTag_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacketTag_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignatureSubpacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::SignatureSubpacket::*)(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag, bool, bool, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::SignatureSubpacket::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3694328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>(),
            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignatureSubpacket.get_SubpacketType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag (::Org::BouncyCastle::Bcpg::SignatureSubpacket::*)()>(
    &::Org::BouncyCastle::Bcpg::SignatureSubpacket::get_SubpacketType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x369433c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>(), { "get_SubpacketType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignatureSubpacket.IsCritical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::SignatureSubpacket::*)()>(&::Org::BouncyCastle::Bcpg::SignatureSubpacket::IsCritical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3694344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>(), { "IsCritical", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignatureSubpacket.IsLongLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::SignatureSubpacket::*)()>(&::Org::BouncyCastle::Bcpg::SignatureSubpacket::IsLongLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x369434c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>(), { "IsLongLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignatureSubpacket.GetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::SignatureSubpacket::*)()>(&::Org::BouncyCastle::Bcpg::SignatureSubpacket::GetData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3694354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>(), { "GetData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignatureSubpacket.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::SignatureSubpacket::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Bcpg::SignatureSubpacket::Encode)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x36943cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>(), { "Encode", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag& Org::BouncyCastle::Bcpg::SignatureSubpacket::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const& Org::BouncyCastle::Bcpg::SignatureSubpacket::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void Org::BouncyCastle::Bcpg::SignatureSubpacket::__cordl_internal_set_type(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr bool& Org::BouncyCastle::Bcpg::SignatureSubpacket::__cordl_internal_get_critical() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___critical;
}
constexpr bool const& Org::BouncyCastle::Bcpg::SignatureSubpacket::__cordl_internal_get_critical() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___critical;
}
constexpr void Org::BouncyCastle::Bcpg::SignatureSubpacket::__cordl_internal_set_critical(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___critical = value;
}
constexpr bool& Org::BouncyCastle::Bcpg::SignatureSubpacket::__cordl_internal_get_isLongLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isLongLength;
}
constexpr bool const& Org::BouncyCastle::Bcpg::SignatureSubpacket::__cordl_internal_get_isLongLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isLongLength;
}
constexpr void Org::BouncyCastle::Bcpg::SignatureSubpacket::__cordl_internal_set_isLongLength(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isLongLength = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Bcpg::SignatureSubpacket::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Bcpg::SignatureSubpacket::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void Org::BouncyCastle::Bcpg::SignatureSubpacket::__cordl_internal_set_data(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
inline void Org::BouncyCastle::Bcpg::SignatureSubpacket::_ctor(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type, bool critical, bool isLongLength, ::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>(),
                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, critical, isLongLength, data);
}
inline ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag Org::BouncyCastle::Bcpg::SignatureSubpacket::get_SubpacketType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>(), { "get_SubpacketType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::SignatureSubpacket::IsCritical() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>(), { "IsCritical", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::SignatureSubpacket::IsLongLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>(), { "IsLongLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::SignatureSubpacket::GetData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>(), { "GetData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::SignatureSubpacket::Encode(::System::IO::Stream* os) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>(), { "Encode", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, os);
}
inline ::Org::BouncyCastle::Bcpg::SignatureSubpacket* Org::BouncyCastle::Bcpg::SignatureSubpacket::New_ctor(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type, bool critical, bool isLongLength,
                                                                                                            ::ArrayW<uint8_t> data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>(type, critical, isLongLength, data));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacket::SignatureSubpacket() {}
