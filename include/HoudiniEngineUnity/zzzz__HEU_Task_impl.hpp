#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_Task.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Task_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Task_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Task_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskStatus::__HEU_Task__TaskStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskStatus::__HEU_Task__TaskStatus() {}
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskStatus HoudiniEngineUnity::__HEU_Task__TaskStatus::NONE{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskStatus HoudiniEngineUnity::__HEU_Task__TaskStatus::PENDING_START{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskStatus HoudiniEngineUnity::__HEU_Task__TaskStatus::STARTED{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskStatus HoudiniEngineUnity::__HEU_Task__TaskStatus::REQUIRE_UPDATE{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskStatus HoudiniEngineUnity::__HEU_Task__TaskStatus::PENDING_COMPLETE{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskStatus HoudiniEngineUnity::__HEU_Task__TaskStatus::COMPLETED{ static_cast<int32_t>(0x5) };
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskStatus HoudiniEngineUnity::__HEU_Task__TaskStatus::UNUSED{ static_cast<int32_t>(0x6) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskResult::__HEU_Task__TaskResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskResult::__HEU_Task__TaskResult() {}
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskResult HoudiniEngineUnity::__HEU_Task__TaskResult::NONE{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskResult HoudiniEngineUnity::__HEU_Task__TaskResult::SUCCESS{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskResult HoudiniEngineUnity::__HEU_Task__TaskResult::FAILED{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskResult HoudiniEngineUnity::__HEU_Task__TaskResult::KILLED{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_Task__TaskCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_Task__TaskCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::HoudiniEngineUnity::__HEU_Task__TaskCallback::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3a0a914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Task__TaskCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_Task__TaskCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_Task__TaskCallback::*)(::HoudiniEngineUnity::HEU_Task*)>(
    &::HoudiniEngineUnity::__HEU_Task__TaskCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3a0aa14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Task__TaskCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Task__TaskCallback*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_Task__TaskCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::HoudiniEngineUnity::__HEU_Task__TaskCallback::*)(::HoudiniEngineUnity::HEU_Task*, ::System::AsyncCallback*, ::System::Object*)>(&::HoudiniEngineUnity::__HEU_Task__TaskCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3a0aa28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Task__TaskCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Task__TaskCallback*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_Task__TaskCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_Task__TaskCallback::*)(::System::IAsyncResult*)>(
    &::HoudiniEngineUnity::__HEU_Task__TaskCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a0aa48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Task__TaskCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Task__TaskCallback*>::get(), 15));
    return ___internal_method;
  }
};
inline ::HoudiniEngineUnity::__HEU_Task__TaskCallback* HoudiniEngineUnity::__HEU_Task__TaskCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::__HEU_Task__TaskCallback*>(object, method));
}
inline void HoudiniEngineUnity::__HEU_Task__TaskCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Task__TaskCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void HoudiniEngineUnity::__HEU_Task__TaskCallback::Invoke(::HoudiniEngineUnity::HEU_Task* task) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Task__TaskCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::System::IAsyncResult* HoudiniEngineUnity::__HEU_Task__TaskCallback::BeginInvoke(::HoudiniEngineUnity::HEU_Task* task, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Task__TaskCallback*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, task, callback, object);
}
inline void HoudiniEngineUnity::__HEU_Task__TaskCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Task__TaskCallback*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskCallback::__HEU_Task__TaskCallback() {}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Task.get_TaskGuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::HoudiniEngineUnity::HEU_Task::*)()>(&::HoudiniEngineUnity::HEU_Task::get_TaskGuid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a0a8e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(), "get_TaskGuid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Task._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Task::*)()>(&::HoudiniEngineUnity::HEU_Task::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3a0a8ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Task.DoTask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Task::*)()>(&::HoudiniEngineUnity::HEU_Task::DoTask)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Task.UpdateTask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Task::*)()>(&::HoudiniEngineUnity::HEU_Task::UpdateTask)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a0a910;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Task.KillTask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Task::*)()>(&::HoudiniEngineUnity::HEU_Task::KillTask)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Task.CompleteTask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Task::*)(::HoudiniEngineUnity::__HEU_Task__TaskResult)>(
    &::HoudiniEngineUnity::HEU_Task::CompleteTask)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(), 7));
    return ___internal_method;
  }
};
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskStatus& HoudiniEngineUnity::HEU_Task::__cordl_internal_get__status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status;
}
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskStatus const& HoudiniEngineUnity::HEU_Task::__cordl_internal_get__status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status;
}
constexpr void HoudiniEngineUnity::HEU_Task::__cordl_internal_set__status(::HoudiniEngineUnity::__HEU_Task__TaskStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____status = value;
}
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskResult& HoudiniEngineUnity::HEU_Task::__cordl_internal_get__result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____result;
}
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskResult const& HoudiniEngineUnity::HEU_Task::__cordl_internal_get__result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____result;
}
constexpr void HoudiniEngineUnity::HEU_Task::__cordl_internal_set__result(::HoudiniEngineUnity::__HEU_Task__TaskResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____result = value;
}
constexpr ::System::Guid& HoudiniEngineUnity::HEU_Task::__cordl_internal_get__guid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____guid;
}
constexpr ::System::Guid const& HoudiniEngineUnity::HEU_Task::__cordl_internal_get__guid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____guid;
}
constexpr void HoudiniEngineUnity::HEU_Task::__cordl_internal_set__guid(::System::Guid value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____guid = value;
}
constexpr ::HoudiniEngineUnity::__HEU_Task__TaskCallback*& HoudiniEngineUnity::HEU_Task::__cordl_internal_get__taskCompletedDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskCompletedDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::__HEU_Task__TaskCallback*> const& HoudiniEngineUnity::HEU_Task::__cordl_internal_get__taskCompletedDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskCompletedDelegate;
}
constexpr void HoudiniEngineUnity::HEU_Task::__cordl_internal_set__taskCompletedDelegate(::HoudiniEngineUnity::__HEU_Task__TaskCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____taskCompletedDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Guid HoudiniEngineUnity::HEU_Task::get_TaskGuid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(), "get_TaskGuid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_Task* HoudiniEngineUnity::HEU_Task::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_Task*>());
}
inline void HoudiniEngineUnity::HEU_Task::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_Task::DoTask() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_Task::UpdateTask() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_Task::KillTask() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_Task::CompleteTask(::HoudiniEngineUnity::__HEU_Task__TaskResult result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Task*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_Task::HEU_Task() {}
