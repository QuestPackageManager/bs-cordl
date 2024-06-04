#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Multiplier/MixedNafR2LMultiplier.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__MixedNafR2LMultiplier_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::*)()>(
    &::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x129fc68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::*)(int32_t, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x129fc8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier.MultiplyPositive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::*)(::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::MultiplyPositive)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x129fcb8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier.ConfigureCurve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::EC::ECCurve* (::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::*)(::Org::BouncyCastle::Math::EC::ECCurve*, int32_t)>(
        &::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::ConfigureCurve)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x12a0114;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier*>::get(), 8));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::__cordl_internal_get_additionCoord() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additionCoord;
}
constexpr int32_t const& Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::__cordl_internal_get_additionCoord() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additionCoord;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::__cordl_internal_set_additionCoord(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___additionCoord = value;
}
constexpr int32_t& Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::__cordl_internal_get_doublingCoord() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doublingCoord;
}
constexpr int32_t const& Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::__cordl_internal_get_doublingCoord() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doublingCoord;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::__cordl_internal_set_doublingCoord(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___doublingCoord = value;
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier* Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier*>());
}
inline void Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier* Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::New_ctor(int32_t additionCoord, int32_t doublingCoord) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier*>(additionCoord, doublingCoord));
}
inline void Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::_ctor(int32_t additionCoord, int32_t doublingCoord) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, additionCoord, doublingCoord);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint* p,
                                                                                                                                ::Org::BouncyCastle::Math::BigInteger* k) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, p, k);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::ConfigureCurve(::Org::BouncyCastle::Math::EC::ECCurve* c, int32_t coord) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve*, false>(this, ___internal_method, c, coord);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::MixedNafR2LMultiplier() {}
