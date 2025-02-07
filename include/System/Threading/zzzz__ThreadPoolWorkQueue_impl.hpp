#pragma once
// IWYU pragma private; include "System/Threading/ThreadPoolWorkQueue.hpp"
#include "System/Threading/zzzz__SpinLock_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__ThreadPoolWorkQueue_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/Threading/zzzz__ThreadPoolWorkQueueThreadLocals_def.hpp"
#include "System/Threading/zzzz__ThreadPoolWorkQueue_def.hpp"
template <typename T> constexpr ::ArrayW<T, ::Array<T>*>& System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>::__cordl_internal_get_m_array() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_array;
}
template <typename T> constexpr ::ArrayW<T, ::Array<T>*> const& System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>::__cordl_internal_get_m_array() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_array;
}
template <typename T> constexpr void System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>::__cordl_internal_set_m_array(::ArrayW<T, ::Array<T>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_array, value);
}
template <typename T> inline void System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>::_ctor(int32_t initialSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialSize);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>*>::get(),
                                                                             "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method);
}
template <typename T> inline int32_t System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>::Add(T e) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>*>::get(), "Add",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, e);
}
template <typename T> inline void System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>::Remove(T e) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>*>::get(), "Remove",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
template <typename T> inline ::System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>* System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>::New_ctor(int32_t initialSize) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>*>(initialSize));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Threading::ThreadPoolWorkQueue_SparseArray_1<T>::ThreadPoolWorkQueue_SparseArray_1() {}
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue.LocalPush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::*)(::System::Threading::IThreadPoolWorkItem*)>(
    &::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::LocalPush)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x3e5d2b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>::get(), "LocalPush", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::IThreadPoolWorkItem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue.LocalFindAndPop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::*)(::System::Threading::IThreadPoolWorkItem*)>(
    &::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::LocalFindAndPop)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x3e5d8a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>::get(), "LocalFindAndPop", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::IThreadPoolWorkItem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue.LocalPop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::*)(
    ::ByRef<::System::Threading::IThreadPoolWorkItem*>)>(&::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::LocalPop)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x3e5dd94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>::get(), "LocalPop", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::IThreadPoolWorkItem*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue.TrySteal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::*)(
    ::ByRef<::System::Threading::IThreadPoolWorkItem*>, ::ByRef<bool>)>(&::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::TrySteal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e5e1ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>::get(), "TrySteal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::IThreadPoolWorkItem*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue.TrySteal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::*)(
    ::ByRef<::System::Threading::IThreadPoolWorkItem*>, ::ByRef<bool>, int32_t)>(&::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::TrySteal)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x3e5e6e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>::get(), "TrySteal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::IThreadPoolWorkItem*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::*)()>(
    &::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3e5e98c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Threading::IThreadPoolWorkItem*, ::Array<::System::Threading::IThreadPoolWorkItem*>*>&
System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::__cordl_internal_get_m_array() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_array;
}
constexpr ::ArrayW<::System::Threading::IThreadPoolWorkItem*, ::Array<::System::Threading::IThreadPoolWorkItem*>*> const&
System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::__cordl_internal_get_m_array() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_array;
}
constexpr void
System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::__cordl_internal_set_m_array(::ArrayW<::System::Threading::IThreadPoolWorkItem*, ::Array<::System::Threading::IThreadPoolWorkItem*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_array)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>::get(), "LocalPush", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::IThreadPoolWorkItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline bool System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::LocalFindAndPop(::System::Threading::IThreadPoolWorkItem* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>::get(), "LocalFindAndPop", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::IThreadPoolWorkItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::LocalPop(::ByRef<::System::Threading::IThreadPoolWorkItem*> obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>::get(), "LocalPop", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::IThreadPoolWorkItem*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::TrySteal(::ByRef<::System::Threading::IThreadPoolWorkItem*> obj, ::ByRef<bool> missedSteal) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>::get(), "TrySteal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::IThreadPoolWorkItem*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj, missedSteal);
}
inline bool System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::TrySteal(::ByRef<::System::Threading::IThreadPoolWorkItem*> obj, ::ByRef<bool> missedSteal, int32_t millisecondsTimeout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>::get(), "TrySteal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::IThreadPoolWorkItem*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj, missedSteal, millisecondsTimeout);
}
inline void System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue* System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>());
}
// Ctor Parameters []
constexpr ::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::ThreadPoolWorkQueue_WorkStealingQueue() {}
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue_QueueSegment.GetIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadPoolWorkQueue_QueueSegment::*)(::ByRef<int32_t>, ::ByRef<int32_t>)>(
    &::System::Threading::ThreadPoolWorkQueue_QueueSegment::GetIndexes)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3e5ea20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_QueueSegment*>::get(),
                                                                               "GetIndexes", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue_QueueSegment.CompareExchangeIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ThreadPoolWorkQueue_QueueSegment::*)(
    ::ByRef<int32_t>, int32_t, ::ByRef<int32_t>, int32_t)>(&::System::Threading::ThreadPoolWorkQueue_QueueSegment::CompareExchangeIndexes)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3e5ea54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_QueueSegment*>::get(), "CompareExchangeIndexes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue_QueueSegment._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadPoolWorkQueue_QueueSegment::*)()>(
    &::System::Threading::ThreadPoolWorkQueue_QueueSegment::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3e5cea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_QueueSegment*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue_QueueSegment.IsUsedUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ThreadPoolWorkQueue_QueueSegment::*)()>(
    &::System::Threading::ThreadPoolWorkQueue_QueueSegment::IsUsedUp)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3e5e1a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_QueueSegment*>::get(),
                                                                               "IsUsedUp", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue_QueueSegment.TryEnqueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ThreadPoolWorkQueue_QueueSegment::*)(::System::Threading::IThreadPoolWorkItem*)>(
    &::System::Threading::ThreadPoolWorkQueue_QueueSegment::TryEnqueue)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3e5d778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_QueueSegment*>::get(), "TryEnqueue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::IThreadPoolWorkItem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue_QueueSegment.TryDequeue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ThreadPoolWorkQueue_QueueSegment::*)(::ByRef<::System::Threading::IThreadPoolWorkItem*>)>(
    &::System::Threading::ThreadPoolWorkQueue_QueueSegment::TryDequeue)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3e5e06c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_QueueSegment*>::get(), "TryDequeue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::IThreadPoolWorkItem*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Threading::IThreadPoolWorkItem*, ::Array<::System::Threading::IThreadPoolWorkItem*>*>& System::Threading::ThreadPoolWorkQueue_QueueSegment::__cordl_internal_get_nodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodes;
}
constexpr ::ArrayW<::System::Threading::IThreadPoolWorkItem*, ::Array<::System::Threading::IThreadPoolWorkItem*>*> const&
System::Threading::ThreadPoolWorkQueue_QueueSegment::__cordl_internal_get_nodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodes;
}
constexpr void
System::Threading::ThreadPoolWorkQueue_QueueSegment::__cordl_internal_set_nodes(::ArrayW<::System::Threading::IThreadPoolWorkItem*, ::Array<::System::Threading::IThreadPoolWorkItem*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nodes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Threading::ThreadPoolWorkQueue_QueueSegment::GetIndexes(::ByRef<int32_t> upper, ::ByRef<int32_t> lower) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_QueueSegment*>::get(),
                                                                             "GetIndexes", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, upper, lower);
}
inline bool System::Threading::ThreadPoolWorkQueue_QueueSegment::CompareExchangeIndexes(::ByRef<int32_t> prevUpper, int32_t newUpper, ::ByRef<int32_t> prevLower, int32_t newLower) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_QueueSegment*>::get(), "CompareExchangeIndexes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, prevUpper, newUpper, prevLower, newLower);
}
inline void System::Threading::ThreadPoolWorkQueue_QueueSegment::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_QueueSegment*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Threading::ThreadPoolWorkQueue_QueueSegment::IsUsedUp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_QueueSegment*>::get(),
                                                                             "IsUsedUp", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Threading::ThreadPoolWorkQueue_QueueSegment::TryEnqueue(::System::Threading::IThreadPoolWorkItem* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_QueueSegment*>::get(), "TryEnqueue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::IThreadPoolWorkItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node);
}
inline bool System::Threading::ThreadPoolWorkQueue_QueueSegment::TryDequeue(::ByRef<::System::Threading::IThreadPoolWorkItem*> node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue_QueueSegment*>::get(), "TryDequeue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::IThreadPoolWorkItem*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node);
}
inline ::System::Threading::ThreadPoolWorkQueue_QueueSegment* System::Threading::ThreadPoolWorkQueue_QueueSegment::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::ThreadPoolWorkQueue_QueueSegment*>());
}
// Ctor Parameters []
constexpr ::System::Threading::ThreadPoolWorkQueue_QueueSegment::ThreadPoolWorkQueue_QueueSegment() {}
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadPoolWorkQueue::*)()>(&::System::Threading::ThreadPoolWorkQueue::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3e5ce34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue.EnsureCurrentThreadHasQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::ThreadPoolWorkQueueThreadLocals* (::System::Threading::ThreadPoolWorkQueue::*)()>(
    &::System::Threading::ThreadPoolWorkQueue::EnsureCurrentThreadHasQueue)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3e5cefc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue*>::get(),
                                                                               "EnsureCurrentThreadHasQueue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue.EnsureThreadRequested
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadPoolWorkQueue::*)()>(
    &::System::Threading::ThreadPoolWorkQueue::EnsureThreadRequested)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3e5d098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue*>::get(),
                                                                               "EnsureThreadRequested", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue.MarkThreadRequestSatisfied
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadPoolWorkQueue::*)()>(
    &::System::Threading::ThreadPoolWorkQueue::MarkThreadRequestSatisfied)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3e5d138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue*>::get(),
                                                                               "MarkThreadRequestSatisfied", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue.Enqueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadPoolWorkQueue::*)(::System::Threading::IThreadPoolWorkItem*, bool)>(
    &::System::Threading::ThreadPoolWorkQueue::Enqueue)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x3e5d180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue*>::get(), "Enqueue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::IThreadPoolWorkItem*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue.LocalFindAndPop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ThreadPoolWorkQueue::*)(::System::Threading::IThreadPoolWorkItem*)>(
    &::System::Threading::ThreadPoolWorkQueue::LocalFindAndPop)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3e5d830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue*>::get(), "LocalFindAndPop", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::IThreadPoolWorkItem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue.Dequeue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadPoolWorkQueue::*)(
    ::System::Threading::ThreadPoolWorkQueueThreadLocals*, ::ByRef<::System::Threading::IThreadPoolWorkItem*>, ::ByRef<bool>)>(&::System::Threading::ThreadPoolWorkQueue::Dequeue)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x3e5dbcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue*>::get(), "Dequeue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadPoolWorkQueueThreadLocals*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::IThreadPoolWorkItem*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueue.Dispatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Threading::ThreadPoolWorkQueue::Dispatch)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x3e5e1f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue*>::get(), "Dispatch",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___queueHead)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___queueTail)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue*>::get>(
      std::forward<::System::Threading::ThreadPoolWorkQueue_SparseArray_1<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>*>(value));
}
inline ::System::Threading::ThreadPoolWorkQueue_SparseArray_1<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>* System::Threading::ThreadPoolWorkQueue::getStaticF_allThreadQueues() {
  return ::cordl_internals::getStaticField<::System::Threading::ThreadPoolWorkQueue_SparseArray_1<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>*, "allThreadQueues",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue*>::get>();
}
inline void System::Threading::ThreadPoolWorkQueue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::ThreadPoolWorkQueueThreadLocals* System::Threading::ThreadPoolWorkQueue::EnsureCurrentThreadHasQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue*>::get(),
                                                                             "EnsureCurrentThreadHasQueue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ThreadPoolWorkQueueThreadLocals*, false>(this, ___internal_method);
}
inline void System::Threading::ThreadPoolWorkQueue::EnsureThreadRequested() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue*>::get(),
                                                                             "EnsureThreadRequested", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::ThreadPoolWorkQueue::MarkThreadRequestSatisfied() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue*>::get(),
                                                                             "MarkThreadRequestSatisfied", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::ThreadPoolWorkQueue::Enqueue(::System::Threading::IThreadPoolWorkItem* callback, bool forceGlobal) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue*>::get(), "Enqueue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::IThreadPoolWorkItem*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, forceGlobal);
}
inline bool System::Threading::ThreadPoolWorkQueue::LocalFindAndPop(::System::Threading::IThreadPoolWorkItem* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue*>::get(), "LocalFindAndPop", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::IThreadPoolWorkItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, callback);
}
inline void System::Threading::ThreadPoolWorkQueue::Dequeue(::System::Threading::ThreadPoolWorkQueueThreadLocals* tl, ::ByRef<::System::Threading::IThreadPoolWorkItem*> callback,
                                                            ::ByRef<bool> missedSteal) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue*>::get(), "Dequeue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadPoolWorkQueueThreadLocals*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::IThreadPoolWorkItem*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tl, callback, missedSteal);
}
inline bool System::Threading::ThreadPoolWorkQueue::Dispatch() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueue*>::get(), "Dispatch",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::System::Threading::ThreadPoolWorkQueue* System::Threading::ThreadPoolWorkQueue::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::ThreadPoolWorkQueue*>());
}
// Ctor Parameters []
constexpr ::System::Threading::ThreadPoolWorkQueue::ThreadPoolWorkQueue() {}
