#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__Packet_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::InputStreamPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::InputStreamPacket::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::InputStreamPacket::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x123e120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::InputStreamPacket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::InputStreamPacket.GetInputStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::BcpgInputStream* (::Org::BouncyCastle::Bcpg::InputStreamPacket::*)()>(
    &::Org::BouncyCastle::Bcpg::InputStreamPacket::GetInputStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124126c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::InputStreamPacket*>::get(),
                                                                               "GetInputStream", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::BcpgInputStream*& Org::BouncyCastle::Bcpg::InputStreamPacket::__cordl_internal_get_bcpgIn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bcpgIn;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::BcpgInputStream*> const& Org::BouncyCastle::Bcpg::InputStreamPacket::__cordl_internal_get_bcpgIn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bcpgIn;
}
constexpr void Org::BouncyCastle::Bcpg::InputStreamPacket::__cordl_internal_set_bcpgIn(::Org::BouncyCastle::Bcpg::BcpgInputStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bcpgIn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Bcpg::InputStreamPacket* Org::BouncyCastle::Bcpg::InputStreamPacket::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::InputStreamPacket*>(bcpgIn));
}
inline void Org::BouncyCastle::Bcpg::InputStreamPacket::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::InputStreamPacket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bcpgIn);
}
inline ::Org::BouncyCastle::Bcpg::BcpgInputStream* Org::BouncyCastle::Bcpg::InputStreamPacket::GetInputStream() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::InputStreamPacket*>::get(),
                                                                             "GetInputStream", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::BcpgInputStream*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::InputStreamPacket::InputStreamPacket() {}
