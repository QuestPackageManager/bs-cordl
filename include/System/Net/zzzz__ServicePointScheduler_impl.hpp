#pragma once
// IWYU pragma private; include "System/Net/ServicePointScheduler.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ServicePointScheduler_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/zzzz__ServicePointScheduler_def.hpp"
#include "System/Net/zzzz__ServicePoint_def.hpp"
#include "System/Net/zzzz__WebConnection_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
//  Writing Method size for method: ::System::Net::ServicePointScheduler_ConnectionGroup.get_Scheduler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ServicePointScheduler* (::System::Net::ServicePointScheduler_ConnectionGroup::*)()>(
    &::System::Net::ServicePointScheduler_ConnectionGroup::get_Scheduler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43d3838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_ConnectionGroup*>::get(),
                                                                               "get_Scheduler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler_ConnectionGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler_ConnectionGroup::*)(::System::Net::ServicePointScheduler*, ::StringW)>(
    &::System::Net::ServicePointScheduler_ConnectionGroup::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x43d1de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_ConnectionGroup*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ServicePointScheduler*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler_ConnectionGroup.IsEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::ServicePointScheduler_ConnectionGroup::*)()>(
    &::System::Net::ServicePointScheduler_ConnectionGroup::IsEmpty)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x43d2464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_ConnectionGroup*>::get(),
                                                                               "IsEmpty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler_ConnectionGroup.RemoveConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler_ConnectionGroup::*)(::System::Net::WebConnection*)>(
    &::System::Net::ServicePointScheduler_ConnectionGroup::RemoveConnection)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x43d2b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_ConnectionGroup*>::get(), "RemoveConnection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler_ConnectionGroup.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler_ConnectionGroup::*)()>(
    &::System::Net::ServicePointScheduler_ConnectionGroup::Cleanup)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x43d2ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_ConnectionGroup*>::get(),
                                                                               "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler_ConnectionGroup.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler_ConnectionGroup::*)()>(
    &::System::Net::ServicePointScheduler_ConnectionGroup::Close)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x43d341c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_ConnectionGroup*>::get(),
                                                                               "Close", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler_ConnectionGroup.EnqueueOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler_ConnectionGroup::*)(::System::Net::WebOperation*)>(
    &::System::Net::ServicePointScheduler_ConnectionGroup::EnqueueOperation)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x43d33c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_ConnectionGroup*>::get(), "EnqueueOperation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler_ConnectionGroup.GetNextOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebOperation* (::System::Net::ServicePointScheduler_ConnectionGroup::*)()>(
    &::System::Net::ServicePointScheduler_ConnectionGroup::GetNextOperation)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x43d2f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_ConnectionGroup*>::get(),
                                                                               "GetNextOperation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler_ConnectionGroup.FindIdleConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebConnection* (
    ::System::Net::ServicePointScheduler_ConnectionGroup::*)(::System::Net::WebOperation*)>(&::System::Net::ServicePointScheduler_ConnectionGroup::FindIdleConnection)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x43d3858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_ConnectionGroup*>::get(), "FindIdleConnection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler_ConnectionGroup.CreateOrReuseConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::System::Net::WebConnection*, bool> (::System::Net::ServicePointScheduler_ConnectionGroup::*)(
    ::System::Net::WebOperation*, bool)>(&::System::Net::ServicePointScheduler_ConnectionGroup::CreateOrReuseConnection)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x43d2dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_ConnectionGroup*>::get(), "CreateOrReuseConnection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Net::ServicePointScheduler*& System::Net::ServicePointScheduler_ConnectionGroup::__cordl_internal_get__Scheduler_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Scheduler_k__BackingField;
}
constexpr ::System::Net::ServicePointScheduler* const& System::Net::ServicePointScheduler_ConnectionGroup::__cordl_internal_get__Scheduler_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Scheduler_k__BackingField;
}
constexpr void System::Net::ServicePointScheduler_ConnectionGroup::__cordl_internal_set__Scheduler_k__BackingField(::System::Net::ServicePointScheduler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Scheduler_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::ServicePointScheduler_ConnectionGroup::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& System::Net::ServicePointScheduler_ConnectionGroup::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void System::Net::ServicePointScheduler_ConnectionGroup::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Name_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Net::ServicePointScheduler_ConnectionGroup::__cordl_internal_get__cordl_ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr int32_t const& System::Net::ServicePointScheduler_ConnectionGroup::__cordl_internal_get__cordl_ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr void System::Net::ServicePointScheduler_ConnectionGroup::__cordl_internal_set__cordl_ID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cordl_ID = value;
}
constexpr ::System::Collections::Generic::LinkedList_1<::System::Net::WebConnection*>*& System::Net::ServicePointScheduler_ConnectionGroup::__cordl_internal_get_connections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connections;
}
constexpr ::System::Collections::Generic::LinkedList_1<::System::Net::WebConnection*>* const& System::Net::ServicePointScheduler_ConnectionGroup::__cordl_internal_get_connections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connections;
}
constexpr void System::Net::ServicePointScheduler_ConnectionGroup::__cordl_internal_set_connections(::System::Collections::Generic::LinkedList_1<::System::Net::WebConnection*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connections)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::LinkedList_1<::System::Net::WebOperation*>*& System::Net::ServicePointScheduler_ConnectionGroup::__cordl_internal_get_queue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queue;
}
constexpr ::System::Collections::Generic::LinkedList_1<::System::Net::WebOperation*>* const& System::Net::ServicePointScheduler_ConnectionGroup::__cordl_internal_get_queue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queue;
}
constexpr void System::Net::ServicePointScheduler_ConnectionGroup::__cordl_internal_set_queue(::System::Collections::Generic::LinkedList_1<::System::Net::WebOperation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___queue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Net::ServicePointScheduler_ConnectionGroup::setStaticF_nextId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "nextId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_ConnectionGroup*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t System::Net::ServicePointScheduler_ConnectionGroup::getStaticF_nextId() {
  return ::cordl_internals::getStaticField<int32_t, "nextId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_ConnectionGroup*>::get>();
}
inline ::System::Net::ServicePointScheduler* System::Net::ServicePointScheduler_ConnectionGroup::get_Scheduler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_ConnectionGroup*>::get(),
                                                                             "get_Scheduler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ServicePointScheduler*, false>(this, ___internal_method);
}
inline void System::Net::ServicePointScheduler_ConnectionGroup::_ctor(::System::Net::ServicePointScheduler* scheduler, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_ConnectionGroup*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ServicePointScheduler*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scheduler, name);
}
inline bool System::Net::ServicePointScheduler_ConnectionGroup::IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_ConnectionGroup*>::get(),
                                                                             "IsEmpty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::ServicePointScheduler_ConnectionGroup::RemoveConnection(::System::Net::WebConnection* connection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_ConnectionGroup*>::get(), "RemoveConnection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connection);
}
inline void System::Net::ServicePointScheduler_ConnectionGroup::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_ConnectionGroup*>::get(),
                                                                             "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::ServicePointScheduler_ConnectionGroup::Close() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_ConnectionGroup*>::get(),
                                                                             "Close", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::ServicePointScheduler_ConnectionGroup::EnqueueOperation(::System::Net::WebOperation* operation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_ConnectionGroup*>::get(), "EnqueueOperation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operation);
}
inline ::System::Net::WebOperation* System::Net::ServicePointScheduler_ConnectionGroup::GetNextOperation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_ConnectionGroup*>::get(),
                                                                             "GetNextOperation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebOperation*, false>(this, ___internal_method);
}
inline ::System::Net::WebConnection* System::Net::ServicePointScheduler_ConnectionGroup::FindIdleConnection(::System::Net::WebOperation* operation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_ConnectionGroup*>::get(), "FindIdleConnection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebConnection*, false>(this, ___internal_method, operation);
}
inline ::System::ValueTuple_2<::System::Net::WebConnection*, bool> System::Net::ServicePointScheduler_ConnectionGroup::CreateOrReuseConnection(::System::Net::WebOperation* operation, bool force) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_ConnectionGroup*>::get(), "CreateOrReuseConnection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::System::Net::WebConnection*, bool>, false>(this, ___internal_method, operation, force);
}
inline ::System::Net::ServicePointScheduler_ConnectionGroup* System::Net::ServicePointScheduler_ConnectionGroup::New_ctor(::System::Net::ServicePointScheduler* scheduler, ::StringW name) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::ServicePointScheduler_ConnectionGroup*>(scheduler, name));
}
// Ctor Parameters []
constexpr ::System::Net::ServicePointScheduler_ConnectionGroup::ServicePointScheduler_ConnectionGroup() {}
//  Writing Method size for method: ::System::Net::AsyncManualResetEvent_ServicePointScheduler___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::AsyncManualResetEvent_ServicePointScheduler___c::*)()>(
    &::System::Net::AsyncManualResetEvent_ServicePointScheduler___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43d4274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AsyncManualResetEvent_ServicePointScheduler___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AsyncManualResetEvent_ServicePointScheduler___c._Set_b__4_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::AsyncManualResetEvent_ServicePointScheduler___c::*)(::System::Object*)>(
    &::System::Net::AsyncManualResetEvent_ServicePointScheduler___c::_Set_b__4_0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x43d427c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AsyncManualResetEvent_ServicePointScheduler___c*>::get(), "<Set>b__4_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::AsyncManualResetEvent_ServicePointScheduler___c::setStaticF___9(::System::Net::AsyncManualResetEvent_ServicePointScheduler___c* value) {
  ::cordl_internals::setStaticField<::System::Net::AsyncManualResetEvent_ServicePointScheduler___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AsyncManualResetEvent_ServicePointScheduler___c*>::get>(
      std::forward<::System::Net::AsyncManualResetEvent_ServicePointScheduler___c*>(value));
}
inline ::System::Net::AsyncManualResetEvent_ServicePointScheduler___c* System::Net::AsyncManualResetEvent_ServicePointScheduler___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Net::AsyncManualResetEvent_ServicePointScheduler___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AsyncManualResetEvent_ServicePointScheduler___c*>::get>();
}
inline void System::Net::AsyncManualResetEvent_ServicePointScheduler___c::setStaticF___9__4_0(::System::Func_2<::System::Object*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Object*, bool>*, "<>9__4_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AsyncManualResetEvent_ServicePointScheduler___c*>::get>(
      std::forward<::System::Func_2<::System::Object*, bool>*>(value));
}
inline ::System::Func_2<::System::Object*, bool>* System::Net::AsyncManualResetEvent_ServicePointScheduler___c::getStaticF___9__4_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Object*, bool>*, "<>9__4_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AsyncManualResetEvent_ServicePointScheduler___c*>::get>();
}
inline void System::Net::AsyncManualResetEvent_ServicePointScheduler___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AsyncManualResetEvent_ServicePointScheduler___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Net::AsyncManualResetEvent_ServicePointScheduler___c::_Set_b__4_0(::System::Object* s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AsyncManualResetEvent_ServicePointScheduler___c*>::get(), "<Set>b__4_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, s);
}
inline ::System::Net::AsyncManualResetEvent_ServicePointScheduler___c* System::Net::AsyncManualResetEvent_ServicePointScheduler___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::AsyncManualResetEvent_ServicePointScheduler___c*>());
}
// Ctor Parameters []
constexpr ::System::Net::AsyncManualResetEvent_ServicePointScheduler___c::AsyncManualResetEvent_ServicePointScheduler___c() {}
//  Writing Method size for method: ::System::Net::ServicePointScheduler_AsyncManualResetEvent.WaitAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::System::Net::ServicePointScheduler_AsyncManualResetEvent::*)(int32_t)>(
    &::System::Net::ServicePointScheduler_AsyncManualResetEvent::WaitAsync)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x43d41c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_AsyncManualResetEvent*>::get(), "WaitAsync",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler_AsyncManualResetEvent.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler_AsyncManualResetEvent::*)()>(
    &::System::Net::ServicePointScheduler_AsyncManualResetEvent::Set)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x43d1fb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_AsyncManualResetEvent*>::get(), "Set",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler_AsyncManualResetEvent.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler_AsyncManualResetEvent::*)()>(
    &::System::Net::ServicePointScheduler_AsyncManualResetEvent::Reset)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x43d2664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_AsyncManualResetEvent*>::get(), "Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler_AsyncManualResetEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler_AsyncManualResetEvent::*)(bool)>(
    &::System::Net::ServicePointScheduler_AsyncManualResetEvent::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x43d1d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_AsyncManualResetEvent*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& System::Net::ServicePointScheduler_AsyncManualResetEvent::__cordl_internal_get_m_tcs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& System::Net::ServicePointScheduler_AsyncManualResetEvent::__cordl_internal_get_m_tcs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_tcs;
}
constexpr void System::Net::ServicePointScheduler_AsyncManualResetEvent::__cordl_internal_set_m_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_tcs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Threading::Tasks::Task_1<bool>* System::Net::ServicePointScheduler_AsyncManualResetEvent::WaitAsync(int32_t millisecondTimeout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_AsyncManualResetEvent*>::get(), "WaitAsync",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, millisecondTimeout);
}
inline void System::Net::ServicePointScheduler_AsyncManualResetEvent::Set() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_AsyncManualResetEvent*>::get(),
                                                                             "Set", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::ServicePointScheduler_AsyncManualResetEvent::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_AsyncManualResetEvent*>::get(),
                                                                             "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::ServicePointScheduler_AsyncManualResetEvent::_ctor(bool state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler_AsyncManualResetEvent*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline ::System::Net::ServicePointScheduler_AsyncManualResetEvent* System::Net::ServicePointScheduler_AsyncManualResetEvent::New_ctor(bool state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::ServicePointScheduler_AsyncManualResetEvent*>(state));
}
// Ctor Parameters []
constexpr ::System::Net::ServicePointScheduler_AsyncManualResetEvent::ServicePointScheduler_AsyncManualResetEvent() {}
//  Writing Method size for method: ::System::Net::ServicePointScheduler__RunScheduler_d__32.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler__RunScheduler_d__32::*)()>(
    &::System::Net::ServicePointScheduler__RunScheduler_d__32::MoveNext)> {
  constexpr static std::size_t size = 0xb48;
  constexpr static std::size_t addrs = 0x43d4318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler__RunScheduler_d__32>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler__RunScheduler_d__32.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler__RunScheduler_d__32::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::ServicePointScheduler__RunScheduler_d__32::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x43d4e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler__RunScheduler_d__32>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::ServicePointScheduler__RunScheduler_d__32::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler__RunScheduler_d__32>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::ServicePointScheduler__RunScheduler_d__32::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler__RunScheduler_d__32>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::ServicePointScheduler__RunScheduler_d__32::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::ServicePointScheduler__RunScheduler_d__32::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::ServicePointScheduler*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_operationArray_5__2", ty:
// "::ArrayW<::System::ValueTuple_2<::System::Net::ServicePointScheduler_ConnectionGroup*,::System::Net::WebOperation*>,::Array<::System::ValueTuple_2<::System::Net::ServicePointScheduler_ConnectionGroup*,::System::Net::WebOperation*>>*>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_idleArray_5__3", ty:
// "::ArrayW<::System::ValueTuple_3<::System::Net::ServicePointScheduler_ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>,::Array<::System::ValueTuple_3<::System::Net::ServicePointScheduler_ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>*>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_taskList_5__4", ty: "::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_schedulerTask_5__5", ty: "::System::Threading::Tasks::Task_1<bool>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_finalCleanup_5__6", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::System::Net::ServicePointScheduler__RunScheduler_d__32::ServicePointScheduler__RunScheduler_d__32(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::ServicePointScheduler* __4__this,
    ::ArrayW<::System::ValueTuple_2<::System::Net::ServicePointScheduler_ConnectionGroup*, ::System::Net::WebOperation*>,
             ::Array<::System::ValueTuple_2<::System::Net::ServicePointScheduler_ConnectionGroup*, ::System::Net::WebOperation*>>*>
        _operationArray_5__2,
    ::ArrayW<::System::ValueTuple_3<::System::Net::ServicePointScheduler_ConnectionGroup*, ::System::Net::WebConnection*, ::System::Threading::Tasks::Task*>,
             ::Array<::System::ValueTuple_3<::System::Net::ServicePointScheduler_ConnectionGroup*, ::System::Net::WebConnection*, ::System::Threading::Tasks::Task*>>*>
        _idleArray_5__3,
    ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>* _taskList_5__4, ::System::Threading::Tasks::Task_1<bool>* _schedulerTask_5__5, bool _finalCleanup_5__6,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_operationArray_5__2 = _operationArray_5__2;
  this->_idleArray_5__3 = _idleArray_5__3;
  this->_taskList_5__4 = _taskList_5__4;
  this->_schedulerTask_5__5 = _schedulerTask_5__5;
  this->_finalCleanup_5__6 = _finalCleanup_5__6;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Net::ServicePointScheduler__RunScheduler_d__32::ServicePointScheduler__RunScheduler_d__32() {}
//  Writing Method size for method: ::System::Net::ServicePointScheduler__WaitAsync_d__46.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler__WaitAsync_d__46::*)()>(
    &::System::Net::ServicePointScheduler__WaitAsync_d__46::MoveNext)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x43d4ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler__WaitAsync_d__46>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler__WaitAsync_d__46.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler__WaitAsync_d__46::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::ServicePointScheduler__WaitAsync_d__46::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x43d5368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler__WaitAsync_d__46>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::ServicePointScheduler__WaitAsync_d__46::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler__WaitAsync_d__46>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::ServicePointScheduler__WaitAsync_d__46::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler__WaitAsync_d__46>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::ServicePointScheduler__WaitAsync_d__46::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::ServicePointScheduler__WaitAsync_d__46::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "millisecondTimeout", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "workerTask", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_cts_5__2", ty:
// "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_timeoutTask_5__3", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::System::Net::ServicePointScheduler__WaitAsync_d__46::ServicePointScheduler__WaitAsync_d__46(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, int32_t millisecondTimeout, ::System::Threading::Tasks::Task* workerTask,
    ::System::Threading::CancellationTokenSource* _cts_5__2, ::System::Threading::Tasks::Task* _timeoutTask_5__3,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->millisecondTimeout = millisecondTimeout;
  this->workerTask = workerTask;
  this->_cts_5__2 = _cts_5__2;
  this->_timeoutTask_5__3 = _timeoutTask_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Net::ServicePointScheduler__WaitAsync_d__46::ServicePointScheduler__WaitAsync_d__46() {}
//  Writing Method size for method: ::System::Net::ServicePointScheduler.get_ServicePoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ServicePoint* (::System::Net::ServicePointScheduler::*)()>(
    &::System::Net::ServicePointScheduler::get_ServicePoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43d1d2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "get_ServicePoint",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.set_ServicePoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler::*)(::System::Net::ServicePoint*)>(
    &::System::Net::ServicePointScheduler::set_ServicePoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43d1d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "set_ServicePoint", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ServicePoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.get_MaxIdleTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::ServicePointScheduler::*)()>(&::System::Net::ServicePointScheduler::get_MaxIdleTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43d1d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "get_MaxIdleTime",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler::*)(::System::Net::ServicePoint*, int32_t, int32_t)>(
    &::System::Net::ServicePointScheduler::_ctor)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x43d0548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ServicePoint*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler::*)()>(&::System::Net::ServicePointScheduler::Run)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x43d1eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "Run",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.RunScheduler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::Net::ServicePointScheduler::*)()>(
    &::System::Net::ServicePointScheduler::RunScheduler)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x43d21dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "RunScheduler",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler::*)()>(&::System::Net::ServicePointScheduler::Cleanup)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x43d22a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "Cleanup",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.RunSchedulerIteration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler::*)()>(&::System::Net::ServicePointScheduler::RunSchedulerIteration)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x43d24d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                                                                               "RunSchedulerIteration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.OperationCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::ServicePointScheduler::*)(
    ::System::Net::ServicePointScheduler_ConnectionGroup*, ::System::Net::WebOperation*)>(&::System::Net::ServicePointScheduler::OperationCompleted)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x43d2804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "OperationCompleted", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ServicePointScheduler_ConnectionGroup*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.CloseIdleConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler::*)(
    ::System::Net::ServicePointScheduler_ConnectionGroup*, ::System::Net::WebConnection*)>(&::System::Net::ServicePointScheduler::CloseIdleConnection)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x43d2f64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "CloseIdleConnection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ServicePointScheduler_ConnectionGroup*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.SchedulerIteration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::ServicePointScheduler::*)(::System::Net::ServicePointScheduler_ConnectionGroup*)>(
    &::System::Net::ServicePointScheduler::SchedulerIteration)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x43d2724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "SchedulerIteration", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ServicePointScheduler_ConnectionGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.RemoveOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler::*)(::System::Net::WebOperation*)>(
    &::System::Net::ServicePointScheduler::RemoveOperation)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x43d3088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "RemoveOperation", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.RemoveIdleConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler::*)(::System::Net::WebConnection*)>(
    &::System::Net::ServicePointScheduler::RemoveIdleConnection)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x43d2c14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "RemoveIdleConnection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.FinalCleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler::*)()>(&::System::Net::ServicePointScheduler::FinalCleanup)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x43d3154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "FinalCleanup",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.SendRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler::*)(::System::Net::WebOperation*, ::StringW)>(
    &::System::Net::ServicePointScheduler::SendRequest)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x43d0e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "SendRequest", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.CloseConnectionGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::ServicePointScheduler::*)(::StringW)>(
    &::System::Net::ServicePointScheduler::CloseConnectionGroup)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x43d1010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "CloseConnectionGroup",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.GetConnectionGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ServicePointScheduler_ConnectionGroup* (::System::Net::ServicePointScheduler::*)(::StringW)>(
    &::System::Net::ServicePointScheduler::GetConnectionGroup)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x43d31d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "GetConnectionGroup",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.OnConnectionCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler::*)(::System::Net::WebConnection*)>(
    &::System::Net::ServicePointScheduler::OnConnectionCreated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x43d370c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "OnConnectionCreated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.OnConnectionClosed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServicePointScheduler::*)(::System::Net::WebConnection*)>(
    &::System::Net::ServicePointScheduler::OnConnectionClosed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x43d3718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "OnConnectionClosed", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler.WaitAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)(::System::Threading::Tasks::Task*, int32_t)>(
    &::System::Net::ServicePointScheduler::WaitAsync)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x43d3734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "WaitAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServicePointScheduler._Run_b__31_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::Net::ServicePointScheduler::*)()>(
    &::System::Net::ServicePointScheduler::_Run_b__31_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x43d3834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "<Run>b__31_0",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Net::ServicePoint*& System::Net::ServicePointScheduler::__cordl_internal_get__ServicePoint_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ServicePoint_k__BackingField;
}
constexpr ::System::Net::ServicePoint* const& System::Net::ServicePointScheduler::__cordl_internal_get__ServicePoint_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ServicePoint_k__BackingField;
}
constexpr void System::Net::ServicePointScheduler::__cordl_internal_set__ServicePoint_k__BackingField(::System::Net::ServicePoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ServicePoint_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Net::ServicePointScheduler::__cordl_internal_get_running() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___running;
}
constexpr int32_t const& System::Net::ServicePointScheduler::__cordl_internal_get_running() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___running;
}
constexpr void System::Net::ServicePointScheduler::__cordl_internal_set_running(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___running = value;
}
constexpr int32_t& System::Net::ServicePointScheduler::__cordl_internal_get_maxIdleTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxIdleTime;
}
constexpr int32_t const& System::Net::ServicePointScheduler::__cordl_internal_get_maxIdleTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxIdleTime;
}
constexpr void System::Net::ServicePointScheduler::__cordl_internal_set_maxIdleTime(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxIdleTime = value;
}
constexpr ::System::Net::ServicePointScheduler_AsyncManualResetEvent*& System::Net::ServicePointScheduler::__cordl_internal_get_schedulerEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schedulerEvent;
}
constexpr ::System::Net::ServicePointScheduler_AsyncManualResetEvent* const& System::Net::ServicePointScheduler::__cordl_internal_get_schedulerEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schedulerEvent;
}
constexpr void System::Net::ServicePointScheduler::__cordl_internal_set_schedulerEvent(::System::Net::ServicePointScheduler_AsyncManualResetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___schedulerEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::ServicePointScheduler_ConnectionGroup*& System::Net::ServicePointScheduler::__cordl_internal_get_defaultGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultGroup;
}
constexpr ::System::Net::ServicePointScheduler_ConnectionGroup* const& System::Net::ServicePointScheduler::__cordl_internal_get_defaultGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultGroup;
}
constexpr void System::Net::ServicePointScheduler::__cordl_internal_set_defaultGroup(::System::Net::ServicePointScheduler_ConnectionGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::ServicePointScheduler_ConnectionGroup*>*& System::Net::ServicePointScheduler::__cordl_internal_get_groups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groups;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::ServicePointScheduler_ConnectionGroup*>* const&
System::Net::ServicePointScheduler::__cordl_internal_get_groups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groups;
}
constexpr void System::Net::ServicePointScheduler::__cordl_internal_set_groups(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::ServicePointScheduler_ConnectionGroup*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___groups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::Net::ServicePointScheduler_ConnectionGroup*, ::System::Net::WebOperation*>>*&
System::Net::ServicePointScheduler::__cordl_internal_get_operations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___operations;
}
constexpr ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::Net::ServicePointScheduler_ConnectionGroup*, ::System::Net::WebOperation*>>* const&
System::Net::ServicePointScheduler::__cordl_internal_get_operations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___operations;
}
constexpr void System::Net::ServicePointScheduler::__cordl_internal_set_operations(
    ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::Net::ServicePointScheduler_ConnectionGroup*, ::System::Net::WebOperation*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___operations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::LinkedList_1<
    ::System::ValueTuple_3<::System::Net::ServicePointScheduler_ConnectionGroup*, ::System::Net::WebConnection*, ::System::Threading::Tasks::Task*>>*&
System::Net::ServicePointScheduler::__cordl_internal_get_idleConnections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idleConnections;
}
constexpr ::System::Collections::Generic::LinkedList_1<
    ::System::ValueTuple_3<::System::Net::ServicePointScheduler_ConnectionGroup*, ::System::Net::WebConnection*, ::System::Threading::Tasks::Task*>>* const&
System::Net::ServicePointScheduler::__cordl_internal_get_idleConnections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idleConnections;
}
constexpr void System::Net::ServicePointScheduler::__cordl_internal_set_idleConnections(
    ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<::System::Net::ServicePointScheduler_ConnectionGroup*, ::System::Net::WebConnection*, ::System::Threading::Tasks::Task*>>*
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___idleConnections)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Net::ServicePointScheduler::__cordl_internal_get_currentConnections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentConnections;
}
constexpr int32_t const& System::Net::ServicePointScheduler::__cordl_internal_get_currentConnections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentConnections;
}
constexpr void System::Net::ServicePointScheduler::__cordl_internal_set_currentConnections(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentConnections = value;
}
constexpr int32_t& System::Net::ServicePointScheduler::__cordl_internal_get_connectionLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionLimit;
}
constexpr int32_t const& System::Net::ServicePointScheduler::__cordl_internal_get_connectionLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionLimit;
}
constexpr void System::Net::ServicePointScheduler::__cordl_internal_set_connectionLimit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___connectionLimit = value;
}
constexpr ::System::DateTime& System::Net::ServicePointScheduler::__cordl_internal_get_idleSince() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idleSince;
}
constexpr ::System::DateTime const& System::Net::ServicePointScheduler::__cordl_internal_get_idleSince() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idleSince;
}
constexpr void System::Net::ServicePointScheduler::__cordl_internal_set_idleSince(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___idleSince = value;
}
constexpr int32_t& System::Net::ServicePointScheduler::__cordl_internal_get__cordl_ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr int32_t const& System::Net::ServicePointScheduler::__cordl_internal_get__cordl_ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr void System::Net::ServicePointScheduler::__cordl_internal_set__cordl_ID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cordl_ID = value;
}
inline void System::Net::ServicePointScheduler::setStaticF_nextId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "nextId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Net::ServicePointScheduler::getStaticF_nextId() {
  return ::cordl_internals::getStaticField<int32_t, "nextId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get>();
}
inline ::System::Net::ServicePoint* System::Net::ServicePointScheduler::get_ServicePoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "get_ServicePoint",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ServicePoint*, false>(this, ___internal_method);
}
inline void System::Net::ServicePointScheduler::set_ServicePoint(::System::Net::ServicePoint* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "set_ServicePoint", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ServicePoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::Net::ServicePointScheduler::get_MaxIdleTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "get_MaxIdleTime",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Net::ServicePointScheduler::_ctor(::System::Net::ServicePoint* servicePoint, int32_t connectionLimit, int32_t maxIdleTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ServicePoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, servicePoint, connectionLimit, maxIdleTime);
}
inline void System::Net::ServicePointScheduler::Run() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "Run",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Net::ServicePointScheduler::RunScheduler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "RunScheduler",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void System::Net::ServicePointScheduler::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "Cleanup",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::ServicePointScheduler::RunSchedulerIteration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(),
                                                                             "RunSchedulerIteration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Net::ServicePointScheduler::OperationCompleted(::System::Net::ServicePointScheduler_ConnectionGroup* group, ::System::Net::WebOperation* operation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "OperationCompleted", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ServicePointScheduler_ConnectionGroup*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, group, operation);
}
inline void System::Net::ServicePointScheduler::CloseIdleConnection(::System::Net::ServicePointScheduler_ConnectionGroup* group, ::System::Net::WebConnection* connection) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "CloseIdleConnection", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ServicePointScheduler_ConnectionGroup*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, group, connection);
}
inline bool System::Net::ServicePointScheduler::SchedulerIteration(::System::Net::ServicePointScheduler_ConnectionGroup* group) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "SchedulerIteration", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ServicePointScheduler_ConnectionGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, group);
}
inline void System::Net::ServicePointScheduler::RemoveOperation(::System::Net::WebOperation* operation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "RemoveOperation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operation);
}
inline void System::Net::ServicePointScheduler::RemoveIdleConnection(::System::Net::WebConnection* connection) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "RemoveIdleConnection", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connection);
}
inline void System::Net::ServicePointScheduler::FinalCleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "FinalCleanup",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::ServicePointScheduler::SendRequest(::System::Net::WebOperation* operation, ::StringW groupName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "SendRequest", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operation, groupName);
}
inline bool System::Net::ServicePointScheduler::CloseConnectionGroup(::StringW groupName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "CloseConnectionGroup",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, groupName);
}
inline ::System::Net::ServicePointScheduler_ConnectionGroup* System::Net::ServicePointScheduler::GetConnectionGroup(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "GetConnectionGroup", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ServicePointScheduler_ConnectionGroup*, false>(this, ___internal_method, name);
}
inline void System::Net::ServicePointScheduler::OnConnectionCreated(::System::Net::WebConnection* connection) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "OnConnectionCreated", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connection);
}
inline void System::Net::ServicePointScheduler::OnConnectionClosed(::System::Net::WebConnection* connection) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "OnConnectionClosed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connection);
}
inline ::System::Threading::Tasks::Task_1<bool>* System::Net::ServicePointScheduler::WaitAsync(::System::Threading::Tasks::Task* workerTask, int32_t millisecondTimeout) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "WaitAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(nullptr, ___internal_method, workerTask, millisecondTimeout);
}
inline ::System::Threading::Tasks::Task* System::Net::ServicePointScheduler::_Run_b__31_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServicePointScheduler*>::get(), "<Run>b__31_0",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Net::ServicePointScheduler* System::Net::ServicePointScheduler::New_ctor(::System::Net::ServicePoint* servicePoint, int32_t connectionLimit, int32_t maxIdleTime) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::ServicePointScheduler*>(servicePoint, connectionLimit, maxIdleTime));
}
// Ctor Parameters []
constexpr ::System::Net::ServicePointScheduler::ServicePointScheduler() {}
