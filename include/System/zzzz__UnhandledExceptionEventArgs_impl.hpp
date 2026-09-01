#pragma once
// IWYU pragma private; include "System\UnhandledExceptionEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/zzzz__UnhandledExceptionEventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::UnhandledExceptionEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::UnhandledExceptionEventArgs::*)(::System::Object*, bool)>(&::System::UnhandledExceptionEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c66868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UnhandledExceptionEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UnhandledExceptionEventArgs.get_ExceptionObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::UnhandledExceptionEventArgs::*)()>(&::System::UnhandledExceptionEventArgs::get_ExceptionObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c668d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UnhandledExceptionEventArgs*>(), { "get_ExceptionObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UnhandledExceptionEventArgs.get_IsTerminating
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::UnhandledExceptionEventArgs::*)()>(&::System::UnhandledExceptionEventArgs::get_IsTerminating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c668e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UnhandledExceptionEventArgs*>(), { "get_IsTerminating", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::UnhandledExceptionEventArgs::__cordl_internal_get__exception() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exception;
}
constexpr ::System::Object* const& System::UnhandledExceptionEventArgs::__cordl_internal_get__exception() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exception;
}
constexpr void System::UnhandledExceptionEventArgs::__cordl_internal_set__exception(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____exception = value;
}
constexpr bool& System::UnhandledExceptionEventArgs::__cordl_internal_get__isTerminating() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isTerminating;
}
constexpr bool const& System::UnhandledExceptionEventArgs::__cordl_internal_get__isTerminating() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isTerminating;
}
constexpr void System::UnhandledExceptionEventArgs::__cordl_internal_set__isTerminating(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isTerminating = value;
}
inline void System::UnhandledExceptionEventArgs::_ctor(::System::Object* exception, bool isTerminating) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UnhandledExceptionEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception, isTerminating);
}
inline ::System::Object* System::UnhandledExceptionEventArgs::get_ExceptionObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UnhandledExceptionEventArgs*>(), { "get_ExceptionObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::UnhandledExceptionEventArgs::get_IsTerminating() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UnhandledExceptionEventArgs*>(), { "get_IsTerminating", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::UnhandledExceptionEventArgs* System::UnhandledExceptionEventArgs::New_ctor(::System::Object* exception, bool isTerminating) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::UnhandledExceptionEventArgs*>(exception, isTerminating));
}
// Ctor Parameters []
constexpr ::System::UnhandledExceptionEventArgs::UnhandledExceptionEventArgs() {}
