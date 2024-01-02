#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Security/zzzz__CipherUtilities_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__CipherUtilities_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBufferedCipher_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::__CipherUtilities__CipherAlgorithm(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::__CipherUtilities__CipherAlgorithm() {}
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::AES{ static_cast<int32_t>(0x0) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::ARC4{ static_cast<int32_t>(0x1) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::BLOWFISH{ static_cast<int32_t>(0x2) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::CAMELLIA{ static_cast<int32_t>(0x3) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::CAST5{ static_cast<int32_t>(0x4) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::CAST6{ static_cast<int32_t>(0x5) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::CHACHA{ static_cast<int32_t>(0x6) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::CHACHA20_POLY1305{ static_cast<int32_t>(0x7) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::CHACHA7539{ static_cast<int32_t>(0x8) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::DES{ static_cast<int32_t>(0x9) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::DESEDE{ static_cast<int32_t>(0xa) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::ELGAMAL{ static_cast<int32_t>(0xb) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::GOST28147{ static_cast<int32_t>(0xc) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::HC128{ static_cast<int32_t>(0xd) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::HC256{ static_cast<int32_t>(0xe) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::IDEA{ static_cast<int32_t>(0xf) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::NOEKEON{ static_cast<int32_t>(0x10) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::PBEWITHSHAAND128BITRC4{ static_cast<int32_t>(0x11) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::PBEWITHSHAAND40BITRC4{ static_cast<int32_t>(0x12) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::RC2{ static_cast<int32_t>(0x13) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::RC5{ static_cast<int32_t>(0x14) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::RC5_64{ static_cast<int32_t>(0x15) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::RC6{ static_cast<int32_t>(0x16) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::RIJNDAEL{ static_cast<int32_t>(0x17) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::RSA{ static_cast<int32_t>(0x18) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::SALSA20{ static_cast<int32_t>(0x19) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::SEED{ static_cast<int32_t>(0x1a) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::SERPENT{ static_cast<int32_t>(0x1b) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::SKIPJACK{ static_cast<int32_t>(0x1c) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::SM4{ static_cast<int32_t>(0x1d) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::TEA{ static_cast<int32_t>(0x1e) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::THREEFISH_256{ static_cast<int32_t>(0x1f) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::THREEFISH_512{ static_cast<int32_t>(0x20) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::THREEFISH_1024{ static_cast<int32_t>(0x21) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::TNEPRES{ static_cast<int32_t>(0x22) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::TWOFISH{ static_cast<int32_t>(0x23) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::VMPC{ static_cast<int32_t>(0x24) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::VMPC_KSA3{ static_cast<int32_t>(0x25) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm::XTEA{ static_cast<int32_t>(0x26) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode::__CipherUtilities__CipherMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode::__CipherUtilities__CipherMode() {}
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode Org::BouncyCastle::Security::__CipherUtilities__CipherMode::ECB{ static_cast<int32_t>(0x0) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode Org::BouncyCastle::Security::__CipherUtilities__CipherMode::NONE{ static_cast<int32_t>(0x1) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode Org::BouncyCastle::Security::__CipherUtilities__CipherMode::CBC{ static_cast<int32_t>(0x2) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode Org::BouncyCastle::Security::__CipherUtilities__CipherMode::CCM{ static_cast<int32_t>(0x3) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode Org::BouncyCastle::Security::__CipherUtilities__CipherMode::CFB{ static_cast<int32_t>(0x4) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode Org::BouncyCastle::Security::__CipherUtilities__CipherMode::CTR{ static_cast<int32_t>(0x5) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode Org::BouncyCastle::Security::__CipherUtilities__CipherMode::CTS{ static_cast<int32_t>(0x6) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode Org::BouncyCastle::Security::__CipherUtilities__CipherMode::EAX{ static_cast<int32_t>(0x7) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode Org::BouncyCastle::Security::__CipherUtilities__CipherMode::GCM{ static_cast<int32_t>(0x8) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode Org::BouncyCastle::Security::__CipherUtilities__CipherMode::GOFB{ static_cast<int32_t>(0x9) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode Org::BouncyCastle::Security::__CipherUtilities__CipherMode::OCB{ static_cast<int32_t>(0xa) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode Org::BouncyCastle::Security::__CipherUtilities__CipherMode::OFB{ static_cast<int32_t>(0xb) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode Org::BouncyCastle::Security::__CipherUtilities__CipherMode::OPENPGPCFB{ static_cast<int32_t>(0xc) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherMode Org::BouncyCastle::Security::__CipherUtilities__CipherMode::SIC{ static_cast<int32_t>(0xd) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::__CipherUtilities__CipherPadding(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::__CipherUtilities__CipherPadding() {}
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::NOPADDING{ static_cast<int32_t>(0x0) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::RAW{ static_cast<int32_t>(0x1) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::ISO10126PADDING{ static_cast<int32_t>(0x2) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::ISO10126D2PADDING{ static_cast<int32_t>(0x3) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::ISO10126_2PADDING{ static_cast<int32_t>(0x4) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::ISO7816_4PADDING{ static_cast<int32_t>(0x5) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::ISO9797_1PADDING{ static_cast<int32_t>(0x6) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::ISO9796_1{ static_cast<int32_t>(0x7) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::ISO9796_1PADDING{ static_cast<int32_t>(0x8) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::OAEP{ static_cast<int32_t>(0x9) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::OAEPPADDING{ static_cast<int32_t>(0xa) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::OAEPWITHMD5ANDMGF1PADDING{ static_cast<int32_t>(0xb) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::OAEPWITHSHA1ANDMGF1PADDING{ static_cast<int32_t>(0xc) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::OAEPWITHSHA_1ANDMGF1PADDING{ static_cast<int32_t>(0xd) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::OAEPWITHSHA224ANDMGF1PADDING{ static_cast<int32_t>(0xe) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::OAEPWITHSHA_224ANDMGF1PADDING{ static_cast<int32_t>(0xf) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::OAEPWITHSHA256ANDMGF1PADDING{ static_cast<int32_t>(0x10) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::OAEPWITHSHA_256ANDMGF1PADDING{ static_cast<int32_t>(0x11) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::OAEPWITHSHA384ANDMGF1PADDING{ static_cast<int32_t>(0x12) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::OAEPWITHSHA_384ANDMGF1PADDING{ static_cast<int32_t>(0x13) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::OAEPWITHSHA512ANDMGF1PADDING{ static_cast<int32_t>(0x14) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::OAEPWITHSHA_512ANDMGF1PADDING{ static_cast<int32_t>(0x15) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::PKCS1{ static_cast<int32_t>(0x16) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::PKCS1PADDING{ static_cast<int32_t>(0x17) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::PKCS5{ static_cast<int32_t>(0x18) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::PKCS5PADDING{ static_cast<int32_t>(0x19) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::PKCS7{ static_cast<int32_t>(0x1a) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::PKCS7PADDING{ static_cast<int32_t>(0x1b) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::TBCPADDING{ static_cast<int32_t>(0x1c) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::WITHCTS{ static_cast<int32_t>(0x1d) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::X923PADDING{ static_cast<int32_t>(0x1e) };
constexpr ::Org::BouncyCastle::Security::__CipherUtilities__CipherPadding Org::BouncyCastle::Security::__CipherUtilities__CipherPadding::ZEROBYTEPADDING{ static_cast<int32_t>(0x1f) };
//  Writing Method size for method: ::Org::BouncyCastle::Security::CipherUtilities._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Security::CipherUtilities::*)()>(&::Org::BouncyCastle::Security::CipherUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1121578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::CipherUtilities*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::CipherUtilities.GetObjectIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (*)(::StringW)>(
    &::Org::BouncyCastle::Security::CipherUtilities::GetObjectIdentifier)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x1121580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::CipherUtilities*>::get(), "GetObjectIdentifier",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::CipherUtilities.get_Algorithms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (*)()>(&::Org::BouncyCastle::Security::CipherUtilities::get_Algorithms)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x11217dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::CipherUtilities*>::get(),
                                                                               "get_Algorithms", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::CipherUtilities.GetCipher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IBufferedCipher* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Security::CipherUtilities::GetCipher)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x11218a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::CipherUtilities*>::get(), "GetCipher", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::CipherUtilities.GetCipher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IBufferedCipher* (*)(::StringW)>(
    &::Org::BouncyCastle::Security::CipherUtilities::GetCipher)> {
  constexpr static std::size_t size = 0x21cc;
  constexpr static std::size_t addrs = 0x1121908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::CipherUtilities*>::get(), "GetCipher",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::CipherUtilities.GetAlgorithmName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Security::CipherUtilities::GetAlgorithmName)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1124120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::CipherUtilities*>::get(), "GetAlgorithmName", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::CipherUtilities.GetDigitIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::Org::BouncyCastle::Security::CipherUtilities::GetDigitIndex)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1123ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::CipherUtilities*>::get(), "GetDigitIndex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::CipherUtilities.CreateBlockCipher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IBlockCipher* (*)(::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm)>(
    &::Org::BouncyCastle::Security::CipherUtilities::CreateBlockCipher)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0x1123b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::CipherUtilities*>::get(), "CreateBlockCipher", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm>::get() })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Security::CipherUtilities::setStaticF_algorithms(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "algorithms", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::CipherUtilities*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Security::CipherUtilities::getStaticF_algorithms() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "algorithms",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::CipherUtilities*>::get>();
}
inline void Org::BouncyCastle::Security::CipherUtilities::setStaticF_oids(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "oids", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::CipherUtilities*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Security::CipherUtilities::getStaticF_oids() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "oids", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::CipherUtilities*>::get>();
}
inline ::Org::BouncyCastle::Security::CipherUtilities* Org::BouncyCastle::Security::CipherUtilities::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Security::CipherUtilities*>());
}
inline void Org::BouncyCastle::Security::CipherUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::CipherUtilities*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Security::CipherUtilities::GetObjectIdentifier(::StringW mechanism) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::CipherUtilities*>::get(), "GetObjectIdentifier",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, false>(nullptr, ___internal_method, mechanism);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::Security::CipherUtilities::get_Algorithms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::CipherUtilities*>::get(),
                                                                             "get_Algorithms", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(nullptr, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IBufferedCipher* Org::BouncyCastle::Security::CipherUtilities::GetCipher(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::CipherUtilities*>::get(), "GetCipher", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBufferedCipher*, false>(nullptr, ___internal_method, oid);
}
inline ::Org::BouncyCastle::Crypto::IBufferedCipher* Org::BouncyCastle::Security::CipherUtilities::GetCipher(::StringW algorithm) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::CipherUtilities*>::get(), "GetCipher", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBufferedCipher*, false>(nullptr, ___internal_method, algorithm);
}
inline ::StringW Org::BouncyCastle::Security::CipherUtilities::GetAlgorithmName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::CipherUtilities*>::get(), "GetAlgorithmName", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, oid);
}
inline int32_t Org::BouncyCastle::Security::CipherUtilities::GetDigitIndex(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::CipherUtilities*>::get(), "GetDigitIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, s);
}
inline ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Security::CipherUtilities::CreateBlockCipher(::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm cipherAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::CipherUtilities*>::get(), "CreateBlockCipher", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::__CipherUtilities__CipherAlgorithm>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBlockCipher*, false>(nullptr, ___internal_method, cipherAlgorithm);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Security::CipherUtilities::CipherUtilities() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
