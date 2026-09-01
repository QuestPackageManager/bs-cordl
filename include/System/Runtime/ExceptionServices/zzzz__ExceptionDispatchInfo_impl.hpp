#pragma once
// IWYU pragma private; include "System\Runtime\ExceptionServices\ExceptionDispatchInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::ExceptionServices::ExceptionDispatchInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::ExceptionServices::ExceptionDispatchInfo::*)(::System::Exception*)>(
    &::System::Runtime::ExceptionServices::ExceptionDispatchInfo::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5b6f658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::ExceptionServices::ExceptionDispatchInfo.get_BinaryStackTraceArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::ExceptionServices::ExceptionDispatchInfo::*)()>(
    &::System::Runtime::ExceptionServices::ExceptionDispatchInfo::get_BinaryStackTraceArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6f774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(), { "get_BinaryStackTraceArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::ExceptionServices::ExceptionDispatchInfo.Capture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::ExceptionServices::ExceptionDispatchInfo* (*)(::System::Exception*)>(
    &::System::Runtime::ExceptionServices::ExceptionDispatchInfo::Capture)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5b6f77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(), { "Capture", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::ExceptionServices::ExceptionDispatchInfo.get_SourceException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Runtime::ExceptionServices::ExceptionDispatchInfo::*)()>(
    &::System::Runtime::ExceptionServices::ExceptionDispatchInfo::get_SourceException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6f838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(), { "get_SourceException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::ExceptionServices::ExceptionDispatchInfo.Throw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::ExceptionServices::ExceptionDispatchInfo::*)()>(&::System::Runtime::ExceptionServices::ExceptionDispatchInfo::Throw)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b6f840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(), { "Throw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::ExceptionServices::ExceptionDispatchInfo.Throw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*)>(&::System::Runtime::ExceptionServices::ExceptionDispatchInfo::Throw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b6f884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(), { "Throw", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Exception*& System::Runtime::ExceptionServices::ExceptionDispatchInfo::__cordl_internal_get_m_Exception() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Exception;
}
constexpr ::System::Exception* const& System::Runtime::ExceptionServices::ExceptionDispatchInfo::__cordl_internal_get_m_Exception() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Exception;
}
constexpr void System::Runtime::ExceptionServices::ExceptionDispatchInfo::__cordl_internal_set_m_Exception(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Exception = value;
}
constexpr ::System::Object*& System::Runtime::ExceptionServices::ExceptionDispatchInfo::__cordl_internal_get_m_stackTrace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_stackTrace;
}
constexpr ::System::Object* const& System::Runtime::ExceptionServices::ExceptionDispatchInfo::__cordl_internal_get_m_stackTrace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_stackTrace;
}
constexpr void System::Runtime::ExceptionServices::ExceptionDispatchInfo::__cordl_internal_set_m_stackTrace(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_stackTrace = value;
}
inline void System::Runtime::ExceptionServices::ExceptionDispatchInfo::_ctor(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception);
}
inline ::System::Object* System::Runtime::ExceptionServices::ExceptionDispatchInfo::get_BinaryStackTraceArray() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(), { "get_BinaryStackTraceArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* System::Runtime::ExceptionServices::ExceptionDispatchInfo::Capture(::System::Exception* source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(), { "Capture", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(nullptr, ___internal_method, source);
}
inline ::System::Exception* System::Runtime::ExceptionServices::ExceptionDispatchInfo::get_SourceException() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(), { "get_SourceException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method);
}
inline void System::Runtime::ExceptionServices::ExceptionDispatchInfo::Throw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(), { "Throw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::ExceptionServices::ExceptionDispatchInfo::Throw(::System::Exception* source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(), { "Throw", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source);
}
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* System::Runtime::ExceptionServices::ExceptionDispatchInfo::New_ctor(::System::Exception* exception) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(exception));
}
// Ctor Parameters []
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo::ExceptionDispatchInfo() {}
