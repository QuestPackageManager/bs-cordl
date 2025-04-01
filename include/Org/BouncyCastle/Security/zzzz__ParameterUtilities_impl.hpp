#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Security/ParameterUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Security/zzzz__ParameterUtilities_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Security::ParameterUtilities::*)()>(
    &::Org::BouncyCastle::Security::ParameterUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a9d84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.AddAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Org::BouncyCastle::Security::ParameterUtilities::AddAlgorithm)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x25ab424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "AddAlgorithm", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.AddBasicIVSizeEntries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::Org::BouncyCastle::Security::ParameterUtilities::AddBasicIVSizeEntries)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x25ab5e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "AddBasicIVSizeEntries", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.GetCanonicalAlgorithmName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::Org::BouncyCastle::Security::ParameterUtilities::GetCanonicalAlgorithmName)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x25ab74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "GetCanonicalAlgorithmName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.CreateKeyParameter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
        &::Org::BouncyCastle::Security::ParameterUtilities::CreateKeyParameter)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x25ab884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "CreateKeyParameter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.CreateKeyParameter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter* (*)(::StringW, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Security::ParameterUtilities::CreateKeyParameter)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x25abba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "CreateKeyParameter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.CreateKeyParameter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
        &::Org::BouncyCastle::Security::ParameterUtilities::CreateKeyParameter)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x25abc0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "CreateKeyParameter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.CreateKeyParameter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter* (*)(::StringW, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
        &::Org::BouncyCastle::Security::ParameterUtilities::CreateKeyParameter)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x25ab8f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "CreateKeyParameter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.GetCipherParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Crypto::ICipherParameters*,
                                                                    ::Org::BouncyCastle::Asn1::Asn1Object*)>(&::Org::BouncyCastle::Security::ParameterUtilities::GetCipherParameters)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x25abc8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "GetCipherParameters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.GetCipherParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (*)(::StringW, ::Org::BouncyCastle::Crypto::ICipherParameters*, ::Org::BouncyCastle::Asn1::Asn1Object*)>(
        &::Org::BouncyCastle::Security::ParameterUtilities::GetCipherParameters)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x25abd04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "GetCipherParameters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.GenerateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Security::SecureRandom*)>(
        &::Org::BouncyCastle::Security::ParameterUtilities::GenerateParameters)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25ac2bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "GenerateParameters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.GenerateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (*)(::StringW, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Security::ParameterUtilities::GenerateParameters)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x25ac324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "GenerateParameters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.WithRandom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (*)(::Org::BouncyCastle::Crypto::ICipherParameters*, ::Org::BouncyCastle::Security::SecureRandom*)>(
        &::Org::BouncyCastle::Security::ParameterUtilities::WithRandom)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x25ac714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "WithRandom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.CreateIVOctetString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (*)(::Org::BouncyCastle::Security::SecureRandom*, int32_t)>(
    &::Org::BouncyCastle::Security::ParameterUtilities::CreateIVOctetString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x25ac60c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "CreateIVOctetString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.CreateIV
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::Org::BouncyCastle::Security::SecureRandom*, int32_t)>(
    &::Org::BouncyCastle::Security::ParameterUtilities::CreateIV)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25ac6ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "CreateIV", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::ParameterUtilities.FindBasicIVSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::Org::BouncyCastle::Security::ParameterUtilities::FindBasicIVSize)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x25ac118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "FindBasicIVSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Security::ParameterUtilities::setStaticF_algorithms(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "algorithms", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Security::ParameterUtilities::getStaticF_algorithms() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "algorithms",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get>();
}
inline void Org::BouncyCastle::Security::ParameterUtilities::setStaticF_basicIVSizes(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "basicIVSizes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Security::ParameterUtilities::getStaticF_basicIVSizes() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "basicIVSizes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get>();
}
inline void Org::BouncyCastle::Security::ParameterUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Security::ParameterUtilities::AddAlgorithm(::StringW canonicalName, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> aliases) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "AddAlgorithm", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, canonicalName, aliases);
}
inline void Org::BouncyCastle::Security::ParameterUtilities::AddBasicIVSizeEntries(int32_t size, ::ArrayW<::StringW, ::Array<::StringW>*> algorithms) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "AddBasicIVSizeEntries", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, size, algorithms);
}
inline ::StringW Org::BouncyCastle::Security::ParameterUtilities::GetCanonicalAlgorithmName(::StringW algorithm) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "GetCanonicalAlgorithmName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, algorithm);
}
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Org::BouncyCastle::Security::ParameterUtilities::CreateKeyParameter(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algOid,
                                                                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "CreateKeyParameter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, false>(nullptr, ___internal_method, algOid, keyBytes);
}
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Org::BouncyCastle::Security::ParameterUtilities::CreateKeyParameter(::StringW algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "CreateKeyParameter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, false>(nullptr, ___internal_method, algorithm, keyBytes);
}
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Org::BouncyCastle::Security::ParameterUtilities::CreateKeyParameter(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algOid,
                                                                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes, int32_t offset,
                                                                                                                                  int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "CreateKeyParameter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, false>(nullptr, ___internal_method, algOid, keyBytes, offset, length);
}
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Org::BouncyCastle::Security::ParameterUtilities::CreateKeyParameter(::StringW algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes,
                                                                                                                                  int32_t offset, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "CreateKeyParameter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, false>(nullptr, ___internal_method, algorithm, keyBytes, offset, length);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Security::ParameterUtilities::GetCipherParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algOid,
                                                                                                                            ::Org::BouncyCastle::Crypto::ICipherParameters* key,
                                                                                                                            ::Org::BouncyCastle::Asn1::Asn1Object* asn1Params) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "GetCipherParameters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*, false>(nullptr, ___internal_method, algOid, key, asn1Params);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Security::ParameterUtilities::GetCipherParameters(::StringW algorithm, ::Org::BouncyCastle::Crypto::ICipherParameters* key,
                                                                                                                            ::Org::BouncyCastle::Asn1::Asn1Object* asn1Params) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "GetCipherParameters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*, false>(nullptr, ___internal_method, algorithm, key, asn1Params);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Security::ParameterUtilities::GenerateParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algID,
                                                                                                                     ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "GenerateParameters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*, false>(nullptr, ___internal_method, algID, random);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Security::ParameterUtilities::GenerateParameters(::StringW algorithm, ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "GenerateParameters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*, false>(nullptr, ___internal_method, algorithm, random);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Security::ParameterUtilities::WithRandom(::Org::BouncyCastle::Crypto::ICipherParameters* cp,
                                                                                                                   ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "WithRandom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*, false>(nullptr, ___internal_method, cp, random);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::Security::ParameterUtilities::CreateIVOctetString(::Org::BouncyCastle::Security::SecureRandom* random, int32_t ivLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "CreateIVOctetString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*, false>(nullptr, ___internal_method, random, ivLength);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Security::ParameterUtilities::CreateIV(::Org::BouncyCastle::Security::SecureRandom* random, int32_t ivLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "CreateIV", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, random, ivLength);
}
inline int32_t Org::BouncyCastle::Security::ParameterUtilities::FindBasicIVSize(::StringW canonicalName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::ParameterUtilities*>::get(), "FindBasicIVSize",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, canonicalName);
}
inline ::Org::BouncyCastle::Security::ParameterUtilities* Org::BouncyCastle::Security::ParameterUtilities::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Security::ParameterUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Security::ParameterUtilities::ParameterUtilities() {}
