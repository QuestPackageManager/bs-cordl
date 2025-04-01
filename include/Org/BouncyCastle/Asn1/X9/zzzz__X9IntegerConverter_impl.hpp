#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X9/X9IntegerConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9IntegerConverter_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X9IntegerConverter.GetByteLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Math::EC::ECFieldElement*)>(
    &::Org::BouncyCastle::Asn1::X9::X9IntegerConverter::GetByteLength)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2625c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X9::X9IntegerConverter*>::get(), "GetByteLength", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECFieldElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X9IntegerConverter.GetByteLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Math::EC::ECCurve*)>(
    &::Org::BouncyCastle::Asn1::X9::X9IntegerConverter::GetByteLength)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2625fd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X9::X9IntegerConverter*>::get(), "GetByteLength", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X9IntegerConverter.IntegerToBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::Org::BouncyCastle::Math::BigInteger*, int32_t)>(
    &::Org::BouncyCastle::Asn1::X9::X9IntegerConverter::IntegerToBytes)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2625cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X9::X9IntegerConverter*>::get(), "IntegerToBytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X9IntegerConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X9IntegerConverter::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X9IntegerConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2626008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X9::X9IntegerConverter*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t Org::BouncyCastle::Asn1::X9::X9IntegerConverter::GetByteLength(::Org::BouncyCastle::Math::EC::ECFieldElement* fe) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X9::X9IntegerConverter*>::get(), "GetByteLength", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECFieldElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, fe);
}
inline int32_t Org::BouncyCastle::Asn1::X9::X9IntegerConverter::GetByteLength(::Org::BouncyCastle::Math::EC::ECCurve* c) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X9::X9IntegerConverter*>::get(), "GetByteLength", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, c);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Asn1::X9::X9IntegerConverter::IntegerToBytes(::Org::BouncyCastle::Math::BigInteger* s, int32_t qLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X9::X9IntegerConverter*>::get(), "IntegerToBytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, s, qLength);
}
inline void Org::BouncyCastle::Asn1::X9::X9IntegerConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X9::X9IntegerConverter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9IntegerConverter* Org::BouncyCastle::Asn1::X9::X9IntegerConverter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::X9::X9IntegerConverter*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X9IntegerConverter::X9IntegerConverter() {}
