#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/SimpleLookupTable.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_impl.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_impl.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__SimpleLookupTable_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::SimpleLookupTable.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> (*)(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Math::EC::SimpleLookupTable::Copy)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3530338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::SimpleLookupTable*>(),
                                                { "Copy", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::SimpleLookupTable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::SimpleLookupTable::*)(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Math::EC::SimpleLookupTable::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x353043c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::SimpleLookupTable*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::SimpleLookupTable.get_Size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::SimpleLookupTable::*)()>(&::Org::BouncyCastle::Math::EC::SimpleLookupTable::get_Size)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3530460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::SimpleLookupTable*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::SimpleLookupTable*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::SimpleLookupTable.Lookup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::SimpleLookupTable::*)(int32_t)>(
    &::Org::BouncyCastle::Math::EC::SimpleLookupTable::Lookup)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3530478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::SimpleLookupTable*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::SimpleLookupTable*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::SimpleLookupTable.LookupVar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::SimpleLookupTable::*)(int32_t)>(
    &::Org::BouncyCastle::Math::EC::SimpleLookupTable::LookupVar)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x35304c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::SimpleLookupTable*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::SimpleLookupTable*>(), 9 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>& Org::BouncyCastle::Math::EC::SimpleLookupTable::__cordl_internal_get_points() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___points;
}
constexpr ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> const& Org::BouncyCastle::Math::EC::SimpleLookupTable::__cordl_internal_get_points() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___points;
}
constexpr void Org::BouncyCastle::Math::EC::SimpleLookupTable::__cordl_internal_set_points(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___points = value;
}
inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> Org::BouncyCastle::Math::EC::SimpleLookupTable::Copy(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> points, int32_t off, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::SimpleLookupTable*>(),
                                              { "Copy", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(nullptr, ___internal_method, points, off, len);
}
inline void Org::BouncyCastle::Math::EC::SimpleLookupTable::_ctor(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> points, int32_t off, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::SimpleLookupTable*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points, off, len);
}
inline int32_t Org::BouncyCastle::Math::EC::SimpleLookupTable::get_Size() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::SimpleLookupTable*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::SimpleLookupTable::Lookup(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::SimpleLookupTable*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, index);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::SimpleLookupTable::LookupVar(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::SimpleLookupTable*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, index);
}
inline ::Org::BouncyCastle::Math::EC::SimpleLookupTable* Org::BouncyCastle::Math::EC::SimpleLookupTable::New_ctor(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> points, int32_t off, int32_t len) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::SimpleLookupTable*>(points, off, len));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::SimpleLookupTable::SimpleLookupTable() {}
