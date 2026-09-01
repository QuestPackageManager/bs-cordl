#pragma once
// IWYU pragma private; include "System\Threading\ThreadPoolWorkQueueThreadLocals.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__ThreadPoolWorkQueueThreadLocals_def.hpp"
#include "System/Threading/zzzz__ThreadPoolWorkQueue_def.hpp"
#include "System/zzzz__Random_def.hpp"
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueueThreadLocals._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ThreadPoolWorkQueueThreadLocals::*)(::System::Threading::ThreadPoolWorkQueue*)>(
    &::System::Threading::ThreadPoolWorkQueueThreadLocals::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5cb49e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueueThreadLocals*>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::ThreadPoolWorkQueue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueueThreadLocals.CleanUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ThreadPoolWorkQueueThreadLocals::*)()>(&::System::Threading::ThreadPoolWorkQueueThreadLocals::CleanUp)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5cb6408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueueThreadLocals*>(), { "CleanUp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueueThreadLocals.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ThreadPoolWorkQueueThreadLocals::*)()>(&::System::Threading::ThreadPoolWorkQueueThreadLocals::Finalize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cb64e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueueThreadLocals*>(),
                                                                                          { ::i2c::class_of<::System::Threading::ThreadPoolWorkQueueThreadLocals*>(), 1 }));
    return ___internal_method;
  }
};
constexpr ::System::Threading::ThreadPoolWorkQueue*& System::Threading::ThreadPoolWorkQueueThreadLocals::__cordl_internal_get_workQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workQueue;
}
constexpr ::System::Threading::ThreadPoolWorkQueue* const& System::Threading::ThreadPoolWorkQueueThreadLocals::__cordl_internal_get_workQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workQueue;
}
constexpr void System::Threading::ThreadPoolWorkQueueThreadLocals::__cordl_internal_set_workQueue(::System::Threading::ThreadPoolWorkQueue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___workQueue = value;
}
constexpr ::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*& System::Threading::ThreadPoolWorkQueueThreadLocals::__cordl_internal_get_workStealingQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workStealingQueue;
}
constexpr ::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue* const& System::Threading::ThreadPoolWorkQueueThreadLocals::__cordl_internal_get_workStealingQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workStealingQueue;
}
constexpr void System::Threading::ThreadPoolWorkQueueThreadLocals::__cordl_internal_set_workStealingQueue(::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___workStealingQueue = value;
}
constexpr ::System::Random*& System::Threading::ThreadPoolWorkQueueThreadLocals::__cordl_internal_get_random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr ::System::Random* const& System::Threading::ThreadPoolWorkQueueThreadLocals::__cordl_internal_get_random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr void System::Threading::ThreadPoolWorkQueueThreadLocals::__cordl_internal_set_random(::System::Random* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___random = value;
}
inline void System::Threading::ThreadPoolWorkQueueThreadLocals::setStaticF_threadLocals(::System::Threading::ThreadPoolWorkQueueThreadLocals* value) {
  ::cordl_internals::setStaticField<::System::Threading::ThreadPoolWorkQueueThreadLocals*, "threadLocals", ::System::Threading::ThreadPoolWorkQueueThreadLocals*>(
      std::forward<::System::Threading::ThreadPoolWorkQueueThreadLocals*>(value));
}
inline ::System::Threading::ThreadPoolWorkQueueThreadLocals* System::Threading::ThreadPoolWorkQueueThreadLocals::getStaticF_threadLocals() {
  return ::cordl_internals::getStaticField<::System::Threading::ThreadPoolWorkQueueThreadLocals*, "threadLocals", ::System::Threading::ThreadPoolWorkQueueThreadLocals*>();
}
inline void System::Threading::ThreadPoolWorkQueueThreadLocals::_ctor(::System::Threading::ThreadPoolWorkQueue* tpq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueueThreadLocals*>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::ThreadPoolWorkQueue*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tpq);
}
inline void System::Threading::ThreadPoolWorkQueueThreadLocals::CleanUp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueueThreadLocals*>(), { "CleanUp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::ThreadPoolWorkQueueThreadLocals::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::ThreadPoolWorkQueueThreadLocals*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::ThreadPoolWorkQueueThreadLocals* System::Threading::ThreadPoolWorkQueueThreadLocals::New_ctor(::System::Threading::ThreadPoolWorkQueue* tpq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::ThreadPoolWorkQueueThreadLocals*>(tpq));
}
// Ctor Parameters []
constexpr ::System::Threading::ThreadPoolWorkQueueThreadLocals::ThreadPoolWorkQueueThreadLocals() {}
