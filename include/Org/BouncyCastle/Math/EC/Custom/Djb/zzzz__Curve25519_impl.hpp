#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Custom/Djb/Curve25519.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_impl.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpCurve_impl.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Custom/Djb/zzzz__Curve25519_def.hpp"
#include "Org/BouncyCastle/Math/EC/Custom/Djb/zzzz__Curve25519Point_def.hpp"
#include "Org/BouncyCastle/Math/EC/Custom/Djb/zzzz__Curve25519_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECLookupTable_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable::*)(
    ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*, ::ArrayW<uint32_t>, int32_t)>(&::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x34a3c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable.get_Size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable::*)()>(
    &::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable::get_Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34a413c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable.Lookup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable::*)(int32_t)>(
    &::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable::Lookup)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x34a4144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable.LookupVar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable::*)(int32_t)>(
    &::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable::LookupVar)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x34a4330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable.CreatePoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable::*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(
        &::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable::CreatePoint)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x34a425c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable*>(),
                                                                                           { "CreatePoint", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*& Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable::__cordl_internal_get_m_outer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_outer;
}
constexpr ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519* const& Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable::__cordl_internal_get_m_outer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_outer;
}
constexpr void Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable::__cordl_internal_set_m_outer(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_outer = value;
}
constexpr ::ArrayW<uint32_t>& Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable::__cordl_internal_get_m_table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_table;
}
constexpr ::ArrayW<uint32_t> const& Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable::__cordl_internal_get_m_table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_table;
}
constexpr void Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable::__cordl_internal_set_m_table(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_table = value;
}
constexpr int32_t& Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable::__cordl_internal_get_m_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_size;
}
constexpr int32_t const& Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable::__cordl_internal_get_m_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_size;
}
constexpr void Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable::__cordl_internal_set_m_size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_size = value;
}
inline void Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable::_ctor(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519* outer, ::ArrayW<uint32_t> table, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outer, table, size);
}
inline int32_t Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable::get_Size() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable::Lookup(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, index);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable::LookupVar(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, index);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable::CreatePoint(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable*>(),
                                                                                         { "CreatePoint", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, x, y);
}
inline ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable*
Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable::New_ctor(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519* outer, ::ArrayW<uint32_t> table, int32_t size) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable*>(outer, table, size));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519_Curve25519LookupTable::Curve25519_Curve25519LookupTable() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::*)()>(&::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::_ctor)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x34a349c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519.CloneCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve* (::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::*)()>(
    &::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::CloneCurve)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x34a3648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519.SupportsCoordinateSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::*)(int32_t)>(
    &::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::SupportsCoordinateSystem)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x34a369c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519.get_Q
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::*)()>(
    &::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::get_Q)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x34a36a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519.get_Infinity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::*)()>(
    &::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::get_Infinity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34a3704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519.get_FieldSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::*)()>(&::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::get_FieldSize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x34a370c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519.FromBigInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::*)(::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::FromBigInteger)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x34a3774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519.CreateRawPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*, bool)>(
    &::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::CreateRawPoint)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x34a38e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519.CreateRawPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*,
                                                               ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*>, bool)>(
    &::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::CreateRawPoint)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x34a39ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519.CreateCacheSafeLookupTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Math::EC::ECLookupTable* (::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::*)(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>, int32_t, int32_t)>(
        &::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::CreateCacheSafeLookupTable)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x34a3a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519.RandomFieldElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::*)(::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::RandomFieldElement)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x34a3c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519.RandomFieldElementMult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::*)(::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::RandomFieldElementMult)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x34a3dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(), 8 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point*& Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::__cordl_internal_get_m_infinity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_infinity;
}
constexpr ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point* const& Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::__cordl_internal_get_m_infinity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_infinity;
}
constexpr void Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::__cordl_internal_set_m_infinity(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Point* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_infinity = value;
}
inline void Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::setStaticF_q(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "q", ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::getStaticF_q() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "q", ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>();
}
inline void Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::setStaticF_C_a(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "C_a", ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(
      std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::getStaticF_C_a() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "C_a", ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>();
}
inline void Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::setStaticF_C_b(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "C_b", ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(
      std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::getStaticF_C_b() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "C_b", ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>();
}
inline void Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::setStaticF_CURVE25519_AFFINE_ZS(::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*>, "CURVE25519_AFFINE_ZS", ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(
      std::forward<::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*>>(value));
}
inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::getStaticF_CURVE25519_AFFINE_ZS() {
  return ::cordl_internals::getStaticField<::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*>, "CURVE25519_AFFINE_ZS", ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>();
}
inline void Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::CloneCurve() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::SupportsCoordinateSystem(int32_t coord) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, coord);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::get_Q() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::get_Infinity() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::get_FieldSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method, x);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                                                    ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, x, y, withCompression);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                                                    ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                                                                                    ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> zs, bool withCompression) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, x, y, zs, withCompression);
}
inline ::Org::BouncyCastle::Math::EC::ECLookupTable* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::CreateCacheSafeLookupTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> points,
                                                                                                                                      int32_t off, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECLookupTable*>(this, ___internal_method, points, off, len);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::RandomFieldElement(::Org::BouncyCastle::Security::SecureRandom* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method, r);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::RandomFieldElementMult(::Org::BouncyCastle::Security::SecureRandom* r) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method, r);
}
inline ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519* Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::Curve25519() {}
