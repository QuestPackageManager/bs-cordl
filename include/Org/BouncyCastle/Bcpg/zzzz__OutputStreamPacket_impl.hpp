#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__OutputStreamPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OutputStreamPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OutputStreamPacket::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(
    &::Org::BouncyCastle::Bcpg::OutputStreamPacket::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1268708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OutputStreamPacket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OutputStreamPacket.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::BcpgOutputStream* (::Org::BouncyCastle::Bcpg::OutputStreamPacket::*)()>(
    &::Org::BouncyCastle::Bcpg::OutputStreamPacket::Open)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OutputStreamPacket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OutputStreamPacket*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OutputStreamPacket.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OutputStreamPacket::*)()>(&::Org::BouncyCastle::Bcpg::OutputStreamPacket::Close)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OutputStreamPacket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OutputStreamPacket*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::BcpgOutputStream*& Org::BouncyCastle::Bcpg::OutputStreamPacket::__cordl_internal_get_bcpgOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bcpgOut;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::BcpgOutputStream*> const& Org::BouncyCastle::Bcpg::OutputStreamPacket::__cordl_internal_get_bcpgOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bcpgOut;
}
constexpr void Org::BouncyCastle::Bcpg::OutputStreamPacket::__cordl_internal_set_bcpgOut(::Org::BouncyCastle::Bcpg::BcpgOutputStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bcpgOut)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Bcpg::OutputStreamPacket* Org::BouncyCastle::Bcpg::OutputStreamPacket::New_ctor(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::OutputStreamPacket*>(bcpgOut));
}
inline void Org::BouncyCastle::Bcpg::OutputStreamPacket::_ctor(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OutputStreamPacket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bcpgOut);
}
inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* Org::BouncyCastle::Bcpg::OutputStreamPacket::Open() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OutputStreamPacket*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::BcpgOutputStream*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OutputStreamPacket::Close() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OutputStreamPacket*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OutputStreamPacket::OutputStreamPacket() {}
