#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__ReasonFlags_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::ReasonFlags._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::ReasonFlags::*)(int32_t)>(
    &::Org::BouncyCastle::Asn1::X509::ReasonFlags::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1125400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::ReasonFlags*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::ReasonFlags._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::ReasonFlags::*)(::Org::BouncyCastle::Asn1::DerBitString*)>(
    &::Org::BouncyCastle::Asn1::X509::ReasonFlags::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x111bd6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::ReasonFlags*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerBitString*>::get() })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Asn1::X509::ReasonFlags* Org::BouncyCastle::Asn1::X509::ReasonFlags::New_ctor(int32_t reasons) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::X509::ReasonFlags*>(reasons));
}
inline void Org::BouncyCastle::Asn1::X509::ReasonFlags::_ctor(int32_t reasons) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::ReasonFlags*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reasons);
}
inline ::Org::BouncyCastle::Asn1::X509::ReasonFlags* Org::BouncyCastle::Asn1::X509::ReasonFlags::New_ctor(::Org::BouncyCastle::Asn1::DerBitString* reasons) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::X509::ReasonFlags*>(reasons));
}
inline void Org::BouncyCastle::Asn1::X509::ReasonFlags::_ctor(::Org::BouncyCastle::Asn1::DerBitString* reasons) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::ReasonFlags*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerBitString*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reasons);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::ReasonFlags::ReasonFlags() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
