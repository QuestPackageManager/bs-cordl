#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__LockQueue_def.hpp"
#include "System/Threading/zzzz__ReaderWriterLock_def.hpp"
//  Writing Method size for method: ::System::Threading::LockQueue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::LockQueue::*)(::System::Threading::ReaderWriterLock*)>(
    &::System::Threading::LockQueue::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x261df7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::LockQueue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ReaderWriterLock*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::LockQueue.Wait
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::LockQueue::*)(int32_t)>(&::System::Threading::LockQueue::Wait)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x261dfa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::LockQueue*>::get(), "Wait", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::LockQueue.get_IsEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::LockQueue::*)()>(&::System::Threading::LockQueue::get_IsEmpty)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x261e158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::LockQueue*>::get(), "get_IsEmpty",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::LockQueue.Pulse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::LockQueue::*)()>(&::System::Threading::LockQueue::Pulse)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x261e218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::LockQueue*>::get(), "Pulse",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Threading::ReaderWriterLock*& System::Threading::LockQueue::__cordl_internal_get_rwlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rwlock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ReaderWriterLock*> const& System::Threading::LockQueue::__cordl_internal_get_rwlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rwlock;
}
constexpr void System::Threading::LockQueue::__cordl_internal_set_rwlock(::System::Threading::ReaderWriterLock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rwlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline ::System::Threading::LockQueue* System::Threading::LockQueue::New_ctor(::System::Threading::ReaderWriterLock* rwlock) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::LockQueue*>(rwlock));
}
inline void System::Threading::LockQueue::_ctor(::System::Threading::ReaderWriterLock* rwlock) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::LockQueue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ReaderWriterLock*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rwlock);
}
inline bool System::Threading::LockQueue::Wait(int32_t timeout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::LockQueue*>::get(), "Wait", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, timeout);
}
inline bool System::Threading::LockQueue::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::LockQueue*>::get(), "get_IsEmpty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Threading::LockQueue::Pulse() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::LockQueue*>::get(), "Pulse",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Threading::LockQueue::LockQueue() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
