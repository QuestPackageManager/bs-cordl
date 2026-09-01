#pragma once
// IWYU pragma private; include "Unity\Collections\AutoFreeAllocator.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "Unity/Collections/zzzz__ArrayOfArrays_1_impl.hpp"
#include "Unity/Collections/zzzz__AutoFreeAllocator_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__AutoFreeAllocator_def.hpp"
//  Writing Method size for method: ::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x64aa86c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate::*)(
    ::System::IntPtr, ::by_ref<::Unity::Collections::AllocatorManager_Block>)>(&::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64aa8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate*>(),
                                                                                          { ::i2c::class_of<::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate::*)(::System::IntPtr, ::by_ref<::Unity::Collections::AllocatorManager_Block>, ::System::AsyncCallback*,
                                                                                  ::System::Object*)>(&::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x64aa8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate*>(),
                                                                                          { ::i2c::class_of<::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(
    &::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x64aa994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate*>(),
                                                                                          { ::i2c::class_of<::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate::_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                           ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate::Invoke(::System::IntPtr state, ::by_ref<::Unity::Collections::AllocatorManager_Block> block) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, state, block);
}
inline ::System::IAsyncResult* Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate::BeginInvoke(::System::IntPtr state,
                                                                                                                    ::by_ref<::Unity::Collections::AllocatorManager_Block> block,
                                                                                                                    ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace,
                                                                                                                    ::System::Object* _cordl_fixed_empty_name_whitespace_param_3) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, state, block, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_3);
}
inline int32_t Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate*
Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate::New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace, ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Unity::Collections::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate::AutoFreeAllocator_Try_000000E3$PostfixBurstDelegate() {}
//  Writing Method size for method: ::Unity::Collections::AutoFreeAllocator_Try_000000E3$BurstDirectCall.GetFunctionPointerDiscard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::Unity::Collections::AutoFreeAllocator_Try_000000E3$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x64aa9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator_Try_000000E3$BurstDirectCall*>(),
                                                                                           { "GetFunctionPointerDiscard", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AutoFreeAllocator_Try_000000E3$BurstDirectCall.GetFunctionPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Unity::Collections::AutoFreeAllocator_Try_000000E3$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64aaac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator_Try_000000E3$BurstDirectCall*>(), { "GetFunctionPointer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AutoFreeAllocator_Try_000000E3$BurstDirectCall.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::Unity::Collections::AllocatorManager_Block>)>(
    &::Unity::Collections::AutoFreeAllocator_Try_000000E3$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x64aa798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator_Try_000000E3$BurstDirectCall*>(),
                                                             { "Invoke", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
    return ___internal_method;
  }
};
inline void Unity::Collections::AutoFreeAllocator_Try_000000E3$BurstDirectCall::setStaticF_Pointer(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::Unity::Collections::AutoFreeAllocator_Try_000000E3$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Unity::Collections::AutoFreeAllocator_Try_000000E3$BurstDirectCall::getStaticF_Pointer() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::Unity::Collections::AutoFreeAllocator_Try_000000E3$BurstDirectCall*>();
}
inline void Unity::Collections::AutoFreeAllocator_Try_000000E3$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator_Try_000000E3$BurstDirectCall*>(),
                                                                                         { "GetFunctionPointerDiscard", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr Unity::Collections::AutoFreeAllocator_Try_000000E3$BurstDirectCall::GetFunctionPointer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator_Try_000000E3$BurstDirectCall*>(), { "GetFunctionPointer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t Unity::Collections::AutoFreeAllocator_Try_000000E3$BurstDirectCall::Invoke(::System::IntPtr state, ::by_ref<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator_Try_000000E3$BurstDirectCall*>(),
                                                           { "Invoke", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, state, block);
}
// Ctor Parameters []
constexpr ::Unity::Collections::AutoFreeAllocator_Try_000000E3$BurstDirectCall::AutoFreeAllocator_Try_000000E3$BurstDirectCall() {}
//  Writing Method size for method: ::Unity::Collections::AutoFreeAllocator.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AutoFreeAllocator::*)()>(&::Unity::Collections::AutoFreeAllocator::Update)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x64aa324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AutoFreeAllocator.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AutoFreeAllocator::*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::AutoFreeAllocator::Initialize)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x64aa478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator>(),
                                                                                           { "Initialize", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AutoFreeAllocator.FreeAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AutoFreeAllocator::*)()>(&::Unity::Collections::AutoFreeAllocator::FreeAll)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x64aa524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator>(), { "FreeAll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AutoFreeAllocator.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AutoFreeAllocator::*)()>(&::Unity::Collections::AutoFreeAllocator::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x64aa5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AutoFreeAllocator.get_Function
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::AllocatorManager_TryFunction* (::Unity::Collections::AutoFreeAllocator::*)()>(
    &::Unity::Collections::AutoFreeAllocator::get_Function)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x64aa64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator>(), { "get_Function", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AutoFreeAllocator.Try
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::AutoFreeAllocator::*)(::by_ref<::Unity::Collections::AllocatorManager_Block>)>(
    &::Unity::Collections::AutoFreeAllocator::Try)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x64aa6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator>(), { "Try", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AutoFreeAllocator.Try
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::Unity::Collections::AllocatorManager_Block>)>(&::Unity::Collections::AutoFreeAllocator::Try)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64aa320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator>(),
                                                             { "Try", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AutoFreeAllocator.get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::AllocatorManager_AllocatorHandle (::Unity::Collections::AutoFreeAllocator::*)()>(
    &::Unity::Collections::AutoFreeAllocator::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64aa838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator>(), { "get_Handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AutoFreeAllocator.set_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::AutoFreeAllocator::*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::AutoFreeAllocator::set_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64aa840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator>(),
                                                                                           { "set_Handle", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AutoFreeAllocator.get_ToAllocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::Allocator (::Unity::Collections::AutoFreeAllocator::*)()>(&::Unity::Collections::AutoFreeAllocator::get_ToAllocator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64aa848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator>(), { "get_ToAllocator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AutoFreeAllocator.get_IsCustomAllocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::AutoFreeAllocator::*)()>(&::Unity::Collections::AutoFreeAllocator::get_IsCustomAllocator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64aa850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator>(), { "get_IsCustomAllocator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AutoFreeAllocator.get_IsAutoDispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::AutoFreeAllocator::*)()>(&::Unity::Collections::AutoFreeAllocator::get_IsAutoDispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64aa860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator>(), { "get_IsAutoDispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::AutoFreeAllocator.Try$BurstManaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::Unity::Collections::AllocatorManager_Block>)>(
    &::Unity::Collections::AutoFreeAllocator::Try$BurstManaged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64aa868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator>(),
                                                { "Try$BurstManaged", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
    return ___internal_method;
  }
};
inline void Unity::Collections::AutoFreeAllocator::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::AutoFreeAllocator::Initialize(::Unity::Collections::AllocatorManager_AllocatorHandle backingAllocatorHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator>(),
                                                                                         { "Initialize", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, backingAllocatorHandle);
}
inline void Unity::Collections::AutoFreeAllocator::FreeAll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator>(), { "FreeAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::AutoFreeAllocator::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::Unity::Collections::AllocatorManager_TryFunction* Unity::Collections::AutoFreeAllocator::get_Function() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator>(), { "get_Function", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_TryFunction*>(*this, ___internal_method);
}
inline int32_t Unity::Collections::AutoFreeAllocator::Try(::by_ref<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator>(), { "Try", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, block);
}
inline int32_t Unity::Collections::AutoFreeAllocator::Try(::System::IntPtr state, ::by_ref<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator>(),
                                                           { "Try", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, state, block);
}
inline ::Unity::Collections::AllocatorManager_AllocatorHandle Unity::Collections::AutoFreeAllocator::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator>(), { "get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::AllocatorManager_AllocatorHandle>(*this, ___internal_method);
}
inline void Unity::Collections::AutoFreeAllocator::set_Handle(::Unity::Collections::AllocatorManager_AllocatorHandle value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator>(),
                                                                                         { "set_Handle", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Collections::Allocator Unity::Collections::AutoFreeAllocator::get_ToAllocator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator>(), { "get_ToAllocator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::Allocator>(*this, ___internal_method);
}
inline bool Unity::Collections::AutoFreeAllocator::get_IsCustomAllocator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator>(), { "get_IsCustomAllocator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Unity::Collections::AutoFreeAllocator::get_IsAutoDispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator>(), { "get_IsAutoDispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t Unity::Collections::AutoFreeAllocator::Try$BurstManaged(::System::IntPtr state, ::by_ref<::Unity::Collections::AllocatorManager_Block> block) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::AutoFreeAllocator>(),
                                              { "Try$BurstManaged", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::AllocatorManager_Block>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, state, block);
}
/// @brief Convert operator to "::Unity::Collections::AllocatorManager_IAllocator"
constexpr Unity::Collections::AutoFreeAllocator::operator ::Unity::Collections::AllocatorManager_IAllocator*() {
  return static_cast<::Unity::Collections::AllocatorManager_IAllocator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::AllocatorManager_IAllocator"
constexpr ::Unity::Collections::AllocatorManager_IAllocator* Unity::Collections::AutoFreeAllocator::i___Unity__Collections__AllocatorManager_IAllocator() {
  return static_cast<::Unity::Collections::AllocatorManager_IAllocator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Collections::AutoFreeAllocator::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::AutoFreeAllocator::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_allocated", ty: "::Unity::Collections::ArrayOfArrays_1<::System::IntPtr>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_tofree", ty:
// "::Unity::Collections::ArrayOfArrays_1<::System::IntPtr>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_handle", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_backingAllocatorHandle", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::AutoFreeAllocator::AutoFreeAllocator(::Unity::Collections::ArrayOfArrays_1<::System::IntPtr> m_allocated,
                                                                     ::Unity::Collections::ArrayOfArrays_1<::System::IntPtr> m_tofree, ::Unity::Collections::AllocatorManager_AllocatorHandle m_handle,
                                                                     ::Unity::Collections::AllocatorManager_AllocatorHandle m_backingAllocatorHandle) noexcept {
  this->m_allocated = m_allocated;
  this->m_tofree = m_tofree;
  this->m_handle = m_handle;
  this->m_backingAllocatorHandle = m_backingAllocatorHandle;
}
// Ctor Parameters []
constexpr ::Unity::Collections::AutoFreeAllocator::AutoFreeAllocator() {}
