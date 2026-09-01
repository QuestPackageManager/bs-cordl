#pragma once
// IWYU pragma private; include "System\Threading\Tasks\TaskExceptionHolder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__TaskExceptionHolder_def.hpp"
#include "System/Collections/Generic/zzzz__LowLevelListWithIList_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__AggregateException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::TaskExceptionHolder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskExceptionHolder::*)(::System::Threading::Tasks::Task*)>(
    &::System::Threading::Tasks::TaskExceptionHolder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbf7f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskExceptionHolder*>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskExceptionHolder.ShouldFailFastOnUnobservedException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Threading::Tasks::TaskExceptionHolder::ShouldFailFastOnUnobservedException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc733c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskExceptionHolder*>(), { "ShouldFailFastOnUnobservedException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskExceptionHolder.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskExceptionHolder::*)()>(&::System::Threading::Tasks::TaskExceptionHolder::Finalize)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5cc7344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskExceptionHolder*>(), { ::i2c::class_of<::System::Threading::Tasks::TaskExceptionHolder*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskExceptionHolder.get_ContainsFaultList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::TaskExceptionHolder::*)()>(&::System::Threading::Tasks::TaskExceptionHolder::get_ContainsFaultList)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cbf498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskExceptionHolder*>(), { "get_ContainsFaultList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskExceptionHolder.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskExceptionHolder::*)(::System::Object*, bool)>(&::System::Threading::Tasks::TaskExceptionHolder::Add)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cbf7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskExceptionHolder*>(), { "Add", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskExceptionHolder.SetCancellationException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskExceptionHolder::*)(::System::Object*)>(
    &::System::Threading::Tasks::TaskExceptionHolder::SetCancellationException)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5cc7688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskExceptionHolder*>(), { "SetCancellationException", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskExceptionHolder.AddFaultException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskExceptionHolder::*)(::System::Object*)>(
    &::System::Threading::Tasks::TaskExceptionHolder::AddFaultException)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x5cc7754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskExceptionHolder*>(), { "AddFaultException", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskExceptionHolder.MarkAsUnhandled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskExceptionHolder::*)()>(&::System::Threading::Tasks::TaskExceptionHolder::MarkAsUnhandled)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5cc7c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskExceptionHolder*>(), { "MarkAsUnhandled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskExceptionHolder.MarkAsHandled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskExceptionHolder::*)(bool)>(&::System::Threading::Tasks::TaskExceptionHolder::MarkAsHandled)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5cbe86c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskExceptionHolder*>(), { "MarkAsHandled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskExceptionHolder.CreateExceptionObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::AggregateException* (::System::Threading::Tasks::TaskExceptionHolder::*)(bool, ::System::Exception*)>(
    &::System::Threading::Tasks::TaskExceptionHolder::CreateExceptionObject)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5cbf808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskExceptionHolder*>(),
                                                                                           { "CreateExceptionObject", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskExceptionHolder.GetExceptionDispatchInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* (
    ::System::Threading::Tasks::TaskExceptionHolder::*)()>(&::System::Threading::Tasks::TaskExceptionHolder::GetExceptionDispatchInfos)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5cbfae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskExceptionHolder*>(), { "GetExceptionDispatchInfos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskExceptionHolder.GetCancellationExceptionDispatchInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::ExceptionServices::ExceptionDispatchInfo* (::System::Threading::Tasks::TaskExceptionHolder::*)()>(
    &::System::Threading::Tasks::TaskExceptionHolder::GetCancellationExceptionDispatchInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc7cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskExceptionHolder*>(), { "GetCancellationExceptionDispatchInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Task*& System::Threading::Tasks::TaskExceptionHolder::__cordl_internal_get_m_task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_task;
}
constexpr ::System::Threading::Tasks::Task* const& System::Threading::Tasks::TaskExceptionHolder::__cordl_internal_get_m_task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_task;
}
constexpr void System::Threading::Tasks::TaskExceptionHolder::__cordl_internal_set_m_task(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_task = value;
}
constexpr ::System::Collections::Generic::LowLevelListWithIList_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*&
System::Threading::Tasks::TaskExceptionHolder::__cordl_internal_get_m_faultExceptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_faultExceptions;
}
constexpr ::System::Collections::Generic::LowLevelListWithIList_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* const&
System::Threading::Tasks::TaskExceptionHolder::__cordl_internal_get_m_faultExceptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_faultExceptions;
}
constexpr void System::Threading::Tasks::TaskExceptionHolder::__cordl_internal_set_m_faultExceptions(
    ::System::Collections::Generic::LowLevelListWithIList_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_faultExceptions = value;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& System::Threading::Tasks::TaskExceptionHolder::__cordl_internal_get_m_cancellationException() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cancellationException;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& System::Threading::Tasks::TaskExceptionHolder::__cordl_internal_get_m_cancellationException() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cancellationException;
}
constexpr void System::Threading::Tasks::TaskExceptionHolder::__cordl_internal_set_m_cancellationException(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_cancellationException = value;
}
constexpr bool& System::Threading::Tasks::TaskExceptionHolder::__cordl_internal_get_m_isHandled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isHandled;
}
constexpr bool const& System::Threading::Tasks::TaskExceptionHolder::__cordl_internal_get_m_isHandled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isHandled;
}
constexpr void System::Threading::Tasks::TaskExceptionHolder::__cordl_internal_set_m_isHandled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_isHandled = value;
}
inline void System::Threading::Tasks::TaskExceptionHolder::setStaticF_s_failFastOnUnobservedException(bool value) {
  ::cordl_internals::setStaticField<bool, "s_failFastOnUnobservedException", ::System::Threading::Tasks::TaskExceptionHolder*>(std::forward<bool>(value));
}
inline bool System::Threading::Tasks::TaskExceptionHolder::getStaticF_s_failFastOnUnobservedException() {
  return ::cordl_internals::getStaticField<bool, "s_failFastOnUnobservedException", ::System::Threading::Tasks::TaskExceptionHolder*>();
}
inline void System::Threading::Tasks::TaskExceptionHolder::_ctor(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskExceptionHolder*>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, task);
}
inline bool System::Threading::Tasks::TaskExceptionHolder::ShouldFailFastOnUnobservedException() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskExceptionHolder*>(), { "ShouldFailFastOnUnobservedException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void System::Threading::Tasks::TaskExceptionHolder::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::TaskExceptionHolder*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Threading::Tasks::TaskExceptionHolder::get_ContainsFaultList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskExceptionHolder*>(), { "get_ContainsFaultList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Threading::Tasks::TaskExceptionHolder::Add(::System::Object* exceptionObject, bool representsCancellation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskExceptionHolder*>(), { "Add", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exceptionObject, representsCancellation);
}
inline void System::Threading::Tasks::TaskExceptionHolder::SetCancellationException(::System::Object* exceptionObject) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskExceptionHolder*>(), { "SetCancellationException", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exceptionObject);
}
inline void System::Threading::Tasks::TaskExceptionHolder::AddFaultException(::System::Object* exceptionObject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskExceptionHolder*>(), { "AddFaultException", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exceptionObject);
}
inline void System::Threading::Tasks::TaskExceptionHolder::MarkAsUnhandled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskExceptionHolder*>(), { "MarkAsUnhandled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::TaskExceptionHolder::MarkAsHandled(bool calledFromFinalizer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskExceptionHolder*>(), { "MarkAsHandled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, calledFromFinalizer);
}
inline ::System::AggregateException* System::Threading::Tasks::TaskExceptionHolder::CreateExceptionObject(bool calledFromFinalizer, ::System::Exception* includeThisException) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskExceptionHolder*>(),
                                                                                         { "CreateExceptionObject", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::AggregateException*>(this, ___internal_method, calledFromFinalizer, includeThisException);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*
System::Threading::Tasks::TaskExceptionHolder::GetExceptionDispatchInfos() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskExceptionHolder*>(), { "GetExceptionDispatchInfos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*>(this, ___internal_method);
}
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* System::Threading::Tasks::TaskExceptionHolder::GetCancellationExceptionDispatchInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskExceptionHolder*>(), { "GetCancellationExceptionDispatchInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::TaskExceptionHolder* System::Threading::Tasks::TaskExceptionHolder::New_ctor(::System::Threading::Tasks::Task* task) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::TaskExceptionHolder*>(task));
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::TaskExceptionHolder::TaskExceptionHolder() {}
