#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__UseSrtpData_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::UseSrtpData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::UseSrtpData::*)(
    ::ArrayW<int32_t, ::Array<int32_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Tls::UseSrtpData::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xfb928c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::UseSrtpData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::UseSrtpData.get_ProtectionProfiles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (::Org::BouncyCastle::Crypto::Tls::UseSrtpData::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::UseSrtpData::get_ProtectionProfiles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfc00f8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::UseSrtpData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::UseSrtpData*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::UseSrtpData.get_Mki
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::UseSrtpData::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::UseSrtpData::get_Mki)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfc0100;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::UseSrtpData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::UseSrtpData*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& Org::BouncyCastle::Crypto::Tls::UseSrtpData::__get_mProtectionProfiles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mProtectionProfiles;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& Org::BouncyCastle::Crypto::Tls::UseSrtpData::__get_mProtectionProfiles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mProtectionProfiles;
}
constexpr void Org::BouncyCastle::Crypto::Tls::UseSrtpData::__set_mProtectionProfiles(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mProtectionProfiles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Tls::UseSrtpData::__get_mMki() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMki;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Tls::UseSrtpData::__get_mMki() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMki;
}
constexpr void Org::BouncyCastle::Crypto::Tls::UseSrtpData::__set_mMki(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mMki)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Tls::UseSrtpData* Org::BouncyCastle::Crypto::Tls::UseSrtpData::New_ctor(::ArrayW<int32_t, ::Array<int32_t>*> protectionProfiles,
                                                                                                            ::ArrayW<uint8_t, ::Array<uint8_t>*> mki) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::UseSrtpData*>(protectionProfiles, mki));
}
inline void Org::BouncyCastle::Crypto::Tls::UseSrtpData::_ctor(::ArrayW<int32_t, ::Array<int32_t>*> protectionProfiles, ::ArrayW<uint8_t, ::Array<uint8_t>*> mki) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::UseSrtpData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, protectionProfiles, mki);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> Org::BouncyCastle::Crypto::Tls::UseSrtpData::get_ProtectionProfiles() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::UseSrtpData*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::UseSrtpData::get_Mki() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::UseSrtpData*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::UseSrtpData::UseSrtpData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
