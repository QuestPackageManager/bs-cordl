#pragma once
// IWYU pragma private; include "System\Threading\ThreadPoolWorkQueue.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_impl.hpp"
#include "System/Threading/zzzz__SpinLock_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__ThreadPoolWorkQueue_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/Threading/zzzz__ThreadPoolWorkQueueThreadLocals_def.hpp"
#include "System/Threading/zzzz__ThreadPoolWorkQueue_def.hpp"
template <typename T> constexpr ::ArrayW<T>& System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>::__cordl_internal_get_m_array() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_array;
}
template <typename T> constexpr ::ArrayW<T> const& System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>::__cordl_internal_get_m_array() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_array;
}
template <typename T> constexpr void System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>::__cordl_internal_set_m_array(::ArrayW<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_array = value;
}
template <typename T> inline void System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>::_ctor(int32_t initialSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialSize);
}
template <typename T> inline ::ArrayW<T> System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
template <typename T> inline int32_t System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>::Add(T e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>*>(), { "Add", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, e);
}
template <typename T> inline void System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>::Remove(T e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>*>(), { "Remove", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
template <typename T> inline ::System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>* System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>::New_ctor(int32_t initialSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>*>(initialSize));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>::ThreadPoolWorkQueue_SparseArray_1() {}
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue.LocalPush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::*)(::System::Threading::IThreadPoolWorkItem*)>(
    &::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::LocalPush)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x5cb4d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>(),
                                                                                           { "LocalPush", {}, { ::i2c::type_of<::System::Threading::IThreadPoolWorkItem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue.LocalFindAndPop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::*)(::System::Threading::IThreadPoolWorkItem*)>(
    &::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::LocalFindAndPop)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x5cb534c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>(),
                                                                                           { "LocalFindAndPop", {}, { ::i2c::type_of<::System::Threading::IThreadPoolWorkItem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue.LocalPop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::*)(::by_ref<::System::Threading::IThreadPoolWorkItem*>)>(
    &::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::LocalPop)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5cb583c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>(),
                                                                                           { "LocalPop", {}, { ::i2c::type_of<::by_ref<::System::Threading::IThreadPoolWorkItem*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue.TrySteal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::*)(::by_ref<::System::Threading::IThreadPoolWorkItem*>, ::by_ref<bool>)>(
    &::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::TrySteal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cb5c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>(),
                                                             { "TrySteal", {}, { ::i2c::type_of<::by_ref<::System::Threading::IThreadPoolWorkItem*>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue.TrySteal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::*)(
    ::by_ref<::System::Threading::IThreadPoolWorkItem*>, ::by_ref<bool>, int32_t)>(&::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::TrySteal)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5cb6078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>(),
                                         { "TrySteal", {}, { ::i2c::type_of<::by_ref<::System::Threading::IThreadPoolWorkItem*>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::*)()>(&::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cb631c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Threading::IThreadPoolWorkItem*>& System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::__cordl_internal_get_m_array() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_array;
}
constexpr ::ArrayW<::System::Threading::IThreadPoolWorkItem*> const& System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::__cordl_internal_get_m_array() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_array;
}
constexpr void System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::__cordl_internal_set_m_array(::ArrayW<::System::Threading::IThreadPoolWorkItem*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_array = value;
}
constexpr int32_t& System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::__cordl_internal_get_m_mask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_mask;
}
constexpr int32_t const& System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::__cordl_internal_get_m_mask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_mask;
}
constexpr void System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::__cordl_internal_set_m_mask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_mask = value;
}
constexpr int32_t& System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::__cordl_internal_get_m_headIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_headIndex;
}
constexpr int32_t const& System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::__cordl_internal_get_m_headIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_headIndex;
}
constexpr void System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::__cordl_internal_set_m_headIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_headIndex = value;
}
constexpr int32_t& System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::__cordl_internal_get_m_tailIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_tailIndex;
}
constexpr int32_t const& System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::__cordl_internal_get_m_tailIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_tailIndex;
}
constexpr void System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::__cordl_internal_set_m_tailIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_tailIndex = value;
}
constexpr ::System::Threading::SpinLock& System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::__cordl_internal_get_m_foreignLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_foreignLock;
}
constexpr ::System::Threading::SpinLock const& System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::__cordl_internal_get_m_foreignLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_foreignLock;
}
constexpr void System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::__cordl_internal_set_m_foreignLock(::System::Threading::SpinLock value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_foreignLock = value;
}
inline void System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::LocalPush(::System::Threading::IThreadPoolWorkItem* obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>(),
                                                                                         { "LocalPush", {}, { ::i2c::type_of<::System::Threading::IThreadPoolWorkItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline bool System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::LocalFindAndPop(::System::Threading::IThreadPoolWorkItem* obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>(),
                                                                                         { "LocalFindAndPop", {}, { ::i2c::type_of<::System::Threading::IThreadPoolWorkItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::LocalPop(::by_ref<::System::Threading::IThreadPoolWorkItem*> obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>(),
                                                                                         { "LocalPop", {}, { ::i2c::type_of<::by_ref<::System::Threading::IThreadPoolWorkItem*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::TrySteal(::by_ref<::System::Threading::IThreadPoolWorkItem*> obj, ::by_ref<bool> missedSteal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>(),
                                                           { "TrySteal", {}, { ::i2c::type_of<::by_ref<::System::Threading::IThreadPoolWorkItem*>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj, missedSteal);
}
inline bool System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::TrySteal(::by_ref<::System::Threading::IThreadPoolWorkItem*> obj, ::by_ref<bool> missedSteal, int32_t millisecondsTimeout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>(),
                                       { "TrySteal", {}, { ::i2c::type_of<::by_ref<::System::Threading::IThreadPoolWorkItem*>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj, missedSteal, millisecondsTimeout);
}
inline void System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue* System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>());
}
// Ctor Parameters []
constexpr ::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::ThreadPoolWorkQueue_WorkStealingQueue() {}
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue_QueueSegment.GetIndexes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ThreadPoolWorkQueue_QueueSegment::*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::System::Threading::ThreadPoolWorkQueue_QueueSegment::GetIndexes)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cb638c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_QueueSegment*>(),
                                                                                           { "GetIndexes", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue_QueueSegment.CompareExchangeIndexes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::ThreadPoolWorkQueue_QueueSegment::*)(::by_ref<int32_t>, int32_t, ::by_ref<int32_t>, int32_t)>(
    &::System::Threading::ThreadPoolWorkQueue_QueueSegment::CompareExchangeIndexes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5cb63a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_QueueSegment*>(),
                            { "CompareExchangeIndexes", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue_QueueSegment._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ThreadPoolWorkQueue_QueueSegment::*)()>(&::System::Threading::ThreadPoolWorkQueue_QueueSegment::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5cb4894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_QueueSegment*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue_QueueSegment.IsUsedUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::ThreadPoolWorkQueue_QueueSegment::*)()>(&::System::Threading::ThreadPoolWorkQueue_QueueSegment::IsUsedUp)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5cb5c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_QueueSegment*>(), { "IsUsedUp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue_QueueSegment.TryEnqueue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::ThreadPoolWorkQueue_QueueSegment::*)(::System::Threading::IThreadPoolWorkItem*)>(
    &::System::Threading::ThreadPoolWorkQueue_QueueSegment::TryEnqueue)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5cb520c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_QueueSegment*>(),
                                                                                           { "TryEnqueue", {}, { ::i2c::type_of<::System::Threading::IThreadPoolWorkItem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue_QueueSegment.TryDequeue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::ThreadPoolWorkQueue_QueueSegment::*)(::by_ref<::System::Threading::IThreadPoolWorkItem*>)>(
    &::System::Threading::ThreadPoolWorkQueue_QueueSegment::TryDequeue)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5cb5b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_QueueSegment*>(),
                                                                                           { "TryDequeue", {}, { ::i2c::type_of<::by_ref<::System::Threading::IThreadPoolWorkItem*>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Threading::IThreadPoolWorkItem*>& System::Threading::ThreadPoolWorkQueue_QueueSegment::__cordl_internal_get_nodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodes;
}
constexpr ::ArrayW<::System::Threading::IThreadPoolWorkItem*> const& System::Threading::ThreadPoolWorkQueue_QueueSegment::__cordl_internal_get_nodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodes;
}
constexpr void System::Threading::ThreadPoolWorkQueue_QueueSegment::__cordl_internal_set_nodes(::ArrayW<::System::Threading::IThreadPoolWorkItem*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nodes = value;
}
constexpr int32_t& System::Threading::ThreadPoolWorkQueue_QueueSegment::__cordl_internal_get_indexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexes;
}
constexpr int32_t const& System::Threading::ThreadPoolWorkQueue_QueueSegment::__cordl_internal_get_indexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexes;
}
constexpr void System::Threading::ThreadPoolWorkQueue_QueueSegment::__cordl_internal_set_indexes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indexes = value;
}
constexpr ::System::Threading::ThreadPoolWorkQueue_QueueSegment*& System::Threading::ThreadPoolWorkQueue_QueueSegment::__cordl_internal_get_Next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr ::System::Threading::ThreadPoolWorkQueue_QueueSegment* const& System::Threading::ThreadPoolWorkQueue_QueueSegment::__cordl_internal_get_Next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr void System::Threading::ThreadPoolWorkQueue_QueueSegment::__cordl_internal_set_Next(::System::Threading::ThreadPoolWorkQueue_QueueSegment* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Next = value;
}
inline void System::Threading::ThreadPoolWorkQueue_QueueSegment::GetIndexes(::by_ref<int32_t> upper, ::by_ref<int32_t> lower) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_QueueSegment*>(),
                                                                                         { "GetIndexes", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, upper, lower);
}
inline bool System::Threading::ThreadPoolWorkQueue_QueueSegment::CompareExchangeIndexes(::by_ref<int32_t> prevUpper, int32_t newUpper, ::by_ref<int32_t> prevLower, int32_t newLower) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_QueueSegment*>(),
                          { "CompareExchangeIndexes", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, prevUpper, newUpper, prevLower, newLower);
}
inline void System::Threading::ThreadPoolWorkQueue_QueueSegment::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_QueueSegment*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Threading::ThreadPoolWorkQueue_QueueSegment::IsUsedUp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_QueueSegment*>(), { "IsUsedUp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Threading::ThreadPoolWorkQueue_QueueSegment::TryEnqueue(::System::Threading::IThreadPoolWorkItem* node) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_QueueSegment*>(),
                                                                                         { "TryEnqueue", {}, { ::i2c::type_of<::System::Threading::IThreadPoolWorkItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline bool System::Threading::ThreadPoolWorkQueue_QueueSegment::TryDequeue(::by_ref<::System::Threading::IThreadPoolWorkItem*> node) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue_QueueSegment*>(),
                                                                                         { "TryDequeue", {}, { ::i2c::type_of<::by_ref<::System::Threading::IThreadPoolWorkItem*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline ::System::Threading::ThreadPoolWorkQueue_QueueSegment* System::Threading::ThreadPoolWorkQueue_QueueSegment::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::ThreadPoolWorkQueue_QueueSegment*>());
}
// Ctor Parameters []
constexpr ::System::Threading::ThreadPoolWorkQueue_QueueSegment::ThreadPoolWorkQueue_QueueSegment() {}
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ThreadPoolWorkQueue::*)()>(&::System::Threading::ThreadPoolWorkQueue::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5cb4830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue.EnsureCurrentThreadHasQueue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::ThreadPoolWorkQueueThreadLocals* (::System::Threading::ThreadPoolWorkQueue::*)()>(
    &::System::Threading::ThreadPoolWorkQueue::EnsureCurrentThreadHasQueue)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5cb48e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue*>(), { "EnsureCurrentThreadHasQueue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue.EnsureThreadRequested
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ThreadPoolWorkQueue::*)()>(&::System::Threading::ThreadPoolWorkQueue::EnsureThreadRequested)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5cb4aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue*>(), { "EnsureThreadRequested", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue.MarkThreadRequestSatisfied
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ThreadPoolWorkQueue::*)()>(&::System::Threading::ThreadPoolWorkQueue::MarkThreadRequestSatisfied)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5cb4bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue*>(), { "MarkThreadRequestSatisfied", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue.Enqueue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ThreadPoolWorkQueue::*)(::System::Threading::IThreadPoolWorkItem*, bool)>(
    &::System::Threading::ThreadPoolWorkQueue::Enqueue)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5cb4bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue*>(), { "Enqueue", {}, { ::i2c::type_of<::System::Threading::IThreadPoolWorkItem*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue.LocalFindAndPop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::ThreadPoolWorkQueue::*)(::System::Threading::IThreadPoolWorkItem*)>(
    &::System::Threading::ThreadPoolWorkQueue::LocalFindAndPop)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5cb52b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue*>(), { "LocalFindAndPop", {}, { ::i2c::type_of<::System::Threading::IThreadPoolWorkItem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue.Dequeue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ThreadPoolWorkQueue::*)(
    ::System::Threading::ThreadPoolWorkQueueThreadLocals*, ::by_ref<::System::Threading::IThreadPoolWorkItem*>, ::by_ref<bool>)>(&::System::Threading::ThreadPoolWorkQueue::Dequeue)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5cb5674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue*>(),
                                                             { "Dequeue",
                                                               {},
                                                               { ::i2c::type_of<::System::Threading::ThreadPoolWorkQueueThreadLocals*>(),
                                                                 ::i2c::type_of<::by_ref<::System::Threading::IThreadPoolWorkItem*>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue.Dispatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Threading::ThreadPoolWorkQueue::Dispatch)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x5cb5c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue*>(), { "Dispatch", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::ThreadPoolWorkQueue_QueueSegment*& System::Threading::ThreadPoolWorkQueue::__cordl_internal_get_queueHead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queueHead;
}
constexpr ::System::Threading::ThreadPoolWorkQueue_QueueSegment* const& System::Threading::ThreadPoolWorkQueue::__cordl_internal_get_queueHead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queueHead;
}
constexpr void System::Threading::ThreadPoolWorkQueue::__cordl_internal_set_queueHead(::System::Threading::ThreadPoolWorkQueue_QueueSegment* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___queueHead = value;
}
constexpr ::System::Threading::ThreadPoolWorkQueue_QueueSegment*& System::Threading::ThreadPoolWorkQueue::__cordl_internal_get_queueTail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queueTail;
}
constexpr ::System::Threading::ThreadPoolWorkQueue_QueueSegment* const& System::Threading::ThreadPoolWorkQueue::__cordl_internal_get_queueTail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queueTail;
}
constexpr void System::Threading::ThreadPoolWorkQueue::__cordl_internal_set_queueTail(::System::Threading::ThreadPoolWorkQueue_QueueSegment* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___queueTail = value;
}
constexpr int32_t& System::Threading::ThreadPoolWorkQueue::__cordl_internal_get_numOutstandingThreadRequests() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numOutstandingThreadRequests;
}
constexpr int32_t const& System::Threading::ThreadPoolWorkQueue::__cordl_internal_get_numOutstandingThreadRequests() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numOutstandingThreadRequests;
}
constexpr void System::Threading::ThreadPoolWorkQueue::__cordl_internal_set_numOutstandingThreadRequests(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___numOutstandingThreadRequests = value;
}
inline void
System::Threading::ThreadPoolWorkQueue::setStaticF_allThreadQueues(::System::Threading::ThreadPoolWorkQueue_SparseArray_1<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>* value) {
  ::cordl_internals::setStaticField<::System::Threading::ThreadPoolWorkQueue_SparseArray_1<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>*, "allThreadQueues",
                                    ::System::Threading::ThreadPoolWorkQueue*>(
      std::forward<::System::Threading::ThreadPoolWorkQueue_SparseArray_1<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>*>(value));
}
inline ::System::Threading::ThreadPoolWorkQueue_SparseArray_1<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>* System::Threading::ThreadPoolWorkQueue::getStaticF_allThreadQueues() {
  return ::cordl_internals::getStaticField<::System::Threading::ThreadPoolWorkQueue_SparseArray_1<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>*, "allThreadQueues",
                                           ::System::Threading::ThreadPoolWorkQueue*>();
}
inline void System::Threading::ThreadPoolWorkQueue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::ThreadPoolWorkQueueThreadLocals* System::Threading::ThreadPoolWorkQueue::EnsureCurrentThreadHasQueue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue*>(), { "EnsureCurrentThreadHasQueue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ThreadPoolWorkQueueThreadLocals*>(this, ___internal_method);
}
inline void System::Threading::ThreadPoolWorkQueue::EnsureThreadRequested() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue*>(), { "EnsureThreadRequested", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::ThreadPoolWorkQueue::MarkThreadRequestSatisfied() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue*>(), { "MarkThreadRequestSatisfied", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::ThreadPoolWorkQueue::Enqueue(::System::Threading::IThreadPoolWorkItem* callback, bool forceGlobal) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue*>(),
                                                                                         { "Enqueue", {}, { ::i2c::type_of<::System::Threading::IThreadPoolWorkItem*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, forceGlobal);
}
inline bool System::Threading::ThreadPoolWorkQueue::LocalFindAndPop(::System::Threading::IThreadPoolWorkItem* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue*>(), { "LocalFindAndPop", {}, { ::i2c::type_of<::System::Threading::IThreadPoolWorkItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callback);
}
inline void System::Threading::ThreadPoolWorkQueue::Dequeue(::System::Threading::ThreadPoolWorkQueueThreadLocals* tl, ::by_ref<::System::Threading::IThreadPoolWorkItem*> callback,
                                                            ::by_ref<bool> missedSteal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue*>(),
                                                           { "Dequeue",
                                                             {},
                                                             { ::i2c::type_of<::System::Threading::ThreadPoolWorkQueueThreadLocals*>(),
                                                               ::i2c::type_of<::by_ref<::System::Threading::IThreadPoolWorkItem*>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tl, callback, missedSteal);
}
inline bool System::Threading::ThreadPoolWorkQueue::Dispatch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPoolWorkQueue*>(), { "Dispatch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::Threading::ThreadPoolWorkQueue* System::Threading::ThreadPoolWorkQueue::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::ThreadPoolWorkQueue*>());
}
// Ctor Parameters []
constexpr ::System::Threading::ThreadPoolWorkQueue::ThreadPoolWorkQueue() {}
