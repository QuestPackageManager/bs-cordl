#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Tsp/GenTimeAccuracy.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__GenTimeAccuracy_def.hpp"
#include "Org/BouncyCastle/Asn1/Tsp/zzzz__Accuracy_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::GenTimeAccuracy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::GenTimeAccuracy::*)(::Org::BouncyCastle::Asn1::Tsp::Accuracy*)>(
    &::Org::BouncyCastle::Tsp::GenTimeAccuracy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x361cf0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::GenTimeAccuracy*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Tsp::Accuracy*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::GenTimeAccuracy.get_Seconds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Tsp::GenTimeAccuracy::*)()>(&::Org::BouncyCastle::Tsp::GenTimeAccuracy::get_Seconds)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x361cf14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::GenTimeAccuracy*>(), { "get_Seconds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::GenTimeAccuracy.get_Millis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Tsp::GenTimeAccuracy::*)()>(&::Org::BouncyCastle::Tsp::GenTimeAccuracy::get_Millis)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x361cf50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::GenTimeAccuracy*>(), { "get_Millis", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::GenTimeAccuracy.get_Micros
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Tsp::GenTimeAccuracy::*)()>(&::Org::BouncyCastle::Tsp::GenTimeAccuracy::get_Micros)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x361cf74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::GenTimeAccuracy*>(), { "get_Micros", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::GenTimeAccuracy.GetTimeComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Tsp::GenTimeAccuracy::*)(::Org::BouncyCastle::Asn1::DerInteger*)>(
    &::Org::BouncyCastle::Tsp::GenTimeAccuracy::GetTimeComponent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x361cf38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::GenTimeAccuracy*>(), { "GetTimeComponent", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::GenTimeAccuracy.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Tsp::GenTimeAccuracy::*)()>(&::Org::BouncyCastle::Tsp::GenTimeAccuracy::ToString)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x361cf98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::GenTimeAccuracy*>(), { ::i2c::class_of<::Org::BouncyCastle::Tsp::GenTimeAccuracy*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Tsp::Accuracy*& Org::BouncyCastle::Tsp::GenTimeAccuracy::__cordl_internal_get_accuracy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accuracy;
}
constexpr ::Org::BouncyCastle::Asn1::Tsp::Accuracy* const& Org::BouncyCastle::Tsp::GenTimeAccuracy::__cordl_internal_get_accuracy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accuracy;
}
constexpr void Org::BouncyCastle::Tsp::GenTimeAccuracy::__cordl_internal_set_accuracy(::Org::BouncyCastle::Asn1::Tsp::Accuracy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___accuracy = value;
}
inline void Org::BouncyCastle::Tsp::GenTimeAccuracy::_ctor(::Org::BouncyCastle::Asn1::Tsp::Accuracy* accuracy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::GenTimeAccuracy*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Tsp::Accuracy*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accuracy);
}
inline int32_t Org::BouncyCastle::Tsp::GenTimeAccuracy::get_Seconds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::GenTimeAccuracy*>(), { "get_Seconds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Tsp::GenTimeAccuracy::get_Millis() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::GenTimeAccuracy*>(), { "get_Millis", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Tsp::GenTimeAccuracy::get_Micros() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::GenTimeAccuracy*>(), { "get_Micros", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Tsp::GenTimeAccuracy::GetTimeComponent(::Org::BouncyCastle::Asn1::DerInteger* time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::GenTimeAccuracy*>(), { "GetTimeComponent", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline ::StringW Org::BouncyCastle::Tsp::GenTimeAccuracy::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Tsp::GenTimeAccuracy*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Tsp::GenTimeAccuracy* Org::BouncyCastle::Tsp::GenTimeAccuracy::New_ctor(::Org::BouncyCastle::Asn1::Tsp::Accuracy* accuracy) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Tsp::GenTimeAccuracy*>(accuracy));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Tsp::GenTimeAccuracy::GenTimeAccuracy() {}
