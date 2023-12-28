#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ModDetectionCodePacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x11cf1e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x11d1d2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket.GetDigest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::*)()>(
    &::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::GetDigest)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x11d1e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket*>::get(),
                                                                               "GetDigest", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket.Encode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(
    &::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::Encode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x11d1ea4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Bcpg::ModDetectionCodePacket::__get_digest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Bcpg::ModDetectionCodePacket::__get_digest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr void Org::BouncyCastle::Bcpg::ModDetectionCodePacket::__set_digest(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___digest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket* Org::BouncyCastle::Bcpg::ModDetectionCodePacket::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket*>(bcpgIn));
}
inline void Org::BouncyCastle::Bcpg::ModDetectionCodePacket::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bcpgIn);
}
inline ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket* Org::BouncyCastle::Bcpg::ModDetectionCodePacket::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> digest) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket*>(digest));
}
inline void Org::BouncyCastle::Bcpg::ModDetectionCodePacket::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> digest) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, digest);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Bcpg::ModDetectionCodePacket::GetDigest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket*>::get(),
                                                                             "GetDigest", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::ModDetectionCodePacket::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket*>::get(), "Encode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bcpgOut);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::ModDetectionCodePacket() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
