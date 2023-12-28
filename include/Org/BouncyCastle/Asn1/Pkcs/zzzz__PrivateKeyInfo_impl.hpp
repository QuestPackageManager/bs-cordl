#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__PrivateKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::GetInstance)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xf8cd30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(), "GetInstance", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::GetInstance)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xf8cd48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(), "GetInstance",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo.GetVersionValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Asn1::DerInteger*)>(
    &::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::GetVersionValue)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xf8d110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(), "GetVersionValue", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::*)(
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(&::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf8d234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::*)(
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Org::BouncyCastle::Asn1::Asn1Set*)>(&::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf8d390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::*)(
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Org::BouncyCastle::Asn1::Asn1Set*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xf8d240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::_ctor)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0xf8cdec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo.get_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf8d398;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo.get_Attributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set* (::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::get_Attributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf8d3a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo.get_HasPublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::get_HasPublicKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xf8d3a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo.get_PrivateKeyAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::get_PrivateKeyAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf8d3b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo.get_PrivateKeyData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::get_PrivateKeyData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf8d3c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo.ParsePrivateKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::ParsePrivateKey)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xf8d3c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo.ParsePublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::ParsePublicKey)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xf8d3f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo.get_PublicKeyData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerBitString* (::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::get_PublicKeyData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf8d41c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::ToAsn1Object)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xf8d424;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::__get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::__get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::__set_version(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::__get_privateKeyAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateKeyAlgorithm;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::__get_privateKeyAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateKeyAlgorithm;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::__set_privateKeyAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___privateKeyAlgorithm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::__get_privateKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateKey;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::__get_privateKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateKey;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::__set_privateKey(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___privateKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::__get_attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::__get_attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::__set_attributes(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString*& Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::__get_publicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKey;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::__get_publicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKey;
}
constexpr void Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::__set_publicKey(::Org::BouncyCastle::Asn1::DerBitString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___publicKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(), "GetInstance", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*, false>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(), "GetInstance",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*, false>(nullptr, ___internal_method, obj);
}
inline int32_t Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::GetVersionValue(::Org::BouncyCastle::Asn1::DerInteger* version) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(), "GetVersionValue", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, version);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* privateKeyAlgorithm,
                                                                                                                ::Org::BouncyCastle::Asn1::Asn1Encodable* privateKey) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>(privateKeyAlgorithm, privateKey));
}
inline void Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* privateKeyAlgorithm, ::Org::BouncyCastle::Asn1::Asn1Encodable* privateKey) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, privateKeyAlgorithm, privateKey);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* privateKeyAlgorithm,
                                                                                                                ::Org::BouncyCastle::Asn1::Asn1Encodable* privateKey,
                                                                                                                ::Org::BouncyCastle::Asn1::Asn1Set* attributes) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>(privateKeyAlgorithm, privateKey, attributes));
}
inline void Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* privateKeyAlgorithm, ::Org::BouncyCastle::Asn1::Asn1Encodable* privateKey,
                                                                 ::Org::BouncyCastle::Asn1::Asn1Set* attributes) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, privateKeyAlgorithm, privateKey, attributes);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* privateKeyAlgorithm,
                                                                                                                ::Org::BouncyCastle::Asn1::Asn1Encodable* privateKey,
                                                                                                                ::Org::BouncyCastle::Asn1::Asn1Set* attributes,
                                                                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>(privateKeyAlgorithm, privateKey, attributes, publicKey));
}
inline void Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* privateKeyAlgorithm, ::Org::BouncyCastle::Asn1::Asn1Encodable* privateKey,
                                                                 ::Org::BouncyCastle::Asn1::Asn1Set* attributes, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, privateKeyAlgorithm, privateKey, attributes, publicKey);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>(seq));
}
inline void Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::get_Version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(),
                                                                             "get_Version", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::get_Attributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(),
                                                                             "get_Attributes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Set*, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::get_HasPublicKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(),
                                                                             "get_HasPublicKey", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::get_PrivateKeyAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(),
                                                                             "get_PrivateKeyAlgorithm", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::get_PrivateKeyData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(),
                                                                             "get_PrivateKeyData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::ParsePrivateKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(),
                                                                             "ParsePrivateKey", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::ParsePublicKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(),
                                                                             "ParsePublicKey", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerBitString* Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::get_PublicKeyData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(),
                                                                             "get_PublicKeyData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBitString*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::ToAsn1Object() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>::get(),
                                                                             "ToAsn1Object", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::PrivateKeyInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
