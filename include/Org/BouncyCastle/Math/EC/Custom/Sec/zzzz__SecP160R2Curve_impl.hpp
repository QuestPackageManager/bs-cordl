#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Custom/Sec/SecP160R2Curve.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_impl.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpCurve_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Custom/Sec/zzzz__SecP160R2Curve_def.hpp"
#include "Org/BouncyCastle/Math/EC/Custom/Sec/zzzz__SecP160R2Curve_def.hpp"
#include "Org/BouncyCastle/Math/EC/Custom/Sec/zzzz__SecP160R2Point_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECLookupTable_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable::*)(
    ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*, ::ArrayW<uint32_t, ::Array<uint32_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2463f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable.get_Size
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable::*)()>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable::get_Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2464354;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable.Lookup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable::*)(int32_t)>(&::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable::Lookup)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x246435c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable.LookupVar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable::*)(int32_t)>(&::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable::LookupVar)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2464544;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable.CreatePoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable::*)(::ArrayW<uint32_t, ::Array<uint32_t>*>, ::ArrayW<uint32_t, ::Array<uint32_t>*>)>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable::CreatePoint)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2464464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable*>::get(),
                                                 "CreatePoint", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*& Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable::__cordl_internal_get_m_outer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_outer;
}
constexpr ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve* const& Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable::__cordl_internal_get_m_outer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_outer;
}
constexpr void Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable::__cordl_internal_set_m_outer(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_outer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable::__cordl_internal_get_m_table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_table;
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable::__cordl_internal_get_m_table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_table;
}
constexpr void Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable::__cordl_internal_set_m_table(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_table)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable::__cordl_internal_get_m_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_size;
}
constexpr int32_t const& Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable::__cordl_internal_get_m_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_size;
}
constexpr void Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable::__cordl_internal_set_m_size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_size = value;
}
inline void Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable::_ctor(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve* outer,
                                                                                                 ::ArrayW<uint32_t, ::Array<uint32_t>*> table, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outer, table, size);
}
inline int32_t Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable::get_Size() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable::Lookup(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, index);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable::LookupVar(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, index);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable::CreatePoint(::ArrayW<uint32_t, ::Array<uint32_t>*> x,
                                                                                                                                          ::ArrayW<uint32_t, ::Array<uint32_t>*> y) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable*>::get(),
                                               "CreatePoint", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, x, y);
}
inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable*
Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable::New_ctor(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve* outer, ::ArrayW<uint32_t, ::Array<uint32_t>*> table,
                                                                                        int32_t size) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable*>(outer, table, size));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve_SecP160R2LookupTable::SecP160R2Curve_SecP160R2LookupTable() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::*)()>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::_ctor)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x246374c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve.CloneCurve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve* (::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::*)()>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::CloneCurve)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2463970;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve.SupportsCoordinateSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::*)(int32_t)>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::SupportsCoordinateSystem)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24639c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve.get_Q
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::*)()>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::get_Q)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x24639cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve.get_Infinity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::*)()>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::get_Infinity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2463a24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve.get_FieldSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::*)()>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::get_FieldSize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2463a2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve.FromBigInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::*)(::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::FromBigInteger)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2463a90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve.CreateRawPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*, bool)>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::CreateRawPoint)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2463bfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve.CreateRawPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*,
                                                                   ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*>, bool)>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::CreateRawPoint)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2463d04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve.CreateCacheSafeLookupTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECLookupTable* (
    ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::*)(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::CreateCacheSafeLookupTable)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2463d9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve.RandomFieldElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::*)(::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::RandomFieldElement)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2463f7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve.RandomFieldElementMult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
        &::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::RandomFieldElementMult)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2464118;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(), 8));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Point*& Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::__cordl_internal_get_m_infinity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_infinity;
}
constexpr ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Point* const& Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::__cordl_internal_get_m_infinity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_infinity;
}
constexpr void Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::__cordl_internal_set_m_infinity(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Point* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_infinity)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::setStaticF_q(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "q",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get>(
      std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::getStaticF_q() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "q",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::setStaticF_SECP160R2_AFFINE_ZS(
    ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*>, "SECP160R2_AFFINE_ZS",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get>(
      std::forward<::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*>>(value));
}
inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*>
Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::getStaticF_SECP160R2_AFFINE_ZS() {
  return ::cordl_internals::getStaticField<::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*>, "SECP160R2_AFFINE_ZS",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::CloneCurve() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve*, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::SupportsCoordinateSystem(int32_t coord) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, coord);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::get_Q() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::get_Infinity() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::get_FieldSize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*, false>(this, ___internal_method, x);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                                                        ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, x, y, withCompression);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint*
Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                                         ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs,
                                                                         bool withCompression) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, x, y, zs, withCompression);
}
inline ::Org::BouncyCastle::Math::EC::ECLookupTable*
Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::CreateCacheSafeLookupTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> points,
                                                                                     int32_t off, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECLookupTable*, false>(this, ___internal_method, points, off, len);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::RandomFieldElement(::Org::BouncyCastle::Security::SecureRandom* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*, false>(this, ___internal_method, r);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::RandomFieldElementMult(::Org::BouncyCastle::Security::SecureRandom* r) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*, false>(this, ___internal_method, r);
}
inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve* Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve::SecP160R2Curve() {}
