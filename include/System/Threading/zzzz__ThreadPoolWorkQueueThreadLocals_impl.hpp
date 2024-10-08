#pragma once
// IWYU pragma private; include "System/Threading/ThreadPoolWorkQueueThreadLocals.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__ThreadPoolWorkQueueThreadLocals_def.hpp"
#include "System/Threading/zzzz__ThreadPoolWorkQueue_def.hpp"
#include "System/zzzz__Random_def.hpp"
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueueThreadLocals._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadPoolWorkQueueThreadLocals::*)(::System::Threading::ThreadPoolWorkQueue*)>(
    &::System::Threading::ThreadPoolWorkQueueThreadLocals::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3de2988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueueThreadLocals*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadPoolWorkQueue*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueueThreadLocals.CleanUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadPoolWorkQueueThreadLocals::*)()>(
    &::System::Threading::ThreadPoolWorkQueueThreadLocals::CleanUp)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3de44c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueueThreadLocals*>::get(),
                                                                               "CleanUp", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPoolWorkQueueThreadLocals.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ThreadPoolWorkQueueThreadLocals::*)()>(
    &::System::Threading::ThreadPoolWorkQueueThreadLocals::Finalize)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3de458c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueueThreadLocals*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueueThreadLocals*>::get(), 1));
    return ___internal_method;
  }
};
constexpr ::System::Threading::ThreadPoolWorkQueue*& System::Threading::ThreadPoolWorkQueueThreadLocals::__cordl_internal_get_workQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workQueue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ThreadPoolWorkQueue*> const& System::Threading::ThreadPoolWorkQueueThreadLocals::__cordl_internal_get_workQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workQueue;
}
constexpr void System::Threading::ThreadPoolWorkQueueThreadLocals::__cordl_internal_set_workQueue(::System::Threading::ThreadPoolWorkQueue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___workQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue*& System::Threading::ThreadPoolWorkQueueThreadLocals::__cordl_internal_get_workStealingQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workStealingQueue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue*> const&
System::Threading::ThreadPoolWorkQueueThreadLocals::__cordl_internal_get_workStealingQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workStealingQueue;
}
constexpr void System::Threading::ThreadPoolWorkQueueThreadLocals::__cordl_internal_set_workStealingQueue(::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___workStealingQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Random*& System::Threading::ThreadPoolWorkQueueThreadLocals::__cordl_internal_get_random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr ::cordl_internals::to_const_pointer<::System::Random*> const& System::Threading::ThreadPoolWorkQueueThreadLocals::__cordl_internal_get_random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr void System::Threading::ThreadPoolWorkQueueThreadLocals::__cordl_internal_set_random(::System::Random* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___random)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Threading::ThreadPoolWorkQueueThreadLocals::setStaticF_threadLocals(::System::Threading::ThreadPoolWorkQueueThreadLocals* value) {
  ::cordl_internals::setStaticField<::System::Threading::ThreadPoolWorkQueueThreadLocals*, "threadLocals",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueueThreadLocals*>::get>(
      std::forward<::System::Threading::ThreadPoolWorkQueueThreadLocals*>(value));
}
inline ::System::Threading::ThreadPoolWorkQueueThreadLocals* System::Threading::ThreadPoolWorkQueueThreadLocals::getStaticF_threadLocals() {
  return ::cordl_internals::getStaticField<::System::Threading::ThreadPoolWorkQueueThreadLocals*, "threadLocals",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueueThreadLocals*>::get>();
}
inline ::System::Threading::ThreadPoolWorkQueueThreadLocals* System::Threading::ThreadPoolWorkQueueThreadLocals::New_ctor(::System::Threading::ThreadPoolWorkQueue* tpq) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::ThreadPoolWorkQueueThreadLocals*>(tpq));
}
inline void System::Threading::ThreadPoolWorkQueueThreadLocals::_ctor(::System::Threading::ThreadPoolWorkQueue* tpq) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueueThreadLocals*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadPoolWorkQueue*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tpq);
}
inline void System::Threading::ThreadPoolWorkQueueThreadLocals::CleanUp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueueThreadLocals*>::get(),
                                                                             "CleanUp", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::ThreadPoolWorkQueueThreadLocals::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadPoolWorkQueueThreadLocals*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Threading::ThreadPoolWorkQueueThreadLocals::ThreadPoolWorkQueueThreadLocals() {}
