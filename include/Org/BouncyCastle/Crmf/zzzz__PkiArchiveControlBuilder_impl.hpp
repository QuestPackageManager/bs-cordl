#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crmf\PkiArchiveControlBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__PkiArchiveControlBuilder_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__PrivateKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedDataGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessableByteArray_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__PkiArchiveControl_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilderWithKey_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::*)(
    ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*, ::Org::BouncyCastle::Asn1::X509::GeneralName*)>(&::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::_ctor)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x36db860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder.AddRecipientGenerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder* (
    ::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::*)(::Org::BouncyCastle::Cms::RecipientInfoGenerator*)>(&::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::AddRecipientGenerator)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x36dba2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder*>(),
                                                                                           { "AddRecipientGenerator", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::RecipientInfoGenerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crmf::PkiArchiveControl* (
    ::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::*)(::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*)>(&::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::Build)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x36dba54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder*>(),
                                                                                           { "Build", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator*& Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::__cordl_internal_get_envGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___envGen;
}
constexpr ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator* const& Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::__cordl_internal_get_envGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___envGen;
}
constexpr void Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::__cordl_internal_set_envGen(::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___envGen = value;
}
constexpr ::Org::BouncyCastle::Cms::CmsProcessableByteArray*& Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::__cordl_internal_get_keyContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyContent;
}
constexpr ::Org::BouncyCastle::Cms::CmsProcessableByteArray* const& Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::__cordl_internal_get_keyContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyContent;
}
constexpr void Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::__cordl_internal_set_keyContent(::Org::BouncyCastle::Cms::CmsProcessableByteArray* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyContent = value;
}
inline void Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::_ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privateKeyInfo, ::Org::BouncyCastle::Asn1::X509::GeneralName* generalName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privateKeyInfo, generalName);
}
inline ::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder* Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::AddRecipientGenerator(::Org::BouncyCastle::Cms::RecipientInfoGenerator* recipientGen) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder*>(),
                                                                                         { "AddRecipientGenerator", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::RecipientInfoGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder*>(this, ___internal_method, recipientGen);
}
inline ::Org::BouncyCastle::Crmf::PkiArchiveControl* Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::Build(::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* contentEncryptor) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder*>(),
                                                                                         { "Build", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::PkiArchiveControl*>(this, ___internal_method, contentEncryptor);
}
inline ::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder* Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::New_ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privateKeyInfo,
                                                                                                                        ::Org::BouncyCastle::Asn1::X509::GeneralName* generalName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder*>(privateKeyInfo, generalName));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::PkiArchiveControlBuilder() {}
