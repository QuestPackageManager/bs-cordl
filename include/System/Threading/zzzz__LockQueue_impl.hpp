#pragma once
// IWYU pragma private; include "System\Threading\LockQueue.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__LockQueue_def.hpp"
#include "System/Threading/zzzz__ReaderWriterLock_def.hpp"
//  Writing Method size for method: ::System::Threading::LockQueue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::LockQueue::*)(::System::Threading::ReaderWriterLock*)>(&::System::Threading::LockQueue::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cb8518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::LockQueue*>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::ReaderWriterLock*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::LockQueue.Wait
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::LockQueue::*)(int32_t)>(&::System::Threading::LockQueue::Wait)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5cb8520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::LockQueue*>(), { "Wait", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::LockQueue.get_IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::LockQueue::*)()>(&::System::Threading::LockQueue::get_IsEmpty)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5cb86a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::LockQueue*>(), { "get_IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::LockQueue.Pulse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::LockQueue::*)()>(&::System::Threading::LockQueue::Pulse)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5cb8760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::LockQueue*>(), { "Pulse", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::ReaderWriterLock*& System::Threading::LockQueue::__cordl_internal_get_rwlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rwlock;
}
constexpr ::System::Threading::ReaderWriterLock* const& System::Threading::LockQueue::__cordl_internal_get_rwlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rwlock;
}
constexpr void System::Threading::LockQueue::__cordl_internal_set_rwlock(::System::Threading::ReaderWriterLock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rwlock = value;
}
constexpr int32_t& System::Threading::LockQueue::__cordl_internal_get_lockCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lockCount;
}
constexpr int32_t const& System::Threading::LockQueue::__cordl_internal_get_lockCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lockCount;
}
constexpr void System::Threading::LockQueue::__cordl_internal_set_lockCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lockCount = value;
}
inline void System::Threading::LockQueue::_ctor(::System::Threading::ReaderWriterLock* rwlock) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::LockQueue*>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::ReaderWriterLock*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rwlock);
}
inline bool System::Threading::LockQueue::Wait(int32_t timeout) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::LockQueue*>(), { "Wait", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, timeout);
}
inline bool System::Threading::LockQueue::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::LockQueue*>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Threading::LockQueue::Pulse() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::LockQueue*>(), { "Pulse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::LockQueue* System::Threading::LockQueue::New_ctor(::System::Threading::ReaderWriterLock* rwlock) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::LockQueue*>(rwlock));
}
// Ctor Parameters []
constexpr ::System::Threading::LockQueue::LockQueue() {}
