#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\TypeHandleRef.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__RuntimeTypeHandle_impl.hpp"
#include "System/Runtime/Serialization/zzzz__TypeHandleRef_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::TypeHandleRef._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::TypeHandleRef::*)()>(&::System::Runtime::Serialization::TypeHandleRef::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6147d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::TypeHandleRef*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::TypeHandleRef._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::TypeHandleRef::*)(::System::RuntimeTypeHandle)>(
    &::System::Runtime::Serialization::TypeHandleRef::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6148988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::TypeHandleRef*>(), { ".ctor", {}, { ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::TypeHandleRef.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeTypeHandle (::System::Runtime::Serialization::TypeHandleRef::*)()>(
    &::System::Runtime::Serialization::TypeHandleRef::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614b510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::TypeHandleRef*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::TypeHandleRef.set_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::TypeHandleRef::*)(::System::RuntimeTypeHandle)>(
    &::System::Runtime::Serialization::TypeHandleRef::set_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614b518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::TypeHandleRef*>(), { "set_Value", {}, { ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::System::RuntimeTypeHandle& System::Runtime::Serialization::TypeHandleRef::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::System::RuntimeTypeHandle const& System::Runtime::Serialization::TypeHandleRef::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void System::Runtime::Serialization::TypeHandleRef::__cordl_internal_set_value(::System::RuntimeTypeHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline void System::Runtime::Serialization::TypeHandleRef::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::TypeHandleRef*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::TypeHandleRef::_ctor(::System::RuntimeTypeHandle value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::TypeHandleRef*>(), { ".ctor", {}, { ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::RuntimeTypeHandle System::Runtime::Serialization::TypeHandleRef::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::TypeHandleRef*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeTypeHandle>(this, ___internal_method);
}
inline void System::Runtime::Serialization::TypeHandleRef::set_Value(::System::RuntimeTypeHandle value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::TypeHandleRef*>(), { "set_Value", {}, { ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::TypeHandleRef* System::Runtime::Serialization::TypeHandleRef::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::TypeHandleRef*>());
}
inline ::System::Runtime::Serialization::TypeHandleRef* System::Runtime::Serialization::TypeHandleRef::New_ctor(::System::RuntimeTypeHandle value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::TypeHandleRef*>(value));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::TypeHandleRef::TypeHandleRef() {}
