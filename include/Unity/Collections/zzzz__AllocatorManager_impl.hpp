#pragma once
// IWYU pragma private; include "Unity/Collections/AllocatorManager.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__FunctionPointer_1_impl.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_impl.hpp"
#include "Unity/Collections/zzzz__FixedList4096Bytes_1_impl.hpp"
#include "Unity/Collections/zzzz__Long1024_impl.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Burst/zzzz__FunctionPointer_1_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__IIndexable_1_def.hpp"
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_TryFunction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::AllocatorManager_TryFunction::*)(::System::Object*, ::System::IntPtr)>(
    &::Unity::Collections::AllocatorManager_TryFunction::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x62f257c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_TryFunction*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_TryFunction.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::AllocatorManager_TryFunction::*)(
    ::System::IntPtr, ::ByRef<::Unity::Collections::AllocatorManager_Block>)>(&::Unity::Collections::AllocatorManager_TryFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62f25e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_TryFunction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_TryFunction*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_TryFunction.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Unity::Collections::AllocatorManager_TryFunction::*)(::System::IntPtr, ::ByRef<::Unity::Collections::AllocatorManager_Block>, ::System::AsyncCallback*, ::System::Object*)>(
    &::Unity::Collections::AllocatorManager_TryFunction::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x62f25fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_TryFunction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_TryFunction*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_TryFunction.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::AllocatorManager_TryFunction::*)(
    ::ByRef<::Unity::Collections::AllocatorManager_Block>, ::System::IAsyncResult*)>(&::Unity::Collections::AllocatorManager_TryFunction::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x62f26a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_TryFunction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_TryFunction*>::get(), 15));
    return ___internal_method;
  }
};
inline void Unity::Collections::AllocatorManager_TryFunction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_TryFunction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline int32_t Unity::Collections::AllocatorManager_TryFunction::Invoke(::System::IntPtr allocatorState, ::ByRef<::Unity::Collections::AllocatorManager_Block> block) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_TryFunction*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, allocatorState, block);
}
inline ::System::IAsyncResult* Unity::Collections::AllocatorManager_TryFunction::BeginInvoke(::System::IntPtr allocatorState, ::ByRef<::Unity::Collections::AllocatorManager_Block> block,
                                                                                             ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_TryFunction*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, allocatorState, block, callback, object);
}
inline int32_t Unity::Collections::AllocatorManager_TryFunction::EndInvoke(::ByRef<::Unity::Collections::AllocatorManager_Block> block, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_TryFunction*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, block, result);
}
inline ::Unity::Collections::AllocatorManager_TryFunction* Unity::Collections::AllocatorManager_TryFunction::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Collections::AllocatorManager_TryFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::Unity::Collections::AllocatorManager_TryFunction::AllocatorManager_TryFunction() {}
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.get_TableEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::Unity::Collections::AllocatorManager_TableEntry> (
    ::Unity::Collections::AllocatorManager_AllocatorHandle::*)()>(&::Unity::Collections::AllocatorManager_AllocatorHandle::get_TableEntry)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x62f18b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                               "get_TableEntry", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.get_IsInstalled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::AllocatorManager_AllocatorHandle::*)()>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::get_IsInstalled)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x62f26c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                               "get_IsInstalled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.IncrementVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::AllocatorManager_AllocatorHandle::*)()>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::IncrementVersion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f27fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                               "IncrementVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.Rewind
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::AllocatorManager_AllocatorHandle::*)()>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::Rewind)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f2800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                               "Rewind", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.Install
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::AllocatorManager_AllocatorHandle::*)(::Unity::Collections::AllocatorManager_TableEntry)>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::Install)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x62f1f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "Install", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_TableEntry>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.op_Implicit___Unity__Collections__AllocatorManager_AllocatorHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::AllocatorManager_AllocatorHandle (*)(::Unity::Collections::Allocator)>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::op_Implicit___Unity__Collections__AllocatorManager_AllocatorHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f1c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::AllocatorManager_AllocatorHandle::*)()>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f2804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                               "get_Value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.CheckAllocatedSuccessfully
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::Unity::Collections::AllocatorManager_AllocatorHandle::CheckAllocatedSuccessfully)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x62f280c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "CheckAllocatedSuccessfully",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.get_Function
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::AllocatorManager_TryFunction* (::Unity::Collections::AllocatorManager_AllocatorHandle::*)()>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::get_Function)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f288c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                               "get_Function", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.Try
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::AllocatorManager_AllocatorHandle::*)(
    ::ByRef<::Unity::Collections::AllocatorManager_Block>)>(&::Unity::Collections::AllocatorManager_AllocatorHandle::Try)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x62f2894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "Try", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.get_Handle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::AllocatorManager_AllocatorHandle (::Unity::Collections::AllocatorManager_AllocatorHandle::*)()>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f1a94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                               "get_Handle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.set_Handle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::AllocatorManager_AllocatorHandle::*)(
    ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::AllocatorManager_AllocatorHandle::set_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f2900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "set_Handle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.get_ToAllocator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::Allocator (::Unity::Collections::AllocatorManager_AllocatorHandle::*)()>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::get_ToAllocator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f2908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                               "get_ToAllocator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.get_IsCustomAllocator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::AllocatorManager_AllocatorHandle::*)()>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::get_IsCustomAllocator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62f2910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                               "get_IsCustomAllocator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.get_IsAutoDispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::AllocatorManager_AllocatorHandle::*)()>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::get_IsAutoDispose)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x62f2920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                               "get_IsAutoDispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::AllocatorManager_AllocatorHandle::*)()>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62f2a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::AllocatorManager_AllocatorHandle::*)(::System::Object*)>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x62f2a18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::AllocatorManager_AllocatorHandle::*)(
    ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::AllocatorManager_AllocatorHandle::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62f2ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::AllocatorManager_AllocatorHandle::*)(::Unity::Collections::Allocator)>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62f2ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::AllocatorManager_AllocatorHandle::*)()>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f2ae4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::Unity::Collections::AllocatorManager_AllocatorHandle, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::AllocatorManager_AllocatorHandle::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62f2aec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::Unity::Collections::AllocatorManager_AllocatorHandle, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::AllocatorManager_AllocatorHandle::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62f2afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.op_LessThan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::Unity::Collections::AllocatorManager_AllocatorHandle, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::AllocatorManager_AllocatorHandle::op_LessThan)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62f2b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "op_LessThan", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.op_GreaterThan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::Unity::Collections::AllocatorManager_AllocatorHandle, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::AllocatorManager_AllocatorHandle::op_GreaterThan)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62f2b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "op_GreaterThan", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::Unity::Collections::AllocatorManager_AllocatorHandle, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::AllocatorManager_AllocatorHandle::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62f2b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "op_LessThanOrEqual", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::Unity::Collections::AllocatorManager_AllocatorHandle, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::AllocatorManager_AllocatorHandle::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62f2b3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "op_GreaterThanOrEqual", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::AllocatorManager_AllocatorHandle::*)(
    ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::AllocatorManager_AllocatorHandle::CompareTo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62f2b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
inline ::ByRef<::Unity::Collections::AllocatorManager_TableEntry> Unity::Collections::AllocatorManager_AllocatorHandle::get_TableEntry() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                             "get_TableEntry", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::Unity::Collections::AllocatorManager_TableEntry>, false>(this, ___internal_method);
}
inline bool Unity::Collections::AllocatorManager_AllocatorHandle::get_IsInstalled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                             "get_IsInstalled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_AllocatorHandle::IncrementVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                             "IncrementVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_AllocatorHandle::Rewind() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                             "Rewind", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_AllocatorHandle::Install(::Unity::Collections::AllocatorManager_TableEntry tableEntry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "Install", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_TableEntry>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tableEntry);
}
inline ::Unity::Collections::AllocatorManager_AllocatorHandle
Unity::Collections::AllocatorManager_AllocatorHandle::op_Implicit___Unity__Collections__AllocatorManager_AllocatorHandle(::Unity::Collections::Allocator a) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_AllocatorHandle, false>(nullptr, ___internal_method, a);
}
inline int32_t Unity::Collections::AllocatorManager_AllocatorHandle::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                             "get_Value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline int32_t Unity::Collections::AllocatorManager_AllocatorHandle::TryAllocateBlock(::ByRef<::Unity::Collections::AllocatorManager_Block> block, int32_t items) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "TryAllocateBlock",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, block, items);
}
template <typename T> inline ::Unity::Collections::AllocatorManager_Block Unity::Collections::AllocatorManager_AllocatorHandle::AllocateBlock(int32_t items) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "AllocateBlock",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_Block, false>(this, ___internal_method, items);
}
inline void Unity::Collections::AllocatorManager_AllocatorHandle::CheckAllocatedSuccessfully(int32_t error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "CheckAllocatedSuccessfully",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, error);
}
inline ::Unity::Collections::AllocatorManager_TryFunction* Unity::Collections::AllocatorManager_AllocatorHandle::get_Function() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                             "get_Function", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_TryFunction*, false>(this, ___internal_method);
}
inline int32_t Unity::Collections::AllocatorManager_AllocatorHandle::Try(::ByRef<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "Try", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, block);
}
inline ::Unity::Collections::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager_AllocatorHandle::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                             "get_Handle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_AllocatorHandle, false>(this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_AllocatorHandle::set_Handle(::Unity::Collections::AllocatorManager_AllocatorHandle value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "set_Handle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Collections::Allocator Unity::Collections::AllocatorManager_AllocatorHandle::get_ToAllocator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                             "get_ToAllocator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::Allocator, false>(this, ___internal_method);
}
inline bool Unity::Collections::AllocatorManager_AllocatorHandle::get_IsCustomAllocator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                             "get_IsCustomAllocator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Unity::Collections::AllocatorManager_AllocatorHandle::get_IsAutoDispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                             "get_IsAutoDispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_AllocatorHandle::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Unity::Collections::AllocatorManager_AllocatorHandle::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool Unity::Collections::AllocatorManager_AllocatorHandle::Equals(::Unity::Collections::AllocatorManager_AllocatorHandle other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool Unity::Collections::AllocatorManager_AllocatorHandle::Equals(::Unity::Collections::Allocator other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t Unity::Collections::AllocatorManager_AllocatorHandle::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Unity::Collections::AllocatorManager_AllocatorHandle::op_Equality(::Unity::Collections::AllocatorManager_AllocatorHandle lhs, ::Unity::Collections::AllocatorManager_AllocatorHandle rhs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Unity::Collections::AllocatorManager_AllocatorHandle::op_Inequality(::Unity::Collections::AllocatorManager_AllocatorHandle lhs,
                                                                                ::Unity::Collections::AllocatorManager_AllocatorHandle rhs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Unity::Collections::AllocatorManager_AllocatorHandle::op_LessThan(::Unity::Collections::AllocatorManager_AllocatorHandle lhs, ::Unity::Collections::AllocatorManager_AllocatorHandle rhs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "op_LessThan", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Unity::Collections::AllocatorManager_AllocatorHandle::op_GreaterThan(::Unity::Collections::AllocatorManager_AllocatorHandle lhs,
                                                                                 ::Unity::Collections::AllocatorManager_AllocatorHandle rhs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "op_GreaterThan", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Unity::Collections::AllocatorManager_AllocatorHandle::op_LessThanOrEqual(::Unity::Collections::AllocatorManager_AllocatorHandle lhs,
                                                                                     ::Unity::Collections::AllocatorManager_AllocatorHandle rhs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "op_LessThanOrEqual", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Unity::Collections::AllocatorManager_AllocatorHandle::op_GreaterThanOrEqual(::Unity::Collections::AllocatorManager_AllocatorHandle lhs,
                                                                                        ::Unity::Collections::AllocatorManager_AllocatorHandle rhs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "op_GreaterThanOrEqual", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
inline int32_t Unity::Collections::AllocatorManager_AllocatorHandle::CompareTo(::Unity::Collections::AllocatorManager_AllocatorHandle other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
/// @brief Convert operator to "::Unity::Collections::AllocatorManager_IAllocator"
constexpr Unity::Collections::AllocatorManager_AllocatorHandle::operator ::Unity::Collections::AllocatorManager_IAllocator*() {
  return static_cast<::Unity::Collections::AllocatorManager_IAllocator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Collections::AllocatorManager_IAllocator"
constexpr ::Unity::Collections::AllocatorManager_IAllocator* Unity::Collections::AllocatorManager_AllocatorHandle::i___Unity__Collections__AllocatorManager_IAllocator() {
  return static_cast<::Unity::Collections::AllocatorManager_IAllocator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Collections::AllocatorManager_AllocatorHandle::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::AllocatorManager_AllocatorHandle::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>"
constexpr Unity::Collections::AllocatorManager_AllocatorHandle::operator ::System::IEquatable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>"
constexpr ::System::IEquatable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>*
Unity::Collections::AllocatorManager_AllocatorHandle::i___System__IEquatable_1___Unity__Collections__AllocatorManager_AllocatorHandle_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>"
constexpr Unity::Collections::AllocatorManager_AllocatorHandle::operator ::System::IComparable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>"
constexpr ::System::IComparable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>*
Unity::Collections::AllocatorManager_AllocatorHandle::i___System__IComparable_1___Unity__Collections__AllocatorManager_AllocatorHandle_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "Index", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Version", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::AllocatorManager_AllocatorHandle::AllocatorManager_AllocatorHandle(uint16_t Index, uint16_t Version) noexcept {
  this->Index = Index;
  this->Version = Version;
}
// Ctor Parameters []
constexpr ::Unity::Collections::AllocatorManager_AllocatorHandle::AllocatorManager_AllocatorHandle() {}
// Ctor Parameters [CppParam { name: "Value", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::AllocatorManager_BlockHandle::AllocatorManager_BlockHandle(uint16_t Value) noexcept {
  this->Value = Value;
}
// Ctor Parameters []
constexpr ::Unity::Collections::AllocatorManager_BlockHandle::AllocatorManager_BlockHandle() {}
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_Range.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::AllocatorManager_Range::*)()>(&::Unity::Collections::AllocatorManager_Range::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x62f2b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Range>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Collections::AllocatorManager_Range::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Range>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Collections::AllocatorManager_Range::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::AllocatorManager_Range::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "Pointer", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "Items", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "Allocator", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::AllocatorManager_Range::AllocatorManager_Range(::System::IntPtr Pointer, int32_t Items, ::Unity::Collections::AllocatorManager_AllocatorHandle Allocator) noexcept {
  this->Pointer = Pointer;
  this->Items = Items;
  this->Allocator = Allocator;
}
// Ctor Parameters []
constexpr ::Unity::Collections::AllocatorManager_Range::AllocatorManager_Range() {}
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_Block.get_Bytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Unity::Collections::AllocatorManager_Block::*)()>(
    &::Unity::Collections::AllocatorManager_Block::get_Bytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62f1be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Block>::get(), "get_Bytes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_Block.get_AllocatedBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Unity::Collections::AllocatorManager_Block::*)()>(
    &::Unity::Collections::AllocatorManager_Block::get_AllocatedBytes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62f2b98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Block>::get(),
                                                                               "get_AllocatedBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_Block.get_Alignment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::AllocatorManager_Block::*)()>(
    &::Unity::Collections::AllocatorManager_Block::get_Alignment)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62f1bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Block>::get(),
                                                                               "get_Alignment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_Block.set_Alignment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::AllocatorManager_Block::*)(int32_t)>(
    &::Unity::Collections::AllocatorManager_Block::set_Alignment)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x62f2ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Block>::get(), "set_Alignment",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_Block.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::AllocatorManager_Block::*)()>(&::Unity::Collections::AllocatorManager_Block::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f2b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Block>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_Block.TryAllocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::AllocatorManager_Block::*)()>(
    &::Unity::Collections::AllocatorManager_Block::TryAllocate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x62f2c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Block>::get(),
                                                                               "TryAllocate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_Block.TryFree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::AllocatorManager_Block::*)()>(
    &::Unity::Collections::AllocatorManager_Block::TryFree)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x62f2be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Block>::get(), "TryFree",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_Block.Allocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::AllocatorManager_Block::*)()>(&::Unity::Collections::AllocatorManager_Block::Allocate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f2c98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Block>::get(), "Allocate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_Block.Free
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::AllocatorManager_Block::*)()>(&::Unity::Collections::AllocatorManager_Block::Free)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f2c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Block>::get(), "Free",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_Block.CheckFailedToAllocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::AllocatorManager_Block::*)(int32_t)>(
    &::Unity::Collections::AllocatorManager_Block::CheckFailedToAllocate)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x62f2ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Block>::get(), "CheckFailedToAllocate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_Block.CheckFailedToFree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::AllocatorManager_Block::*)(int32_t)>(
    &::Unity::Collections::AllocatorManager_Block::CheckFailedToFree)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x62f2d4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Block>::get(), "CheckFailedToFree",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline int64_t Unity::Collections::AllocatorManager_Block::get_Bytes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Block>::get(), "get_Bytes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t Unity::Collections::AllocatorManager_Block::get_AllocatedBytes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Block>::get(),
                                                                             "get_AllocatedBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int32_t Unity::Collections::AllocatorManager_Block::get_Alignment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Block>::get(),
                                                                             "get_Alignment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_Block::set_Alignment(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Block>::get(), "set_Alignment",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Collections::AllocatorManager_Block::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Block>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Unity::Collections::AllocatorManager_Block::TryAllocate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Block>::get(), "TryAllocate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Unity::Collections::AllocatorManager_Block::TryFree() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Block>::get(), "TryFree",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_Block::Allocate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Block>::get(), "Allocate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_Block::Free() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Block>::get(), "Free",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_Block::CheckFailedToAllocate(int32_t error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Block>::get(), "CheckFailedToAllocate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline void Unity::Collections::AllocatorManager_Block::CheckFailedToFree(int32_t error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Block>::get(), "CheckFailedToFree",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Collections::AllocatorManager_Block::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::AllocatorManager_Block::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "Range", ty: "::Unity::Collections::AllocatorManager_Range", modifiers: "", def_value: Some("{}") }, CppParam { name: "BytesPerItem", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "AllocatedItems", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Log2Alignment", ty: "uint8_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "Padding0", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Padding1", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "Padding2", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::AllocatorManager_Block::AllocatorManager_Block(::Unity::Collections::AllocatorManager_Range Range, int32_t BytesPerItem, int32_t AllocatedItems, uint8_t Log2Alignment,
                                                                               uint8_t Padding0, uint16_t Padding1, uint32_t Padding2) noexcept {
  this->Range = Range;
  this->BytesPerItem = BytesPerItem;
  this->AllocatedItems = AllocatedItems;
  this->Log2Alignment = Log2Alignment;
  this->Padding0 = Padding0;
  this->Padding1 = Padding1;
  this->Padding2 = Padding2;
}
// Ctor Parameters []
constexpr ::Unity::Collections::AllocatorManager_Block::AllocatorManager_Block() {}
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_IAllocator.get_Function
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::AllocatorManager_TryFunction* (::Unity::Collections::AllocatorManager_IAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_IAllocator::get_Function)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_IAllocator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_IAllocator*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_IAllocator.Try
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::Unity::Collections::AllocatorManager_IAllocator::*)(::ByRef<::Unity::Collections::AllocatorManager_Block>)>(&::Unity::Collections::AllocatorManager_IAllocator::Try)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_IAllocator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_IAllocator*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_IAllocator.get_Handle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::AllocatorManager_AllocatorHandle (::Unity::Collections::AllocatorManager_IAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_IAllocator::get_Handle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_IAllocator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_IAllocator*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_IAllocator.set_Handle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::AllocatorManager_IAllocator::*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::AllocatorManager_IAllocator::set_Handle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_IAllocator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_IAllocator*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_IAllocator.get_ToAllocator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::Allocator (::Unity::Collections::AllocatorManager_IAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_IAllocator::get_ToAllocator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_IAllocator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_IAllocator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_IAllocator.get_IsCustomAllocator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::AllocatorManager_IAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_IAllocator::get_IsCustomAllocator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_IAllocator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_IAllocator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_IAllocator.get_IsAutoDispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::AllocatorManager_IAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_IAllocator::get_IsAutoDispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f2df8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_IAllocator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_IAllocator*>::get(), 6));
    return ___internal_method;
  }
};
inline ::Unity::Collections::AllocatorManager_TryFunction* Unity::Collections::AllocatorManager_IAllocator::get_Function() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_IAllocator*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_TryFunction*, false>(this, ___internal_method);
}
inline int32_t Unity::Collections::AllocatorManager_IAllocator::Try(::ByRef<::Unity::Collections::AllocatorManager_Block> block) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_IAllocator*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, block);
}
inline ::Unity::Collections::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager_IAllocator::get_Handle() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_IAllocator*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_AllocatorHandle, false>(this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_IAllocator::set_Handle(::Unity::Collections::AllocatorManager_AllocatorHandle value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_IAllocator*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Collections::Allocator Unity::Collections::AllocatorManager_IAllocator::get_ToAllocator() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_IAllocator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::Allocator, false>(this, ___internal_method);
}
inline bool Unity::Collections::AllocatorManager_IAllocator::get_IsCustomAllocator() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_IAllocator*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Unity::Collections::AllocatorManager_IAllocator::get_IsAutoDispose() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_IAllocator*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Collections::AllocatorManager_IAllocator::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::AllocatorManager_IAllocator::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
//  Writing Method size for method: ::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::*)(
    ::System::Object*, ::System::IntPtr)>(&::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x62f2ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::*)(
    ::System::IntPtr, ::ByRef<::Unity::Collections::AllocatorManager_Block>)>(&::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62f3064;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::*)(::System::IntPtr, ::ByRef<::Unity::Collections::AllocatorManager_Block>, ::System::AsyncCallback*,
                                                                                                ::System::Object*)>(
    &::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x62f3078;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::*)(
    ::System::IAsyncResult*)>(&::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x62f3120;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline void Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                         ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::Invoke(::System::IntPtr allocatorState,
                                                                                                             ::ByRef<::Unity::Collections::AllocatorManager_Block> block) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, allocatorState, block);
}
inline ::System::IAsyncResult* Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::BeginInvoke(::System::IntPtr allocatorState,
                                                                                                                                  ::ByRef<::Unity::Collections::AllocatorManager_Block> block,
                                                                                                                                  ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace,
                                                                                                                                  ::System::Object* _cordl_fixed_empty_name_whitespace_param_3) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, allocatorState, block, _cordl_fixed_empty_name_whitespace,
                                                                             _cordl_fixed_empty_name_whitespace_param_3);
}
inline int32_t Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate*
Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace,
                                                                                                                                            _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate() {}
//  Writing Method size for method: ::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall.GetFunctionPointerDiscard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::System::IntPtr>)>(
    &::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x62f3144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall*>::get(), "GetFunctionPointerDiscard",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall.GetFunctionPointer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(
    &::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x62f3250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall*>::get(),
                                                 "GetFunctionPointer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::ByRef<::Unity::Collections::AllocatorManager_Block>)>(
    &::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x62f2edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall*>::get(), "Invoke",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall::setStaticF_Pointer(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "Pointer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall*>::get>(
      std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall::getStaticF_Pointer() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall*>::get>();
}
inline void Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall::GetFunctionPointerDiscard(::ByRef<::System::IntPtr> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall*>::get(), "GetFunctionPointerDiscard",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall::GetFunctionPointer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall*>::get(),
                                               "GetFunctionPointer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method);
}
inline int32_t Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall::Invoke(::System::IntPtr allocatorState, ::ByRef<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall*>::get(), "Invoke",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, allocatorState, block);
}
// Ctor Parameters []
constexpr ::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall() {}
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_StackAllocator.get_Handle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::AllocatorManager_AllocatorHandle (::Unity::Collections::AllocatorManager_StackAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_StackAllocator::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f2e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_StackAllocator>::get(),
                                                                               "get_Handle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_StackAllocator.set_Handle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::AllocatorManager_StackAllocator::*)(
    ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::AllocatorManager_StackAllocator::set_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f2e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_StackAllocator>::get(), "set_Handle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_StackAllocator.get_ToAllocator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::Allocator (::Unity::Collections::AllocatorManager_StackAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_StackAllocator::get_ToAllocator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f2e14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_StackAllocator>::get(),
                                                                               "get_ToAllocator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_StackAllocator.get_IsCustomAllocator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::AllocatorManager_StackAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_StackAllocator::get_IsCustomAllocator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62f2e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_StackAllocator>::get(),
                                                                               "get_IsCustomAllocator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_StackAllocator.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::AllocatorManager_StackAllocator::*)(::Unity::Collections::AllocatorManager_Block)>(
    &::Unity::Collections::AllocatorManager_StackAllocator::Initialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62f2e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_StackAllocator>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_Block>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_StackAllocator.Try
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::AllocatorManager_StackAllocator::*)(
    ::ByRef<::Unity::Collections::AllocatorManager_Block>)>(&::Unity::Collections::AllocatorManager_StackAllocator::Try)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x62f2e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_StackAllocator>::get(), "Try", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_StackAllocator.Try
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::ByRef<::Unity::Collections::AllocatorManager_Block>)>(
    &::Unity::Collections::AllocatorManager_StackAllocator::Try)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f2e00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_StackAllocator>::get(), "Try", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_StackAllocator.get_Function
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::AllocatorManager_TryFunction* (::Unity::Collections::AllocatorManager_StackAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_StackAllocator::get_Function)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x62f2f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_StackAllocator>::get(),
                                                                               "get_Function", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_StackAllocator.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::AllocatorManager_StackAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_StackAllocator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f2ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_StackAllocator>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_StackAllocator.Try$BurstManaged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::ByRef<::Unity::Collections::AllocatorManager_Block>)>(
    &::Unity::Collections::AllocatorManager_StackAllocator::Try$BurstManaged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f2ff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_StackAllocator>::get(), "Try$BurstManaged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get() })));
    return ___internal_method;
  }
};
inline ::Unity::Collections::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager_StackAllocator::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_StackAllocator>::get(),
                                                                             "get_Handle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_AllocatorHandle, false>(this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_StackAllocator::set_Handle(::Unity::Collections::AllocatorManager_AllocatorHandle value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_StackAllocator>::get(), "set_Handle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Collections::Allocator Unity::Collections::AllocatorManager_StackAllocator::get_ToAllocator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_StackAllocator>::get(),
                                                                             "get_ToAllocator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::Allocator, false>(this, ___internal_method);
}
inline bool Unity::Collections::AllocatorManager_StackAllocator::get_IsCustomAllocator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_StackAllocator>::get(),
                                                                             "get_IsCustomAllocator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_StackAllocator::Initialize(::Unity::Collections::AllocatorManager_Block storage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_StackAllocator>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_Block>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, storage);
}
inline int32_t Unity::Collections::AllocatorManager_StackAllocator::Try(::ByRef<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_StackAllocator>::get(), "Try", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, block);
}
inline int32_t Unity::Collections::AllocatorManager_StackAllocator::Try(::System::IntPtr allocatorState, ::ByRef<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_StackAllocator>::get(), "Try", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, allocatorState, block);
}
inline ::Unity::Collections::AllocatorManager_TryFunction* Unity::Collections::AllocatorManager_StackAllocator::get_Function() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_StackAllocator>::get(),
                                                                             "get_Function", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_TryFunction*, false>(this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_StackAllocator::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_StackAllocator>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Unity::Collections::AllocatorManager_StackAllocator::Try$BurstManaged(::System::IntPtr allocatorState, ::ByRef<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_StackAllocator>::get(), "Try$BurstManaged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, allocatorState, block);
}
/// @brief Convert operator to "::Unity::Collections::AllocatorManager_IAllocator"
constexpr Unity::Collections::AllocatorManager_StackAllocator::operator ::Unity::Collections::AllocatorManager_IAllocator*() {
  return static_cast<::Unity::Collections::AllocatorManager_IAllocator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Collections::AllocatorManager_IAllocator"
constexpr ::Unity::Collections::AllocatorManager_IAllocator* Unity::Collections::AllocatorManager_StackAllocator::i___Unity__Collections__AllocatorManager_IAllocator() {
  return static_cast<::Unity::Collections::AllocatorManager_IAllocator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Collections::AllocatorManager_StackAllocator::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::AllocatorManager_StackAllocator::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_handle", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_storage", ty:
// "::Unity::Collections::AllocatorManager_Block", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_top", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::AllocatorManager_StackAllocator::AllocatorManager_StackAllocator(::Unity::Collections::AllocatorManager_AllocatorHandle m_handle,
                                                                                                 ::Unity::Collections::AllocatorManager_Block m_storage, int64_t m_top) noexcept {
  this->m_handle = m_handle;
  this->m_storage = m_storage;
  this->m_top = m_top;
}
// Ctor Parameters []
constexpr ::Unity::Collections::AllocatorManager_StackAllocator::AllocatorManager_StackAllocator() {}
//  Writing Method size for method: ::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::*)(
    ::System::Object*, ::System::IntPtr)>(&::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x62f3758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::*)(
    ::System::IntPtr, ::ByRef<::Unity::Collections::AllocatorManager_Block>)>(&::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62f37c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::*)(::System::IntPtr, ::ByRef<::Unity::Collections::AllocatorManager_Block>, ::System::AsyncCallback*,
                                                                                               ::System::Object*)>(
    &::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x62f37d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::*)(
    ::System::IAsyncResult*)>(&::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x62f3880;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline void Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                        ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::Invoke(::System::IntPtr allocatorState,
                                                                                                            ::ByRef<::Unity::Collections::AllocatorManager_Block> block) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, allocatorState, block);
}
inline ::System::IAsyncResult* Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::BeginInvoke(::System::IntPtr allocatorState,
                                                                                                                                 ::ByRef<::Unity::Collections::AllocatorManager_Block> block,
                                                                                                                                 ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace,
                                                                                                                                 ::System::Object* _cordl_fixed_empty_name_whitespace_param_3) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, allocatorState, block, _cordl_fixed_empty_name_whitespace,
                                                                             _cordl_fixed_empty_name_whitespace_param_3);
}
inline int32_t Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate*
Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                               ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace,
                                                                                                                                           _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate() {}
//  Writing Method size for method: ::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall.GetFunctionPointerDiscard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::System::IntPtr>)>(
    &::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x62f38a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall*>::get(), "GetFunctionPointerDiscard",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall.GetFunctionPointer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(
    &::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x62f39b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall*>::get(),
                                                 "GetFunctionPointer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::ByRef<::Unity::Collections::AllocatorManager_Block>)>(
    &::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x62f363c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall*>::get(), "Invoke",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall::setStaticF_Pointer(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "Pointer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall*>::get>(
      std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall::getStaticF_Pointer() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall*>::get>();
}
inline void Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall::GetFunctionPointerDiscard(::ByRef<::System::IntPtr> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall*>::get(), "GetFunctionPointerDiscard",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall::GetFunctionPointer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall*>::get(),
                                               "GetFunctionPointer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method);
}
inline int32_t Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall::Invoke(::System::IntPtr allocatorState, ::ByRef<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall*>::get(), "Invoke",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, allocatorState, block);
}
// Ctor Parameters []
constexpr ::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall() {}
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.get_Handle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::AllocatorManager_AllocatorHandle (::Unity::Collections::AllocatorManager_SlabAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_SlabAllocator::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f326c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(),
                                                                               "get_Handle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.set_Handle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::AllocatorManager_SlabAllocator::*)(
    ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::AllocatorManager_SlabAllocator::set_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f3274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(), "set_Handle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.get_ToAllocator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::Allocator (::Unity::Collections::AllocatorManager_SlabAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_SlabAllocator::get_ToAllocator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f327c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(),
                                                                               "get_ToAllocator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.get_IsCustomAllocator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::AllocatorManager_SlabAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_SlabAllocator::get_IsCustomAllocator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62f3284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(),
                                                                               "get_IsCustomAllocator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.get_BudgetInBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Unity::Collections::AllocatorManager_SlabAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_SlabAllocator::get_BudgetInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f3294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(),
                                                                               "get_BudgetInBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.get_AllocatedBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Unity::Collections::AllocatorManager_SlabAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_SlabAllocator::get_AllocatedBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f329c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(),
                                                                               "get_AllocatedBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.get_SlabSizeInBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::AllocatorManager_SlabAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_SlabAllocator::get_SlabSizeInBytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62f32a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(),
                                                                               "get_SlabSizeInBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.set_SlabSizeInBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::AllocatorManager_SlabAllocator::*)(int32_t)>(
    &::Unity::Collections::AllocatorManager_SlabAllocator::set_SlabSizeInBytes)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x62f32b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(), "set_SlabSizeInBytes",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.get_Slabs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::AllocatorManager_SlabAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_SlabAllocator::get_Slabs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x62f32f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(),
                                                                               "get_Slabs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::AllocatorManager_SlabAllocator::*)(
    ::Unity::Collections::AllocatorManager_Block, int32_t, int64_t)>(&::Unity::Collections::AllocatorManager_SlabAllocator::Initialize)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x62f330c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_Block>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.Try
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::Unity::Collections::AllocatorManager_SlabAllocator::*)(::ByRef<::Unity::Collections::AllocatorManager_Block>)>(&::Unity::Collections::AllocatorManager_SlabAllocator::Try)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x62f3414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(), "Try", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.Try
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::ByRef<::Unity::Collections::AllocatorManager_Block>)>(
    &::Unity::Collections::AllocatorManager_SlabAllocator::Try)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f3268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(), "Try", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.get_Function
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::AllocatorManager_TryFunction* (::Unity::Collections::AllocatorManager_SlabAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_SlabAllocator::get_Function)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x62f36dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(),
                                                                               "get_Function", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::AllocatorManager_SlabAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_SlabAllocator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f3750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.Try$BurstManaged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::ByRef<::Unity::Collections::AllocatorManager_Block>)>(
    &::Unity::Collections::AllocatorManager_SlabAllocator::Try$BurstManaged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f3754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(), "Try$BurstManaged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get() })));
    return ___internal_method;
  }
};
inline ::Unity::Collections::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager_SlabAllocator::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(),
                                                                             "get_Handle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_AllocatorHandle, false>(this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_SlabAllocator::set_Handle(::Unity::Collections::AllocatorManager_AllocatorHandle value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(), "set_Handle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Collections::Allocator Unity::Collections::AllocatorManager_SlabAllocator::get_ToAllocator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(),
                                                                             "get_ToAllocator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::Allocator, false>(this, ___internal_method);
}
inline bool Unity::Collections::AllocatorManager_SlabAllocator::get_IsCustomAllocator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(),
                                                                             "get_IsCustomAllocator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t Unity::Collections::AllocatorManager_SlabAllocator::get_BudgetInBytes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(),
                                                                             "get_BudgetInBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t Unity::Collections::AllocatorManager_SlabAllocator::get_AllocatedBytes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(),
                                                                             "get_AllocatedBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int32_t Unity::Collections::AllocatorManager_SlabAllocator::get_SlabSizeInBytes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(),
                                                                             "get_SlabSizeInBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_SlabAllocator::set_SlabSizeInBytes(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(), "set_SlabSizeInBytes",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Unity::Collections::AllocatorManager_SlabAllocator::get_Slabs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(),
                                                                             "get_Slabs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_SlabAllocator::Initialize(::Unity::Collections::AllocatorManager_Block storage, int32_t slabSizeInBytes, int64_t budget) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_Block>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, storage, slabSizeInBytes, budget);
}
inline int32_t Unity::Collections::AllocatorManager_SlabAllocator::Try(::ByRef<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(), "Try", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, block);
}
inline int32_t Unity::Collections::AllocatorManager_SlabAllocator::Try(::System::IntPtr allocatorState, ::ByRef<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(), "Try", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, allocatorState, block);
}
inline ::Unity::Collections::AllocatorManager_TryFunction* Unity::Collections::AllocatorManager_SlabAllocator::get_Function() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(),
                                                                             "get_Function", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_TryFunction*, false>(this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_SlabAllocator::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Unity::Collections::AllocatorManager_SlabAllocator::Try$BurstManaged(::System::IntPtr allocatorState, ::ByRef<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SlabAllocator>::get(), "Try$BurstManaged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, allocatorState, block);
}
/// @brief Convert operator to "::Unity::Collections::AllocatorManager_IAllocator"
constexpr Unity::Collections::AllocatorManager_SlabAllocator::operator ::Unity::Collections::AllocatorManager_IAllocator*() {
  return static_cast<::Unity::Collections::AllocatorManager_IAllocator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Collections::AllocatorManager_IAllocator"
constexpr ::Unity::Collections::AllocatorManager_IAllocator* Unity::Collections::AllocatorManager_SlabAllocator::i___Unity__Collections__AllocatorManager_IAllocator() {
  return static_cast<::Unity::Collections::AllocatorManager_IAllocator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Collections::AllocatorManager_SlabAllocator::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::AllocatorManager_SlabAllocator::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_handle", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "Storage", ty:
// "::Unity::Collections::AllocatorManager_Block", modifiers: "", def_value: Some("{}") }, CppParam { name: "Log2SlabSizeInBytes", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "Occupied", ty: "::Unity::Collections::FixedList4096Bytes_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "budgetInBytes", ty: "int64_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "allocatedBytes", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::AllocatorManager_SlabAllocator::AllocatorManager_SlabAllocator(::Unity::Collections::AllocatorManager_AllocatorHandle m_handle,
                                                                                               ::Unity::Collections::AllocatorManager_Block Storage, int32_t Log2SlabSizeInBytes,
                                                                                               ::Unity::Collections::FixedList4096Bytes_1<int32_t> Occupied, int64_t budgetInBytes,
                                                                                               int64_t allocatedBytes) noexcept {
  this->m_handle = m_handle;
  this->Storage = Storage;
  this->Log2SlabSizeInBytes = Log2SlabSizeInBytes;
  this->Occupied = Occupied;
  this->budgetInBytes = budgetInBytes;
  this->allocatedBytes = allocatedBytes;
}
// Ctor Parameters []
constexpr ::Unity::Collections::AllocatorManager_SlabAllocator::AllocatorManager_SlabAllocator() {}
// Ctor Parameters [CppParam { name: "function", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "state", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}")
// }]
constexpr ::Unity::Collections::AllocatorManager_TableEntry::AllocatorManager_TableEntry(::System::IntPtr function, ::System::IntPtr state) noexcept {
  this->function = function;
  this->state = state;
}
// Ctor Parameters []
constexpr ::Unity::Collections::AllocatorManager_TableEntry::AllocatorManager_TableEntry() {}
// Ctor Parameters [CppParam { name: "f0", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "f1", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "f2", ty: "T",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "f3", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "f4", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "f5", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "f6", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "f7", ty: "T", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "f8", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "f9", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "f10", ty: "T",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "f11", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "f12", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "f13", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "f14", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "f15", ty: "T", modifiers: "", def_value:
// Some("{}") }]
template <typename T>
constexpr ::Unity::Collections::AllocatorManager_Array16_1<T>::AllocatorManager_Array16_1(T f0, T f1, T f2, T f3, T f4, T f5, T f6, T f7, T f8, T f9, T f10, T f11, T f12, T f13, T f14,
                                                                                          T f15) noexcept {
  this->f0 = f0;
  this->f1 = f1;
  this->f2 = f2;
  this->f3 = f3;
  this->f4 = f4;
  this->f5 = f5;
  this->f6 = f6;
  this->f7 = f7;
  this->f8 = f8;
  this->f9 = f9;
  this->f10 = f10;
  this->f11 = f11;
  this->f12 = f12;
  this->f13 = f13;
  this->f14 = f14;
  this->f15 = f15;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::AllocatorManager_Array16_1<T>::AllocatorManager_Array16_1() {}
// Ctor Parameters [CppParam { name: "f0", ty: "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "f1", ty:
// "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "f2", ty: "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "f3", ty: "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "f4", ty:
// "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "f5", ty: "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "f6", ty: "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "f7", ty:
// "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "f8", ty: "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "f9", ty: "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "f10", ty:
// "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "f11", ty: "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "f12", ty: "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "f13", ty:
// "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "f14", ty: "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "f15", ty: "::Unity::Collections::AllocatorManager_Array16_1<T>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::Unity::Collections::AllocatorManager_Array256_1<T>::AllocatorManager_Array256_1(
    ::Unity::Collections::AllocatorManager_Array16_1<T> f0, ::Unity::Collections::AllocatorManager_Array16_1<T> f1, ::Unity::Collections::AllocatorManager_Array16_1<T> f2,
    ::Unity::Collections::AllocatorManager_Array16_1<T> f3, ::Unity::Collections::AllocatorManager_Array16_1<T> f4, ::Unity::Collections::AllocatorManager_Array16_1<T> f5,
    ::Unity::Collections::AllocatorManager_Array16_1<T> f6, ::Unity::Collections::AllocatorManager_Array16_1<T> f7, ::Unity::Collections::AllocatorManager_Array16_1<T> f8,
    ::Unity::Collections::AllocatorManager_Array16_1<T> f9, ::Unity::Collections::AllocatorManager_Array16_1<T> f10, ::Unity::Collections::AllocatorManager_Array16_1<T> f11,
    ::Unity::Collections::AllocatorManager_Array16_1<T> f12, ::Unity::Collections::AllocatorManager_Array16_1<T> f13, ::Unity::Collections::AllocatorManager_Array16_1<T> f14,
    ::Unity::Collections::AllocatorManager_Array16_1<T> f15) noexcept {
  this->f0 = f0;
  this->f1 = f1;
  this->f2 = f2;
  this->f3 = f3;
  this->f4 = f4;
  this->f5 = f5;
  this->f6 = f6;
  this->f7 = f7;
  this->f8 = f8;
  this->f9 = f9;
  this->f10 = f10;
  this->f11 = f11;
  this->f12 = f12;
  this->f13 = f13;
  this->f14 = f14;
  this->f15 = f15;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::AllocatorManager_Array256_1<T>::AllocatorManager_Array256_1() {}
// Ctor Parameters [CppParam { name: "f0", ty: "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "f1", ty:
// "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "f2", ty: "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "f3", ty: "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "f4", ty:
// "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "f5", ty: "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "f6", ty: "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "f7", ty:
// "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "f8", ty: "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "f9", ty: "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "f10", ty:
// "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "f11", ty: "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "f12", ty: "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "f13", ty:
// "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "f14", ty: "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "f15", ty: "::Unity::Collections::AllocatorManager_Array256_1<T>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::Unity::Collections::AllocatorManager_Array4096_1<T>::AllocatorManager_Array4096_1(
    ::Unity::Collections::AllocatorManager_Array256_1<T> f0, ::Unity::Collections::AllocatorManager_Array256_1<T> f1, ::Unity::Collections::AllocatorManager_Array256_1<T> f2,
    ::Unity::Collections::AllocatorManager_Array256_1<T> f3, ::Unity::Collections::AllocatorManager_Array256_1<T> f4, ::Unity::Collections::AllocatorManager_Array256_1<T> f5,
    ::Unity::Collections::AllocatorManager_Array256_1<T> f6, ::Unity::Collections::AllocatorManager_Array256_1<T> f7, ::Unity::Collections::AllocatorManager_Array256_1<T> f8,
    ::Unity::Collections::AllocatorManager_Array256_1<T> f9, ::Unity::Collections::AllocatorManager_Array256_1<T> f10, ::Unity::Collections::AllocatorManager_Array256_1<T> f11,
    ::Unity::Collections::AllocatorManager_Array256_1<T> f12, ::Unity::Collections::AllocatorManager_Array256_1<T> f13, ::Unity::Collections::AllocatorManager_Array256_1<T> f14,
    ::Unity::Collections::AllocatorManager_Array256_1<T> f15) noexcept {
  this->f0 = f0;
  this->f1 = f1;
  this->f2 = f2;
  this->f3 = f3;
  this->f4 = f4;
  this->f5 = f5;
  this->f6 = f6;
  this->f7 = f7;
  this->f8 = f8;
  this->f9 = f9;
  this->f10 = f10;
  this->f11 = f11;
  this->f12 = f12;
  this->f13 = f13;
  this->f14 = f14;
  this->f15 = f15;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::AllocatorManager_Array4096_1<T>::AllocatorManager_Array4096_1() {}
template <typename T> inline int32_t Unity::Collections::AllocatorManager_Array32768_1<T>::get_Length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Array32768_1<T>>::get(),
                                                                             "get_Length", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Collections::AllocatorManager_Array32768_1<T>::set_Length(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Array32768_1<T>>::get(), "set_Length",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::ByRef<T> Unity::Collections::AllocatorManager_Array32768_1<T>::ElementAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Array32768_1<T>>::get(), "ElementAt",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ByRef<T>, false>(this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Collections::IIndexable_1<T>"
template <typename T> constexpr Unity::Collections::AllocatorManager_Array32768_1<T>::operator ::Unity::Collections::IIndexable_1<T>*() {
  return static_cast<::Unity::Collections::IIndexable_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Collections::IIndexable_1<T>"
template <typename T> constexpr ::Unity::Collections::IIndexable_1<T>* Unity::Collections::AllocatorManager_Array32768_1<T>::i___Unity__Collections__IIndexable_1_T_() {
  return static_cast<::Unity::Collections::IIndexable_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "f0", ty: "::Unity::Collections::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "f1", ty:
// "::Unity::Collections::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "f2", ty: "::Unity::Collections::AllocatorManager_Array4096_1<T>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "f3", ty: "::Unity::Collections::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "f4", ty:
// "::Unity::Collections::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "f5", ty: "::Unity::Collections::AllocatorManager_Array4096_1<T>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "f6", ty: "::Unity::Collections::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "f7", ty:
// "::Unity::Collections::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::Unity::Collections::AllocatorManager_Array32768_1<T>::AllocatorManager_Array32768_1(
    ::Unity::Collections::AllocatorManager_Array4096_1<T> f0, ::Unity::Collections::AllocatorManager_Array4096_1<T> f1, ::Unity::Collections::AllocatorManager_Array4096_1<T> f2,
    ::Unity::Collections::AllocatorManager_Array4096_1<T> f3, ::Unity::Collections::AllocatorManager_Array4096_1<T> f4, ::Unity::Collections::AllocatorManager_Array4096_1<T> f5,
    ::Unity::Collections::AllocatorManager_Array4096_1<T> f6, ::Unity::Collections::AllocatorManager_Array4096_1<T> f7) noexcept {
  this->f0 = f0;
  this->f1 = f1;
  this->f2 = f2;
  this->f3 = f3;
  this->f4 = f4;
  this->f5 = f5;
  this->f6 = f6;
  this->f7 = f7;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::AllocatorManager_Array32768_1<T>::AllocatorManager_Array32768_1() {}
//  Writing Method size for method: ::Unity::Collections::SharedStatics_AllocatorManager_IsInstalled._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::SharedStatics_AllocatorManager_IsInstalled::*)()>(
    &::Unity::Collections::SharedStatics_AllocatorManager_IsInstalled::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f39cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SharedStatics_AllocatorManager_IsInstalled*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Collections::SharedStatics_AllocatorManager_IsInstalled::setStaticF_Ref(::Unity::Burst::SharedStatic_1<::Unity::Collections::Long1024> value) {
  ::cordl_internals::setStaticField<::Unity::Burst::SharedStatic_1<::Unity::Collections::Long1024>, "Ref",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SharedStatics_AllocatorManager_IsInstalled*>::get>(
      std::forward<::Unity::Burst::SharedStatic_1<::Unity::Collections::Long1024>>(value));
}
inline ::Unity::Burst::SharedStatic_1<::Unity::Collections::Long1024> Unity::Collections::SharedStatics_AllocatorManager_IsInstalled::getStaticF_Ref() {
  return ::cordl_internals::getStaticField<::Unity::Burst::SharedStatic_1<::Unity::Collections::Long1024>, "Ref",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SharedStatics_AllocatorManager_IsInstalled*>::get>();
}
inline void Unity::Collections::SharedStatics_AllocatorManager_IsInstalled::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SharedStatics_AllocatorManager_IsInstalled*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Collections::SharedStatics_AllocatorManager_IsInstalled* Unity::Collections::SharedStatics_AllocatorManager_IsInstalled::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Collections::SharedStatics_AllocatorManager_IsInstalled*>());
}
// Ctor Parameters []
constexpr ::Unity::Collections::SharedStatics_AllocatorManager_IsInstalled::SharedStatics_AllocatorManager_IsInstalled() {}
//  Writing Method size for method: ::Unity::Collections::SharedStatics_AllocatorManager_TableEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::SharedStatics_AllocatorManager_TableEntry::*)()>(
    &::Unity::Collections::SharedStatics_AllocatorManager_TableEntry::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f3a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SharedStatics_AllocatorManager_TableEntry*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Collections::SharedStatics_AllocatorManager_TableEntry::setStaticF_Ref(
    ::Unity::Burst::SharedStatic_1<::Unity::Collections::AllocatorManager_Array32768_1<::Unity::Collections::AllocatorManager_TableEntry>> value) {
  ::cordl_internals::setStaticField<::Unity::Burst::SharedStatic_1<::Unity::Collections::AllocatorManager_Array32768_1<::Unity::Collections::AllocatorManager_TableEntry>>, "Ref",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SharedStatics_AllocatorManager_TableEntry*>::get>(
      std::forward<::Unity::Burst::SharedStatic_1<::Unity::Collections::AllocatorManager_Array32768_1<::Unity::Collections::AllocatorManager_TableEntry>>>(value));
}
inline ::Unity::Burst::SharedStatic_1<::Unity::Collections::AllocatorManager_Array32768_1<::Unity::Collections::AllocatorManager_TableEntry>>
Unity::Collections::SharedStatics_AllocatorManager_TableEntry::getStaticF_Ref() {
  return ::cordl_internals::getStaticField<::Unity::Burst::SharedStatic_1<::Unity::Collections::AllocatorManager_Array32768_1<::Unity::Collections::AllocatorManager_TableEntry>>, "Ref",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SharedStatics_AllocatorManager_TableEntry*>::get>();
}
inline void Unity::Collections::SharedStatics_AllocatorManager_TableEntry::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SharedStatics_AllocatorManager_TableEntry*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Collections::SharedStatics_AllocatorManager_TableEntry* Unity::Collections::SharedStatics_AllocatorManager_TableEntry::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Collections::SharedStatics_AllocatorManager_TableEntry*>());
}
// Ctor Parameters []
constexpr ::Unity::Collections::SharedStatics_AllocatorManager_TableEntry::SharedStatics_AllocatorManager_TableEntry() {}
//  Writing Method size for method: ::Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose::*)()>(
    &::Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f3adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose::setStaticF_Ref(::Unity::Burst::SharedStatic_1<::Unity::Collections::Long1024> value) {
  ::cordl_internals::setStaticField<::Unity::Burst::SharedStatic_1<::Unity::Collections::Long1024>, "Ref",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose*>::get>(
      std::forward<::Unity::Burst::SharedStatic_1<::Unity::Collections::Long1024>>(value));
}
inline ::Unity::Burst::SharedStatic_1<::Unity::Collections::Long1024> Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose::getStaticF_Ref() {
  return ::cordl_internals::getStaticField<::Unity::Burst::SharedStatic_1<::Unity::Collections::Long1024>, "Ref",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose*>::get>();
}
inline void Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose* Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose*>());
}
// Ctor Parameters []
constexpr ::Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose::SharedStatics_AllocatorManager_IsAutoDispose() {}
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SharedStatics._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::AllocatorManager_SharedStatics::*)()>(
    &::Unity::Collections::AllocatorManager_SharedStatics::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f39c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SharedStatics*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Collections::AllocatorManager_SharedStatics::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_SharedStatics*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Collections::AllocatorManager_SharedStatics* Unity::Collections::AllocatorManager_SharedStatics::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Collections::AllocatorManager_SharedStatics*>());
}
// Ctor Parameters []
constexpr ::Unity::Collections::AllocatorManager_SharedStatics::AllocatorManager_SharedStatics() {}
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_Managed.RegisterDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::Unity::Collections::AllocatorManager_TryFunction*)>(
    &::Unity::Collections::AllocatorManager_Managed::RegisterDelegate)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x62f1f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Managed*>::get(), "RegisterDelegate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_TryFunction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_Managed.UnregisterDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::Unity::Collections::AllocatorManager_Managed::UnregisterDelegate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x62f3b64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Managed*>::get(), "UnregisterDelegate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Collections::AllocatorManager_Managed::setStaticF_TryFunctionDelegates(
    ::ArrayW<::Unity::Collections::AllocatorManager_TryFunction*, ::Array<::Unity::Collections::AllocatorManager_TryFunction*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Unity::Collections::AllocatorManager_TryFunction*, ::Array<::Unity::Collections::AllocatorManager_TryFunction*>*>, "TryFunctionDelegates",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Managed*>::get>(
      std::forward<::ArrayW<::Unity::Collections::AllocatorManager_TryFunction*, ::Array<::Unity::Collections::AllocatorManager_TryFunction*>*>>(value));
}
inline ::ArrayW<::Unity::Collections::AllocatorManager_TryFunction*, ::Array<::Unity::Collections::AllocatorManager_TryFunction*>*>
Unity::Collections::AllocatorManager_Managed::getStaticF_TryFunctionDelegates() {
  return ::cordl_internals::getStaticField<::ArrayW<::Unity::Collections::AllocatorManager_TryFunction*, ::Array<::Unity::Collections::AllocatorManager_TryFunction*>*>, "TryFunctionDelegates",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Managed*>::get>();
}
inline void Unity::Collections::AllocatorManager_Managed::RegisterDelegate(int32_t index, ::Unity::Collections::AllocatorManager_TryFunction* function) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Managed*>::get(), "RegisterDelegate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_TryFunction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, index, function);
}
inline void Unity::Collections::AllocatorManager_Managed::UnregisterDelegate(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_Managed*>::get(), "UnregisterDelegate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, index);
}
// Ctor Parameters []
constexpr ::Unity::Collections::AllocatorManager_Managed::AllocatorManager_Managed() {}
template <typename T>
inline void Unity::Collections::AllocatorManager_AllocatorCache_1<T>::setStaticF_TryFunction(::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*> value) {
  ::cordl_internals::setStaticField<::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*>, "TryFunction",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorCache_1<T>*>::get>(
      std::forward<::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*>>(value));
}
template <typename T> inline ::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*> Unity::Collections::AllocatorManager_AllocatorCache_1<T>::getStaticF_TryFunction() {
  return ::cordl_internals::getStaticField<::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*>, "TryFunction",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorCache_1<T>*>::get>();
}
template <typename T> inline void Unity::Collections::AllocatorManager_AllocatorCache_1<T>::setStaticF_CachedFunction(::Unity::Collections::AllocatorManager_TryFunction* value) {
  ::cordl_internals::setStaticField<::Unity::Collections::AllocatorManager_TryFunction*, "CachedFunction",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorCache_1<T>*>::get>(
      std::forward<::Unity::Collections::AllocatorManager_TryFunction*>(value));
}
template <typename T> inline ::Unity::Collections::AllocatorManager_TryFunction* Unity::Collections::AllocatorManager_AllocatorCache_1<T>::getStaticF_CachedFunction() {
  return ::cordl_internals::getStaticField<::Unity::Collections::AllocatorManager_TryFunction*, "CachedFunction",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager_AllocatorCache_1<T>*>::get>();
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::AllocatorManager_AllocatorCache_1<T>::AllocatorManager_AllocatorCache_1() {}
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.Allocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(::Unity::Collections::AllocatorManager_AllocatorHandle, int32_t, int32_t, int32_t)>(
    &::Unity::Collections::AllocatorManager::Allocate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x62f15e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "Allocate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.Free
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Collections::AllocatorManager_AllocatorHandle, void*, int32_t, int32_t, int32_t)>(
    &::Unity::Collections::AllocatorManager::Free)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x62f1684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "Free", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.Free
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Collections::AllocatorManager_AllocatorHandle, void*)>(
    &::Unity::Collections::AllocatorManager::Free)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x62f172c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "Free", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.ConvertToAllocatorHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::AllocatorManager_AllocatorHandle (*)(::Unity::Collections::Allocator)>(
    &::Unity::Collections::AllocatorManager::ConvertToAllocatorHandle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f17b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "ConvertToAllocatorHandle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.CheckDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<bool>)>(&::Unity::Collections::AllocatorManager::CheckDelegate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62f17bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "CheckDelegate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.UseDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::Collections::AllocatorManager::UseDelegate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x62f17c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "UseDelegate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.allocate_block
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<::Unity::Collections::AllocatorManager_Block>)>(
    &::Unity::Collections::AllocatorManager::allocate_block)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x62f181c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "allocate_block", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.forward_mono_allocate_block
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::Unity::Collections::AllocatorManager_Block>, ::ByRef<int32_t>)>(
    &::Unity::Collections::AllocatorManager::forward_mono_allocate_block)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x62f1984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "forward_mono_allocate_block", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.LegacyOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::Allocator (*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::AllocatorManager::LegacyOf)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62f1a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "LegacyOf", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.TryLegacy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<::Unity::Collections::AllocatorManager_Block>)>(
    &::Unity::Collections::AllocatorManager::TryLegacy)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x62f1ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "TryLegacy", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.Try
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<::Unity::Collections::AllocatorManager_Block>)>(&::Unity::Collections::AllocatorManager::Try)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x62f1c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "Try", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::Collections::AllocatorManager::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f1ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "Initialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.Install
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Unity::Collections::AllocatorManager_AllocatorHandle, ::System::IntPtr, ::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*>,
                         ::Unity::Collections::AllocatorManager_TryFunction*, bool)>(&::Unity::Collections::AllocatorManager::Install)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x62f1ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "Install", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_TryFunction*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.Install
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Collections::AllocatorManager_AllocatorHandle, ::System::IntPtr,
                                                                                           ::Unity::Collections::AllocatorManager_TryFunction*)>(&::Unity::Collections::AllocatorManager::Install)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x62f2008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "Install", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_TryFunction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.Register
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::AllocatorManager_AllocatorHandle (*)(
    ::System::IntPtr, ::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*>, bool, bool, int32_t)>(&::Unity::Collections::AllocatorManager::Register)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x62f20f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.Shutdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::Collections::AllocatorManager::Shutdown)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f23cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "Shutdown",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.IsCustomAllocator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::AllocatorManager::IsCustomAllocator)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62f23d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "IsCustomAllocator", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.CheckFailedToAllocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::Unity::Collections::AllocatorManager::CheckFailedToAllocate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x62f23dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "CheckFailedToAllocate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.CheckFailedToFree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::Unity::Collections::AllocatorManager::CheckFailedToFree)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x62f2430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "CheckFailedToFree",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.CheckValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::AllocatorManager::CheckValid)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62f2484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "CheckValid", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Collections::AllocatorManager::setStaticF_Invalid(::Unity::Collections::AllocatorManager_AllocatorHandle value) {
  ::cordl_internals::setStaticField<::Unity::Collections::AllocatorManager_AllocatorHandle, "Invalid",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get>(
      std::forward<::Unity::Collections::AllocatorManager_AllocatorHandle>(value));
}
inline ::Unity::Collections::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager::getStaticF_Invalid() {
  return ::cordl_internals::getStaticField<::Unity::Collections::AllocatorManager_AllocatorHandle, "Invalid",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get>();
}
inline void Unity::Collections::AllocatorManager::setStaticF_None(::Unity::Collections::AllocatorManager_AllocatorHandle value) {
  ::cordl_internals::setStaticField<::Unity::Collections::AllocatorManager_AllocatorHandle, "None",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get>(
      std::forward<::Unity::Collections::AllocatorManager_AllocatorHandle>(value));
}
inline ::Unity::Collections::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager::getStaticF_None() {
  return ::cordl_internals::getStaticField<::Unity::Collections::AllocatorManager_AllocatorHandle, "None",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get>();
}
inline void Unity::Collections::AllocatorManager::setStaticF_Temp(::Unity::Collections::AllocatorManager_AllocatorHandle value) {
  ::cordl_internals::setStaticField<::Unity::Collections::AllocatorManager_AllocatorHandle, "Temp",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get>(
      std::forward<::Unity::Collections::AllocatorManager_AllocatorHandle>(value));
}
inline ::Unity::Collections::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager::getStaticF_Temp() {
  return ::cordl_internals::getStaticField<::Unity::Collections::AllocatorManager_AllocatorHandle, "Temp",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get>();
}
inline void Unity::Collections::AllocatorManager::setStaticF_TempJob(::Unity::Collections::AllocatorManager_AllocatorHandle value) {
  ::cordl_internals::setStaticField<::Unity::Collections::AllocatorManager_AllocatorHandle, "TempJob",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get>(
      std::forward<::Unity::Collections::AllocatorManager_AllocatorHandle>(value));
}
inline ::Unity::Collections::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager::getStaticF_TempJob() {
  return ::cordl_internals::getStaticField<::Unity::Collections::AllocatorManager_AllocatorHandle, "TempJob",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get>();
}
inline void Unity::Collections::AllocatorManager::setStaticF_Persistent(::Unity::Collections::AllocatorManager_AllocatorHandle value) {
  ::cordl_internals::setStaticField<::Unity::Collections::AllocatorManager_AllocatorHandle, "Persistent",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get>(
      std::forward<::Unity::Collections::AllocatorManager_AllocatorHandle>(value));
}
inline ::Unity::Collections::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager::getStaticF_Persistent() {
  return ::cordl_internals::getStaticField<::Unity::Collections::AllocatorManager_AllocatorHandle, "Persistent",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get>();
}
inline void Unity::Collections::AllocatorManager::setStaticF_AudioKernel(::Unity::Collections::AllocatorManager_AllocatorHandle value) {
  ::cordl_internals::setStaticField<::Unity::Collections::AllocatorManager_AllocatorHandle, "AudioKernel",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get>(
      std::forward<::Unity::Collections::AllocatorManager_AllocatorHandle>(value));
}
inline ::Unity::Collections::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager::getStaticF_AudioKernel() {
  return ::cordl_internals::getStaticField<::Unity::Collections::AllocatorManager_AllocatorHandle, "AudioKernel",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get>();
}
inline void Unity::Collections::AllocatorManager::setStaticF_NumGlobalScratchAllocators(uint16_t value) {
  ::cordl_internals::setStaticField<uint16_t, "NumGlobalScratchAllocators", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get>(
      std::forward<uint16_t>(value));
}
inline uint16_t Unity::Collections::AllocatorManager::getStaticF_NumGlobalScratchAllocators() {
  return ::cordl_internals::getStaticField<uint16_t, "NumGlobalScratchAllocators", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get>();
}
inline void Unity::Collections::AllocatorManager::setStaticF_MaxNumGlobalAllocators(uint16_t value) {
  ::cordl_internals::setStaticField<uint16_t, "MaxNumGlobalAllocators", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get>(
      std::forward<uint16_t>(value));
}
inline uint16_t Unity::Collections::AllocatorManager::getStaticF_MaxNumGlobalAllocators() {
  return ::cordl_internals::getStaticField<uint16_t, "MaxNumGlobalAllocators", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get>();
}
inline void Unity::Collections::AllocatorManager::setStaticF_GlobalAllocatorBaseIndex(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "GlobalAllocatorBaseIndex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get>(
      std::forward<uint32_t>(value));
}
inline uint32_t Unity::Collections::AllocatorManager::getStaticF_GlobalAllocatorBaseIndex() {
  return ::cordl_internals::getStaticField<uint32_t, "GlobalAllocatorBaseIndex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get>();
}
inline void Unity::Collections::AllocatorManager::setStaticF_FirstGlobalScratchpadAllocatorIndex(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "FirstGlobalScratchpadAllocatorIndex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get>(
      std::forward<uint32_t>(value));
}
inline uint32_t Unity::Collections::AllocatorManager::getStaticF_FirstGlobalScratchpadAllocatorIndex() {
  return ::cordl_internals::getStaticField<uint32_t, "FirstGlobalScratchpadAllocatorIndex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get>();
}
template <typename T> inline ::Unity::Collections::AllocatorManager_Block Unity::Collections::AllocatorManager::AllocateBlock(::ByRef<T> t, int32_t sizeOf, int32_t alignOf, int32_t items) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "AllocateBlock",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_Block, false>(nullptr, ___internal_method, t, sizeOf, alignOf, items);
}
template <typename T, typename U> inline ::Unity::Collections::AllocatorManager_Block Unity::Collections::AllocatorManager::AllocateBlock(::ByRef<T> t, U u, int32_t items) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "AllocateBlock",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<U>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_Block, false>(nullptr, ___internal_method, t, u, items);
}
template <typename T> inline void* Unity::Collections::AllocatorManager::Allocate(::ByRef<T> t, int32_t sizeOf, int32_t alignOf, int32_t items) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "Allocate",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, t, sizeOf, alignOf, items);
}
template <typename T, typename U> inline U* Unity::Collections::AllocatorManager::Allocate(::ByRef<T> t, U u, int32_t items) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "Allocate",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<U>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get() }));
  return ::cordl_internals::RunMethodRethrow<U*, false>(nullptr, ___internal_method, t, u, items);
}
template <typename T, typename U> inline void* Unity::Collections::AllocatorManager::AllocateStruct(::ByRef<T> t, U u, int32_t items) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "AllocateStruct",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<U>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get() }));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, t, u, items);
}
template <typename T> inline void Unity::Collections::AllocatorManager::FreeBlock(::ByRef<T> t, ::ByRef<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "FreeBlock",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t, block);
}
template <typename T> inline void Unity::Collections::AllocatorManager::Free(::ByRef<T> t, void* pointer, int32_t sizeOf, int32_t alignOf, int32_t items) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "Free",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t, pointer, sizeOf, alignOf, items);
}
template <typename T, typename U> inline void Unity::Collections::AllocatorManager::Free(::ByRef<T> t, U* pointer, int32_t items) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "Free",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<U*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t, pointer, items);
}
inline void* Unity::Collections::AllocatorManager::Allocate(::Unity::Collections::AllocatorManager_AllocatorHandle handle, int32_t itemSizeInBytes, int32_t alignmentInBytes, int32_t items) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "Allocate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, handle, itemSizeInBytes, alignmentInBytes, items);
}
template <typename T> inline T* Unity::Collections::AllocatorManager::Allocate(::Unity::Collections::AllocatorManager_AllocatorHandle handle, int32_t items) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "Allocate",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T*, false>(nullptr, ___internal_method, handle, items);
}
inline void Unity::Collections::AllocatorManager::Free(::Unity::Collections::AllocatorManager_AllocatorHandle handle, void* pointer, int32_t itemSizeInBytes, int32_t alignmentInBytes, int32_t items) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "Free", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle, pointer, itemSizeInBytes, alignmentInBytes, items);
}
inline void Unity::Collections::AllocatorManager::Free(::Unity::Collections::AllocatorManager_AllocatorHandle handle, void* pointer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "Free", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle, pointer);
}
template <typename T> inline void Unity::Collections::AllocatorManager::Free(::Unity::Collections::AllocatorManager_AllocatorHandle handle, T* pointer, int32_t items) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "Free",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle, pointer, items);
}
inline ::Unity::Collections::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager::ConvertToAllocatorHandle(::Unity::Collections::Allocator a) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "ConvertToAllocatorHandle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_AllocatorHandle, false>(nullptr, ___internal_method, a);
}
inline void Unity::Collections::AllocatorManager::CheckDelegate(::ByRef<bool> useDelegate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "CheckDelegate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, useDelegate);
}
inline bool Unity::Collections::AllocatorManager::UseDelegate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "UseDelegate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline int32_t Unity::Collections::AllocatorManager::allocate_block(::ByRef<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "allocate_block", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, block);
}
inline void Unity::Collections::AllocatorManager::forward_mono_allocate_block(::ByRef<::Unity::Collections::AllocatorManager_Block> block, ::ByRef<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "forward_mono_allocate_block", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, block, error);
}
inline ::Unity::Collections::Allocator Unity::Collections::AllocatorManager::LegacyOf(::Unity::Collections::AllocatorManager_AllocatorHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "LegacyOf", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::Allocator, false>(nullptr, ___internal_method, handle);
}
inline int32_t Unity::Collections::AllocatorManager::TryLegacy(::ByRef<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "TryLegacy", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, block);
}
inline int32_t Unity::Collections::AllocatorManager::Try(::ByRef<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "Try", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::AllocatorManager_Block>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, block);
}
inline void Unity::Collections::AllocatorManager::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Unity::Collections::AllocatorManager::Install(::Unity::Collections::AllocatorManager_AllocatorHandle handle, ::System::IntPtr allocatorState,
                                                          ::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*> functionPointer,
                                                          ::Unity::Collections::AllocatorManager_TryFunction* function, bool IsAutoDispose) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "Install", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_TryFunction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle, allocatorState, functionPointer, function, IsAutoDispose);
}
inline void Unity::Collections::AllocatorManager::Install(::Unity::Collections::AllocatorManager_AllocatorHandle handle, ::System::IntPtr allocatorState,
                                                          ::Unity::Collections::AllocatorManager_TryFunction* function) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "Install", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_TryFunction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle, allocatorState, function);
}
inline ::Unity::Collections::AllocatorManager_AllocatorHandle
Unity::Collections::AllocatorManager::Register(::System::IntPtr allocatorState, ::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*> functionPointer,
                                               bool IsAutoDispose, bool isGlobal, int32_t globalIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_AllocatorHandle, false>(nullptr, ___internal_method, allocatorState, functionPointer, IsAutoDispose, isGlobal,
                                                                                                            globalIndex);
}
template <typename T> inline void Unity::Collections::AllocatorManager::Register(::ByRef<T> t, bool IsAutoDispose, bool isGlobal, int32_t globalIndex) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "Register",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t, IsAutoDispose, isGlobal, globalIndex);
}
template <typename T> inline void Unity::Collections::AllocatorManager::UnmanagedUnregister(::ByRef<T> t) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "UnmanagedUnregister",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t);
}
template <typename T> inline void Unity::Collections::AllocatorManager::Unregister(::ByRef<T> t) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "Unregister",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t);
}
template <typename T>
inline ::ByRef<T> Unity::Collections::AllocatorManager::CreateAllocator(::Unity::Collections::AllocatorManager_AllocatorHandle backingAllocator, bool isGlobal, int32_t globalIndex) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "CreateAllocator",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ByRef<T>, false>(nullptr, ___internal_method, backingAllocator, isGlobal, globalIndex);
}
template <typename T> inline void Unity::Collections::AllocatorManager::DestroyAllocator(::ByRef<T> t, ::Unity::Collections::AllocatorManager_AllocatorHandle backingAllocator) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "DestroyAllocator",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t, backingAllocator);
}
inline void Unity::Collections::AllocatorManager::Shutdown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "Shutdown",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool Unity::Collections::AllocatorManager::IsCustomAllocator(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "IsCustomAllocator", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, allocator);
}
inline void Unity::Collections::AllocatorManager::CheckFailedToAllocate(int32_t error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "CheckFailedToAllocate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, error);
}
inline void Unity::Collections::AllocatorManager::CheckFailedToFree(int32_t error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "CheckFailedToFree",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, error);
}
inline void Unity::Collections::AllocatorManager::CheckValid(::Unity::Collections::AllocatorManager_AllocatorHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::AllocatorManager*>::get(), "CheckValid", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle);
}
// Ctor Parameters []
constexpr ::Unity::Collections::AllocatorManager::AllocatorManager() {}
