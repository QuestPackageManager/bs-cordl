#pragma once
// IWYU pragma private; include "System/Threading/CancellationTokenSource.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationCallbackCoreWorkArguments_def.hpp"
#include "System/Threading/zzzz__CancellationCallbackInfo_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_Linked1CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_Linked2CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_LinkedNCancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArray_1_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/Threading/zzzz__TimerCallback_def.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c::*)()>(
    &::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ddb948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c.__cctor_b__4_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c::*)(::System::Object*)>(
    &::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3ddb950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c*>::get(), "<.cctor>b__4_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c::setStaticF___9(::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c*>::get>(
      std::forward<::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c*>(value));
}
inline ::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c* GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c*>::get>();
}
inline ::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c* GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c*>());
}
inline void GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c::__cctor_b__4_0(::System::Object* s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c*>::get(), "<.cctor>b__4_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c::__CancellationTokenSource__LinkedNCancellationTokenSource____c() {}
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.get_IsCancellationRequested
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::CancellationTokenSource::*)()>(
    &::System::Threading::CancellationTokenSource::get_IsCancellationRequested)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3dd7a7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(),
                                                                               "get_IsCancellationRequested", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.get_IsCancellationCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::CancellationTokenSource::*)()>(
    &::System::Threading::CancellationTokenSource::get_IsCancellationCompleted)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3dd9f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(),
                                                                               "get_IsCancellationCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.get_IsDisposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::CancellationTokenSource::*)()>(
    &::System::Threading::CancellationTokenSource::get_IsDisposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3dda218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(),
                                                                               "get_IsDisposed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.get_ThreadIDExecutingCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::CancellationTokenSource::*)()>(
    &::System::Threading::CancellationTokenSource::get_ThreadIDExecutingCallbacks)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3dd9f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(),
                                                                               "get_ThreadIDExecutingCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.set_ThreadIDExecutingCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::CancellationTokenSource::*)(int32_t)>(
    &::System::Threading::CancellationTokenSource::set_ThreadIDExecutingCallbacks)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3dda220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "set_ThreadIDExecutingCallbacks",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.get_Token
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::CancellationToken (::System::Threading::CancellationTokenSource::*)()>(
    &::System::Threading::CancellationTokenSource::get_Token)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3dda244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(),
                                                                               "get_Token", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.get_ExecutingCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::CancellationCallbackInfo* (::System::Threading::CancellationTokenSource::*)()>(
    &::System::Threading::CancellationTokenSource::get_ExecutingCallback)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3dda2b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(),
                                                                               "get_ExecutingCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::CancellationTokenSource::*)()>(&::System::Threading::CancellationTokenSource::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3dda2c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::CancellationTokenSource::*)(::System::TimeSpan)>(
    &::System::Threading::CancellationTokenSource::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3dda2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.InitializeWithTimer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::CancellationTokenSource::*)(int32_t)>(
    &::System::Threading::CancellationTokenSource::InitializeWithTimer)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3dda3f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "InitializeWithTimer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.Cancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::CancellationTokenSource::*)()>(&::System::Threading::CancellationTokenSource::Cancel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3dda4a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "Cancel",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.Cancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::CancellationTokenSource::*)(bool)>(
    &::System::Threading::CancellationTokenSource::Cancel)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3dda4c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "Cancel",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.CancelAfter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::CancellationTokenSource::*)(::System::TimeSpan)>(
    &::System::Threading::CancellationTokenSource::CancelAfter)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3dda59c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "CancelAfter",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.CancelAfter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::CancellationTokenSource::*)(int32_t)>(
    &::System::Threading::CancellationTokenSource::CancelAfter)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x3dda67c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "CancelAfter",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.TimerCallbackLogic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::System::Threading::CancellationTokenSource::TimerCallbackLogic)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3dda864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "TimerCallbackLogic",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::CancellationTokenSource::*)()>(&::System::Threading::CancellationTokenSource::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3dda97c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::CancellationTokenSource::*)(bool)>(
    &::System::Threading::CancellationTokenSource::Dispose)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3dda9e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.ThrowIfDisposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::CancellationTokenSource::*)()>(
    &::System::Threading::CancellationTokenSource::ThrowIfDisposed)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3dda25c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(),
                                                                               "ThrowIfDisposed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.ThrowObjectDisposedException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Threading::CancellationTokenSource::ThrowObjectDisposedException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3ddaa78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(),
                                                                               "ThrowObjectDisposedException", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.InternalRegister
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::CancellationTokenRegistration (::System::Threading::CancellationTokenSource::*)(
    ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Threading::SynchronizationContext*, ::System::Threading::ExecutionContext*)>(
    &::System::Threading::CancellationTokenSource::InternalRegister)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x3dd7f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "InternalRegister", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SynchronizationContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.NotifyCancellation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::CancellationTokenSource::*)(bool)>(
    &::System::Threading::CancellationTokenSource::NotifyCancellation)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3dda4ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "NotifyCancellation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.ExecuteCallbackHandlers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::CancellationTokenSource::*)(bool)>(
    &::System::Threading::CancellationTokenSource::ExecuteCallbackHandlers)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x3ddab58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "ExecuteCallbackHandlers",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.CancellationCallbackCoreWork_OnSyncContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::CancellationTokenSource::*)(::System::Object*)>(
    &::System::Threading::CancellationTokenSource::CancellationCallbackCoreWork_OnSyncContext)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3ddb0dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "CancellationCallbackCoreWork_OnSyncContext",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.CancellationCallbackCoreWork
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::CancellationTokenSource::*)(::System::Threading::CancellationCallbackCoreWorkArguments)>(
    &::System::Threading::CancellationTokenSource::CancellationCallbackCoreWork)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3ddb020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "CancellationCallbackCoreWork", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationCallbackCoreWorkArguments>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.CreateLinkedTokenSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::CancellationTokenSource* (*)(::System::Threading::CancellationToken, ::System::Threading::CancellationToken)>(
        &::System::Threading::CancellationTokenSource::CreateLinkedTokenSource)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3ddb248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "CreateLinkedTokenSource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.CreateLinkedTokenSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::CancellationTokenSource* (*)(::System::Threading::CancellationToken)>(
    &::System::Threading::CancellationTokenSource::CreateLinkedTokenSource)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3ddb57c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "CreateLinkedTokenSource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.WaitForCallbackToComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::CancellationTokenSource::*)(::System::Threading::CancellationCallbackInfo*)>(
    &::System::Threading::CancellationTokenSource::WaitForCallbackToComplete)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3dd9f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "WaitForCallbackToComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationCallbackInfo*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Threading::CancellationTokenSource::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Threading::CancellationTokenSource::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Threading::ManualResetEvent*& System::Threading::CancellationTokenSource::__cordl_internal_get__kernelEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kernelEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> const& System::Threading::CancellationTokenSource::__cordl_internal_get__kernelEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kernelEvent;
}
constexpr void System::Threading::CancellationTokenSource::__cordl_internal_set__kernelEvent(::System::Threading::ManualResetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____kernelEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*,
                   ::Array<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*>*>&
System::Threading::CancellationTokenSource::__cordl_internal_get__registeredCallbacksLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredCallbacksLists;
}
constexpr ::ArrayW<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*,
                   ::Array<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*>*> const&
System::Threading::CancellationTokenSource::__cordl_internal_get__registeredCallbacksLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredCallbacksLists;
}
constexpr void System::Threading::CancellationTokenSource::__cordl_internal_set__registeredCallbacksLists(
    ::ArrayW<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*,
             ::Array<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____registeredCallbacksLists)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Threading::CancellationTokenSource::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr int32_t const& System::Threading::CancellationTokenSource::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr void System::Threading::CancellationTokenSource::__cordl_internal_set__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state = value;
}
constexpr int32_t& System::Threading::CancellationTokenSource::__cordl_internal_get__threadIDExecutingCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____threadIDExecutingCallbacks;
}
constexpr int32_t const& System::Threading::CancellationTokenSource::__cordl_internal_get__threadIDExecutingCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____threadIDExecutingCallbacks;
}
constexpr void System::Threading::CancellationTokenSource::__cordl_internal_set__threadIDExecutingCallbacks(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____threadIDExecutingCallbacks = value;
}
constexpr bool& System::Threading::CancellationTokenSource::__cordl_internal_get__disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr bool const& System::Threading::CancellationTokenSource::__cordl_internal_get__disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr void System::Threading::CancellationTokenSource::__cordl_internal_set__disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed = value;
}
constexpr ::System::Threading::CancellationCallbackInfo*& System::Threading::CancellationTokenSource::__cordl_internal_get__executingCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____executingCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationCallbackInfo*> const& System::Threading::CancellationTokenSource::__cordl_internal_get__executingCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____executingCallback;
}
constexpr void System::Threading::CancellationTokenSource::__cordl_internal_set__executingCallback(::System::Threading::CancellationCallbackInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____executingCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Timer*& System::Threading::CancellationTokenSource::__cordl_internal_get__timer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timer;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Timer*> const& System::Threading::CancellationTokenSource::__cordl_internal_get__timer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timer;
}
constexpr void System::Threading::CancellationTokenSource::__cordl_internal_set__timer(::System::Threading::Timer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____timer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Threading::CancellationTokenSource::setStaticF_s_canceledSource(::System::Threading::CancellationTokenSource* value) {
  ::cordl_internals::setStaticField<::System::Threading::CancellationTokenSource*, "s_canceledSource",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get>(
      std::forward<::System::Threading::CancellationTokenSource*>(value));
}
inline ::System::Threading::CancellationTokenSource* System::Threading::CancellationTokenSource::getStaticF_s_canceledSource() {
  return ::cordl_internals::getStaticField<::System::Threading::CancellationTokenSource*, "s_canceledSource",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get>();
}
inline void System::Threading::CancellationTokenSource::setStaticF_s_neverCanceledSource(::System::Threading::CancellationTokenSource* value) {
  ::cordl_internals::setStaticField<::System::Threading::CancellationTokenSource*, "s_neverCanceledSource",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get>(
      std::forward<::System::Threading::CancellationTokenSource*>(value));
}
inline ::System::Threading::CancellationTokenSource* System::Threading::CancellationTokenSource::getStaticF_s_neverCanceledSource() {
  return ::cordl_internals::getStaticField<::System::Threading::CancellationTokenSource*, "s_neverCanceledSource",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get>();
}
inline void System::Threading::CancellationTokenSource::setStaticF_s_nLists(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_nLists", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Threading::CancellationTokenSource::getStaticF_s_nLists() {
  return ::cordl_internals::getStaticField<int32_t, "s_nLists", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get>();
}
inline void System::Threading::CancellationTokenSource::setStaticF_s_timerCallback(::System::Threading::TimerCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::TimerCallback*, "s_timerCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get>(
      std::forward<::System::Threading::TimerCallback*>(value));
}
inline ::System::Threading::TimerCallback* System::Threading::CancellationTokenSource::getStaticF_s_timerCallback() {
  return ::cordl_internals::getStaticField<::System::Threading::TimerCallback*, "s_timerCallback",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get>();
}
inline bool System::Threading::CancellationTokenSource::get_IsCancellationRequested() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(),
                                                                             "get_IsCancellationRequested", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Threading::CancellationTokenSource::get_IsCancellationCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(),
                                                                             "get_IsCancellationCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Threading::CancellationTokenSource::get_IsDisposed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(),
                                                                             "get_IsDisposed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Threading::CancellationTokenSource::get_ThreadIDExecutingCallbacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(),
                                                                             "get_ThreadIDExecutingCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Threading::CancellationTokenSource::set_ThreadIDExecutingCallbacks(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "set_ThreadIDExecutingCallbacks",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Threading::CancellationToken System::Threading::CancellationTokenSource::get_Token() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "get_Token",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken, false>(this, ___internal_method);
}
inline ::System::Threading::CancellationCallbackInfo* System::Threading::CancellationTokenSource::get_ExecutingCallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(),
                                                                             "get_ExecutingCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationCallbackInfo*, false>(this, ___internal_method);
}
inline ::System::Threading::CancellationTokenSource* System::Threading::CancellationTokenSource::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::CancellationTokenSource*>());
}
inline void System::Threading::CancellationTokenSource::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::CancellationTokenSource* System::Threading::CancellationTokenSource::New_ctor(::System::TimeSpan delay) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::CancellationTokenSource*>(delay));
}
inline void System::Threading::CancellationTokenSource::_ctor(::System::TimeSpan delay) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, delay);
}
inline void System::Threading::CancellationTokenSource::InitializeWithTimer(int32_t millisecondsDelay) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "InitializeWithTimer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, millisecondsDelay);
}
inline void System::Threading::CancellationTokenSource::Cancel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "Cancel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::CancellationTokenSource::Cancel(bool throwOnFirstException) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "Cancel",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, throwOnFirstException);
}
inline void System::Threading::CancellationTokenSource::CancelAfter(::System::TimeSpan delay) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "CancelAfter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, delay);
}
inline void System::Threading::CancellationTokenSource::CancelAfter(int32_t millisecondsDelay) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "CancelAfter",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, millisecondsDelay);
}
inline void System::Threading::CancellationTokenSource::TimerCallbackLogic(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "TimerCallbackLogic",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
inline void System::Threading::CancellationTokenSource::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::CancellationTokenSource::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::Threading::CancellationTokenSource::ThrowIfDisposed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(),
                                                                             "ThrowIfDisposed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::CancellationTokenSource::ThrowObjectDisposedException() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(),
                                                                             "ThrowObjectDisposedException", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::System::Threading::CancellationTokenRegistration System::Threading::CancellationTokenSource::InternalRegister(::System::Action_1<::System::Object*>* callback,
                                                                                                                       ::System::Object* stateForCallback,
                                                                                                                       ::System::Threading::SynchronizationContext* targetSyncContext,
                                                                                                                       ::System::Threading::ExecutionContext* executionContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "InternalRegister", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SynchronizationContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationTokenRegistration, false>(this, ___internal_method, callback, stateForCallback, targetSyncContext, executionContext);
}
inline void System::Threading::CancellationTokenSource::NotifyCancellation(bool throwOnFirstException) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "NotifyCancellation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, throwOnFirstException);
}
inline void System::Threading::CancellationTokenSource::ExecuteCallbackHandlers(bool throwOnFirstException) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "ExecuteCallbackHandlers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, throwOnFirstException);
}
inline void System::Threading::CancellationTokenSource::CancellationCallbackCoreWork_OnSyncContext(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "CancellationCallbackCoreWork_OnSyncContext",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline void System::Threading::CancellationTokenSource::CancellationCallbackCoreWork(::System::Threading::CancellationCallbackCoreWorkArguments args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "CancellationCallbackCoreWork", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationCallbackCoreWorkArguments>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline ::System::Threading::CancellationTokenSource* System::Threading::CancellationTokenSource::CreateLinkedTokenSource(::System::Threading::CancellationToken token1,
                                                                                                                         ::System::Threading::CancellationToken token2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "CreateLinkedTokenSource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationTokenSource*, false>(nullptr, ___internal_method, token1, token2);
}
inline ::System::Threading::CancellationTokenSource* System::Threading::CancellationTokenSource::CreateLinkedTokenSource(::System::Threading::CancellationToken token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "CreateLinkedTokenSource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationTokenSource*, false>(nullptr, ___internal_method, token);
}
inline void System::Threading::CancellationTokenSource::WaitForCallbackToComplete(::System::Threading::CancellationCallbackInfo* callbackInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationTokenSource*>::get(), "WaitForCallbackToComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationCallbackInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callbackInfo);
}
// Ctor Parameters []
constexpr ::System::Threading::CancellationTokenSource::CancellationTokenSource() {}
