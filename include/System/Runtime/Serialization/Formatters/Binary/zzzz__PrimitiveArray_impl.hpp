#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/PrimitiveArray.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__PrimitiveArray_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_def.hpp"
#include "System/zzzz__Array_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::*)(
    ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, ::System::Array*)>(&::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3c95868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::*)(
    ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, ::System::Array*)>(&::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::Init)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x3c9dbe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::*)(::StringW, int32_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::SetValue)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x3c96174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*>::get(), "SetValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
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
constexpr ::ArrayW<bool, ::Array<bool>*>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_booleanA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___booleanA;
}
constexpr ::ArrayW<bool, ::Array<bool>*> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_booleanA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___booleanA;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_set_booleanA(::ArrayW<bool, ::Array<bool>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___booleanA)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_charA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charA;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_charA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charA;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_set_charA(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___charA)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<double_t, ::Array<double_t>*>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_doubleA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doubleA;
}
constexpr ::ArrayW<double_t, ::Array<double_t>*> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_doubleA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doubleA;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_set_doubleA(::ArrayW<double_t, ::Array<double_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___doubleA)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_int16A() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___int16A;
}
constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_int16A() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___int16A;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_set_int16A(::ArrayW<int16_t, ::Array<int16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___int16A)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_int32A() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___int32A;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_int32A() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___int32A;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_set_int32A(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___int32A)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_int64A() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___int64A;
}
constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_int64A() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___int64A;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_set_int64A(::ArrayW<int64_t, ::Array<int64_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___int64A)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int8_t, ::Array<int8_t>*>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_sbyteA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sbyteA;
}
constexpr ::ArrayW<int8_t, ::Array<int8_t>*> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_sbyteA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sbyteA;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_set_sbyteA(::ArrayW<int8_t, ::Array<int8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sbyteA)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_singleA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___singleA;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_singleA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___singleA;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_set_singleA(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___singleA)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint16_t, ::Array<uint16_t>*>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_uint16A() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uint16A;
}
constexpr ::ArrayW<uint16_t, ::Array<uint16_t>*> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_uint16A() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uint16A;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_set_uint16A(::ArrayW<uint16_t, ::Array<uint16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___uint16A)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_uint32A() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uint32A;
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_uint32A() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uint32A;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_set_uint32A(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___uint32A)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_uint64A() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uint64A;
}
constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_get_uint64A() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uint64A;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__cordl_internal_set_uint64A(::ArrayW<uint64_t, ::Array<uint64_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___uint64A)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*
System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::New_ctor(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, ::System::Array* array) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*>(code, array));
}
inline void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::_ctor(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, ::System::Array* array) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, code, array);
}
inline void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::Init(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, ::System::Array* array) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, code, array);
}
inline void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::SetValue(::StringW value, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*>::get(), "SetValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, index);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::PrimitiveArray() {}
