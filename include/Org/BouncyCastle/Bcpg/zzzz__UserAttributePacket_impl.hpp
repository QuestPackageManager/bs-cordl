#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__UserAttributePacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__UserAttributeSubpacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::UserAttributePacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::UserAttributePacket::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::UserAttributePacket::_ctor)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x11cee70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::UserAttributePacket*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::UserAttributePacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::UserAttributePacket::*)(
    ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*>)>(&::Org::BouncyCastle::Bcpg::UserAttributePacket::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x11d4f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::UserAttributePacket*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                     ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::UserAttributePacket.GetSubpackets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> (::Org::BouncyCastle::Bcpg::UserAttributePacket::*)()>(
        &::Org::BouncyCastle::Bcpg::UserAttributePacket::GetSubpackets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11d4f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::UserAttributePacket*>::get(),
                                                                               "GetSubpackets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::UserAttributePacket.Encode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::UserAttributePacket::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(
    &::Org::BouncyCastle::Bcpg::UserAttributePacket::Encode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x11d4f3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::UserAttributePacket*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::UserAttributePacket*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*>& Org::BouncyCastle::Bcpg::UserAttributePacket::__get_subpackets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subpackets;
}
constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> const&
Org::BouncyCastle::Bcpg::UserAttributePacket::__get_subpackets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subpackets;
}
constexpr void
Org::BouncyCastle::Bcpg::UserAttributePacket::__set_subpackets(::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___subpackets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Bcpg::UserAttributePacket* Org::BouncyCastle::Bcpg::UserAttributePacket::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::UserAttributePacket*>(bcpgIn));
}
inline void Org::BouncyCastle::Bcpg::UserAttributePacket::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::UserAttributePacket*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bcpgIn);
}
inline ::Org::BouncyCastle::Bcpg::UserAttributePacket*
Org::BouncyCastle::Bcpg::UserAttributePacket::New_ctor(::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> subpackets) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::UserAttributePacket*>(subpackets));
}
inline void Org::BouncyCastle::Bcpg::UserAttributePacket::_ctor(::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> subpackets) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::UserAttributePacket*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subpackets);
}
inline ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> Org::BouncyCastle::Bcpg::UserAttributePacket::GetSubpackets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::UserAttributePacket*>::get(),
                                                                             "GetSubpackets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*>, false>(this,
                                                                                                                                                                                ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::UserAttributePacket::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::UserAttributePacket*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bcpgOut);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::UserAttributePacket::UserAttributePacket() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
