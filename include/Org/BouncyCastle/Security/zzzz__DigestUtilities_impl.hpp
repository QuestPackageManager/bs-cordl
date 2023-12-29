#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Security/zzzz__DigestUtilities_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__DigestUtilities_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::__DigestUtilities__DigestAlgorithm(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::__DigestUtilities__DigestAlgorithm() {}
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::BLAKE2B_160{ static_cast<int32_t>(0x0) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::BLAKE2B_256{ static_cast<int32_t>(0x1) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::BLAKE2B_384{ static_cast<int32_t>(0x2) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::BLAKE2B_512{ static_cast<int32_t>(0x3) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::BLAKE2S_128{ static_cast<int32_t>(0x4) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::BLAKE2S_160{ static_cast<int32_t>(0x5) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::BLAKE2S_224{ static_cast<int32_t>(0x6) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::BLAKE2S_256{ static_cast<int32_t>(0x7) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::DSTU7564_256{ static_cast<int32_t>(0x8) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::DSTU7564_384{ static_cast<int32_t>(0x9) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::DSTU7564_512{ static_cast<int32_t>(0xa) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::GOST3411{ static_cast<int32_t>(0xb) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::GOST3411_2012_256{ static_cast<int32_t>(0xc) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::GOST3411_2012_512{ static_cast<int32_t>(0xd) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::KECCAK_224{ static_cast<int32_t>(0xe) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::KECCAK_256{ static_cast<int32_t>(0xf) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::KECCAK_288{ static_cast<int32_t>(0x10) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::KECCAK_384{ static_cast<int32_t>(0x11) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::KECCAK_512{ static_cast<int32_t>(0x12) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::MD2{ static_cast<int32_t>(0x13) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::MD4{ static_cast<int32_t>(0x14) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::MD5{ static_cast<int32_t>(0x15) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::NONE{ static_cast<int32_t>(0x16) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::RIPEMD128{ static_cast<int32_t>(0x17) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::RIPEMD160{ static_cast<int32_t>(0x18) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::RIPEMD256{ static_cast<int32_t>(0x19) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::RIPEMD320{ static_cast<int32_t>(0x1a) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::SHA_1{ static_cast<int32_t>(0x1b) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::SHA_224{ static_cast<int32_t>(0x1c) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::SHA_256{ static_cast<int32_t>(0x1d) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::SHA_384{ static_cast<int32_t>(0x1e) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::SHA_512{ static_cast<int32_t>(0x1f) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::SHA_512_224{ static_cast<int32_t>(0x20) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::SHA_512_256{ static_cast<int32_t>(0x21) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::SHA3_224{ static_cast<int32_t>(0x22) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::SHA3_256{ static_cast<int32_t>(0x23) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::SHA3_384{ static_cast<int32_t>(0x24) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::SHA3_512{ static_cast<int32_t>(0x25) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::SHAKE128{ static_cast<int32_t>(0x26) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::SHAKE256{ static_cast<int32_t>(0x27) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::SM3{ static_cast<int32_t>(0x28) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::TIGER{ static_cast<int32_t>(0x29) };
constexpr ::Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm Org::BouncyCastle::Security::__DigestUtilities__DigestAlgorithm::WHIRLPOOL{ static_cast<int32_t>(0x2a) };
//  Writing Method size for method: ::Org::BouncyCastle::Security::DigestUtilities._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Security::DigestUtilities::*)()>(&::Org::BouncyCastle::Security::DigestUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10b2fd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DigestUtilities*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DigestUtilities.GetObjectIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (*)(::StringW)>(
    &::Org::BouncyCastle::Security::DigestUtilities::GetObjectIdentifier)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x10b6a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DigestUtilities*>::get(), "GetObjectIdentifier",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DigestUtilities.get_Algorithms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (*)()>(&::Org::BouncyCastle::Security::DigestUtilities::get_Algorithms)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x10b6c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DigestUtilities*>::get(),
                                                                               "get_Algorithms", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DigestUtilities.GetDigest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IDigest* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Security::DigestUtilities::GetDigest)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x10b6d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DigestUtilities*>::get(), "GetDigest", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DigestUtilities.GetDigest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IDigest* (*)(::StringW)>(&::Org::BouncyCastle::Security::DigestUtilities::GetDigest)> {
  constexpr static std::size_t size = 0xc04;
  constexpr static std::size_t addrs = 0x10b6da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DigestUtilities*>::get(), "GetDigest",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DigestUtilities.GetAlgorithmName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Security::DigestUtilities::GetAlgorithmName)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x10b79a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DigestUtilities*>::get(), "GetAlgorithmName", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DigestUtilities.CalculateDigest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Security::DigestUtilities::CalculateDigest)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x10b7ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DigestUtilities*>::get(), "CalculateDigest", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DigestUtilities.CalculateDigest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::StringW, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Security::DigestUtilities::CalculateDigest)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x10b7b18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DigestUtilities*>::get(), "CalculateDigest", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DigestUtilities.DoFinal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::Org::BouncyCastle::Crypto::IDigest*)>(
    &::Org::BouncyCastle::Security::DigestUtilities::DoFinal)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x10b7c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DigestUtilities*>::get(), "DoFinal", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DigestUtilities.DoFinal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::Org::BouncyCastle::Crypto::IDigest*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Security::DigestUtilities::DoFinal)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x10b7d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DigestUtilities*>::get(), "DoFinal", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Security::DigestUtilities::setStaticF_algorithms(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "algorithms", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DigestUtilities*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Security::DigestUtilities::getStaticF_algorithms() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "algorithms",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DigestUtilities*>::get>();
}
inline void Org::BouncyCastle::Security::DigestUtilities::setStaticF_oids(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "oids", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DigestUtilities*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Security::DigestUtilities::getStaticF_oids() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "oids", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DigestUtilities*>::get>();
}
inline ::Org::BouncyCastle::Security::DigestUtilities* Org::BouncyCastle::Security::DigestUtilities::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Security::DigestUtilities*>());
}
inline void Org::BouncyCastle::Security::DigestUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DigestUtilities*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Security::DigestUtilities::GetObjectIdentifier(::StringW mechanism) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DigestUtilities*>::get(), "GetObjectIdentifier",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, false>(nullptr, ___internal_method, mechanism);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::Security::DigestUtilities::get_Algorithms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DigestUtilities*>::get(),
                                                                             "get_Algorithms", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(nullptr, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Security::DigestUtilities::GetDigest(::Org::BouncyCastle::Asn1::DerObjectIdentifier* id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DigestUtilities*>::get(), "GetDigest", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest*, false>(nullptr, ___internal_method, id);
}
inline ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Security::DigestUtilities::GetDigest(::StringW algorithm) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DigestUtilities*>::get(), "GetDigest", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest*, false>(nullptr, ___internal_method, algorithm);
}
inline ::StringW Org::BouncyCastle::Security::DigestUtilities::GetAlgorithmName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DigestUtilities*>::get(), "GetAlgorithmName", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, oid);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Security::DigestUtilities::CalculateDigest(::Org::BouncyCastle::Asn1::DerObjectIdentifier* id,
                                                                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*> input) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DigestUtilities*>::get(), "CalculateDigest", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, id, input);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Security::DigestUtilities::CalculateDigest(::StringW algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> input) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DigestUtilities*>::get(), "CalculateDigest", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, algorithm, input);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Security::DigestUtilities::DoFinal(::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DigestUtilities*>::get(), "DoFinal", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, digest);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Security::DigestUtilities::DoFinal(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t, ::Array<uint8_t>*> input) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DigestUtilities*>::get(), "DoFinal", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, digest, input);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Security::DigestUtilities::DigestUtilities() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
