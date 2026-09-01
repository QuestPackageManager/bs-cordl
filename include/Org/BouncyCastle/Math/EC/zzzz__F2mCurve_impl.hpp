#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Math\EC\F2mCurve.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_impl.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mCurve_impl.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__F2mCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__ECMultiplier_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECLookupTable_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__F2mCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__F2mPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable::*)(::Org::BouncyCastle::Math::EC::F2mCurve*, ::ArrayW<int64_t>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x35259e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), ::i2c::type_of<::ArrayW<int64_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable.get_Size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable::*)()>(
    &::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable::get_Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35259f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable.Lookup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable::*)(int32_t)>(
    &::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable::Lookup)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x35259f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable.LookupVar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable::*)(int32_t)>(
    &::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable::LookupVar)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x3525d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable.CreatePoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable::*)(::ArrayW<int64_t>, ::ArrayW<int64_t>)>(&::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable::CreatePoint)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x3525b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable*>(),
                                                                                           { "CreatePoint", {}, { ::i2c::type_of<::ArrayW<int64_t>>(), ::i2c::type_of<::ArrayW<int64_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::EC::F2mCurve*& Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable::__cordl_internal_get_m_outer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_outer;
}
constexpr ::Org::BouncyCastle::Math::EC::F2mCurve* const& Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable::__cordl_internal_get_m_outer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_outer;
}
constexpr void Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable::__cordl_internal_set_m_outer(::Org::BouncyCastle::Math::EC::F2mCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_outer = value;
}
constexpr ::ArrayW<int64_t>& Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable::__cordl_internal_get_m_table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_table;
}
constexpr ::ArrayW<int64_t> const& Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable::__cordl_internal_get_m_table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_table;
}
constexpr void Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable::__cordl_internal_set_m_table(::ArrayW<int64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_table = value;
}
constexpr int32_t& Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable::__cordl_internal_get_m_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_size;
}
constexpr int32_t const& Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable::__cordl_internal_get_m_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_size;
}
constexpr void Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable::__cordl_internal_set_m_size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_size = value;
}
inline void Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable::_ctor(::Org::BouncyCastle::Math::EC::F2mCurve* outer, ::ArrayW<int64_t> table, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), ::i2c::type_of<::ArrayW<int64_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outer, table, size);
}
inline int32_t Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable::get_Size() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable::Lookup(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, index);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable::LookupVar(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, index);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable::CreatePoint(::ArrayW<int64_t> x, ::ArrayW<int64_t> y) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable*>(),
                                                                                         { "CreatePoint", {}, { ::i2c::type_of<::ArrayW<int64_t>>(), ::i2c::type_of<::ArrayW<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, x, y);
}
inline ::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable* Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable::New_ctor(::Org::BouncyCastle::Math::EC::F2mCurve* outer,
                                                                                                                                            ::ArrayW<int64_t> table, int32_t size) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable*>(outer, table, size));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::F2mCurve_DefaultF2mLookupTable::F2mCurve_DefaultF2mLookupTable() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mCurve._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::F2mCurve::*)(int32_t, int32_t, ::Org::BouncyCastle::Math::BigInteger*,
                                                                                                         ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::F2mCurve::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3524ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mCurve._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::F2mCurve::*)(
    int32_t, int32_t, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::F2mCurve::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x35250c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mCurve._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::F2mCurve::*)(int32_t, int32_t, int32_t, int32_t, ::Org::BouncyCastle::Math::BigInteger*,
                                                                                                         ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::F2mCurve::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x35250f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mCurve._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::Org::BouncyCastle::Math::EC::F2mCurve::*)(int32_t, int32_t, int32_t, int32_t, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*,
                                                                  ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::F2mCurve::_ctor)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x3524eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mCurve._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::Org::BouncyCastle::Math::EC::F2mCurve::*)(int32_t, int32_t, int32_t, int32_t, ::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*,
                                                                  ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::F2mCurve::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x35251dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mCurve.CloneCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve* (::Org::BouncyCastle::Math::EC::F2mCurve::*)()>(&::Org::BouncyCastle::Math::EC::F2mCurve::CloneCurve)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x35252c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mCurve.SupportsCoordinateSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::EC::F2mCurve::*)(int32_t)>(&::Org::BouncyCastle::Math::EC::F2mCurve::SupportsCoordinateSystem)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x352536c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mCurve.CreateDefaultMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* (::Org::BouncyCastle::Math::EC::F2mCurve::*)()>(
    &::Org::BouncyCastle::Math::EC::F2mCurve::CreateDefaultMultiplier)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x352537c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mCurve.get_FieldSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::F2mCurve::*)()>(&::Org::BouncyCastle::Math::EC::F2mCurve::get_FieldSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35253f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mCurve.FromBigInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (::Org::BouncyCastle::Math::EC::F2mCurve::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::F2mCurve::FromBigInteger)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x35253f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mCurve.CreateRawPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::F2mCurve::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*,
                                                                                                                                            ::Org::BouncyCastle::Math::EC::ECFieldElement*, bool)>(
    &::Org::BouncyCastle::Math::EC::F2mCurve::CreateRawPoint)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3525680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mCurve.CreateRawPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::F2mCurve::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*,
                                                ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*>, bool)>(&::Org::BouncyCastle::Math::EC::F2mCurve::CreateRawPoint)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3525704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mCurve.get_Infinity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::F2mCurve::*)()>(
    &::Org::BouncyCastle::Math::EC::F2mCurve::get_Infinity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x352579c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mCurve.get_M
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::F2mCurve::*)()>(&::Org::BouncyCastle::Math::EC::F2mCurve::get_M)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35257a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), { "get_M", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mCurve.IsTrinomial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::EC::F2mCurve::*)()>(&::Org::BouncyCastle::Math::EC::F2mCurve::IsTrinomial)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x35257ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), { "IsTrinomial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mCurve.get_K1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::F2mCurve::*)()>(&::Org::BouncyCastle::Math::EC::F2mCurve::get_K1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35257cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), { "get_K1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mCurve.get_K2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::F2mCurve::*)()>(&::Org::BouncyCastle::Math::EC::F2mCurve::get_K2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35257d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), { "get_K2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mCurve.get_K3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::F2mCurve::*)()>(&::Org::BouncyCastle::Math::EC::F2mCurve::get_K3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35257dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), { "get_K3", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mCurve.CreateCacheSafeLookupTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECLookupTable* (
    ::Org::BouncyCastle::Math::EC::F2mCurve::*)(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>, int32_t, int32_t)>(&::Org::BouncyCastle::Math::EC::F2mCurve::CreateCacheSafeLookupTable)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x35257e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), 31 }));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Math::EC::F2mCurve::__cordl_internal_get_m() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m;
}
constexpr int32_t const& Org::BouncyCastle::Math::EC::F2mCurve::__cordl_internal_get_m() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m;
}
constexpr void Org::BouncyCastle::Math::EC::F2mCurve::__cordl_internal_set_m(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m = value;
}
constexpr int32_t& Org::BouncyCastle::Math::EC::F2mCurve::__cordl_internal_get_k1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k1;
}
constexpr int32_t const& Org::BouncyCastle::Math::EC::F2mCurve::__cordl_internal_get_k1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k1;
}
constexpr void Org::BouncyCastle::Math::EC::F2mCurve::__cordl_internal_set_k1(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___k1 = value;
}
constexpr int32_t& Org::BouncyCastle::Math::EC::F2mCurve::__cordl_internal_get_k2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k2;
}
constexpr int32_t const& Org::BouncyCastle::Math::EC::F2mCurve::__cordl_internal_get_k2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k2;
}
constexpr void Org::BouncyCastle::Math::EC::F2mCurve::__cordl_internal_set_k2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___k2 = value;
}
constexpr int32_t& Org::BouncyCastle::Math::EC::F2mCurve::__cordl_internal_get_k3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k3;
}
constexpr int32_t const& Org::BouncyCastle::Math::EC::F2mCurve::__cordl_internal_get_k3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k3;
}
constexpr void Org::BouncyCastle::Math::EC::F2mCurve::__cordl_internal_set_k3(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___k3 = value;
}
constexpr ::Org::BouncyCastle::Math::EC::F2mPoint*& Org::BouncyCastle::Math::EC::F2mCurve::__cordl_internal_get_m_infinity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_infinity;
}
constexpr ::Org::BouncyCastle::Math::EC::F2mPoint* const& Org::BouncyCastle::Math::EC::F2mCurve::__cordl_internal_get_m_infinity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_infinity;
}
constexpr void Org::BouncyCastle::Math::EC::F2mCurve::__cordl_internal_set_m_infinity(::Org::BouncyCastle::Math::EC::F2mPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_infinity = value;
}
inline void Org::BouncyCastle::Math::EC::F2mCurve::_ctor(int32_t m, int32_t k, ::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m, k, a, b);
}
inline void Org::BouncyCastle::Math::EC::F2mCurve::_ctor(int32_t m, int32_t k, ::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b,
                                                         ::Org::BouncyCastle::Math::BigInteger* order, ::Org::BouncyCastle::Math::BigInteger* cofactor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                              ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m, k, a, b, order, cofactor);
}
inline void Org::BouncyCastle::Math::EC::F2mCurve::_ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, ::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m, k1, k2, k3, a, b);
}
inline void Org::BouncyCastle::Math::EC::F2mCurve::_ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, ::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b,
                                                         ::Org::BouncyCastle::Math::BigInteger* order, ::Org::BouncyCastle::Math::BigInteger* cofactor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m, k1, k2, k3, a, b, order, cofactor);
}
inline void Org::BouncyCastle::Math::EC::F2mCurve::_ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, ::Org::BouncyCastle::Math::EC::ECFieldElement* a,
                                                         ::Org::BouncyCastle::Math::EC::ECFieldElement* b, ::Org::BouncyCastle::Math::BigInteger* order,
                                                         ::Org::BouncyCastle::Math::BigInteger* cofactor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m, k1, k2, k3, a, b, order, cofactor);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Math::EC::F2mCurve::CloneCurve() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Math::EC::F2mCurve::SupportsCoordinateSystem(int32_t coord) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, coord);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* Org::BouncyCastle::Math::EC::F2mCurve::CreateDefaultMultiplier() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Math::EC::F2mCurve::get_FieldSize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::F2mCurve::FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method, x);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::F2mCurve::CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                                                                     bool withCompression) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, x, y, withCompression);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::F2mCurve::CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                                                                     ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> zs, bool withCompression) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, x, y, zs, withCompression);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::F2mCurve::get_Infinity() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Math::EC::F2mCurve::get_M() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), { "get_M", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Math::EC::F2mCurve::IsTrinomial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), { "IsTrinomial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Math::EC::F2mCurve::get_K1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), { "get_K1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Math::EC::F2mCurve::get_K2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), { "get_K2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Math::EC::F2mCurve::get_K3() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), { "get_K3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECLookupTable* Org::BouncyCastle::Math::EC::F2mCurve::CreateCacheSafeLookupTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> points, int32_t off,
                                                                                                                       int32_t len) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mCurve*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECLookupTable*>(this, ___internal_method, points, off, len);
}
inline ::Org::BouncyCastle::Math::EC::F2mCurve* Org::BouncyCastle::Math::EC::F2mCurve::New_ctor(int32_t m, int32_t k, ::Org::BouncyCastle::Math::BigInteger* a,
                                                                                                ::Org::BouncyCastle::Math::BigInteger* b) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::F2mCurve*>(m, k, a, b));
}
inline ::Org::BouncyCastle::Math::EC::F2mCurve* Org::BouncyCastle::Math::EC::F2mCurve::New_ctor(int32_t m, int32_t k, ::Org::BouncyCastle::Math::BigInteger* a,
                                                                                                ::Org::BouncyCastle::Math::BigInteger* b, ::Org::BouncyCastle::Math::BigInteger* order,
                                                                                                ::Org::BouncyCastle::Math::BigInteger* cofactor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::F2mCurve*>(m, k, a, b, order, cofactor));
}
inline ::Org::BouncyCastle::Math::EC::F2mCurve* Org::BouncyCastle::Math::EC::F2mCurve::New_ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, ::Org::BouncyCastle::Math::BigInteger* a,
                                                                                                ::Org::BouncyCastle::Math::BigInteger* b) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::F2mCurve*>(m, k1, k2, k3, a, b));
}
inline ::Org::BouncyCastle::Math::EC::F2mCurve* Org::BouncyCastle::Math::EC::F2mCurve::New_ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, ::Org::BouncyCastle::Math::BigInteger* a,
                                                                                                ::Org::BouncyCastle::Math::BigInteger* b, ::Org::BouncyCastle::Math::BigInteger* order,
                                                                                                ::Org::BouncyCastle::Math::BigInteger* cofactor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::F2mCurve*>(m, k1, k2, k3, a, b, order, cofactor));
}
inline ::Org::BouncyCastle::Math::EC::F2mCurve* Org::BouncyCastle::Math::EC::F2mCurve::New_ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, ::Org::BouncyCastle::Math::EC::ECFieldElement* a,
                                                                                                ::Org::BouncyCastle::Math::EC::ECFieldElement* b, ::Org::BouncyCastle::Math::BigInteger* order,
                                                                                                ::Org::BouncyCastle::Math::BigInteger* cofactor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::F2mCurve*>(m, k1, k2, k3, a, b, order, cofactor));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::F2mCurve::F2mCurve() {}
