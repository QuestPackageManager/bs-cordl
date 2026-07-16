#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/PrimitiveArray.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__PrimitiveArray_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_def.hpp"
#include "System/zzzz__Array_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::*)(
    ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, ::System::Array*)>(&::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b60d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>(), ::i2c::type_of<::System::Array*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::*)(
    ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, ::System::Array*)>(&::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::Init)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x5b690b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*>(),
                                         { "Init", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>(), ::i2c::type_of<::System::Array*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::*)(::StringW, int32_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::SetValue)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x5b616a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*>(),
                                                                                           { "SetValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___code;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___code;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_set_code(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___code = value;
}
constexpr ::ArrayW<bool>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_booleanA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___booleanA;
}
constexpr ::ArrayW<bool> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_booleanA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___booleanA;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_set_booleanA(::ArrayW<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___booleanA = value;
}
constexpr ::ArrayW<char16_t>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_charA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charA;
}
constexpr ::ArrayW<char16_t> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_charA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charA;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_set_charA(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___charA = value;
}
constexpr ::ArrayW<double_t>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_doubleA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doubleA;
}
constexpr ::ArrayW<double_t> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_doubleA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doubleA;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_set_doubleA(::ArrayW<double_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___doubleA = value;
}
constexpr ::ArrayW<int16_t>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_int16A() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___int16A;
}
constexpr ::ArrayW<int16_t> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_int16A() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___int16A;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_set_int16A(::ArrayW<int16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___int16A = value;
}
constexpr ::ArrayW<int32_t>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_int32A() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___int32A;
}
constexpr ::ArrayW<int32_t> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_int32A() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___int32A;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_set_int32A(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___int32A = value;
}
constexpr ::ArrayW<int64_t>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_int64A() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___int64A;
}
constexpr ::ArrayW<int64_t> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_int64A() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___int64A;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_set_int64A(::ArrayW<int64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___int64A = value;
}
constexpr ::ArrayW<int8_t>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_sbyteA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sbyteA;
}
constexpr ::ArrayW<int8_t> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_sbyteA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sbyteA;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_set_sbyteA(::ArrayW<int8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sbyteA = value;
}
constexpr ::ArrayW<float_t>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_singleA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___singleA;
}
constexpr ::ArrayW<float_t> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_singleA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___singleA;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_set_singleA(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___singleA = value;
}
constexpr ::ArrayW<uint16_t>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_uint16A() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uint16A;
}
constexpr ::ArrayW<uint16_t> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_uint16A() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uint16A;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_set_uint16A(::ArrayW<uint16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uint16A = value;
}
constexpr ::ArrayW<uint32_t>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_uint32A() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uint32A;
}
constexpr ::ArrayW<uint32_t> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_uint32A() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uint32A;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_set_uint32A(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uint32A = value;
}
constexpr ::ArrayW<uint64_t>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_uint64A() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uint64A;
}
constexpr ::ArrayW<uint64_t> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_uint64A() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uint64A;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_set_uint64A(::ArrayW<uint64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uint64A = value;
}
inline void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::_ctor(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, ::System::Array* array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>(), ::i2c::type_of<::System::Array*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, array);
}
inline void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::Init(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, ::System::Array* array) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*>(),
                                              { "Init", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>(), ::i2c::type_of<::System::Array*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, array);
}
inline void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::SetValue(::StringW value, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*>(),
                                                                                         { "SetValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, index);
}
inline ::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*
System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::New_ctor(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, ::System::Array* array) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*>(code, array));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::PrimitiveArray() {}
