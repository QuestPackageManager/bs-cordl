#pragma once
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::*)(
    ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*, ::Org::BouncyCastle::Asn1::X509::GeneralName*)>(&::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::_ctor)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x12829ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder.AddRecipientGenerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder* (
    ::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::*)(::Org::BouncyCastle::Cms::RecipientInfoGenerator*)>(&::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::AddRecipientGenerator)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1282be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder*>::get(), "AddRecipientGenerator", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::RecipientInfoGenerator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder.Build
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crmf::PkiArchiveControl* (
    ::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::*)(::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*)>(&::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::Build)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1282c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator*& Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::__cordl_internal_get_envGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___envGen;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator*> const& Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::__cordl_internal_get_envGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___envGen;
}
constexpr void Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::__cordl_internal_set_envGen(::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___envGen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Cms::CmsProcessableByteArray*& Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::__cordl_internal_get_keyContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyContent;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsProcessableByteArray*> const& Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::__cordl_internal_get_keyContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyContent;
}
constexpr void Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::__cordl_internal_set_keyContent(::Org::BouncyCastle::Cms::CmsProcessableByteArray* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyContent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder* Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::New_ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privateKeyInfo,
                                                                                                                        ::Org::BouncyCastle::Asn1::X509::GeneralName* generalName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder*>(privateKeyInfo, generalName));
}
inline void Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::_ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privateKeyInfo, ::Org::BouncyCastle::Asn1::X509::GeneralName* generalName) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, privateKeyInfo, generalName);
}
inline ::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder* Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::AddRecipientGenerator(::Org::BouncyCastle::Cms::RecipientInfoGenerator* recipientGen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder*>::get(), "AddRecipientGenerator", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::RecipientInfoGenerator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder*, false>(this, ___internal_method, recipientGen);
}
inline ::Org::BouncyCastle::Crmf::PkiArchiveControl* Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::Build(::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* contentEncryptor) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::PkiArchiveControl*, false>(this, ___internal_method, contentEncryptor);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::PkiArchiveControlBuilder() {}
