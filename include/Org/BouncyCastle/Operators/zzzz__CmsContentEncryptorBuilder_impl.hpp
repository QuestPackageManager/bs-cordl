#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Operators/CmsContentEncryptorBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Operators/zzzz__CmsContentEncryptorBuilder_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__EnvelopedDataHelper_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilderWithKey_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder.GetKeySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::GetKeySize)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2380e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder*>::get(), "GetKeySize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2380ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, int32_t)>(&::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x238106c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder.Build
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* (
    ::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::*)()>(&::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::Build)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x23810e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder*>::get(), "Build",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::__cordl_internal_get_encryptionOID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptionOID;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const&
Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::__cordl_internal_get_encryptionOID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptionOID;
}
constexpr void Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::__cordl_internal_set_encryptionOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___encryptionOID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::__cordl_internal_get_keySize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySize;
}
constexpr int32_t const& Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::__cordl_internal_get_keySize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySize;
}
constexpr void Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::__cordl_internal_set_keySize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keySize = value;
}
constexpr ::Org::BouncyCastle::Cms::EnvelopedDataHelper*& Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::__cordl_internal_get_helper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::EnvelopedDataHelper*> const& Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::__cordl_internal_get_helper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr void Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::__cordl_internal_set_helper(::Org::BouncyCastle::Cms::EnvelopedDataHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___helper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::setStaticF_KeySizes(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "KeySizes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::getStaticF_KeySizes() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "KeySizes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder*>::get>();
}
inline int32_t Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::GetKeySize(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder*>::get(), "GetKeySize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, oid);
}
inline ::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder* Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder*>(encryptionOID));
}
inline void Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encryptionOID);
}
inline ::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder* Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID,
                                                                                                                                      int32_t keySize) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder*>(encryptionOID, keySize));
}
inline void Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID, int32_t keySize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encryptionOID, keySize);
}
inline ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::Build() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder*>::get(),
                                                                             "Build", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::CmsContentEncryptorBuilder() {}
