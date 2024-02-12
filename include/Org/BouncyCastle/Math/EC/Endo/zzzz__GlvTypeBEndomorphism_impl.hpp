#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__GlvTypeBEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__ECEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__GlvEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__GlvTypeBParameters_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPointMap_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::*)(
    ::Org::BouncyCastle::Math::EC::ECCurve*, ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*)>(&::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x10623f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism.DecomposeScalar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> (
    ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::*)(::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::DecomposeScalar)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x10624a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism.get_PointMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPointMap* (::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::*)()>(
    &::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::get_PointMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1062524;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism.get_HasEfficientPointMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::*)()>(
    &::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::get_HasEfficientPointMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x106252c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism*>::get(), 9));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism"
constexpr Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::operator ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism"
constexpr ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism* Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::i___Org__BouncyCastle__Math__EC__Endo__GlvEndomorphism() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism"
constexpr Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::operator ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism"
constexpr ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::i___Org__BouncyCastle__Math__EC__Endo__ECEndomorphism() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*& Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::__cordl_internal_get_m_parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_parameters;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*> const&
Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::__cordl_internal_get_m_parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_parameters;
}
constexpr void Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::__cordl_internal_set_m_parameters(::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_parameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::EC::ECPointMap*& Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::__cordl_internal_get_m_pointMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_pointMap;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPointMap*> const& Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::__cordl_internal_get_m_pointMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_pointMap;
}
constexpr void Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::__cordl_internal_set_m_pointMap(::Org::BouncyCastle::Math::EC::ECPointMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_pointMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism*
Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters* parameters) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism*>(curve, parameters));
}
inline void Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, curve, parameters);
}
inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>
Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::DecomposeScalar(::Org::BouncyCastle::Math::BigInteger* k) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>, false>(this, ___internal_method, k);
}
inline ::Org::BouncyCastle::Math::EC::ECPointMap* Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::get_PointMap() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPointMap*, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::get_HasEfficientPointMap() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::GlvTypeBEndomorphism() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
