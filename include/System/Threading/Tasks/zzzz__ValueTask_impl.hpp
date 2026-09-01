#pragma once
// IWYU pragma private; include "System\Threading\Tasks\ValueTask.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__VoidTaskResult_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c::*)()>(
    &::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cbc438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c.__cctor_b__4_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c::*)(::System::Object*)>(
    &::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5cbc43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c*>(), { "<.cctor>b__4_0", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c::setStaticF___9(::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c*, "<>9", ::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c*>(
      std::forward<::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c*>(value));
}
inline ::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c* System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c*, "<>9", ::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c*>();
}
inline void System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c::__cctor_b__4_0(::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c*>(), { "<.cctor>b__4_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c* System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c*>());
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::ValueTaskSourceAsTask_ValueTask___c::ValueTaskSourceAsTask_ValueTask___c() {}
//  Writing Method size for method: ::System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask::*)(::System::Threading::Tasks::Sources::IValueTaskSource*, int16_t)>(
    &::System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5cbbeb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Threading::Tasks::Sources::IValueTaskSource*>(), ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource*& System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask::__cordl_internal_get__source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____source;
}
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* const& System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask::__cordl_internal_get__source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____source;
}
constexpr void System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask::__cordl_internal_set__source(::System::Threading::Tasks::Sources::IValueTaskSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____source = value;
}
constexpr int16_t& System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask::__cordl_internal_get__token() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____token;
}
constexpr int16_t const& System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask::__cordl_internal_get__token() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____token;
}
constexpr void System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask::__cordl_internal_set__token(int16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____token = value;
}
inline void System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask::setStaticF_s_completionAction(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "s_completionAction", ::System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask*>(
      std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask::getStaticF_s_completionAction() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "s_completionAction", ::System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask*>();
}
inline void System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask::_ctor(::System::Threading::Tasks::Sources::IValueTaskSource* source, int16_t token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Threading::Tasks::Sources::IValueTaskSource*>(), ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, token);
}
inline ::System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask* System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask::New_ctor(::System::Threading::Tasks::Sources::IValueTaskSource* source,
                                                                                                                                        int16_t token) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask*>(source, token));
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::ValueTask_ValueTaskSourceAsTask::ValueTask_ValueTaskSourceAsTask() {}
//  Writing Method size for method: ::System::Threading::Tasks::ValueTask.get_CompletedTask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)()>(&::System::Threading::Tasks::ValueTask::get_CompletedTask)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5cbb828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask>(), { "get_CompletedTask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ValueTask._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::ValueTask::*)(::System::Threading::Tasks::Task*)>(&::System::Threading::Tasks::ValueTask::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cbb8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ValueTask._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::ValueTask::*)(::System::Threading::Tasks::Sources::IValueTaskSource*, int16_t)>(
    &::System::Threading::Tasks::ValueTask::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cbb8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Threading::Tasks::Sources::IValueTaskSource*>(), ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ValueTask._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::ValueTask::*)(::System::Object*, int16_t, bool)>(&::System::Threading::Tasks::ValueTask::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cbb904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ValueTask.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Threading::Tasks::ValueTask::*)()>(&::System::Threading::Tasks::ValueTask::GetHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cbb914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask>(), { ::i2c::class_of<::System::Threading::Tasks::ValueTask>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ValueTask.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::ValueTask::*)(::System::Object*)>(&::System::Threading::Tasks::ValueTask::Equals)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5cbb92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask>(), { ::i2c::class_of<::System::Threading::Tasks::ValueTask>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ValueTask.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::ValueTask::*)(::System::Threading::Tasks::ValueTask)>(&::System::Threading::Tasks::ValueTask::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cbb9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask>(), { "Equals", {}, { ::i2c::type_of<::System::Threading::Tasks::ValueTask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ValueTask.AsTask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Threading::Tasks::ValueTask::*)()>(&::System::Threading::Tasks::ValueTask::AsTask)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5cbba10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask>(), { "AsTask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ValueTask.GetTaskForValueTaskSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Threading::Tasks::ValueTask::*)(::System::Threading::Tasks::Sources::IValueTaskSource*)>(
    &::System::Threading::Tasks::ValueTask::GetTaskForValueTaskSource)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x5cbbae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask>(),
                                                             { "GetTaskForValueTaskSource", {}, { ::i2c::type_of<::System::Threading::Tasks::Sources::IValueTaskSource*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ValueTask.get_IsCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::ValueTask::*)()>(&::System::Threading::Tasks::ValueTask::get_IsCompleted)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5cbbfd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask>(), { "get_IsCompleted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ValueTask.ThrowIfCompletedUnsuccessfully
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::ValueTask::*)()>(&::System::Threading::Tasks::ValueTask::ThrowIfCompletedUnsuccessfully)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5cbc0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask>(), { "ThrowIfCompletedUnsuccessfully", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ValueTask.GetAwaiter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::CompilerServices::ValueTaskAwaiter (::System::Threading::Tasks::ValueTask::*)()>(
    &::System::Threading::Tasks::ValueTask::GetAwaiter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cbc204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask>(), { "GetAwaiter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ValueTask.ConfigureAwait
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable (::System::Threading::Tasks::ValueTask::*)(bool)>(
    &::System::Threading::Tasks::ValueTask::ConfigureAwait)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cbc210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask>(), { "ConfigureAwait", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void System::Threading::Tasks::ValueTask::setStaticF_s_canceledTask(::System::Threading::Tasks::Task* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task*, "s_canceledTask", ::System::Threading::Tasks::ValueTask>(std::forward<::System::Threading::Tasks::Task*>(value));
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::ValueTask::getStaticF_s_canceledTask() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task*, "s_canceledTask", ::System::Threading::Tasks::ValueTask>();
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::ValueTask::get_CompletedTask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask>(), { "get_CompletedTask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method);
}
inline void System::Threading::Tasks::ValueTask::_ctor(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, task);
}
inline void System::Threading::Tasks::ValueTask::_ctor(::System::Threading::Tasks::Sources::IValueTaskSource* source, int16_t token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Threading::Tasks::Sources::IValueTaskSource*>(), ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, token);
}
inline void System::Threading::Tasks::ValueTask::_ctor(::System::Object* obj, int16_t token, bool continueOnCapturedContext) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, obj, token, continueOnCapturedContext);
}
inline int32_t System::Threading::Tasks::ValueTask::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::ValueTask>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool System::Threading::Tasks::ValueTask::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::ValueTask>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool System::Threading::Tasks::ValueTask::Equals(::System::Threading::Tasks::ValueTask other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask>(), { "Equals", {}, { ::i2c::type_of<::System::Threading::Tasks::ValueTask>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::ValueTask::AsTask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask>(), { "AsTask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::ValueTask::GetTaskForValueTaskSource(::System::Threading::Tasks::Sources::IValueTaskSource* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask>(),
                                                           { "GetTaskForValueTaskSource", {}, { ::i2c::type_of<::System::Threading::Tasks::Sources::IValueTaskSource*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(*this, ___internal_method, t);
}
inline bool System::Threading::Tasks::ValueTask::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask>(), { "get_IsCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void System::Threading::Tasks::ValueTask::ThrowIfCompletedUnsuccessfully() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask>(), { "ThrowIfCompletedUnsuccessfully", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::System::Runtime::CompilerServices::ValueTaskAwaiter System::Threading::Tasks::ValueTask::GetAwaiter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask>(), { "GetAwaiter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::ValueTaskAwaiter>(*this, ___internal_method);
}
inline ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable System::Threading::Tasks::ValueTask::ConfigureAwait(bool continueOnCapturedContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ValueTask>(), { "ConfigureAwait", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable>(*this, ___internal_method, continueOnCapturedContext);
}
/// @brief Convert operator to "::System::IEquatable_1<::System::Threading::Tasks::ValueTask>"
constexpr System::Threading::Tasks::ValueTask::operator ::System::IEquatable_1<::System::Threading::Tasks::ValueTask>*() {
  return static_cast<::System::IEquatable_1<::System::Threading::Tasks::ValueTask>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::Threading::Tasks::ValueTask>"
constexpr ::System::IEquatable_1<::System::Threading::Tasks::ValueTask>* System::Threading::Tasks::ValueTask::i___System__IEquatable_1___System__Threading__Tasks__ValueTask_() {
  return static_cast<::System::IEquatable_1<::System::Threading::Tasks::ValueTask>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_obj", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_token", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::Tasks::ValueTask::ValueTask(::System::Object* _obj, int16_t _token, bool _continueOnCapturedContext) noexcept {
  this->_obj = _obj;
  this->_token = _token;
  this->_continueOnCapturedContext = _continueOnCapturedContext;
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::ValueTask::ValueTask() {}
