#pragma once
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ElGamalKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ElGamalParameters_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::*)(
    bool, ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*)>(&::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xf35654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters.get_Parameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* (
    ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::*)()>(&::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::get_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf35684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*>::get(), "get_Parameters",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::*)(::System::Object*)>(
    &::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xf3568c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::*)(
    ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*)>(&::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xf35728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xf35778;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*>::get(), 2));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*& Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::__get_parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*> const&
Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::__get_parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::__set_parameters(::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*
Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::New_ctor(bool isPrivate, ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*>(isPrivate, parameters));
}
inline void Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::_ctor(bool isPrivate, ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isPrivate, parameters);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::get_Parameters() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*>::get(), "get_Parameters",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*>::get(), "Equals",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::Equals(::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::GetHashCode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*>::get(), "GetHashCode",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::ElGamalKeyParameters() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
