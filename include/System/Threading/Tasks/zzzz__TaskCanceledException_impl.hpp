#pragma once
// IWYU pragma private; include "System\Threading\Tasks\TaskCanceledException.hpp"
#include "System/zzzz__OperationCanceledException_impl.hpp"
#include "System/Threading/Tasks/zzzz__TaskCanceledException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::TaskCanceledException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskCanceledException::*)()>(&::System::Threading::Tasks::TaskCanceledException::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cbb150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskCanceledException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskCanceledException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskCanceledException::*)(::StringW)>(&::System::Threading::Tasks::TaskCanceledException::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cbb1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskCanceledException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskCanceledException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskCanceledException::*)(::System::Threading::Tasks::Task*)>(
    &::System::Threading::Tasks::TaskCanceledException::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5cbb1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskCanceledException*>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskCanceledException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskCanceledException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Threading::Tasks::TaskCanceledException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cbb270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskCanceledException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Task*& System::Threading::Tasks::TaskCanceledException::__cordl_internal_get__canceledTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canceledTask;
}
constexpr ::System::Threading::Tasks::Task* const& System::Threading::Tasks::TaskCanceledException::__cordl_internal_get__canceledTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canceledTask;
}
constexpr void System::Threading::Tasks::TaskCanceledException::__cordl_internal_set__canceledTask(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canceledTask = value;
}
inline void System::Threading::Tasks::TaskCanceledException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskCanceledException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::TaskCanceledException::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskCanceledException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void System::Threading::Tasks::TaskCanceledException::_ctor(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskCanceledException*>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, task);
}
inline void System::Threading::Tasks::TaskCanceledException::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskCanceledException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::Threading::Tasks::TaskCanceledException* System::Threading::Tasks::TaskCanceledException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::TaskCanceledException*>());
}
inline ::System::Threading::Tasks::TaskCanceledException* System::Threading::Tasks::TaskCanceledException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::TaskCanceledException*>(message));
}
inline ::System::Threading::Tasks::TaskCanceledException* System::Threading::Tasks::TaskCanceledException::New_ctor(::System::Threading::Tasks::Task* task) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::TaskCanceledException*>(task));
}
inline ::System::Threading::Tasks::TaskCanceledException* System::Threading::Tasks::TaskCanceledException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                    ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::TaskCanceledException*>(info, context));
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::TaskCanceledException::TaskCanceledException() {}
