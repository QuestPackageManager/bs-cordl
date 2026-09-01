#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\CmsContentInfoParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsContentInfoParser_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__ContentInfoParser_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsContentInfoParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsContentInfoParser::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Cms::CmsContentInfoParser::_ctor)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x36a6b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsContentInfoParser*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsContentInfoParser.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsContentInfoParser::*)()>(&::Org::BouncyCastle::Cms::CmsContentInfoParser::Close)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x36a6da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsContentInfoParser*>(), { "Close", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*& Org::BouncyCastle::Cms::CmsContentInfoParser::__cordl_internal_get_contentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentInfo;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* const& Org::BouncyCastle::Cms::CmsContentInfoParser::__cordl_internal_get_contentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentInfo;
}
constexpr void Org::BouncyCastle::Cms::CmsContentInfoParser::__cordl_internal_set_contentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentInfo = value;
}
constexpr ::System::IO::Stream*& Org::BouncyCastle::Cms::CmsContentInfoParser::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::Cms::CmsContentInfoParser::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void Org::BouncyCastle::Cms::CmsContentInfoParser::__cordl_internal_set_data(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
inline void Org::BouncyCastle::Cms::CmsContentInfoParser::_ctor(::System::IO::Stream* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsContentInfoParser*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Org::BouncyCastle::Cms::CmsContentInfoParser::Close() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsContentInfoParser*>(), { "Close", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsContentInfoParser* Org::BouncyCastle::Cms::CmsContentInfoParser::New_ctor(::System::IO::Stream* data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsContentInfoParser*>(data));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsContentInfoParser::CmsContentInfoParser() {}
