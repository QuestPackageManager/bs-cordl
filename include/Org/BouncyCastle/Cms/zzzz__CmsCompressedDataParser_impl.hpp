#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\CmsCompressedDataParser.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsContentInfoParser_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsCompressedDataParser_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsTypedStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsCompressedDataParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsCompressedDataParser::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Cms::CmsCompressedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x36a94a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataParser*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsCompressedDataParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsCompressedDataParser::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Cms::CmsCompressedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36a9518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataParser*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsCompressedDataParser.GetContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::CmsTypedStream* (::Org::BouncyCastle::Cms::CmsCompressedDataParser::*)()>(
    &::Org::BouncyCastle::Cms::CmsCompressedDataParser::GetContent)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x36a951c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataParser*>(), { "GetContent", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Cms::CmsCompressedDataParser::_ctor(::ArrayW<uint8_t> compressedData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataParser*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, compressedData);
}
inline void Org::BouncyCastle::Cms::CmsCompressedDataParser::_ctor(::System::IO::Stream* compressedData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataParser*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, compressedData);
}
inline ::Org::BouncyCastle::Cms::CmsTypedStream* Org::BouncyCastle::Cms::CmsCompressedDataParser::GetContent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataParser*>(), { "GetContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsTypedStream*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsCompressedDataParser* Org::BouncyCastle::Cms::CmsCompressedDataParser::New_ctor(::ArrayW<uint8_t> compressedData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsCompressedDataParser*>(compressedData));
}
inline ::Org::BouncyCastle::Cms::CmsCompressedDataParser* Org::BouncyCastle::Cms::CmsCompressedDataParser::New_ctor(::System::IO::Stream* compressedData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsCompressedDataParser*>(compressedData));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsCompressedDataParser::CmsCompressedDataParser() {}
