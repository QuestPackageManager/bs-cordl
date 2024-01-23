#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509KeyUsage_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509KeyUsage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509KeyUsage::*)(int32_t)>(&::Org::BouncyCastle::X509::X509KeyUsage::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x117eebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509KeyUsage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509KeyUsage.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::X509::X509KeyUsage::*)()>(
    &::Org::BouncyCastle::X509::X509KeyUsage::ToAsn1Object)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x117eee4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509KeyUsage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509KeyUsage*>::get(), 5));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::X509::X509KeyUsage::__cordl_internal_get_usage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usage;
}
constexpr int32_t const& Org::BouncyCastle::X509::X509KeyUsage::__cordl_internal_get_usage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usage;
}
constexpr void Org::BouncyCastle::X509::X509KeyUsage::__cordl_internal_set_usage(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___usage = value;
}
inline ::Org::BouncyCastle::X509::X509KeyUsage* Org::BouncyCastle::X509::X509KeyUsage::New_ctor(int32_t usage) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::X509::X509KeyUsage*>(usage));
}
inline void Org::BouncyCastle::X509::X509KeyUsage::_ctor(int32_t usage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509KeyUsage*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, usage);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::X509::X509KeyUsage::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509KeyUsage*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::X509KeyUsage::X509KeyUsage() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
