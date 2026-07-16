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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AllocatorManager_TryFunction::*)(::System::Object*, ::System::IntPtr)>(
    &::Unity::Collections::AllocatorManager_TryFunction::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x64a33e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_TryFunction*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_TryFunction.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::AllocatorManager_TryFunction::*)(::System::IntPtr, ::by_ref<::Unity::Collections::AllocatorManager_Block>)>(
    &::Unity::Collections::AllocatorManager_TryFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64a344c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_TryFunction*>(), { ::i2c::class_of<::Unity::Collections::AllocatorManager_TryFunction*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_TryFunction.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::Unity::Collections::AllocatorManager_TryFunction::*)(::System::IntPtr, ::by_ref<::Unity::Collections::AllocatorManager_Block>, ::System::AsyncCallback*, ::System::Object*)>(
    &::Unity::Collections::AllocatorManager_TryFunction::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x64a3460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_TryFunction*>(), { ::i2c::class_of<::Unity::Collections::AllocatorManager_TryFunction*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_TryFunction.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::AllocatorManager_TryFunction::*)(
    ::by_ref<::Unity::Collections::AllocatorManager_Block>, ::System::IAsyncResult*)>(&::Unity::Collections::AllocatorManager_TryFunction::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x64a3508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_TryFunction*>(), { ::i2c::class_of<::Unity::Collections::AllocatorManager_TryFunction*>(), 15 }));
    return ___internal_method;
  }
};
inline void Unity::Collections::AllocatorManager_TryFunction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_TryFunction*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t Unity::Collections::AllocatorManager_TryFunction::Invoke(::System::IntPtr allocatorState, ::by_ref<::Unity::Collections::AllocatorManager_Block> block) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::AllocatorManager_TryFunction*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, allocatorState, block);
}
inline ::System::IAsyncResult* Unity::Collections::AllocatorManager_TryFunction::BeginInvoke(::System::IntPtr allocatorState, ::by_ref<::Unity::Collections::AllocatorManager_Block> block,
                                                                                             ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::AllocatorManager_TryFunction*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, allocatorState, block, callback, object);
}
inline int32_t Unity::Collections::AllocatorManager_TryFunction::EndInvoke(::by_ref<::Unity::Collections::AllocatorManager_Block> block, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::AllocatorManager_TryFunction*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, block, result);
}
inline ::Unity::Collections::AllocatorManager_TryFunction* Unity::Collections::AllocatorManager_TryFunction::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Collections::AllocatorManager_TryFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::Unity::Collections::AllocatorManager_TryFunction::AllocatorManager_TryFunction() {}
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.get_TableEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Collections::AllocatorManager_TableEntry> (::Unity::Collections::AllocatorManager_AllocatorHandle::*)()>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::get_TableEntry)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x64a271c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "get_TableEntry", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.get_IsInstalled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::AllocatorManager_AllocatorHandle::*)()>(&::Unity::Collections::AllocatorManager_AllocatorHandle::get_IsInstalled)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x64a352c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "get_IsInstalled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.IncrementVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AllocatorManager_AllocatorHandle::*)()>(&::Unity::Collections::AllocatorManager_AllocatorHandle::IncrementVersion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a3660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "IncrementVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.Rewind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AllocatorManager_AllocatorHandle::*)()>(&::Unity::Collections::AllocatorManager_AllocatorHandle::Rewind)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a3664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "Rewind", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.Install
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AllocatorManager_AllocatorHandle::*)(::Unity::Collections::AllocatorManager_TableEntry)>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::Install)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x64a2d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                                                                                           { "Install", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_TableEntry>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.op_Implicit___Unity__Collections__AllocatorManager_AllocatorHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::AllocatorManager_AllocatorHandle (*)(::Unity::Collections::Allocator)>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::op_Implicit___Unity__Collections__AllocatorManager_AllocatorHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a2a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::AllocatorManager_AllocatorHandle::*)()>(&::Unity::Collections::AllocatorManager_AllocatorHandle::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a3668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.CheckAllocatedSuccessfully
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Unity::Collections::AllocatorManager_AllocatorHandle::CheckAllocatedSuccessfully)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x64a3670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "CheckAllocatedSuccessfully", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.get_Function
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::AllocatorManager_TryFunction* (::Unity::Collections::AllocatorManager_AllocatorHandle::*)()>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::get_Function)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a36f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "get_Function", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.Try
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::AllocatorManager_AllocatorHandle::*)(::by_ref<::Unity::Collections::AllocatorManager_Block>)>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::Try)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x64a36f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                                                                                           { "Try", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::AllocatorManager_AllocatorHandle (::Unity::Collections::AllocatorManager_AllocatorHandle::*)()>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a28f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "get_Handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.set_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AllocatorManager_AllocatorHandle::*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::set_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a3764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                                                                                           { "set_Handle", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.get_ToAllocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::Allocator (::Unity::Collections::AllocatorManager_AllocatorHandle::*)()>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::get_ToAllocator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a376c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "get_ToAllocator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.get_IsCustomAllocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::AllocatorManager_AllocatorHandle::*)()>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::get_IsCustomAllocator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64a3774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "get_IsCustomAllocator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.get_IsAutoDispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::AllocatorManager_AllocatorHandle::*)()>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::get_IsAutoDispose)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x64a3784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "get_IsAutoDispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AllocatorManager_AllocatorHandle::*)()>(&::Unity::Collections::AllocatorManager_AllocatorHandle::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64a3868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::AllocatorManager_AllocatorHandle::*)(::System::Object*)>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x64a387c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                                                                                          { ::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::AllocatorManager_AllocatorHandle::*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64a3928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::AllocatorManager_AllocatorHandle::*)(::Unity::Collections::Allocator)>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64a3938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::AllocatorManager_AllocatorHandle::*)()>(&::Unity::Collections::AllocatorManager_AllocatorHandle::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a3948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                                                                                          { ::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Collections::AllocatorManager_AllocatorHandle, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64a3950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
            { "op_Equality", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Collections::AllocatorManager_AllocatorHandle, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64a3960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
            { "op_Inequality", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Collections::AllocatorManager_AllocatorHandle, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::op_LessThan)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64a3970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
            { "op_LessThan", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Collections::AllocatorManager_AllocatorHandle, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::op_GreaterThan)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64a3980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
            { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Collections::AllocatorManager_AllocatorHandle, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64a3990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
            { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Collections::AllocatorManager_AllocatorHandle, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64a39a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
            { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_AllocatorHandle.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::AllocatorManager_AllocatorHandle::*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::AllocatorManager_AllocatorHandle::CompareTo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a39b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                                                                                           { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
inline ::by_ref<::Unity::Collections::AllocatorManager_TableEntry> Unity::Collections::AllocatorManager_AllocatorHandle::get_TableEntry() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "get_TableEntry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Collections::AllocatorManager_TableEntry>>(*this, ___internal_method);
}
inline bool Unity::Collections::AllocatorManager_AllocatorHandle::get_IsInstalled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "get_IsInstalled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_AllocatorHandle::IncrementVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "IncrementVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_AllocatorHandle::Rewind() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "Rewind", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_AllocatorHandle::Install(::Unity::Collections::AllocatorManager_TableEntry tableEntry) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                                                                                         { "Install", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_TableEntry>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, tableEntry);
}
inline ::Unity::Collections::AllocatorManager_AllocatorHandle
Unity::Collections::AllocatorManager_AllocatorHandle::op_Implicit___Unity__Collections__AllocatorManager_AllocatorHandle(::Unity::Collections::Allocator a) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_AllocatorHandle>(nullptr, ___internal_method, a);
}
inline int32_t Unity::Collections::AllocatorManager_AllocatorHandle::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline int32_t Unity::Collections::AllocatorManager_AllocatorHandle::TryAllocateBlock(::by_ref<::Unity::Collections::AllocatorManager_Block> block, int32_t items) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                                       { "TryAllocateBlock", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, block, items);
}
template <typename T> inline ::Unity::Collections::AllocatorManager_Block Unity::Collections::AllocatorManager_AllocatorHandle::AllocateBlock(int32_t items) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "AllocateBlock", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_Block>(*this, ___internal_method, items);
}
inline void Unity::Collections::AllocatorManager_AllocatorHandle::CheckAllocatedSuccessfully(int32_t error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "CheckAllocatedSuccessfully", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, error);
}
inline ::Unity::Collections::AllocatorManager_TryFunction* Unity::Collections::AllocatorManager_AllocatorHandle::get_Function() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "get_Function", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_TryFunction*>(*this, ___internal_method);
}
inline int32_t Unity::Collections::AllocatorManager_AllocatorHandle::Try(::by_ref<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                                                                                         { "Try", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, block);
}
inline ::Unity::Collections::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager_AllocatorHandle::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_AllocatorHandle>(*this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_AllocatorHandle::set_Handle(::Unity::Collections::AllocatorManager_AllocatorHandle value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                                                                                         { "set_Handle", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Collections::Allocator Unity::Collections::AllocatorManager_AllocatorHandle::get_ToAllocator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "get_ToAllocator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::Allocator>(*this, ___internal_method);
}
inline bool Unity::Collections::AllocatorManager_AllocatorHandle::get_IsCustomAllocator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "get_IsCustomAllocator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Unity::Collections::AllocatorManager_AllocatorHandle::get_IsAutoDispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "get_IsAutoDispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_AllocatorHandle::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Unity::Collections::AllocatorManager_AllocatorHandle::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool Unity::Collections::AllocatorManager_AllocatorHandle::Equals(::Unity::Collections::AllocatorManager_AllocatorHandle other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Unity::Collections::AllocatorManager_AllocatorHandle::Equals(::Unity::Collections::Allocator other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Unity::Collections::AllocatorManager_AllocatorHandle::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Unity::Collections::AllocatorManager_AllocatorHandle::op_Equality(::Unity::Collections::AllocatorManager_AllocatorHandle lhs, ::Unity::Collections::AllocatorManager_AllocatorHandle rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                       { "op_Equality", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Unity::Collections::AllocatorManager_AllocatorHandle::op_Inequality(::Unity::Collections::AllocatorManager_AllocatorHandle lhs,
                                                                                ::Unity::Collections::AllocatorManager_AllocatorHandle rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
          { "op_Inequality", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Unity::Collections::AllocatorManager_AllocatorHandle::op_LessThan(::Unity::Collections::AllocatorManager_AllocatorHandle lhs, ::Unity::Collections::AllocatorManager_AllocatorHandle rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                       { "op_LessThan", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Unity::Collections::AllocatorManager_AllocatorHandle::op_GreaterThan(::Unity::Collections::AllocatorManager_AllocatorHandle lhs,
                                                                                 ::Unity::Collections::AllocatorManager_AllocatorHandle rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
          { "op_GreaterThan", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Unity::Collections::AllocatorManager_AllocatorHandle::op_LessThanOrEqual(::Unity::Collections::AllocatorManager_AllocatorHandle lhs,
                                                                                     ::Unity::Collections::AllocatorManager_AllocatorHandle rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
          { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Unity::Collections::AllocatorManager_AllocatorHandle::op_GreaterThanOrEqual(::Unity::Collections::AllocatorManager_AllocatorHandle lhs,
                                                                                        ::Unity::Collections::AllocatorManager_AllocatorHandle rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
          { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline int32_t Unity::Collections::AllocatorManager_AllocatorHandle::CompareTo(::Unity::Collections::AllocatorManager_AllocatorHandle other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                                                                                         { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Unity::Collections::AllocatorManager_IAllocator"
constexpr Unity::Collections::AllocatorManager_AllocatorHandle::operator ::Unity::Collections::AllocatorManager_IAllocator*() {
  return static_cast<::Unity::Collections::AllocatorManager_IAllocator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::AllocatorManager_IAllocator"
constexpr ::Unity::Collections::AllocatorManager_IAllocator* Unity::Collections::AllocatorManager_AllocatorHandle::i___Unity__Collections__AllocatorManager_IAllocator() {
  return static_cast<::Unity::Collections::AllocatorManager_IAllocator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Collections::AllocatorManager_AllocatorHandle::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::AllocatorManager_AllocatorHandle::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>"
constexpr Unity::Collections::AllocatorManager_AllocatorHandle::operator ::System::IEquatable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>"
constexpr ::System::IEquatable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>*
Unity::Collections::AllocatorManager_AllocatorHandle::i___System__IEquatable_1___Unity__Collections__AllocatorManager_AllocatorHandle_() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>"
constexpr Unity::Collections::AllocatorManager_AllocatorHandle::operator ::System::IComparable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>"
constexpr ::System::IComparable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>*
Unity::Collections::AllocatorManager_AllocatorHandle::i___System__IComparable_1___Unity__Collections__AllocatorManager_AllocatorHandle_() {
  return static_cast<::System::IComparable_1<::Unity::Collections::AllocatorManager_AllocatorHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AllocatorManager_Range::*)()>(&::Unity::Collections::AllocatorManager_Range::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x64a39bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Range>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::AllocatorManager_Range::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Range>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Collections::AllocatorManager_Range::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::AllocatorManager_Range::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Unity::Collections::AllocatorManager_Block::*)()>(&::Unity::Collections::AllocatorManager_Block::get_Bytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64a2a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Block>(), { "get_Bytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_Block.get_AllocatedBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Unity::Collections::AllocatorManager_Block::*)()>(&::Unity::Collections::AllocatorManager_Block::get_AllocatedBytes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a39fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Block>(), { "get_AllocatedBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_Block.get_Alignment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::AllocatorManager_Block::*)()>(&::Unity::Collections::AllocatorManager_Block::get_Alignment)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64a2a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Block>(), { "get_Alignment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_Block.set_Alignment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AllocatorManager_Block::*)(int32_t)>(&::Unity::Collections::AllocatorManager_Block::set_Alignment)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x64a3a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Block>(), { "set_Alignment", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_Block.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AllocatorManager_Block::*)()>(&::Unity::Collections::AllocatorManager_Block::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a39f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Block>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_Block.TryAllocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::AllocatorManager_Block::*)()>(&::Unity::Collections::AllocatorManager_Block::TryAllocate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64a3aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Block>(), { "TryAllocate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_Block.TryFree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::AllocatorManager_Block::*)()>(&::Unity::Collections::AllocatorManager_Block::TryFree)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64a3a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Block>(), { "TryFree", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_Block.Allocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AllocatorManager_Block::*)()>(&::Unity::Collections::AllocatorManager_Block::Allocate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a3afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Block>(), { "Allocate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_Block.Free
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AllocatorManager_Block::*)()>(&::Unity::Collections::AllocatorManager_Block::Free)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a3b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Block>(), { "Free", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_Block.CheckFailedToAllocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AllocatorManager_Block::*)(int32_t)>(&::Unity::Collections::AllocatorManager_Block::CheckFailedToAllocate)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x64a3b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Block>(), { "CheckFailedToAllocate", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_Block.CheckFailedToFree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AllocatorManager_Block::*)(int32_t)>(&::Unity::Collections::AllocatorManager_Block::CheckFailedToFree)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x64a3bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Block>(), { "CheckFailedToFree", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline int64_t Unity::Collections::AllocatorManager_Block::get_Bytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Block>(), { "get_Bytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline int64_t Unity::Collections::AllocatorManager_Block::get_AllocatedBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Block>(), { "get_AllocatedBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline int32_t Unity::Collections::AllocatorManager_Block::get_Alignment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Block>(), { "get_Alignment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_Block::set_Alignment(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Block>(), { "set_Alignment", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Unity::Collections::AllocatorManager_Block::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Block>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline int32_t Unity::Collections::AllocatorManager_Block::TryAllocate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Block>(), { "TryAllocate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Unity::Collections::AllocatorManager_Block::TryFree() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Block>(), { "TryFree", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_Block::Allocate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Block>(), { "Allocate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_Block::Free() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Block>(), { "Free", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_Block::CheckFailedToAllocate(int32_t error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Block>(), { "CheckFailedToAllocate", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, error);
}
inline void Unity::Collections::AllocatorManager_Block::CheckFailedToFree(int32_t error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Block>(), { "CheckFailedToFree", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, error);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Collections::AllocatorManager_Block::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::AllocatorManager_Block::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::AllocatorManager_TryFunction* (::Unity::Collections::AllocatorManager_IAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_IAllocator::get_Function)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_IAllocator*>(), { ::i2c::class_of<::Unity::Collections::AllocatorManager_IAllocator*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_IAllocator.Try
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::AllocatorManager_IAllocator::*)(::by_ref<::Unity::Collections::AllocatorManager_Block>)>(
    &::Unity::Collections::AllocatorManager_IAllocator::Try)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_IAllocator*>(), { ::i2c::class_of<::Unity::Collections::AllocatorManager_IAllocator*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_IAllocator.get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::AllocatorManager_AllocatorHandle (::Unity::Collections::AllocatorManager_IAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_IAllocator::get_Handle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_IAllocator*>(), { ::i2c::class_of<::Unity::Collections::AllocatorManager_IAllocator*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_IAllocator.set_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AllocatorManager_IAllocator::*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::AllocatorManager_IAllocator::set_Handle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_IAllocator*>(), { ::i2c::class_of<::Unity::Collections::AllocatorManager_IAllocator*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_IAllocator.get_ToAllocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::Allocator (::Unity::Collections::AllocatorManager_IAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_IAllocator::get_ToAllocator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_IAllocator*>(), { ::i2c::class_of<::Unity::Collections::AllocatorManager_IAllocator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_IAllocator.get_IsCustomAllocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::AllocatorManager_IAllocator::*)()>(&::Unity::Collections::AllocatorManager_IAllocator::get_IsCustomAllocator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_IAllocator*>(), { ::i2c::class_of<::Unity::Collections::AllocatorManager_IAllocator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_IAllocator.get_IsAutoDispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::AllocatorManager_IAllocator::*)()>(&::Unity::Collections::AllocatorManager_IAllocator::get_IsAutoDispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a3c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_IAllocator*>(), { ::i2c::class_of<::Unity::Collections::AllocatorManager_IAllocator*>(), 6 }));
    return ___internal_method;
  }
};
inline ::Unity::Collections::AllocatorManager_TryFunction* Unity::Collections::AllocatorManager_IAllocator::get_Function() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::AllocatorManager_IAllocator*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_TryFunction*>(this, ___internal_method);
}
inline int32_t Unity::Collections::AllocatorManager_IAllocator::Try(::by_ref<::Unity::Collections::AllocatorManager_Block> block) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::AllocatorManager_IAllocator*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, block);
}
inline ::Unity::Collections::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager_IAllocator::get_Handle() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::AllocatorManager_IAllocator*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_AllocatorHandle>(this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_IAllocator::set_Handle(::Unity::Collections::AllocatorManager_AllocatorHandle value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::AllocatorManager_IAllocator*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::Collections::Allocator Unity::Collections::AllocatorManager_IAllocator::get_ToAllocator() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::AllocatorManager_IAllocator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::Allocator>(this, ___internal_method);
}
inline bool Unity::Collections::AllocatorManager_IAllocator::get_IsCustomAllocator() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::AllocatorManager_IAllocator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Unity::Collections::AllocatorManager_IAllocator::get_IsAutoDispose() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::AllocatorManager_IAllocator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x64a3e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::*)(
    ::System::IntPtr, ::by_ref<::Unity::Collections::AllocatorManager_Block>)>(&::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64a3ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate*>(),
                                                            { ::i2c::class_of<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::*)(::System::IntPtr, ::by_ref<::Unity::Collections::AllocatorManager_Block>, ::System::AsyncCallback*,
                                                                                                ::System::Object*)>(
    &::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x64a3edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate*>(),
                                                            { ::i2c::class_of<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(
    &::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x64a3f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate*>(),
                                                            { ::i2c::class_of<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                         ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::Invoke(::System::IntPtr allocatorState,
                                                                                                             ::by_ref<::Unity::Collections::AllocatorManager_Block> block) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, allocatorState, block);
}
inline ::System::IAsyncResult* Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::BeginInvoke(::System::IntPtr allocatorState,
                                                                                                                                  ::by_ref<::Unity::Collections::AllocatorManager_Block> block,
                                                                                                                                  ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace,
                                                                                                                                  ::System::Object* _cordl_fixed_empty_name_whitespace_param_3) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, allocatorState, block, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_3);
}
inline int32_t Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate*
Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace,
                                                                                                                                                    _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate::StackAllocator_AllocatorManager_Try_000000AB$PostfixBurstDelegate() {}
//  Writing Method size for method: ::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall.GetFunctionPointerDiscard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(
    &::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x64a3fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall*>(),
                                                                                           { "GetFunctionPointerDiscard", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall.GetFunctionPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64a40b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall*>(), { "GetFunctionPointer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::Unity::Collections::AllocatorManager_Block>)>(
    &::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x64a3d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall*>(),
                                                             { "Invoke", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
    return ___internal_method;
  }
};
inline void Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall::setStaticF_Pointer(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall::getStaticF_Pointer() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall*>();
}
inline void Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall*>(),
                                                                                         { "GetFunctionPointerDiscard", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall::GetFunctionPointer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall*>(), { "GetFunctionPointer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall::Invoke(::System::IntPtr allocatorState, ::by_ref<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall*>(),
                                                           { "Invoke", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, allocatorState, block);
}
// Ctor Parameters []
constexpr ::Unity::Collections::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall::StackAllocator_AllocatorManager_Try_000000AB$BurstDirectCall() {}
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_StackAllocator.get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::AllocatorManager_AllocatorHandle (::Unity::Collections::AllocatorManager_StackAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_StackAllocator::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a3c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_StackAllocator>(), { "get_Handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_StackAllocator.set_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AllocatorManager_StackAllocator::*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::AllocatorManager_StackAllocator::set_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a3c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_StackAllocator>(),
                                                                                           { "set_Handle", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_StackAllocator.get_ToAllocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::Allocator (::Unity::Collections::AllocatorManager_StackAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_StackAllocator::get_ToAllocator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a3c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_StackAllocator>(), { "get_ToAllocator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_StackAllocator.get_IsCustomAllocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::AllocatorManager_StackAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_StackAllocator::get_IsCustomAllocator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64a3c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_StackAllocator>(), { "get_IsCustomAllocator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_StackAllocator.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AllocatorManager_StackAllocator::*)(::Unity::Collections::AllocatorManager_Block)>(
    &::Unity::Collections::AllocatorManager_StackAllocator::Initialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64a3c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_StackAllocator>(),
                                                                                           { "Initialize", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_Block>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_StackAllocator.Try
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::AllocatorManager_StackAllocator::*)(::by_ref<::Unity::Collections::AllocatorManager_Block>)>(
    &::Unity::Collections::AllocatorManager_StackAllocator::Try)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x64a3ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_StackAllocator>(),
                                                                                           { "Try", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_StackAllocator.Try
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::Unity::Collections::AllocatorManager_Block>)>(
    &::Unity::Collections::AllocatorManager_StackAllocator::Try)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a3c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_StackAllocator>(),
                                                             { "Try", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_StackAllocator.get_Function
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::AllocatorManager_TryFunction* (::Unity::Collections::AllocatorManager_StackAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_StackAllocator::get_Function)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x64a3de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_StackAllocator>(), { "get_Function", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_StackAllocator.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AllocatorManager_StackAllocator::*)()>(&::Unity::Collections::AllocatorManager_StackAllocator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a3e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_StackAllocator>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_StackAllocator.Try$BurstManaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::Unity::Collections::AllocatorManager_Block>)>(
    &::Unity::Collections::AllocatorManager_StackAllocator::Try$BurstManaged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a3e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_StackAllocator>(),
                                                { "Try$BurstManaged", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
    return ___internal_method;
  }
};
inline ::Unity::Collections::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager_StackAllocator::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_StackAllocator>(), { "get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_AllocatorHandle>(*this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_StackAllocator::set_Handle(::Unity::Collections::AllocatorManager_AllocatorHandle value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_StackAllocator>(),
                                                                                         { "set_Handle", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Collections::Allocator Unity::Collections::AllocatorManager_StackAllocator::get_ToAllocator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_StackAllocator>(), { "get_ToAllocator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::Allocator>(*this, ___internal_method);
}
inline bool Unity::Collections::AllocatorManager_StackAllocator::get_IsCustomAllocator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_StackAllocator>(), { "get_IsCustomAllocator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_StackAllocator::Initialize(::Unity::Collections::AllocatorManager_Block storage) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_StackAllocator>(),
                                                                                         { "Initialize", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_Block>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, storage);
}
inline int32_t Unity::Collections::AllocatorManager_StackAllocator::Try(::by_ref<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_StackAllocator>(),
                                                                                         { "Try", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, block);
}
inline int32_t Unity::Collections::AllocatorManager_StackAllocator::Try(::System::IntPtr allocatorState, ::by_ref<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_StackAllocator>(),
                                                           { "Try", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, allocatorState, block);
}
inline ::Unity::Collections::AllocatorManager_TryFunction* Unity::Collections::AllocatorManager_StackAllocator::get_Function() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_StackAllocator>(), { "get_Function", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_TryFunction*>(*this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_StackAllocator::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_StackAllocator>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline int32_t Unity::Collections::AllocatorManager_StackAllocator::Try$BurstManaged(::System::IntPtr allocatorState, ::by_ref<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_StackAllocator>(),
                                              { "Try$BurstManaged", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, allocatorState, block);
}
/// @brief Convert operator to "::Unity::Collections::AllocatorManager_IAllocator"
constexpr Unity::Collections::AllocatorManager_StackAllocator::operator ::Unity::Collections::AllocatorManager_IAllocator*() {
  return static_cast<::Unity::Collections::AllocatorManager_IAllocator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::AllocatorManager_IAllocator"
constexpr ::Unity::Collections::AllocatorManager_IAllocator* Unity::Collections::AllocatorManager_StackAllocator::i___Unity__Collections__AllocatorManager_IAllocator() {
  return static_cast<::Unity::Collections::AllocatorManager_IAllocator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Collections::AllocatorManager_StackAllocator::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::AllocatorManager_StackAllocator::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x64a45bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::*)(
    ::System::IntPtr, ::by_ref<::Unity::Collections::AllocatorManager_Block>)>(&::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64a4628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate*>(),
                                                            { ::i2c::class_of<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::*)(::System::IntPtr, ::by_ref<::Unity::Collections::AllocatorManager_Block>, ::System::AsyncCallback*,
                                                                                               ::System::Object*)>(
    &::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x64a463c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate*>(),
                                                            { ::i2c::class_of<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(
    &::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x64a46e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate*>(),
                                                            { ::i2c::class_of<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                        ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::Invoke(::System::IntPtr allocatorState,
                                                                                                            ::by_ref<::Unity::Collections::AllocatorManager_Block> block) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, allocatorState, block);
}
inline ::System::IAsyncResult* Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::BeginInvoke(::System::IntPtr allocatorState,
                                                                                                                                 ::by_ref<::Unity::Collections::AllocatorManager_Block> block,
                                                                                                                                 ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace,
                                                                                                                                 ::System::Object* _cordl_fixed_empty_name_whitespace_param_3) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, allocatorState, block, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_3);
}
inline int32_t Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate*
Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                               ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace,
                                                                                                                                                   _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate::SlabAllocator_AllocatorManager_Try_000000B9$PostfixBurstDelegate() {}
//  Writing Method size for method: ::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall.GetFunctionPointerDiscard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(
    &::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x64a4708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall*>(),
                                                                                           { "GetFunctionPointerDiscard", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall.GetFunctionPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64a4814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall*>(), { "GetFunctionPointer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::Unity::Collections::AllocatorManager_Block>)>(
    &::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x64a44a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall*>(),
                                                             { "Invoke", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
    return ___internal_method;
  }
};
inline void Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall::setStaticF_Pointer(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall::getStaticF_Pointer() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall*>();
}
inline void Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall*>(),
                                                                                         { "GetFunctionPointerDiscard", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall::GetFunctionPointer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall*>(), { "GetFunctionPointer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall::Invoke(::System::IntPtr allocatorState, ::by_ref<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall*>(),
                                                           { "Invoke", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, allocatorState, block);
}
// Ctor Parameters []
constexpr ::Unity::Collections::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall::SlabAllocator_AllocatorManager_Try_000000B9$BurstDirectCall() {}
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::AllocatorManager_AllocatorHandle (::Unity::Collections::AllocatorManager_SlabAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_SlabAllocator::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a40d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(), { "get_Handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.set_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AllocatorManager_SlabAllocator::*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::AllocatorManager_SlabAllocator::set_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a40d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(),
                                                                                           { "set_Handle", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.get_ToAllocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::Allocator (::Unity::Collections::AllocatorManager_SlabAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_SlabAllocator::get_ToAllocator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a40e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(), { "get_ToAllocator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.get_IsCustomAllocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::AllocatorManager_SlabAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_SlabAllocator::get_IsCustomAllocator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64a40e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(), { "get_IsCustomAllocator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.get_BudgetInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Unity::Collections::AllocatorManager_SlabAllocator::*)()>(&::Unity::Collections::AllocatorManager_SlabAllocator::get_BudgetInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a40f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(), { "get_BudgetInBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.get_AllocatedBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Unity::Collections::AllocatorManager_SlabAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_SlabAllocator::get_AllocatedBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a4100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(), { "get_AllocatedBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.get_SlabSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::AllocatorManager_SlabAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_SlabAllocator::get_SlabSizeInBytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64a4108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(), { "get_SlabSizeInBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.set_SlabSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AllocatorManager_SlabAllocator::*)(int32_t)>(
    &::Unity::Collections::AllocatorManager_SlabAllocator::set_SlabSizeInBytes)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x64a4118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(), { "set_SlabSizeInBytes", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.get_Slabs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::AllocatorManager_SlabAllocator::*)()>(&::Unity::Collections::AllocatorManager_SlabAllocator::get_Slabs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64a4158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(), { "get_Slabs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AllocatorManager_SlabAllocator::*)(::Unity::Collections::AllocatorManager_Block, int32_t, int64_t)>(
    &::Unity::Collections::AllocatorManager_SlabAllocator::Initialize)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x64a4170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(),
                                                { "Initialize", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_Block>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.Try
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::AllocatorManager_SlabAllocator::*)(::by_ref<::Unity::Collections::AllocatorManager_Block>)>(
    &::Unity::Collections::AllocatorManager_SlabAllocator::Try)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x64a4278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(),
                                                                                           { "Try", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.Try
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::Unity::Collections::AllocatorManager_Block>)>(
    &::Unity::Collections::AllocatorManager_SlabAllocator::Try)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a40cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(),
                                                             { "Try", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.get_Function
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::AllocatorManager_TryFunction* (::Unity::Collections::AllocatorManager_SlabAllocator::*)()>(
    &::Unity::Collections::AllocatorManager_SlabAllocator::get_Function)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x64a4540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(), { "get_Function", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AllocatorManager_SlabAllocator::*)()>(&::Unity::Collections::AllocatorManager_SlabAllocator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a45b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SlabAllocator.Try$BurstManaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::Unity::Collections::AllocatorManager_Block>)>(
    &::Unity::Collections::AllocatorManager_SlabAllocator::Try$BurstManaged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a45b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(),
                                                { "Try$BurstManaged", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
    return ___internal_method;
  }
};
inline ::Unity::Collections::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager_SlabAllocator::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(), { "get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_AllocatorHandle>(*this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_SlabAllocator::set_Handle(::Unity::Collections::AllocatorManager_AllocatorHandle value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(),
                                                                                         { "set_Handle", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Collections::Allocator Unity::Collections::AllocatorManager_SlabAllocator::get_ToAllocator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(), { "get_ToAllocator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::Allocator>(*this, ___internal_method);
}
inline bool Unity::Collections::AllocatorManager_SlabAllocator::get_IsCustomAllocator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(), { "get_IsCustomAllocator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int64_t Unity::Collections::AllocatorManager_SlabAllocator::get_BudgetInBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(), { "get_BudgetInBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline int64_t Unity::Collections::AllocatorManager_SlabAllocator::get_AllocatedBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(), { "get_AllocatedBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline int32_t Unity::Collections::AllocatorManager_SlabAllocator::get_SlabSizeInBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(), { "get_SlabSizeInBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_SlabAllocator::set_SlabSizeInBytes(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(), { "set_SlabSizeInBytes", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Unity::Collections::AllocatorManager_SlabAllocator::get_Slabs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(), { "get_Slabs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_SlabAllocator::Initialize(::Unity::Collections::AllocatorManager_Block storage, int32_t slabSizeInBytes, int64_t budget) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(),
                                              { "Initialize", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_Block>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, storage, slabSizeInBytes, budget);
}
inline int32_t Unity::Collections::AllocatorManager_SlabAllocator::Try(::by_ref<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(),
                                                                                         { "Try", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, block);
}
inline int32_t Unity::Collections::AllocatorManager_SlabAllocator::Try(::System::IntPtr allocatorState, ::by_ref<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(),
                                                           { "Try", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, allocatorState, block);
}
inline ::Unity::Collections::AllocatorManager_TryFunction* Unity::Collections::AllocatorManager_SlabAllocator::get_Function() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(), { "get_Function", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_TryFunction*>(*this, ___internal_method);
}
inline void Unity::Collections::AllocatorManager_SlabAllocator::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline int32_t Unity::Collections::AllocatorManager_SlabAllocator::Try$BurstManaged(::System::IntPtr allocatorState, ::by_ref<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SlabAllocator>(),
                                              { "Try$BurstManaged", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, allocatorState, block);
}
/// @brief Convert operator to "::Unity::Collections::AllocatorManager_IAllocator"
constexpr Unity::Collections::AllocatorManager_SlabAllocator::operator ::Unity::Collections::AllocatorManager_IAllocator*() {
  return static_cast<::Unity::Collections::AllocatorManager_IAllocator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::AllocatorManager_IAllocator"
constexpr ::Unity::Collections::AllocatorManager_IAllocator* Unity::Collections::AllocatorManager_SlabAllocator::i___Unity__Collections__AllocatorManager_IAllocator() {
  return static_cast<::Unity::Collections::AllocatorManager_IAllocator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Collections::AllocatorManager_SlabAllocator::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::AllocatorManager_SlabAllocator::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Array32768_1<T>>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::AllocatorManager_Array32768_1<T>::set_Length(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Array32768_1<T>>(), { "set_Length", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline ::by_ref<T> Unity::Collections::AllocatorManager_Array32768_1<T>::ElementAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Array32768_1<T>>(), { "ElementAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Collections::IIndexable_1<T>"
template <typename T> constexpr Unity::Collections::AllocatorManager_Array32768_1<T>::operator ::Unity::Collections::IIndexable_1<T>*() {
  return static_cast<::Unity::Collections::IIndexable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::IIndexable_1<T>"
template <typename T> constexpr ::Unity::Collections::IIndexable_1<T>* Unity::Collections::AllocatorManager_Array32768_1<T>::i___Unity__Collections__IIndexable_1_T_() {
  return static_cast<::Unity::Collections::IIndexable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::SharedStatics_AllocatorManager_IsInstalled::*)()>(
    &::Unity::Collections::SharedStatics_AllocatorManager_IsInstalled::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a4830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::SharedStatics_AllocatorManager_IsInstalled*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::SharedStatics_AllocatorManager_IsInstalled::setStaticF_Ref(::Unity::Burst::SharedStatic_1<::Unity::Collections::Long1024> value) {
  ::cordl_internals::setStaticField<::Unity::Burst::SharedStatic_1<::Unity::Collections::Long1024>, "Ref", ::Unity::Collections::SharedStatics_AllocatorManager_IsInstalled*>(
      std::forward<::Unity::Burst::SharedStatic_1<::Unity::Collections::Long1024>>(value));
}
inline ::Unity::Burst::SharedStatic_1<::Unity::Collections::Long1024> Unity::Collections::SharedStatics_AllocatorManager_IsInstalled::getStaticF_Ref() {
  return ::cordl_internals::getStaticField<::Unity::Burst::SharedStatic_1<::Unity::Collections::Long1024>, "Ref", ::Unity::Collections::SharedStatics_AllocatorManager_IsInstalled*>();
}
inline void Unity::Collections::SharedStatics_AllocatorManager_IsInstalled::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::SharedStatics_AllocatorManager_IsInstalled*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Collections::SharedStatics_AllocatorManager_IsInstalled* Unity::Collections::SharedStatics_AllocatorManager_IsInstalled::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Collections::SharedStatics_AllocatorManager_IsInstalled*>());
}
// Ctor Parameters []
constexpr ::Unity::Collections::SharedStatics_AllocatorManager_IsInstalled::SharedStatics_AllocatorManager_IsInstalled() {}
//  Writing Method size for method: ::Unity::Collections::SharedStatics_AllocatorManager_TableEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::SharedStatics_AllocatorManager_TableEntry::*)()>(
    &::Unity::Collections::SharedStatics_AllocatorManager_TableEntry::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a48b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::SharedStatics_AllocatorManager_TableEntry*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::SharedStatics_AllocatorManager_TableEntry::setStaticF_Ref(
    ::Unity::Burst::SharedStatic_1<::Unity::Collections::AllocatorManager_Array32768_1<::Unity::Collections::AllocatorManager_TableEntry>> value) {
  ::cordl_internals::setStaticField<::Unity::Burst::SharedStatic_1<::Unity::Collections::AllocatorManager_Array32768_1<::Unity::Collections::AllocatorManager_TableEntry>>, "Ref",
                                    ::Unity::Collections::SharedStatics_AllocatorManager_TableEntry*>(
      std::forward<::Unity::Burst::SharedStatic_1<::Unity::Collections::AllocatorManager_Array32768_1<::Unity::Collections::AllocatorManager_TableEntry>>>(value));
}
inline ::Unity::Burst::SharedStatic_1<::Unity::Collections::AllocatorManager_Array32768_1<::Unity::Collections::AllocatorManager_TableEntry>>
Unity::Collections::SharedStatics_AllocatorManager_TableEntry::getStaticF_Ref() {
  return ::cordl_internals::getStaticField<::Unity::Burst::SharedStatic_1<::Unity::Collections::AllocatorManager_Array32768_1<::Unity::Collections::AllocatorManager_TableEntry>>, "Ref",
                                           ::Unity::Collections::SharedStatics_AllocatorManager_TableEntry*>();
}
inline void Unity::Collections::SharedStatics_AllocatorManager_TableEntry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::SharedStatics_AllocatorManager_TableEntry*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Collections::SharedStatics_AllocatorManager_TableEntry* Unity::Collections::SharedStatics_AllocatorManager_TableEntry::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Collections::SharedStatics_AllocatorManager_TableEntry*>());
}
// Ctor Parameters []
constexpr ::Unity::Collections::SharedStatics_AllocatorManager_TableEntry::SharedStatics_AllocatorManager_TableEntry() {}
//  Writing Method size for method: ::Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose::*)()>(
    &::Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a4940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose::setStaticF_Ref(::Unity::Burst::SharedStatic_1<::Unity::Collections::Long1024> value) {
  ::cordl_internals::setStaticField<::Unity::Burst::SharedStatic_1<::Unity::Collections::Long1024>, "Ref", ::Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose*>(
      std::forward<::Unity::Burst::SharedStatic_1<::Unity::Collections::Long1024>>(value));
}
inline ::Unity::Burst::SharedStatic_1<::Unity::Collections::Long1024> Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose::getStaticF_Ref() {
  return ::cordl_internals::getStaticField<::Unity::Burst::SharedStatic_1<::Unity::Collections::Long1024>, "Ref", ::Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose*>();
}
inline void Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose* Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose*>());
}
// Ctor Parameters []
constexpr ::Unity::Collections::SharedStatics_AllocatorManager_IsAutoDispose::SharedStatics_AllocatorManager_IsAutoDispose() {}
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_SharedStatics._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AllocatorManager_SharedStatics::*)()>(&::Unity::Collections::AllocatorManager_SharedStatics::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a482c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SharedStatics*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::AllocatorManager_SharedStatics::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_SharedStatics*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Collections::AllocatorManager_SharedStatics* Unity::Collections::AllocatorManager_SharedStatics::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Collections::AllocatorManager_SharedStatics*>());
}
// Ctor Parameters []
constexpr ::Unity::Collections::AllocatorManager_SharedStatics::AllocatorManager_SharedStatics() {}
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_Managed.RegisterDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::Unity::Collections::AllocatorManager_TryFunction*)>(&::Unity::Collections::AllocatorManager_Managed::RegisterDelegate)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x64a2d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Managed*>(),
                                                             { "RegisterDelegate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_TryFunction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager_Managed.UnregisterDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Unity::Collections::AllocatorManager_Managed::UnregisterDelegate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x64a49c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Managed*>(), { "UnregisterDelegate", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Unity::Collections::AllocatorManager_Managed::setStaticF_TryFunctionDelegates(::ArrayW<::Unity::Collections::AllocatorManager_TryFunction*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Unity::Collections::AllocatorManager_TryFunction*>, "TryFunctionDelegates", ::Unity::Collections::AllocatorManager_Managed*>(
      std::forward<::ArrayW<::Unity::Collections::AllocatorManager_TryFunction*>>(value));
}
inline ::ArrayW<::Unity::Collections::AllocatorManager_TryFunction*> Unity::Collections::AllocatorManager_Managed::getStaticF_TryFunctionDelegates() {
  return ::cordl_internals::getStaticField<::ArrayW<::Unity::Collections::AllocatorManager_TryFunction*>, "TryFunctionDelegates", ::Unity::Collections::AllocatorManager_Managed*>();
}
inline void Unity::Collections::AllocatorManager_Managed::RegisterDelegate(int32_t index, ::Unity::Collections::AllocatorManager_TryFunction* function) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Managed*>(),
                                                           { "RegisterDelegate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_TryFunction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, index, function);
}
inline void Unity::Collections::AllocatorManager_Managed::UnregisterDelegate(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager_Managed*>(), { "UnregisterDelegate", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, index);
}
// Ctor Parameters []
constexpr ::Unity::Collections::AllocatorManager_Managed::AllocatorManager_Managed() {}
template <typename T>
inline void Unity::Collections::AllocatorManager_AllocatorCache_1<T>::setStaticF_TryFunction(::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*> value) {
  ::cordl_internals::setStaticField<::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*>, "TryFunction", ::Unity::Collections::AllocatorManager_AllocatorCache_1<T>*>(
      std::forward<::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*>>(value));
}
template <typename T> inline ::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*> Unity::Collections::AllocatorManager_AllocatorCache_1<T>::getStaticF_TryFunction() {
  return ::cordl_internals::getStaticField<::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*>, "TryFunction",
                                           ::Unity::Collections::AllocatorManager_AllocatorCache_1<T>*>();
}
template <typename T> inline void Unity::Collections::AllocatorManager_AllocatorCache_1<T>::setStaticF_CachedFunction(::Unity::Collections::AllocatorManager_TryFunction* value) {
  ::cordl_internals::setStaticField<::Unity::Collections::AllocatorManager_TryFunction*, "CachedFunction", ::Unity::Collections::AllocatorManager_AllocatorCache_1<T>*>(
      std::forward<::Unity::Collections::AllocatorManager_TryFunction*>(value));
}
template <typename T> inline ::Unity::Collections::AllocatorManager_TryFunction* Unity::Collections::AllocatorManager_AllocatorCache_1<T>::getStaticF_CachedFunction() {
  return ::cordl_internals::getStaticField<::Unity::Collections::AllocatorManager_TryFunction*, "CachedFunction", ::Unity::Collections::AllocatorManager_AllocatorCache_1<T>*>();
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::AllocatorManager_AllocatorCache_1<T>::AllocatorManager_AllocatorCache_1() {}
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.Allocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::Unity::Collections::AllocatorManager_AllocatorHandle, int32_t, int32_t, int32_t)>(
    &::Unity::Collections::AllocatorManager::Allocate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x64a2448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
            { "Allocate", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.Free
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::AllocatorManager_AllocatorHandle, void*, int32_t, int32_t, int32_t)>(
    &::Unity::Collections::AllocatorManager::Free)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x64a24e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                                                                                           { "Free",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<void*>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.Free
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::AllocatorManager_AllocatorHandle, void*)>(&::Unity::Collections::AllocatorManager::Free)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x64a2590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                                                             { "Free", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.ConvertToAllocatorHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::AllocatorManager_AllocatorHandle (*)(::Unity::Collections::Allocator)>(
    &::Unity::Collections::AllocatorManager::ConvertToAllocatorHandle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a261c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(), { "ConvertToAllocatorHandle", {}, { ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.CheckDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<bool>)>(&::Unity::Collections::AllocatorManager::CheckDelegate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a2620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(), { "CheckDelegate", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.UseDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Unity::Collections::AllocatorManager::UseDelegate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x64a262c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(), { "UseDelegate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.allocate_block
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::Unity::Collections::AllocatorManager_Block>)>(&::Unity::Collections::AllocatorManager::allocate_block)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x64a2680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                                                                                           { "allocate_block", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.forward_mono_allocate_block
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::AllocatorManager_Block>, ::by_ref<int32_t>)>(
    &::Unity::Collections::AllocatorManager::forward_mono_allocate_block)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x64a27e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                                         { "forward_mono_allocate_block", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.LegacyOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::Allocator (*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::AllocatorManager::LegacyOf)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64a2900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                                                                                           { "LegacyOf", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.TryLegacy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::Unity::Collections::AllocatorManager_Block>)>(&::Unity::Collections::AllocatorManager::TryLegacy)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x64a2914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                                                                                           { "TryLegacy", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.Try
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::Unity::Collections::AllocatorManager_Block>)>(&::Unity::Collections::AllocatorManager::Try)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x64a2a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(), { "Try", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Collections::AllocatorManager::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a2b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.Install
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::Unity::Collections::AllocatorManager_AllocatorHandle, ::System::IntPtr, ::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*>,
                         ::Unity::Collections::AllocatorManager_TryFunction*, bool)>(&::Unity::Collections::AllocatorManager::Install)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x64a2b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                                                             { "Install",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::System::IntPtr>(),
                                                                 ::i2c::type_of<::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*>>(),
                                                                 ::i2c::type_of<::Unity::Collections::AllocatorManager_TryFunction*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.Install
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::AllocatorManager_AllocatorHandle, ::System::IntPtr, ::Unity::Collections::AllocatorManager_TryFunction*)>(
    &::Unity::Collections::AllocatorManager::Install)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x64a2e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                                                             { "Install",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::System::IntPtr>(),
                                                                 ::i2c::type_of<::Unity::Collections::AllocatorManager_TryFunction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.Register
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::AllocatorManager_AllocatorHandle (*)(
    ::System::IntPtr, ::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*>, bool, bool, int32_t)>(&::Unity::Collections::AllocatorManager::Register)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x64a2f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                                                { "Register",
                                                  {},
                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*>>(),
                                                    ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.Shutdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Collections::AllocatorManager::Shutdown)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a3230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(), { "Shutdown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.IsCustomAllocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::AllocatorManager::IsCustomAllocator)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a3234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                                                                                           { "IsCustomAllocator", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.CheckFailedToAllocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Unity::Collections::AllocatorManager::CheckFailedToAllocate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x64a3240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(), { "CheckFailedToAllocate", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.CheckFailedToFree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Unity::Collections::AllocatorManager::CheckFailedToFree)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x64a3294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(), { "CheckFailedToFree", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AllocatorManager.CheckValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::AllocatorManager::CheckValid)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a32e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                                                                                           { "CheckValid", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
inline void Unity::Collections::AllocatorManager::setStaticF_Invalid(::Unity::Collections::AllocatorManager_AllocatorHandle value) {
  ::cordl_internals::setStaticField<::Unity::Collections::AllocatorManager_AllocatorHandle, "Invalid", ::Unity::Collections::AllocatorManager*>(
      std::forward<::Unity::Collections::AllocatorManager_AllocatorHandle>(value));
}
inline ::Unity::Collections::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager::getStaticF_Invalid() {
  return ::cordl_internals::getStaticField<::Unity::Collections::AllocatorManager_AllocatorHandle, "Invalid", ::Unity::Collections::AllocatorManager*>();
}
inline void Unity::Collections::AllocatorManager::setStaticF_None(::Unity::Collections::AllocatorManager_AllocatorHandle value) {
  ::cordl_internals::setStaticField<::Unity::Collections::AllocatorManager_AllocatorHandle, "None", ::Unity::Collections::AllocatorManager*>(
      std::forward<::Unity::Collections::AllocatorManager_AllocatorHandle>(value));
}
inline ::Unity::Collections::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager::getStaticF_None() {
  return ::cordl_internals::getStaticField<::Unity::Collections::AllocatorManager_AllocatorHandle, "None", ::Unity::Collections::AllocatorManager*>();
}
inline void Unity::Collections::AllocatorManager::setStaticF_Temp(::Unity::Collections::AllocatorManager_AllocatorHandle value) {
  ::cordl_internals::setStaticField<::Unity::Collections::AllocatorManager_AllocatorHandle, "Temp", ::Unity::Collections::AllocatorManager*>(
      std::forward<::Unity::Collections::AllocatorManager_AllocatorHandle>(value));
}
inline ::Unity::Collections::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager::getStaticF_Temp() {
  return ::cordl_internals::getStaticField<::Unity::Collections::AllocatorManager_AllocatorHandle, "Temp", ::Unity::Collections::AllocatorManager*>();
}
inline void Unity::Collections::AllocatorManager::setStaticF_TempJob(::Unity::Collections::AllocatorManager_AllocatorHandle value) {
  ::cordl_internals::setStaticField<::Unity::Collections::AllocatorManager_AllocatorHandle, "TempJob", ::Unity::Collections::AllocatorManager*>(
      std::forward<::Unity::Collections::AllocatorManager_AllocatorHandle>(value));
}
inline ::Unity::Collections::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager::getStaticF_TempJob() {
  return ::cordl_internals::getStaticField<::Unity::Collections::AllocatorManager_AllocatorHandle, "TempJob", ::Unity::Collections::AllocatorManager*>();
}
inline void Unity::Collections::AllocatorManager::setStaticF_Persistent(::Unity::Collections::AllocatorManager_AllocatorHandle value) {
  ::cordl_internals::setStaticField<::Unity::Collections::AllocatorManager_AllocatorHandle, "Persistent", ::Unity::Collections::AllocatorManager*>(
      std::forward<::Unity::Collections::AllocatorManager_AllocatorHandle>(value));
}
inline ::Unity::Collections::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager::getStaticF_Persistent() {
  return ::cordl_internals::getStaticField<::Unity::Collections::AllocatorManager_AllocatorHandle, "Persistent", ::Unity::Collections::AllocatorManager*>();
}
inline void Unity::Collections::AllocatorManager::setStaticF_AudioKernel(::Unity::Collections::AllocatorManager_AllocatorHandle value) {
  ::cordl_internals::setStaticField<::Unity::Collections::AllocatorManager_AllocatorHandle, "AudioKernel", ::Unity::Collections::AllocatorManager*>(
      std::forward<::Unity::Collections::AllocatorManager_AllocatorHandle>(value));
}
inline ::Unity::Collections::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager::getStaticF_AudioKernel() {
  return ::cordl_internals::getStaticField<::Unity::Collections::AllocatorManager_AllocatorHandle, "AudioKernel", ::Unity::Collections::AllocatorManager*>();
}
inline void Unity::Collections::AllocatorManager::setStaticF_NumGlobalScratchAllocators(uint16_t value) {
  ::cordl_internals::setStaticField<uint16_t, "NumGlobalScratchAllocators", ::Unity::Collections::AllocatorManager*>(std::forward<uint16_t>(value));
}
inline uint16_t Unity::Collections::AllocatorManager::getStaticF_NumGlobalScratchAllocators() {
  return ::cordl_internals::getStaticField<uint16_t, "NumGlobalScratchAllocators", ::Unity::Collections::AllocatorManager*>();
}
inline void Unity::Collections::AllocatorManager::setStaticF_MaxNumGlobalAllocators(uint16_t value) {
  ::cordl_internals::setStaticField<uint16_t, "MaxNumGlobalAllocators", ::Unity::Collections::AllocatorManager*>(std::forward<uint16_t>(value));
}
inline uint16_t Unity::Collections::AllocatorManager::getStaticF_MaxNumGlobalAllocators() {
  return ::cordl_internals::getStaticField<uint16_t, "MaxNumGlobalAllocators", ::Unity::Collections::AllocatorManager*>();
}
inline void Unity::Collections::AllocatorManager::setStaticF_GlobalAllocatorBaseIndex(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "GlobalAllocatorBaseIndex", ::Unity::Collections::AllocatorManager*>(std::forward<uint32_t>(value));
}
inline uint32_t Unity::Collections::AllocatorManager::getStaticF_GlobalAllocatorBaseIndex() {
  return ::cordl_internals::getStaticField<uint32_t, "GlobalAllocatorBaseIndex", ::Unity::Collections::AllocatorManager*>();
}
inline void Unity::Collections::AllocatorManager::setStaticF_FirstGlobalScratchpadAllocatorIndex(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "FirstGlobalScratchpadAllocatorIndex", ::Unity::Collections::AllocatorManager*>(std::forward<uint32_t>(value));
}
inline uint32_t Unity::Collections::AllocatorManager::getStaticF_FirstGlobalScratchpadAllocatorIndex() {
  return ::cordl_internals::getStaticField<uint32_t, "FirstGlobalScratchpadAllocatorIndex", ::Unity::Collections::AllocatorManager*>();
}
template <typename T> inline ::Unity::Collections::AllocatorManager_Block Unity::Collections::AllocatorManager::AllocateBlock(::by_ref<T> t, int32_t sizeOf, int32_t alignOf, int32_t items) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                          { "AllocateBlock", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_Block>(nullptr, ___internal_method, t, sizeOf, alignOf, items);
}
template <typename T, typename U> inline ::Unity::Collections::AllocatorManager_Block Unity::Collections::AllocatorManager::AllocateBlock(::by_ref<T> t, U u, int32_t items) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                                              { "AllocateBlock", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<U>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_Block>(nullptr, ___internal_method, t, u, items);
}
template <typename T> inline void* Unity::Collections::AllocatorManager::Allocate(::by_ref<T> t, int32_t sizeOf, int32_t alignOf, int32_t items) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                                       { "Allocate", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, t, sizeOf, alignOf, items);
}
template <typename T, typename U> inline U* Unity::Collections::AllocatorManager::Allocate(::by_ref<T> t, U u, int32_t items) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                                              { "Allocate", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<U>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<U*>(nullptr, ___internal_method, t, u, items);
}
template <typename T, typename U> inline void* Unity::Collections::AllocatorManager::AllocateStruct(::by_ref<T> t, U u, int32_t items) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                                       { "AllocateStruct", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<U>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, t, u, items);
}
template <typename T> inline void Unity::Collections::AllocatorManager::FreeBlock(::by_ref<T> t, ::by_ref<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                                              { "FreeBlock", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, block);
}
template <typename T> inline void Unity::Collections::AllocatorManager::Free(::by_ref<T> t, void* pointer, int32_t sizeOf, int32_t alignOf, int32_t items) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
          { "Free", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, pointer, sizeOf, alignOf, items);
}
template <typename T, typename U> inline void Unity::Collections::AllocatorManager::Free(::by_ref<T> t, U* pointer, int32_t items) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                                              { "Free", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<U*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, pointer, items);
}
inline void* Unity::Collections::AllocatorManager::Allocate(::Unity::Collections::AllocatorManager_AllocatorHandle handle, int32_t itemSizeInBytes, int32_t alignmentInBytes, int32_t items) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
          { "Allocate", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, handle, itemSizeInBytes, alignmentInBytes, items);
}
template <typename T> inline T* Unity::Collections::AllocatorManager::Allocate(::Unity::Collections::AllocatorManager_AllocatorHandle handle, int32_t items) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                                              { "Allocate", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, handle, items);
}
inline void Unity::Collections::AllocatorManager::Free(::Unity::Collections::AllocatorManager_AllocatorHandle handle, void* pointer, int32_t itemSizeInBytes, int32_t alignmentInBytes, int32_t items) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                                                                                         { "Free",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<void*>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, pointer, itemSizeInBytes, alignmentInBytes, items);
}
inline void Unity::Collections::AllocatorManager::Free(::Unity::Collections::AllocatorManager_AllocatorHandle handle, void* pointer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                                                           { "Free", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, pointer);
}
template <typename T> inline void Unity::Collections::AllocatorManager::Free(::Unity::Collections::AllocatorManager_AllocatorHandle handle, T* pointer, int32_t items) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                          { "Free", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<T*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, pointer, items);
}
inline ::Unity::Collections::AllocatorManager_AllocatorHandle Unity::Collections::AllocatorManager::ConvertToAllocatorHandle(::Unity::Collections::Allocator a) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(), { "ConvertToAllocatorHandle", {}, { ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_AllocatorHandle>(nullptr, ___internal_method, a);
}
inline void Unity::Collections::AllocatorManager::CheckDelegate(::by_ref<bool> useDelegate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(), { "CheckDelegate", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, useDelegate);
}
inline bool Unity::Collections::AllocatorManager::UseDelegate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(), { "UseDelegate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int32_t Unity::Collections::AllocatorManager::allocate_block(::by_ref<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                                                                                         { "allocate_block", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, block);
}
inline void Unity::Collections::AllocatorManager::forward_mono_allocate_block(::by_ref<::Unity::Collections::AllocatorManager_Block> block, ::by_ref<int32_t> error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                                       { "forward_mono_allocate_block", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, block, error);
}
inline ::Unity::Collections::Allocator Unity::Collections::AllocatorManager::LegacyOf(::Unity::Collections::AllocatorManager_AllocatorHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(), { "LegacyOf", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::Allocator>(nullptr, ___internal_method, handle);
}
inline int32_t Unity::Collections::AllocatorManager::TryLegacy(::by_ref<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(), { "TryLegacy", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, block);
}
inline int32_t Unity::Collections::AllocatorManager::Try(::by_ref<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(), { "Try", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, block);
}
inline void Unity::Collections::AllocatorManager::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::Collections::AllocatorManager::Install(::Unity::Collections::AllocatorManager_AllocatorHandle handle, ::System::IntPtr allocatorState,
                                                          ::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*> functionPointer,
                                                          ::Unity::Collections::AllocatorManager_TryFunction* function, bool IsAutoDispose) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(), { "Install",
                                                                                        {},
                                                                                        { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                          ::i2c::type_of<::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*>>(),
                                                                                          ::i2c::type_of<::Unity::Collections::AllocatorManager_TryFunction*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, allocatorState, functionPointer, function, IsAutoDispose);
}
inline void Unity::Collections::AllocatorManager::Install(::Unity::Collections::AllocatorManager_AllocatorHandle handle, ::System::IntPtr allocatorState,
                                                          ::Unity::Collections::AllocatorManager_TryFunction* function) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(), { "Install",
                                                                                        {},
                                                                                        { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                          ::i2c::type_of<::Unity::Collections::AllocatorManager_TryFunction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, allocatorState, function);
}
inline ::Unity::Collections::AllocatorManager_AllocatorHandle
Unity::Collections::AllocatorManager::Register(::System::IntPtr allocatorState, ::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*> functionPointer,
                                               bool IsAutoDispose, bool isGlobal, int32_t globalIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                                              { "Register",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Burst::FunctionPointer_1<::Unity::Collections::AllocatorManager_TryFunction*>>(),
                                                  ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_AllocatorHandle>(nullptr, ___internal_method, allocatorState, functionPointer, IsAutoDispose, isGlobal,
                                                                                                     globalIndex);
}
template <typename T> inline void Unity::Collections::AllocatorManager::Register(::by_ref<T> t, bool IsAutoDispose, bool isGlobal, int32_t globalIndex) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                                              { "Register", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, IsAutoDispose, isGlobal, globalIndex);
}
template <typename T> inline void Unity::Collections::AllocatorManager::UnmanagedUnregister(::by_ref<T> t) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(), { "UnmanagedUnregister", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t);
}
template <typename T> inline void Unity::Collections::AllocatorManager::Unregister(::by_ref<T> t) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(), { "Unregister", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t);
}
template <typename T>
inline ::by_ref<T> Unity::Collections::AllocatorManager::CreateAllocator(::Unity::Collections::AllocatorManager_AllocatorHandle backingAllocator, bool isGlobal, int32_t globalIndex) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
          { "CreateAllocator", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, backingAllocator, isGlobal, globalIndex);
}
template <typename T> inline void Unity::Collections::AllocatorManager::DestroyAllocator(::by_ref<T> t, ::Unity::Collections::AllocatorManager_AllocatorHandle backingAllocator) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                                       { "DestroyAllocator", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, backingAllocator);
}
inline void Unity::Collections::AllocatorManager::Shutdown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(), { "Shutdown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Unity::Collections::AllocatorManager::IsCustomAllocator(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                                                                                         { "IsCustomAllocator", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, allocator);
}
inline void Unity::Collections::AllocatorManager::CheckFailedToAllocate(int32_t error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(), { "CheckFailedToAllocate", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, error);
}
inline void Unity::Collections::AllocatorManager::CheckFailedToFree(int32_t error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(), { "CheckFailedToFree", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, error);
}
inline void Unity::Collections::AllocatorManager::CheckValid(::Unity::Collections::AllocatorManager_AllocatorHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AllocatorManager*>(),
                                                                                         { "CheckValid", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
// Ctor Parameters []
constexpr ::Unity::Collections::AllocatorManager::AllocatorManager() {}
