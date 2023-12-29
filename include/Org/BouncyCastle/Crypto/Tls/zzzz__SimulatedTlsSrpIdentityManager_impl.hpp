#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SimulatedTlsSrpIdentityManager_def.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/Srp/zzzz__Srp6VerifierGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Srp6GroupParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpIdentityManager_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpLoginParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager.GetRfc5054Default
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager* (*)(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
        &::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::GetRfc5054Default)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xf209f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*>::get(), "GetRfc5054Default", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::*)(
    ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*, ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator*, ::Org::BouncyCastle::Crypto::IMac*)>(
    &::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xf20b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager.GetLoginParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* (::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
        &::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::GetLoginParameters)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0xf20bb0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*>::get(), 5));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager"
constexpr Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::operator ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*& Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__get_mGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mGroup;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*> const&
Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__get_mGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mGroup;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__set_mGroup(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator*& Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__get_mVerifierGenerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mVerifierGenerator;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator*> const&
Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__get_mVerifierGenerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mVerifierGenerator;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__set_mVerifierGenerator(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mVerifierGenerator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::IMac*& Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__get_mMac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMac;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> const& Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__get_mMac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMac;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__set_mMac(::Org::BouncyCastle::Crypto::IMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mMac)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::setStaticF_PREFIX_PASSWORD(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "PREFIX_PASSWORD",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::getStaticF_PREFIX_PASSWORD() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "PREFIX_PASSWORD",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*>::get>();
}
inline void Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::setStaticF_PREFIX_SALT(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "PREFIX_SALT",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::getStaticF_PREFIX_SALT() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "PREFIX_SALT",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*>::get>();
}
inline ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*
Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::GetRfc5054Default(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group, ::ArrayW<uint8_t, ::Array<uint8_t>*> seedKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*>::get(), "GetRfc5054Default", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*, false>(nullptr, ___internal_method, group, seedKey);
}
inline ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*
Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::New_ctor(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group,
                                                                         ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator* verifierGenerator,
                                                                         ::Org::BouncyCastle::Crypto::IMac* mac) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*>(group, verifierGenerator, mac));
}
inline void Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::_ctor(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group,
                                                                                  ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator* verifierGenerator,
                                                                                  ::Org::BouncyCastle::Crypto::IMac* mac) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, group, verifierGenerator, mac);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::GetLoginParameters(::ArrayW<uint8_t, ::Array<uint8_t>*> identity) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*>::get(), "GetLoginParameters",
                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*, false>(this, ___internal_method, identity);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::SimulatedTlsSrpIdentityManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
