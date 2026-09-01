#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\CmsCompressedDataGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsCompressedDataGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsCompressedData_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessable_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsCompressedDataGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsCompressedDataGenerator::*)()>(&::Org::BouncyCastle::Cms::CmsCompressedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36a90ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsCompressedDataGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::CmsCompressedData* (
    ::Org::BouncyCastle::Cms::CmsCompressedDataGenerator::*)(::Org::BouncyCastle::Cms::CmsProcessable*, ::StringW)>(&::Org::BouncyCastle::Cms::CmsCompressedDataGenerator::Generate)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x36a90f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataGenerator*>(),
                                                             { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Cms::CmsCompressedDataGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsCompressedData* Org::BouncyCastle::Cms::CmsCompressedDataGenerator::Generate(::Org::BouncyCastle::Cms::CmsProcessable* content, ::StringW compressionOid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsCompressedDataGenerator*>(),
                                                           { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsCompressedData*>(this, ___internal_method, content, compressionOid);
}
inline ::Org::BouncyCastle::Cms::CmsCompressedDataGenerator* Org::BouncyCastle::Cms::CmsCompressedDataGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsCompressedDataGenerator*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsCompressedDataGenerator::CmsCompressedDataGenerator() {}
