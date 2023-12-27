#pragma once
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_impl.hpp"
#include "System/Threading/zzzz__ReaderWriterLock_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Threading/zzzz__LockQueue_def.hpp"
//  Writing Method size for method: ::System::Threading::ReaderWriterLock._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLock::*)()>(&::System::Threading::ReaderWriterLock::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x261e500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLock*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLock.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLock::*)()>(&::System::Threading::ReaderWriterLock::Finalize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x261e5d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLock*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLock*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLock.get_IsWriterLockHeld
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLock::*)()>(&::System::Threading::ReaderWriterLock::get_IsWriterLockHeld)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x261e5dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLock*>::get(),
                                                                               "get_IsWriterLockHeld", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLock.AcquireReaderLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLock::*)(int32_t)>(
    &::System::Threading::ReaderWriterLock::AcquireReaderLock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x261e6b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLock*>::get(), "AcquireReaderLock",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLock.AcquireReaderLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLock::*)(int32_t, int32_t)>(
    &::System::Threading::ReaderWriterLock::AcquireReaderLock)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x261e6c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLock*>::get(), "AcquireReaderLock", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLock.AcquireWriterLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLock::*)(int32_t)>(
    &::System::Threading::ReaderWriterLock::AcquireWriterLock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x261ec38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLock*>::get(), "AcquireWriterLock",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLock.AcquireWriterLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLock::*)(int32_t, int32_t)>(
    &::System::Threading::ReaderWriterLock::AcquireWriterLock)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x261ea90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLock*>::get(), "AcquireWriterLock", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLock.ReleaseReaderLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLock::*)()>(&::System::Threading::ReaderWriterLock::ReleaseReaderLock)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x261ec40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLock*>::get(),
                                                                               "ReleaseReaderLock", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLock.ReleaseReaderLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLock::*)(int32_t, int32_t)>(
    &::System::Threading::ReaderWriterLock::ReleaseReaderLock)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x261ef5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLock*>::get(), "ReleaseReaderLock", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLock.ReleaseWriterLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLock::*)()>(&::System::Threading::ReaderWriterLock::ReleaseWriterLock)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x261ee2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLock*>::get(),
                                                                               "ReleaseWriterLock", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLock.ReleaseWriterLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLock::*)(int32_t)>(
    &::System::Threading::ReaderWriterLock::ReleaseWriterLock)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x261f07c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLock*>::get(), "ReleaseWriterLock",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLock.HasWriterLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLock::*)()>(&::System::Threading::ReaderWriterLock::HasWriterLock)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x261ea5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLock*>::get(), "HasWriterLock",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& System::Threading::ReaderWriterLock::__get_seq_num() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___seq_num;
}
constexpr int32_t const& System::Threading::ReaderWriterLock::__get_seq_num() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___seq_num;
}
constexpr void System::Threading::ReaderWriterLock::__set_seq_num(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___seq_num = value;
}
constexpr int32_t& System::Threading::ReaderWriterLock::__get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___state;
}
constexpr int32_t const& System::Threading::ReaderWriterLock::__get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___state;
}
constexpr void System::Threading::ReaderWriterLock::__set_state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___state = value;
}
constexpr int32_t& System::Threading::ReaderWriterLock::__get_readers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___readers;
}
constexpr int32_t const& System::Threading::ReaderWriterLock::__get_readers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___readers;
}
constexpr void System::Threading::ReaderWriterLock::__set_readers(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___readers = value;
}
constexpr int32_t& System::Threading::ReaderWriterLock::__get_writer_lock_owner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___writer_lock_owner;
}
constexpr int32_t const& System::Threading::ReaderWriterLock::__get_writer_lock_owner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___writer_lock_owner;
}
constexpr void System::Threading::ReaderWriterLock::__set_writer_lock_owner(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___writer_lock_owner = value;
}
constexpr ::System::Threading::LockQueue*& System::Threading::ReaderWriterLock::__get_writer_queue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___writer_queue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::LockQueue*> const& System::Threading::ReaderWriterLock::__get_writer_queue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___writer_queue;
}
constexpr void System::Threading::ReaderWriterLock::__set_writer_queue(::System::Threading::LockQueue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___writer_queue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Threading::ReaderWriterLock::__get_reader_locks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___reader_locks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Threading::ReaderWriterLock::__get_reader_locks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___reader_locks;
}
constexpr void System::Threading::ReaderWriterLock::__set_reader_locks(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___reader_locks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Threading::ReaderWriterLock* System::Threading::ReaderWriterLock::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::ReaderWriterLock*>());
}
inline void System::Threading::ReaderWriterLock::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLock*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::ReaderWriterLock::Finalize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLock*>::get(), "Finalize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Threading::ReaderWriterLock::get_IsWriterLockHeld() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLock*>::get(),
                                                                             "get_IsWriterLockHeld", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Threading::ReaderWriterLock::AcquireReaderLock(int32_t millisecondsTimeout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLock*>::get(), "AcquireReaderLock", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, millisecondsTimeout);
}
inline void System::Threading::ReaderWriterLock::AcquireReaderLock(int32_t millisecondsTimeout, int32_t initialLockCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLock*>::get(), "AcquireReaderLock", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, millisecondsTimeout, initialLockCount);
}
inline void System::Threading::ReaderWriterLock::AcquireWriterLock(int32_t millisecondsTimeout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLock*>::get(), "AcquireWriterLock", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, millisecondsTimeout);
}
inline void System::Threading::ReaderWriterLock::AcquireWriterLock(int32_t millisecondsTimeout, int32_t initialLockCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLock*>::get(), "AcquireWriterLock", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, millisecondsTimeout, initialLockCount);
}
inline void System::Threading::ReaderWriterLock::ReleaseReaderLock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLock*>::get(), "ReleaseReaderLock",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::ReaderWriterLock::ReleaseReaderLock(int32_t currentCount, int32_t releaseCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLock*>::get(), "ReleaseReaderLock", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentCount, releaseCount);
}
inline void System::Threading::ReaderWriterLock::ReleaseWriterLock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLock*>::get(), "ReleaseWriterLock",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::ReaderWriterLock::ReleaseWriterLock(int32_t releaseCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLock*>::get(), "ReleaseWriterLock", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, releaseCount);
}
inline bool System::Threading::ReaderWriterLock::HasWriterLock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLock*>::get(), "HasWriterLock",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Threading::ReaderWriterLock::ReaderWriterLock() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
