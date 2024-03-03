#pragma once
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RC5Parameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RC5Parameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::RC5Parameters::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Parameters::RC5Parameters::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xfa92d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::RC5Parameters*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RC5Parameters.get_Rounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Parameters::RC5Parameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::RC5Parameters::get_Rounds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfa9364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::RC5Parameters*>::get(),
                                                                               "get_Rounds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Parameters::RC5Parameters::__cordl_internal_get_rounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rounds;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Parameters::RC5Parameters::__cordl_internal_get_rounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rounds;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::RC5Parameters::__cordl_internal_set_rounds(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rounds = value;
}
inline ::Org::BouncyCastle::Crypto::Parameters::RC5Parameters* Org::BouncyCastle::Crypto::Parameters::RC5Parameters::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key, int32_t rounds) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Parameters::RC5Parameters*>(key, rounds));
}
inline void Org::BouncyCastle::Crypto::Parameters::RC5Parameters::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key, int32_t rounds) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::RC5Parameters*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, rounds);
}
inline int32_t Org::BouncyCastle::Crypto::Parameters::RC5Parameters::get_Rounds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::RC5Parameters*>::get(),
                                                                             "get_Rounds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::RC5Parameters::RC5Parameters() {}
