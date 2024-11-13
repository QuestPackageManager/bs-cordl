#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Abc/ZTauElement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Abc/zzzz__ZTauElement_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Abc::ZTauElement._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Abc::ZTauElement::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::Abc::ZTauElement::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2416bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Math::EC::Abc::ZTauElement::__cordl_internal_get_u() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___u;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& Org::BouncyCastle::Math::EC::Abc::ZTauElement::__cordl_internal_get_u() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___u;
}
constexpr void Org::BouncyCastle::Math::EC::Abc::ZTauElement::__cordl_internal_set_u(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___u)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Math::EC::Abc::ZTauElement::__cordl_internal_get_v() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___v;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& Org::BouncyCastle::Math::EC::Abc::ZTauElement::__cordl_internal_get_v() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___v;
}
constexpr void Org::BouncyCastle::Math::EC::Abc::ZTauElement::__cordl_internal_set_v(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___v)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* Org::BouncyCastle::Math::EC::Abc::ZTauElement::New_ctor(::Org::BouncyCastle::Math::BigInteger* u, ::Org::BouncyCastle::Math::BigInteger* v) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>(u, v));
}
inline void Org::BouncyCastle::Math::EC::Abc::ZTauElement::_ctor(::Org::BouncyCastle::Math::BigInteger* u, ::Org::BouncyCastle::Math::BigInteger* v) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, u, v);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Abc::ZTauElement::ZTauElement() {}
