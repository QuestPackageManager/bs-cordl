#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Misc/NetscapeCertType.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_impl.hpp"
#include "Org/BouncyCastle/Asn1/Misc/zzzz__NetscapeCertType_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Misc::NetscapeCertType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Misc::NetscapeCertType::*)(int32_t)>(
    &::Org::BouncyCastle::Asn1::Misc::NetscapeCertType::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x335b9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Misc::NetscapeCertType*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Misc::NetscapeCertType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Misc::NetscapeCertType::*)(::Org::BouncyCastle::Asn1::DerBitString*)>(
    &::Org::BouncyCastle::Asn1::Misc::NetscapeCertType::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x335ba2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Misc::NetscapeCertType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerBitString*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Misc::NetscapeCertType.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Asn1::Misc::NetscapeCertType::*)()>(
    &::Org::BouncyCastle::Asn1::Misc::NetscapeCertType::ToString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x335bacc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Misc::NetscapeCertType*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Misc::NetscapeCertType*>::get(), 3));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Misc::NetscapeCertType::_ctor(int32_t usage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Misc::NetscapeCertType*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, usage);
}
inline void Org::BouncyCastle::Asn1::Misc::NetscapeCertType::_ctor(::Org::BouncyCastle::Asn1::DerBitString* usage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Misc::NetscapeCertType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerBitString*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, usage);
}
inline ::StringW Org::BouncyCastle::Asn1::Misc::NetscapeCertType::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Misc::NetscapeCertType*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Misc::NetscapeCertType* Org::BouncyCastle::Asn1::Misc::NetscapeCertType::New_ctor(int32_t usage) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::Misc::NetscapeCertType*>(usage));
}
inline ::Org::BouncyCastle::Asn1::Misc::NetscapeCertType* Org::BouncyCastle::Asn1::Misc::NetscapeCertType::New_ctor(::Org::BouncyCastle::Asn1::DerBitString* usage) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::Misc::NetscapeCertType*>(usage));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Misc::NetscapeCertType::NetscapeCertType() {}
