#pragma once
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__NaccacheSternKeyParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::*)(
    bool, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, int32_t)>(&::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xf38d4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters.get_G
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::get_G)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf38d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters*>::get(), "get_G",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters.get_LowerSigmaBound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::get_LowerSigmaBound)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf38d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters*>::get(),
                                                 "get_LowerSigmaBound", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters.get_Modulus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::get_Modulus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf38d9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters*>::get(), "get_Modulus",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::__get_g() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___g;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::__get_g() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___g;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::__set_g(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___g)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::__get_n() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___n;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::__get_n() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___n;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::__set_n(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___n)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::__get_lowerSigmaBound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lowerSigmaBound;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::__get_lowerSigmaBound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lowerSigmaBound;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::__set_lowerSigmaBound(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___lowerSigmaBound = value;
}
inline ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters* Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::New_ctor(bool privateKey,
                                                                                                                                                        ::Org::BouncyCastle::Math::BigInteger* g,
                                                                                                                                                        ::Org::BouncyCastle::Math::BigInteger* n,
                                                                                                                                                        int32_t lowerSigmaBound) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters*>(privateKey, g, n, lowerSigmaBound));
}
inline void Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::_ctor(bool privateKey, ::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* n,
                                                                                     int32_t lowerSigmaBound) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, privateKey, g, n, lowerSigmaBound);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::get_G() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters*>::get(), "get_G",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::get_LowerSigmaBound() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters*>::get(),
                                               "get_LowerSigmaBound", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::get_Modulus() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters*>::get(), "get_Modulus",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::NaccacheSternKeyParameters() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
