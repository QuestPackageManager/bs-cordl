#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParametersHolder_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder.get_Parameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder::get_Parameters)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xed43b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>::get(),
                                                                               "get_Parameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder.CreateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder::CreateParameters)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xed468c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X9::X9ECParameters*& Org::BouncyCastle::Asn1::X9::X9ECParametersHolder::__cordl_internal_get_parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X9::X9ECParameters*> const& Org::BouncyCastle::Asn1::X9::X9ECParametersHolder::__cordl_internal_get_parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr void Org::BouncyCastle::Asn1::X9::X9ECParametersHolder::__cordl_internal_set_parameters(::Org::BouncyCastle::Asn1::X9::X9ECParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::X9::X9ECParametersHolder::get_Parameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>::get(),
                                                                             "get_Parameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Asn1::X9::X9ECParametersHolder::CreateParameters() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Asn1::X9::X9ECParametersHolder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>());
}
inline void Org::BouncyCastle::Asn1::X9::X9ECParametersHolder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder::X9ECParametersHolder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
