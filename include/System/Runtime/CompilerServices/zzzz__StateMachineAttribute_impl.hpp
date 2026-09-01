#pragma once
// IWYU pragma private; include "System\Runtime\CompilerServices\StateMachineAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__StateMachineAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::StateMachineAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::StateMachineAttribute::*)(::System::Type*)>(
    &::System::Runtime::CompilerServices::StateMachineAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6f8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::StateMachineAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::StateMachineAttribute.get_StateMachineType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::CompilerServices::StateMachineAttribute::*)()>(
    &::System::Runtime::CompilerServices::StateMachineAttribute::get_StateMachineType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b707f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::StateMachineAttribute*>(), { "get_StateMachineType", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Runtime::CompilerServices::StateMachineAttribute::__cordl_internal_get__StateMachineType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StateMachineType_k__BackingField;
}
constexpr ::System::Type* const& System::Runtime::CompilerServices::StateMachineAttribute::__cordl_internal_get__StateMachineType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StateMachineType_k__BackingField;
}
constexpr void System::Runtime::CompilerServices::StateMachineAttribute::__cordl_internal_set__StateMachineType_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____StateMachineType_k__BackingField = value;
}
inline void System::Runtime::CompilerServices::StateMachineAttribute::_ctor(::System::Type* stateMachineType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::StateMachineAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachineType);
}
inline ::System::Type* System::Runtime::CompilerServices::StateMachineAttribute::get_StateMachineType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::StateMachineAttribute*>(), { "get_StateMachineType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Runtime::CompilerServices::StateMachineAttribute* System::Runtime::CompilerServices::StateMachineAttribute::New_ctor(::System::Type* stateMachineType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::StateMachineAttribute*>(stateMachineType));
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::StateMachineAttribute::StateMachineAttribute() {}
