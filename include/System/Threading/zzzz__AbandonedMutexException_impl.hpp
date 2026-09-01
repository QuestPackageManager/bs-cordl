#pragma once
// IWYU pragma private; include "System\Threading\AbandonedMutexException.hpp"
#include "System/zzzz__SystemException_impl.hpp"
#include "System/Threading/zzzz__AbandonedMutexException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Threading/zzzz__Mutex_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
//  Writing Method size for method: ::System::Threading::AbandonedMutexException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::AbandonedMutexException::*)()>(&::System::Threading::AbandonedMutexException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ca8a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::AbandonedMutexException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::AbandonedMutexException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::AbandonedMutexException::*)(int32_t, ::System::Threading::WaitHandle*)>(
    &::System::Threading::AbandonedMutexException::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ca8aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::AbandonedMutexException*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::WaitHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::AbandonedMutexException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::AbandonedMutexException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Threading::AbandonedMutexException::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ca8bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::AbandonedMutexException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::AbandonedMutexException.SetupException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::AbandonedMutexException::*)(int32_t, ::System::Threading::WaitHandle*)>(
    &::System::Threading::AbandonedMutexException::SetupException)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ca8b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::AbandonedMutexException*>(),
                                                             { "SetupException", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::WaitHandle*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Threading::AbandonedMutexException::__cordl_internal_get__mutexIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mutexIndex;
}
constexpr int32_t const& System::Threading::AbandonedMutexException::__cordl_internal_get__mutexIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mutexIndex;
}
constexpr void System::Threading::AbandonedMutexException::__cordl_internal_set__mutexIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mutexIndex = value;
}
constexpr ::System::Threading::Mutex*& System::Threading::AbandonedMutexException::__cordl_internal_get__mutex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mutex;
}
constexpr ::System::Threading::Mutex* const& System::Threading::AbandonedMutexException::__cordl_internal_get__mutex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mutex;
}
constexpr void System::Threading::AbandonedMutexException::__cordl_internal_set__mutex(::System::Threading::Mutex* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mutex = value;
}
inline void System::Threading::AbandonedMutexException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::AbandonedMutexException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::AbandonedMutexException::_ctor(int32_t location, ::System::Threading::WaitHandle* handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::AbandonedMutexException*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::WaitHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, location, handle);
}
inline void System::Threading::AbandonedMutexException::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::AbandonedMutexException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Threading::AbandonedMutexException::SetupException(int32_t location, ::System::Threading::WaitHandle* handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::AbandonedMutexException*>(),
                                                                                         { "SetupException", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::WaitHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, location, handle);
}
inline ::System::Threading::AbandonedMutexException* System::Threading::AbandonedMutexException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::AbandonedMutexException*>());
}
inline ::System::Threading::AbandonedMutexException* System::Threading::AbandonedMutexException::New_ctor(int32_t location, ::System::Threading::WaitHandle* handle) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::AbandonedMutexException*>(location, handle));
}
inline ::System::Threading::AbandonedMutexException* System::Threading::AbandonedMutexException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                          ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::AbandonedMutexException*>(info, context));
}
// Ctor Parameters []
constexpr ::System::Threading::AbandonedMutexException::AbandonedMutexException() {}
