#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Custom/Sec/SecT131R2Curve.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_impl.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mCurve_impl.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Custom/Sec/zzzz__SecT131R2Curve_def.hpp"
#include "Org/BouncyCastle/Math/EC/Custom/Sec/zzzz__SecT131R2Curve_def.hpp"
#include "Org/BouncyCastle/Math/EC/Custom/Sec/zzzz__SecT131R2Point_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECLookupTable_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable::*)(
    ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*, ::ArrayW<uint64_t>, int32_t)>(&::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x34e21d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable.get_Size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable::*)()>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable::get_Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34e22f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable.Lookup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable::*)(int32_t)>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable::Lookup)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x34e22fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable.LookupVar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable::*)(int32_t)>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable::LookupVar)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x34e24fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable.CreatePoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable::*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(
        &::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable::CreatePoint)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x34e2428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable*>(),
                                                                                           { "CreatePoint", {}, { ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*& Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable::__cordl_internal_get_m_outer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_outer;
}
constexpr ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve* const& Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable::__cordl_internal_get_m_outer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_outer;
}
constexpr void Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable::__cordl_internal_set_m_outer(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_outer = value;
}
constexpr ::ArrayW<uint64_t>& Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable::__cordl_internal_get_m_table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_table;
}
constexpr ::ArrayW<uint64_t> const& Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable::__cordl_internal_get_m_table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_table;
}
constexpr void Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable::__cordl_internal_set_m_table(::ArrayW<uint64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_table = value;
}
constexpr int32_t& Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable::__cordl_internal_get_m_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_size;
}
constexpr int32_t const& Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable::__cordl_internal_get_m_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_size;
}
constexpr void Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable::__cordl_internal_set_m_size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_size = value;
}
inline void Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable::_ctor(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve* outer, ::ArrayW<uint64_t> table,
                                                                                                 int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outer, table, size);
}
inline int32_t Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable::get_Size() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable::Lookup(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, index);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable::LookupVar(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, index);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable::CreatePoint(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable*>(),
                                                                                         { "CreatePoint", {}, { ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, x, y);
}
inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable*
Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable::New_ctor(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve* outer, ::ArrayW<uint64_t> table, int32_t size) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable*>(outer, table, size));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve_SecT131R2LookupTable::SecT131R2Curve_SecT131R2LookupTable() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::*)()>(&::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::_ctor)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x34e1b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve.CloneCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve* (::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::*)()>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::CloneCurve)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x34e1d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve.SupportsCoordinateSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::*)(int32_t)>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::SupportsCoordinateSystem)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x34e1dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve.get_FieldSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::*)()>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::get_FieldSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34e1de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve.FromBigInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::*)(::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::FromBigInteger)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x34e1de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve.CreateRawPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*, bool)>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::CreateRawPoint)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x34e1e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve.CreateRawPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*,
                                                                   ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*>, bool)>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::CreateRawPoint)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x34e1f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve.get_Infinity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::*)()>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::get_Infinity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34e1fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve.get_IsKoblitz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::*)()>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::get_IsKoblitz)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34e1fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve.get_M
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::*)()>(&::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::get_M)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34e1ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve.get_IsTrinomial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::*)()>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::get_IsTrinomial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34e1ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve.get_K1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::*)()>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::get_K1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34e2004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve.get_K2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::*)()>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::get_K2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34e200c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve.get_K3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::*)()>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::get_K3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34e2014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve.CreateCacheSafeLookupTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Math::EC::ECLookupTable* (::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::*)(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>, int32_t, int32_t)>(
        &::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::CreateCacheSafeLookupTable)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x34e201c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 31 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Point*& Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::__cordl_internal_get_m_infinity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_infinity;
}
constexpr ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Point* const& Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::__cordl_internal_get_m_infinity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_infinity;
}
constexpr void Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::__cordl_internal_set_m_infinity(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Point* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_infinity = value;
}
inline void Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::setStaticF_SECT131R2_AFFINE_ZS(::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*>, "SECT131R2_AFFINE_ZS", ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(
      std::forward<::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*>>(value));
}
inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::getStaticF_SECT131R2_AFFINE_ZS() {
  return ::cordl_internals::getStaticField<::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*>, "SECT131R2_AFFINE_ZS", ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>();
}
inline void Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::CloneCurve() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::SupportsCoordinateSystem(int32_t coord) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, coord);
}
inline int32_t Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::get_FieldSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method, x);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                                                        ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, x, y, withCompression);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                                                        ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                                                                                        ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> zs,
                                                                                                                        bool withCompression) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, x, y, zs, withCompression);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::get_Infinity() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::get_IsKoblitz() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::get_M() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::get_IsTrinomial() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::get_K1() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::get_K2() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::get_K3() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECLookupTable* Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::CreateCacheSafeLookupTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> points,
                                                                                                                                          int32_t off, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECLookupTable*>(this, ___internal_method, points, off, len);
}
inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve* Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT131R2Curve::SecT131R2Curve() {}
