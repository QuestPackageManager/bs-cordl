#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__DefaultPKMacResult_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockResult_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::DefaultPKMacResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crmf::DefaultPKMacResult::*)(::Org::BouncyCastle::Crypto::IMac*)>(
    &::Org::BouncyCastle::Crmf::DefaultPKMacResult::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1211fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::DefaultPKMacResult*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::DefaultPKMacResult.Collect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crmf::DefaultPKMacResult::*)()>(
    &::Org::BouncyCastle::Crmf::DefaultPKMacResult::Collect)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x1212268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::DefaultPKMacResult*>::get(), "Collect",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::DefaultPKMacResult.Collect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crmf::DefaultPKMacResult::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Crmf::DefaultPKMacResult::Collect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x12123b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::DefaultPKMacResult*>::get(), "Collect", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockResult"
constexpr Org::BouncyCastle::Crmf::DefaultPKMacResult::operator ::Org::BouncyCastle::Crypto::IBlockResult*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockResult*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockResult"
constexpr ::Org::BouncyCastle::Crypto::IBlockResult* Org::BouncyCastle::Crmf::DefaultPKMacResult::i___Org__BouncyCastle__Crypto__IBlockResult() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockResult*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::IMac*& Org::BouncyCastle::Crmf::DefaultPKMacResult::__get_mac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> const& Org::BouncyCastle::Crmf::DefaultPKMacResult::__get_mac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr void Org::BouncyCastle::Crmf::DefaultPKMacResult::__set_mac(::Org::BouncyCastle::Crypto::IMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mac)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crmf::DefaultPKMacResult* Org::BouncyCastle::Crmf::DefaultPKMacResult::New_ctor(::Org::BouncyCastle::Crypto::IMac* mac) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crmf::DefaultPKMacResult*>(mac));
}
inline void Org::BouncyCastle::Crmf::DefaultPKMacResult::_ctor(::Org::BouncyCastle::Crypto::IMac* mac) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::DefaultPKMacResult*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mac);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crmf::DefaultPKMacResult::Collect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::DefaultPKMacResult*>::get(), "Collect",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crmf::DefaultPKMacResult::Collect(::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::DefaultPKMacResult*>::get(), "Collect", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, sig, sigOff);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crmf::DefaultPKMacResult::DefaultPKMacResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
