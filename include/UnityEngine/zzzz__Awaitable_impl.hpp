#pragma once
// IWYU pragma private; include "UnityEngine/Awaitable.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__SpinLock_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Awaitable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/Threading/zzzz__ThreadLocal_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/zzzz__Awaitable_1_def.hpp"
#include "UnityEngine/zzzz__Awaitable_def.hpp"
#include "UnityEngine/zzzz__UnitySynchronizationContext_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity::Awaitable_AwaiterCompletionThreadAffinity(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity::Awaitable_AwaiterCompletionThreadAffinity() {}
constexpr ::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity UnityEngine::Awaitable_AwaiterCompletionThreadAffinity::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity UnityEngine::Awaitable_AwaiterCompletionThreadAffinity::MainThread{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity UnityEngine::Awaitable_AwaiterCompletionThreadAffinity::BackgroundThread{ static_cast<int32_t>(0x2) };
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters [CppParam { name: "_stateMachineBox", ty: "::UnityEngine::AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_resultingCoroutine", ty: "::UnityEngine::Awaitable*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Awaitable_AwaitableAsyncMethodBuilder::Awaitable_AwaitableAsyncMethodBuilder(::UnityEngine::AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox* _stateMachineBox,
                                                                                                      ::UnityEngine::Awaitable* _resultingCoroutine) noexcept {
  this->_stateMachineBox = _stateMachineBox;
  this->_resultingCoroutine = _resultingCoroutine;
}
// Ctor Parameters []
constexpr ::UnityEngine::Awaitable_AwaitableAsyncMethodBuilder::Awaitable_AwaitableAsyncMethodBuilder() {}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr UnityEngine::AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* UnityEngine::AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters [CppParam { name: "_stateMachineBox", ty: "::UnityEngine::AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_resultingCoroutine", ty: "::UnityEngine::Awaitable_1<T>*", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::UnityEngine::Awaitable_AwaitableAsyncMethodBuilder_1<T>::Awaitable_AwaitableAsyncMethodBuilder_1(
    ::UnityEngine::AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox<T>* _stateMachineBox, ::UnityEngine::Awaitable_1<T>* _resultingCoroutine) noexcept {
  this->_stateMachineBox = _stateMachineBox;
  this->_resultingCoroutine = _resultingCoroutine;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Awaitable_AwaitableAsyncMethodBuilder_1<T>::Awaitable_AwaitableAsyncMethodBuilder_1() {}
//  Writing Method size for method: ::UnityEngine::Awaitable_AwaitableAndFrameIndex.get_Awaitable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Awaitable* (::UnityEngine::Awaitable_AwaitableAndFrameIndex::*)()>(
    &::UnityEngine::Awaitable_AwaitableAndFrameIndex::get_Awaitable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68a8cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable_AwaitableAndFrameIndex>::get(),
                                                                               "get_Awaitable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable_AwaitableAndFrameIndex.get_FrameIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Awaitable_AwaitableAndFrameIndex::*)()>(
    &::UnityEngine::Awaitable_AwaitableAndFrameIndex::get_FrameIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68a8d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable_AwaitableAndFrameIndex>::get(),
                                                                               "get_FrameIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Awaitable* UnityEngine::Awaitable_AwaitableAndFrameIndex::get_Awaitable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable_AwaitableAndFrameIndex>::get(),
                                                                             "get_Awaitable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Awaitable*, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Awaitable_AwaitableAndFrameIndex::get_FrameIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable_AwaitableAndFrameIndex>::get(),
                                                                             "get_FrameIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_Awaitable_k__BackingField", ty: "::UnityEngine::Awaitable*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_FrameIndex_k__BackingField", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Awaitable_AwaitableAndFrameIndex::Awaitable_AwaitableAndFrameIndex(::UnityEngine::Awaitable* _Awaitable_k__BackingField, int32_t _FrameIndex_k__BackingField) noexcept {
  this->_Awaitable_k__BackingField = _Awaitable_k__BackingField;
  this->_FrameIndex_k__BackingField = _FrameIndex_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Awaitable_AwaitableAndFrameIndex::Awaitable_AwaitableAndFrameIndex() {}
//  Writing Method size for method: ::UnityEngine::Awaitable_DoubleBufferedAwaitableList.SwapAndComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Awaitable_DoubleBufferedAwaitableList::*)()>(
    &::UnityEngine::Awaitable_DoubleBufferedAwaitableList::SwapAndComplete)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x68a7658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*>::get(),
                                                                               "SwapAndComplete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable_DoubleBufferedAwaitableList.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Awaitable_DoubleBufferedAwaitableList::*)()>(
    &::UnityEngine::Awaitable_DoubleBufferedAwaitableList::Clear)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x68a757c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*>::get(),
                                                                               "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable_DoubleBufferedAwaitableList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Awaitable_DoubleBufferedAwaitableList::*)()>(
    &::UnityEngine::Awaitable_DoubleBufferedAwaitableList::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x68a8c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Awaitable_AwaitableAndFrameIndex>*& UnityEngine::Awaitable_DoubleBufferedAwaitableList::__cordl_internal_get__awaitables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____awaitables;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Awaitable_AwaitableAndFrameIndex>* const& UnityEngine::Awaitable_DoubleBufferedAwaitableList::__cordl_internal_get__awaitables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____awaitables;
}
constexpr void UnityEngine::Awaitable_DoubleBufferedAwaitableList::__cordl_internal_set__awaitables(::System::Collections::Generic::List_1<::UnityEngine::Awaitable_AwaitableAndFrameIndex>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____awaitables)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Awaitable_AwaitableAndFrameIndex>*& UnityEngine::Awaitable_DoubleBufferedAwaitableList::__cordl_internal_get__scratch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scratch;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Awaitable_AwaitableAndFrameIndex>* const& UnityEngine::Awaitable_DoubleBufferedAwaitableList::__cordl_internal_get__scratch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scratch;
}
constexpr void UnityEngine::Awaitable_DoubleBufferedAwaitableList::__cordl_internal_set__scratch(::System::Collections::Generic::List_1<::UnityEngine::Awaitable_AwaitableAndFrameIndex>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scratch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Awaitable_DoubleBufferedAwaitableList::SwapAndComplete() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*>::get(),
                                                                             "SwapAndComplete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Awaitable_DoubleBufferedAwaitableList::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*>::get(),
                                                                             "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Awaitable_DoubleBufferedAwaitableList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Awaitable_DoubleBufferedAwaitableList* UnityEngine::Awaitable_DoubleBufferedAwaitableList::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Awaitable_DoubleBufferedAwaitableList::Awaitable_DoubleBufferedAwaitableList() {}
//  Writing Method size for method: ::UnityEngine::Awaitable_AwaitableHandle.get_IsNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Awaitable_AwaitableHandle::*)()>(&::UnityEngine::Awaitable_AwaitableHandle::get_IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x68a8468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable_AwaitableHandle>::get(), "get_IsNull",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable_AwaitableHandle.get_IsManaged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Awaitable_AwaitableHandle::*)()>(&::UnityEngine::Awaitable_AwaitableHandle::get_IsManaged)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x68a83fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable_AwaitableHandle>::get(), "get_IsManaged",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable_AwaitableHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Awaitable_AwaitableHandle::*)(::System::IntPtr)>(
    &::UnityEngine::Awaitable_AwaitableHandle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68a8d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable_AwaitableHandle>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable_AwaitableHandle.op_Implicit___System__IntPtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::UnityEngine::Awaitable_AwaitableHandle)>(
    &::UnityEngine::Awaitable_AwaitableHandle::op_Implicit___System__IntPtr)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68a8d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable_AwaitableHandle>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Awaitable_AwaitableHandle>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Awaitable_AwaitableHandle::setStaticF_ManagedHandle(::UnityEngine::Awaitable_AwaitableHandle value) {
  ::cordl_internals::setStaticField<::UnityEngine::Awaitable_AwaitableHandle, "ManagedHandle", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable_AwaitableHandle>::get>(
      std::forward<::UnityEngine::Awaitable_AwaitableHandle>(value));
}
inline ::UnityEngine::Awaitable_AwaitableHandle UnityEngine::Awaitable_AwaitableHandle::getStaticF_ManagedHandle() {
  return ::cordl_internals::getStaticField<::UnityEngine::Awaitable_AwaitableHandle, "ManagedHandle",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable_AwaitableHandle>::get>();
}
inline void UnityEngine::Awaitable_AwaitableHandle::setStaticF_NullHandle(::UnityEngine::Awaitable_AwaitableHandle value) {
  ::cordl_internals::setStaticField<::UnityEngine::Awaitable_AwaitableHandle, "NullHandle", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable_AwaitableHandle>::get>(
      std::forward<::UnityEngine::Awaitable_AwaitableHandle>(value));
}
inline ::UnityEngine::Awaitable_AwaitableHandle UnityEngine::Awaitable_AwaitableHandle::getStaticF_NullHandle() {
  return ::cordl_internals::getStaticField<::UnityEngine::Awaitable_AwaitableHandle, "NullHandle",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable_AwaitableHandle>::get>();
}
inline bool UnityEngine::Awaitable_AwaitableHandle::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable_AwaitableHandle>::get(), "get_IsNull",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Awaitable_AwaitableHandle::get_IsManaged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable_AwaitableHandle>::get(), "get_IsManaged",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Awaitable_AwaitableHandle::_ctor(::System::IntPtr handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable_AwaitableHandle>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle);
}
inline ::System::IntPtr UnityEngine::Awaitable_AwaitableHandle::op_Implicit___System__IntPtr(::UnityEngine::Awaitable_AwaitableHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable_AwaitableHandle>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Awaitable_AwaitableHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, handle);
}
// Ctor Parameters [CppParam { name: "_handle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Awaitable_AwaitableHandle::Awaitable_AwaitableHandle(::System::IntPtr _handle) noexcept {
  this->_handle = _handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Awaitable_AwaitableHandle::Awaitable_AwaitableHandle() {}
//  Writing Method size for method: ::UnityEngine::Awaitable___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Awaitable___c::*)()>(&::UnityEngine::Awaitable___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68a8de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable___c.__cctor_b__76_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable*>* (::UnityEngine::Awaitable___c::*)()>(
    &::UnityEngine::Awaitable___c::__cctor_b__76_0)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x68a8dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable___c*>::get(), "<.cctor>b__76_0",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable___c.__cctor_b__76_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Awaitable* (::UnityEngine::Awaitable___c::*)()>(&::UnityEngine::Awaitable___c::__cctor_b__76_1)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x68a8f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable___c*>::get(), "<.cctor>b__76_1",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Awaitable___c::setStaticF___9(::UnityEngine::Awaitable___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Awaitable___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable___c*>::get>(
      std::forward<::UnityEngine::Awaitable___c*>(value));
}
inline ::UnityEngine::Awaitable___c* UnityEngine::Awaitable___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Awaitable___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable___c*>::get>();
}
inline void UnityEngine::Awaitable___c::setStaticF___9__76_1(::System::Func_1<::UnityEngine::Awaitable*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::Awaitable*>*, "<>9__76_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable___c*>::get>(
      std::forward<::System::Func_1<::UnityEngine::Awaitable*>*>(value));
}
inline ::System::Func_1<::UnityEngine::Awaitable*>* UnityEngine::Awaitable___c::getStaticF___9__76_1() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::Awaitable*>*, "<>9__76_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable___c*>::get>();
}
inline void UnityEngine::Awaitable___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable*>* UnityEngine::Awaitable___c::__cctor_b__76_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable___c*>::get(), "<.cctor>b__76_0",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable*>*, false>(this, ___internal_method);
}
inline ::UnityEngine::Awaitable* UnityEngine::Awaitable___c::__cctor_b__76_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable___c*>::get(), "<.cctor>b__76_1",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Awaitable*, false>(this, ___internal_method);
}
inline ::UnityEngine::Awaitable___c* UnityEngine::Awaitable___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Awaitable___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Awaitable___c::Awaitable___c() {}
//  Writing Method size for method: ::UnityEngine::Awaitable.SetExceptionFromNative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Awaitable::*)(::System::Exception*)>(&::UnityEngine::Awaitable::SetExceptionFromNative)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x68a721c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "SetExceptionFromNative", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.RunContinuation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Awaitable::*)()>(&::UnityEngine::Awaitable::RunContinuation)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x68a7350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "RunContinuation",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.ReleaseNativeAwaitable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Awaitable::ReleaseNativeAwaitable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68a7488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "ReleaseNativeAwaitable", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.IsNativeAwaitableCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Awaitable::IsNativeAwaitableCompleted)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68a74c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "IsNativeAwaitableCompleted", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.OnDelayedCallManagerCleared
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Awaitable::OnDelayedCallManagerCleared)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x68a7500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "OnDelayedCallManagerCleared",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.OnUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Awaitable::OnUpdate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x68a75f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "OnUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.OnEndOfFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Awaitable::OnEndOfFrame)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x68a78f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "OnEndOfFrame",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.SetSynchronizationContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UnitySynchronizationContext*)>(&::UnityEngine::Awaitable::SetSynchronizationContext)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x68a7954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "SetSynchronizationContext", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UnitySynchronizationContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Awaitable::*)()>(&::UnityEngine::Awaitable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68a79c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.NewManagedAwaitable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Awaitable* (*)()>(&::UnityEngine::Awaitable::NewManagedAwaitable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x68a79cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "NewManagedAwaitable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.MatchCompletionThreadAffinity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity)>(
    &::UnityEngine::Awaitable::MatchCompletionThreadAffinity)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x68a7abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "MatchCompletionThreadAffinity", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.RaiseManagedCompletion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Awaitable::*)(::System::Exception*)>(&::UnityEngine::Awaitable::RaiseManagedCompletion)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x68a7ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "RaiseManagedCompletion", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.RunOrScheduleContinuation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Awaitable::*)(::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity, ::System::Action*)>(
    &::UnityEngine::Awaitable::RunOrScheduleContinuation)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x68a7d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "RunOrScheduleContinuation", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.DoRunContinuationOnSynchonizationContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::UnityEngine::Awaitable::DoRunContinuationOnSynchonizationContext)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x68a7e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "DoRunContinuationOnSynchonizationContext",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.RaiseManagedCompletion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Awaitable::*)()>(&::UnityEngine::Awaitable::RaiseManagedCompletion)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x68a7f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "RaiseManagedCompletion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.PropagateExceptionAndRelease
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Awaitable::*)()>(&::UnityEngine::Awaitable::PropagateExceptionAndRelease)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x68a8058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "PropagateExceptionAndRelease",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.get_IsCompletedNoLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Awaitable::*)()>(&::UnityEngine::Awaitable::get_IsCompletedNoLock)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x68a8478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "get_IsCompletedNoLock",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.get_IsCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Awaitable::*)()>(&::UnityEngine::Awaitable::get_IsCompleted)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x68a8618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "get_IsCompleted",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.get_IsDettachedOrCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Awaitable::*)()>(&::UnityEngine::Awaitable::get_IsDettachedOrCompleted)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x68a8744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "get_IsDettachedOrCompleted",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.CheckPointerValidity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Awaitable_AwaitableHandle (::UnityEngine::Awaitable::*)()>(
    &::UnityEngine::Awaitable::CheckPointerValidity)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x68a8a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "CheckPointerValidity",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.System_Collections_IEnumerator_MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Awaitable::*)()>(&::UnityEngine::Awaitable::System_Collections_IEnumerator_MoveNext)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x68a8ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "System.Collections.IEnumerator.MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Awaitable::*)()>(&::UnityEngine::Awaitable::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68a8ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "System.Collections.IEnumerator.Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::Awaitable::*)()>(
    &::UnityEngine::Awaitable::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68a8ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "System.Collections.IEnumerator.get_Current",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Threading::SpinLock& UnityEngine::Awaitable::__cordl_internal_get__spinLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spinLock;
}
constexpr ::System::Threading::SpinLock const& UnityEngine::Awaitable::__cordl_internal_get__spinLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spinLock;
}
constexpr void UnityEngine::Awaitable::__cordl_internal_set__spinLock(::System::Threading::SpinLock value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spinLock = value;
}
constexpr ::UnityEngine::Awaitable_AwaitableHandle& UnityEngine::Awaitable::__cordl_internal_get__handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handle;
}
constexpr ::UnityEngine::Awaitable_AwaitableHandle const& UnityEngine::Awaitable::__cordl_internal_get__handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handle;
}
constexpr void UnityEngine::Awaitable::__cordl_internal_set__handle(::UnityEngine::Awaitable_AwaitableHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handle = value;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& UnityEngine::Awaitable::__cordl_internal_get__exceptionToRethrow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exceptionToRethrow;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& UnityEngine::Awaitable::__cordl_internal_get__exceptionToRethrow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exceptionToRethrow;
}
constexpr void UnityEngine::Awaitable::__cordl_internal_set__exceptionToRethrow(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____exceptionToRethrow)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Awaitable::__cordl_internal_get__managedAwaitableDone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____managedAwaitableDone;
}
constexpr bool const& UnityEngine::Awaitable::__cordl_internal_get__managedAwaitableDone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____managedAwaitableDone;
}
constexpr void UnityEngine::Awaitable::__cordl_internal_set__managedAwaitableDone(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____managedAwaitableDone = value;
}
constexpr ::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity& UnityEngine::Awaitable::__cordl_internal_get__completionThreadAffinity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____completionThreadAffinity;
}
constexpr ::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity const& UnityEngine::Awaitable::__cordl_internal_get__completionThreadAffinity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____completionThreadAffinity;
}
constexpr void UnityEngine::Awaitable::__cordl_internal_set__completionThreadAffinity(::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____completionThreadAffinity = value;
}
constexpr ::System::Action*& UnityEngine::Awaitable::__cordl_internal_get__continuation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continuation;
}
constexpr ::System::Action* const& UnityEngine::Awaitable::__cordl_internal_get__continuation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continuation;
}
constexpr void UnityEngine::Awaitable::__cordl_internal_set__continuation(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____continuation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<::System::Threading::CancellationTokenRegistration>& UnityEngine::Awaitable::__cordl_internal_get__cancelTokenRegistration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelTokenRegistration;
}
constexpr ::System::Nullable_1<::System::Threading::CancellationTokenRegistration> const& UnityEngine::Awaitable::__cordl_internal_get__cancelTokenRegistration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelTokenRegistration;
}
constexpr void UnityEngine::Awaitable::__cordl_internal_set__cancelTokenRegistration(::System::Nullable_1<::System::Threading::CancellationTokenRegistration> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cancelTokenRegistration = value;
}
constexpr ::UnityEngine::Awaitable_DoubleBufferedAwaitableList*& UnityEngine::Awaitable::__cordl_internal_get__managedCompletionQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____managedCompletionQueue;
}
constexpr ::UnityEngine::Awaitable_DoubleBufferedAwaitableList* const& UnityEngine::Awaitable::__cordl_internal_get__managedCompletionQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____managedCompletionQueue;
}
constexpr void UnityEngine::Awaitable::__cordl_internal_set__managedCompletionQueue(::UnityEngine::Awaitable_DoubleBufferedAwaitableList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____managedCompletionQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Awaitable::setStaticF__nextFrameAndEndOfFrameWiredUp(bool value) {
  ::cordl_internals::setStaticField<bool, "_nextFrameAndEndOfFrameWiredUp", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get>(std::forward<bool>(value));
}
inline bool UnityEngine::Awaitable::getStaticF__nextFrameAndEndOfFrameWiredUp() {
  return ::cordl_internals::getStaticField<bool, "_nextFrameAndEndOfFrameWiredUp", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get>();
}
inline void UnityEngine::Awaitable::setStaticF__nextFrameAndEndOfFrameWiredUpCTRegistration(::System::Threading::CancellationTokenRegistration value) {
  ::cordl_internals::setStaticField<::System::Threading::CancellationTokenRegistration, "_nextFrameAndEndOfFrameWiredUpCTRegistration",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get>(std::forward<::System::Threading::CancellationTokenRegistration>(value));
}
inline ::System::Threading::CancellationTokenRegistration UnityEngine::Awaitable::getStaticF__nextFrameAndEndOfFrameWiredUpCTRegistration() {
  return ::cordl_internals::getStaticField<::System::Threading::CancellationTokenRegistration, "_nextFrameAndEndOfFrameWiredUpCTRegistration",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get>();
}
inline void UnityEngine::Awaitable::setStaticF__nextFrameAwaitables(::UnityEngine::Awaitable_DoubleBufferedAwaitableList* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*, "_nextFrameAwaitables",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get>(std::forward<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*>(value));
}
inline ::UnityEngine::Awaitable_DoubleBufferedAwaitableList* UnityEngine::Awaitable::getStaticF__nextFrameAwaitables() {
  return ::cordl_internals::getStaticField<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*, "_nextFrameAwaitables",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get>();
}
inline void UnityEngine::Awaitable::setStaticF__endOfFrameAwaitables(::UnityEngine::Awaitable_DoubleBufferedAwaitableList* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*, "_endOfFrameAwaitables",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get>(std::forward<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*>(value));
}
inline ::UnityEngine::Awaitable_DoubleBufferedAwaitableList* UnityEngine::Awaitable::getStaticF__endOfFrameAwaitables() {
  return ::cordl_internals::getStaticField<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*, "_endOfFrameAwaitables",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get>();
}
inline void UnityEngine::Awaitable::setStaticF__synchronizationContext(::System::Threading::SynchronizationContext* value) {
  ::cordl_internals::setStaticField<::System::Threading::SynchronizationContext*, "_synchronizationContext", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get>(
      std::forward<::System::Threading::SynchronizationContext*>(value));
}
inline ::System::Threading::SynchronizationContext* UnityEngine::Awaitable::getStaticF__synchronizationContext() {
  return ::cordl_internals::getStaticField<::System::Threading::SynchronizationContext*, "_synchronizationContext",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get>();
}
inline void UnityEngine::Awaitable::setStaticF__mainThreadId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_mainThreadId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Awaitable::getStaticF__mainThreadId() {
  return ::cordl_internals::getStaticField<int32_t, "_mainThreadId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get>();
}
inline void UnityEngine::Awaitable::setStaticF__pool(::System::Threading::ThreadLocal_1<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable*>*>* value) {
  ::cordl_internals::setStaticField<::System::Threading::ThreadLocal_1<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable*>*>*, "_pool",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get>(
      std::forward<::System::Threading::ThreadLocal_1<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable*>*>*>(value));
}
inline ::System::Threading::ThreadLocal_1<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable*>*>* UnityEngine::Awaitable::getStaticF__pool() {
  return ::cordl_internals::getStaticField<::System::Threading::ThreadLocal_1<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable*>*>*, "_pool",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get>();
}
inline void UnityEngine::Awaitable::SetExceptionFromNative(::System::Exception* ex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "SetExceptionFromNative", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ex);
}
inline void UnityEngine::Awaitable::RunContinuation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "RunContinuation",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Awaitable::ReleaseNativeAwaitable(::System::IntPtr nativeAwaitable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "ReleaseNativeAwaitable", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nativeAwaitable);
}
inline int32_t UnityEngine::Awaitable::IsNativeAwaitableCompleted(::System::IntPtr nativeAwaitable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "IsNativeAwaitableCompleted", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, nativeAwaitable);
}
inline void UnityEngine::Awaitable::OnDelayedCallManagerCleared() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "OnDelayedCallManagerCleared",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Awaitable::OnUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "OnUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Awaitable::OnEndOfFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "OnEndOfFrame",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Awaitable::SetSynchronizationContext(::UnityEngine::UnitySynchronizationContext* synchronizationContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "SetSynchronizationContext", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UnitySynchronizationContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, synchronizationContext);
}
inline void UnityEngine::Awaitable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Awaitable* UnityEngine::Awaitable::NewManagedAwaitable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "NewManagedAwaitable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Awaitable*, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::Awaitable::MatchCompletionThreadAffinity(::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity awaiterCompletionThreadAffinity) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "MatchCompletionThreadAffinity", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, awaiterCompletionThreadAffinity);
}
inline void UnityEngine::Awaitable::RaiseManagedCompletion(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "RaiseManagedCompletion", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception);
}
inline void UnityEngine::Awaitable::RunOrScheduleContinuation(::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity awaiterCompletionThreadAffinity, ::System::Action* continuation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "RunOrScheduleContinuation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, awaiterCompletionThreadAffinity, continuation);
}
inline void UnityEngine::Awaitable::DoRunContinuationOnSynchonizationContext(::System::Object* continuation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "DoRunContinuationOnSynchonizationContext",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, continuation);
}
inline void UnityEngine::Awaitable::RaiseManagedCompletion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "RaiseManagedCompletion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Awaitable::PropagateExceptionAndRelease() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "PropagateExceptionAndRelease",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Awaitable::get_IsCompletedNoLock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "get_IsCompletedNoLock",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Awaitable::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "get_IsCompleted",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Awaitable::get_IsDettachedOrCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "get_IsDettachedOrCompleted",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Awaitable_AwaitableHandle UnityEngine::Awaitable::CheckPointerValidity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "CheckPointerValidity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Awaitable_AwaitableHandle, false>(this, ___internal_method);
}
inline bool UnityEngine::Awaitable::System_Collections_IEnumerator_MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "System.Collections.IEnumerator.MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Awaitable::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "System.Collections.IEnumerator.Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Awaitable::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Awaitable*>::get(), "System.Collections.IEnumerator.get_Current",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::UnityEngine::Awaitable* UnityEngine::Awaitable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Awaitable*>());
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::Awaitable::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::Awaitable::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Awaitable::Awaitable() {}
