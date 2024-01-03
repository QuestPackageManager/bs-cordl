#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Security/zzzz__PbeUtilities_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__PbeParametersGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Security::PbeUtilities._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Security::PbeUtilities::*)()>(&::Org::BouncyCastle::Security::PbeUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11347ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PbeUtilities.MakePbeGenerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Crypto::PbeParametersGenerator* (*)(::StringW, ::Org::BouncyCastle::Crypto::IDigest*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                                                                         int32_t)>(&::Org::BouncyCastle::Security::PbeUtilities::MakePbeGenerator)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x1139df8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "MakePbeGenerator", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PbeUtilities.GetObjectIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (*)(::StringW)>(
    &::Org::BouncyCastle::Security::PbeUtilities::GetObjectIdentifier)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x113a040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "GetObjectIdentifier",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PbeUtilities.get_Algorithms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (*)()>(&::Org::BouncyCastle::Security::PbeUtilities::get_Algorithms)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x113a248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(),
                                                                               "get_Algorithms", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PbeUtilities.IsPkcs12
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::Org::BouncyCastle::Security::PbeUtilities::IsPkcs12)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x113a314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "IsPkcs12", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PbeUtilities.IsPkcs5Scheme1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::Org::BouncyCastle::Security::PbeUtilities::IsPkcs5Scheme1)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x113a510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "IsPkcs5Scheme1",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PbeUtilities.IsPkcs5Scheme2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::Org::BouncyCastle::Security::PbeUtilities::IsPkcs5Scheme2)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x113a70c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "IsPkcs5Scheme2",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PbeUtilities.IsOpenSsl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::Org::BouncyCastle::Security::PbeUtilities::IsOpenSsl)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x113a908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "IsOpenSsl", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PbeUtilities.IsPbeAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::Org::BouncyCastle::Security::PbeUtilities::IsPbeAlgorithm)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x113ab04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "IsPbeAlgorithm",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PbeUtilities.GenerateAlgorithmParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
        &::Org::BouncyCastle::Security::PbeUtilities::GenerateAlgorithmParameters)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x113acd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "GenerateAlgorithmParameters", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PbeUtilities.GenerateAlgorithmParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (*)(::StringW, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Security::PbeUtilities::GenerateAlgorithmParameters)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x113ad48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "GenerateAlgorithmParameters", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PbeUtilities.GenerateAlgorithmParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                                                              int32_t, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Security::PbeUtilities::GenerateAlgorithmParameters)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x113ae7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "GenerateAlgorithmParameters", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PbeUtilities.GenerateCipherParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::ArrayW<char16_t, ::Array<char16_t>*>,
                                                                    ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(&::Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x113b240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "GenerateCipherParameters", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PbeUtilities.GenerateCipherParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::ArrayW<char16_t, ::Array<char16_t>*>, bool,
                                                                    ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(&::Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x113c3f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "GenerateCipherParameters", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PbeUtilities.GenerateCipherParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::ArrayW<char16_t, ::Array<char16_t>*>)>(
        &::Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x113c470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "GenerateCipherParameters", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PbeUtilities.GenerateCipherParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::ArrayW<char16_t, ::Array<char16_t>*>, bool)>(
        &::Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x113c514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "GenerateCipherParameters", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PbeUtilities.GenerateCipherParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (*)(::StringW, ::ArrayW<char16_t, ::Array<char16_t>*>, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(
        &::Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x113c5bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "GenerateCipherParameters", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PbeUtilities.GenerateCipherParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (*)(::StringW, ::ArrayW<char16_t, ::Array<char16_t>*>, bool, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(
        &::Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters)> {
  constexpr static std::size_t size = 0x1134;
  constexpr static std::size_t addrs = 0x113b2bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "GenerateCipherParameters", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PbeUtilities.CreateEngine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Security::PbeUtilities::CreateEngine)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x113c844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "CreateEngine", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PbeUtilities.CreateEngine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(
    &::Org::BouncyCastle::Security::PbeUtilities::CreateEngine)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x113cd9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "CreateEngine", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PbeUtilities.CreateEngine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::StringW)>(&::Org::BouncyCastle::Security::PbeUtilities::CreateEngine)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x113c8a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "CreateEngine",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PbeUtilities.GetEncodingName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Security::PbeUtilities::GetEncodingName)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x113ceac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "GetEncodingName", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::PbeUtilities.FixDesParity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (*)(::StringW, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Security::PbeUtilities::FixDesParity)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x113c62c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "FixDesParity", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get() })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Security::PbeUtilities::setStaticF_algorithms(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "algorithms", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Security::PbeUtilities::getStaticF_algorithms() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "algorithms",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get>();
}
inline void Org::BouncyCastle::Security::PbeUtilities::setStaticF_algorithmType(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "algorithmType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Security::PbeUtilities::getStaticF_algorithmType() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "algorithmType",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get>();
}
inline void Org::BouncyCastle::Security::PbeUtilities::setStaticF_oids(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "oids", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Security::PbeUtilities::getStaticF_oids() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "oids", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get>();
}
inline ::Org::BouncyCastle::Security::PbeUtilities* Org::BouncyCastle::Security::PbeUtilities::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Security::PbeUtilities*>());
}
inline void Org::BouncyCastle::Security::PbeUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::PbeParametersGenerator* Org::BouncyCastle::Security::PbeUtilities::MakePbeGenerator(::StringW type, ::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> key,
                                                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "MakePbeGenerator", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::PbeParametersGenerator*, false>(nullptr, ___internal_method, type, digest, key, salt, iterationCount);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Security::PbeUtilities::GetObjectIdentifier(::StringW mechanism) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "GetObjectIdentifier",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, false>(nullptr, ___internal_method, mechanism);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::Security::PbeUtilities::get_Algorithms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(),
                                                                             "get_Algorithms", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(nullptr, ___internal_method);
}
inline bool Org::BouncyCastle::Security::PbeUtilities::IsPkcs12(::StringW algorithm) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "IsPkcs12", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, algorithm);
}
inline bool Org::BouncyCastle::Security::PbeUtilities::IsPkcs5Scheme1(::StringW algorithm) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "IsPkcs5Scheme1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, algorithm);
}
inline bool Org::BouncyCastle::Security::PbeUtilities::IsPkcs5Scheme2(::StringW algorithm) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "IsPkcs5Scheme2",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, algorithm);
}
inline bool Org::BouncyCastle::Security::PbeUtilities::IsOpenSsl(::StringW algorithm) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "IsOpenSsl", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, algorithm);
}
inline bool Org::BouncyCastle::Security::PbeUtilities::IsPbeAlgorithm(::StringW algorithm) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "IsPbeAlgorithm",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, algorithm);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Security::PbeUtilities::GenerateAlgorithmParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithmOid,
                                                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "GenerateAlgorithmParameters", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*, false>(nullptr, ___internal_method, algorithmOid, salt, iterationCount);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Security::PbeUtilities::GenerateAlgorithmParameters(::StringW algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt,
                                                                                                                        int32_t iterationCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "GenerateAlgorithmParameters", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*, false>(nullptr, ___internal_method, algorithm, salt, iterationCount);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Security::PbeUtilities::GenerateAlgorithmParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier* cipherAlgorithm,
                                                                                                                        ::Org::BouncyCastle::Asn1::DerObjectIdentifier* hashAlgorithm,
                                                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount,
                                                                                                                        ::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "GenerateAlgorithmParameters", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*, false>(nullptr, ___internal_method, cipherAlgorithm, hashAlgorithm, salt, iterationCount, secureRandom);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithmOid,
                                                                                                                           ::ArrayW<char16_t, ::Array<char16_t>*> password,
                                                                                                                           ::Org::BouncyCastle::Asn1::Asn1Encodable* pbeParameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "GenerateCipherParameters", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*, false>(nullptr, ___internal_method, algorithmOid, password, pbeParameters);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithmOid,
                                                                                                                           ::ArrayW<char16_t, ::Array<char16_t>*> password, bool wrongPkcs12Zero,
                                                                                                                           ::Org::BouncyCastle::Asn1::Asn1Encodable* pbeParameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "GenerateCipherParameters", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*, false>(nullptr, ___internal_method, algorithmOid, password, wrongPkcs12Zero, pbeParameters);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID,
                                                                                                                           ::ArrayW<char16_t, ::Array<char16_t>*> password) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "GenerateCipherParameters", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*, false>(nullptr, ___internal_method, algID, password);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID,
                                                                                                                           ::ArrayW<char16_t, ::Array<char16_t>*> password, bool wrongPkcs12Zero) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "GenerateCipherParameters", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*, false>(nullptr, ___internal_method, algID, password, wrongPkcs12Zero);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters(::StringW algorithm, ::ArrayW<char16_t, ::Array<char16_t>*> password,
                                                                                                                           ::Org::BouncyCastle::Asn1::Asn1Encodable* pbeParameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "GenerateCipherParameters", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*, false>(nullptr, ___internal_method, algorithm, password, pbeParameters);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters(::StringW algorithm, ::ArrayW<char16_t, ::Array<char16_t>*> password,
                                                                                                                           bool wrongPkcs12Zero,
                                                                                                                           ::Org::BouncyCastle::Asn1::Asn1Encodable* pbeParameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "GenerateCipherParameters", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*, false>(nullptr, ___internal_method, algorithm, password, wrongPkcs12Zero, pbeParameters);
}
inline ::System::Object* Org::BouncyCastle::Security::PbeUtilities::CreateEngine(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithmOid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "CreateEngine", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, algorithmOid);
}
inline ::System::Object* Org::BouncyCastle::Security::PbeUtilities::CreateEngine(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "CreateEngine", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, algID);
}
inline ::System::Object* Org::BouncyCastle::Security::PbeUtilities::CreateEngine(::StringW algorithm) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "CreateEngine", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, algorithm);
}
inline ::StringW Org::BouncyCastle::Security::PbeUtilities::GetEncodingName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "GetEncodingName", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, oid);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Security::PbeUtilities::FixDesParity(::StringW mechanism, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::PbeUtilities*>::get(), "FixDesParity", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*, false>(nullptr, ___internal_method, mechanism, parameters);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Security::PbeUtilities::PbeUtilities() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
