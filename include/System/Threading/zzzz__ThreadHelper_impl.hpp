#pragma once
// IWYU pragma private; include "System/Threading/ThreadHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__ThreadHelper_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::ThreadHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ThreadHelper::*)(::System::Delegate*)>(&::System::Threading::ThreadHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cb0868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadHelper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Delegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadHelper.SetExecutionContextHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ThreadHelper::*)(::System::Threading::ExecutionContext*)>(
    &::System::Threading::ThreadHelper::SetExecutionContextHelper)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cb0870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadHelper*>(), { "SetExecutionContextHelper", {}, { ::i2c::type_of<::System::Threading::ExecutionContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadHelper.ThreadStart_Context
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::ThreadHelper::ThreadStart_Context)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5cb0878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadHelper*>(), { "ThreadStart_Context", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadHelper.ThreadStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ThreadHelper::*)(::System::Object*)>(&::System::Threading::ThreadHelper::ThreadStart)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5cb0980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadHelper*>(), { "ThreadStart", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadHelper.ThreadStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ThreadHelper::*)()>(&::System::Threading::ThreadHelper::ThreadStart)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5cb0a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadHelper*>(), { "ThreadStart", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Delegate*& System::Threading::ThreadHelper::__cordl_internal_get__start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____start;
}
constexpr ::System::Delegate* const& System::Threading::ThreadHelper::__cordl_internal_get__start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____start;
}
constexpr void System::Threading::ThreadHelper::__cordl_internal_set__start(::System::Delegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____start = value;
}
constexpr ::System::Object*& System::Threading::ThreadHelper::__cordl_internal_get__startArg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startArg;
}
constexpr ::System::Object* const& System::Threading::ThreadHelper::__cordl_internal_get__startArg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startArg;
}
constexpr void System::Threading::ThreadHelper::__cordl_internal_set__startArg(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startArg = value;
}
constexpr ::System::Threading::ExecutionContext*& System::Threading::ThreadHelper::__cordl_internal_get__executionContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____executionContext;
}
constexpr ::System::Threading::ExecutionContext* const& System::Threading::ThreadHelper::__cordl_internal_get__executionContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____executionContext;
}
constexpr void System::Threading::ThreadHelper::__cordl_internal_set__executionContext(::System::Threading::ExecutionContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____executionContext = value;
}
inline void System::Threading::ThreadHelper::setStaticF__ccb(::System::Threading::ContextCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::ContextCallback*, "_ccb", ::System::Threading::ThreadHelper*>(std::forward<::System::Threading::ContextCallback*>(value));
}
inline ::System::Threading::ContextCallback* System::Threading::ThreadHelper::getStaticF__ccb() {
  return ::cordl_internals::getStaticField<::System::Threading::ContextCallback*, "_ccb", ::System::Threading::ThreadHelper*>();
}
inline void System::Threading::ThreadHelper::_ctor(::System::Delegate* start) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadHelper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Delegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start);
}
inline void System::Threading::ThreadHelper::SetExecutionContextHelper(::System::Threading::ExecutionContext* ec) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadHelper*>(), { "SetExecutionContextHelper", {}, { ::i2c::type_of<::System::Threading::ExecutionContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ec);
}
inline void System::Threading::ThreadHelper::ThreadStart_Context(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadHelper*>(), { "ThreadStart_Context", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
inline void System::Threading::ThreadHelper::ThreadStart(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadHelper*>(), { "ThreadStart", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void System::Threading::ThreadHelper::ThreadStart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadHelper*>(), { "ThreadStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::ThreadHelper* System::Threading::ThreadHelper::New_ctor(::System::Delegate* start) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::ThreadHelper*>(start));
}
// Ctor Parameters []
constexpr ::System::Threading::ThreadHelper::ThreadHelper() {}
