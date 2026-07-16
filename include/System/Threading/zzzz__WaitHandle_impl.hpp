#pragma once
// IWYU pragma private; include "System/Threading/WaitHandle.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeWaitHandle_def.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Threading::WaitHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::WaitHandle::*)()>(&::System::Threading::WaitHandle::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb4de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::WaitHandle.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::WaitHandle::*)()>(&::System::Threading::WaitHandle::Init)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cb4de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::WaitHandle.set_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::WaitHandle::*)(::System::IntPtr)>(&::System::Threading::WaitHandle::set_Handle)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5cb4e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(), { ::i2c::class_of<::System::Threading::WaitHandle*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::WaitHandle.get_SafeWaitHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Microsoft::Win32::SafeHandles::SafeWaitHandle* (::System::Threading::WaitHandle::*)()>(&::System::Threading::WaitHandle::get_SafeWaitHandle)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5cb4f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(), { "get_SafeWaitHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::WaitHandle.SetHandleInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::WaitHandle::*)(::Microsoft::Win32::SafeHandles::SafeWaitHandle*)>(
    &::System::Threading::WaitHandle::SetHandleInternal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cb5020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(), { "SetHandleInternal", {}, { ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeWaitHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::WaitHandle.WaitOne
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::WaitHandle::*)(int32_t, bool)>(&::System::Threading::WaitHandle::WaitOne)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5cb5040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(), { ::i2c::class_of<::System::Threading::WaitHandle*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::WaitHandle.WaitOne
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::WaitHandle::*)(::System::TimeSpan, bool)>(&::System::Threading::WaitHandle::WaitOne)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5cb5130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(), { ::i2c::class_of<::System::Threading::WaitHandle*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::WaitHandle.WaitOne
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::WaitHandle::*)()>(&::System::Threading::WaitHandle::WaitOne)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cb5250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(), { ::i2c::class_of<::System::Threading::WaitHandle*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::WaitHandle.WaitOne
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::WaitHandle::*)(int32_t)>(&::System::Threading::WaitHandle::WaitOne)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cb5264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(), { ::i2c::class_of<::System::Threading::WaitHandle*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::WaitHandle.WaitOne
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::WaitHandle::*)(::System::TimeSpan)>(&::System::Threading::WaitHandle::WaitOne)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cb5274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(), { ::i2c::class_of<::System::Threading::WaitHandle*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::WaitHandle.WaitOne
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::WaitHandle::*)(int64_t, bool)>(&::System::Threading::WaitHandle::WaitOne)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5cb50b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(), { "WaitOne", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::WaitHandle.InternalWaitOne
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::InteropServices::SafeHandle*, int64_t, bool, bool)>(&::System::Threading::WaitHandle::InternalWaitOne)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5cb5284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Threading::WaitHandle*>(),
                         { "InternalWaitOne", {}, { ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::WaitHandle.WaitAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::System::Threading::WaitHandle*>, int32_t, bool)>(&::System::Threading::WaitHandle::WaitAny)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x5cb558c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(),
                                                             { "WaitAny", {}, { ::i2c::type_of<::ArrayW<::System::Threading::WaitHandle*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::WaitHandle.WaitAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::System::Threading::WaitHandle*>, ::System::TimeSpan, bool)>(&::System::Threading::WaitHandle::WaitAny)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5cb5d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(),
                                                { "WaitAny", {}, { ::i2c::type_of<::ArrayW<::System::Threading::WaitHandle*>>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::WaitHandle.ThrowAbandonedMutexException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Threading::WaitHandle::ThrowAbandonedMutexException)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5cb5554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(), { "ThrowAbandonedMutexException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::WaitHandle.ThrowAbandonedMutexException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::Threading::WaitHandle*)>(&::System::Threading::WaitHandle::ThrowAbandonedMutexException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5cb5d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(),
                                                             { "ThrowAbandonedMutexException", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::WaitHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::WaitHandle.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::WaitHandle::*)()>(&::System::Threading::WaitHandle::Close)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5cb5ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(), { ::i2c::class_of<::System::Threading::WaitHandle*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::WaitHandle.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::WaitHandle::*)(bool)>(&::System::Threading::WaitHandle::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5cb5f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(), { ::i2c::class_of<::System::Threading::WaitHandle*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::WaitHandle.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::WaitHandle::*)()>(&::System::Threading::WaitHandle::Dispose)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5cb5f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::WaitHandle.WaitOneNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Runtime::InteropServices::SafeHandle*, uint32_t, bool, bool)>(&::System::Threading::WaitHandle::WaitOneNative)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5cb5374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Threading::WaitHandle*>(),
                         { "WaitOneNative", {}, { ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::WaitHandle.WaitMultiple
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::System::Threading::WaitHandle*>, int32_t, bool, bool)>(&::System::Threading::WaitHandle::WaitMultiple)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x5cb5868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(),
                            { "WaitMultiple", {}, { ::i2c::type_of<::ArrayW<::System::Threading::WaitHandle*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::WaitHandle.Wait_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr*, int32_t, bool, int32_t)>(&::System::Threading::WaitHandle::Wait_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb5fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(),
                                                { "Wait_internal", {}, { ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& System::Threading::WaitHandle::__cordl_internal_get_waitHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___waitHandle;
}
constexpr ::System::IntPtr const& System::Threading::WaitHandle::__cordl_internal_get_waitHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___waitHandle;
}
constexpr void System::Threading::WaitHandle::__cordl_internal_set_waitHandle(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___waitHandle = value;
}
constexpr ::Microsoft::Win32::SafeHandles::SafeWaitHandle*& System::Threading::WaitHandle::__cordl_internal_get_safeWaitHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___safeWaitHandle;
}
constexpr ::Microsoft::Win32::SafeHandles::SafeWaitHandle* const& System::Threading::WaitHandle::__cordl_internal_get_safeWaitHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___safeWaitHandle;
}
constexpr void System::Threading::WaitHandle::__cordl_internal_set_safeWaitHandle(::Microsoft::Win32::SafeHandles::SafeWaitHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___safeWaitHandle = value;
}
constexpr bool& System::Threading::WaitHandle::__cordl_internal_get_hasThreadAffinity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasThreadAffinity;
}
constexpr bool const& System::Threading::WaitHandle::__cordl_internal_get_hasThreadAffinity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasThreadAffinity;
}
constexpr void System::Threading::WaitHandle::__cordl_internal_set_hasThreadAffinity(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasThreadAffinity = value;
}
inline void System::Threading::WaitHandle::setStaticF_InvalidHandle(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "InvalidHandle", ::System::Threading::WaitHandle*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr System::Threading::WaitHandle::getStaticF_InvalidHandle() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "InvalidHandle", ::System::Threading::WaitHandle*>();
}
inline void System::Threading::WaitHandle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::WaitHandle::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::WaitHandle::set_Handle(::System::IntPtr value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::WaitHandle*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Microsoft::Win32::SafeHandles::SafeWaitHandle* System::Threading::WaitHandle::get_SafeWaitHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(), { "get_SafeWaitHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeWaitHandle*>(this, ___internal_method);
}
inline void System::Threading::WaitHandle::SetHandleInternal(::Microsoft::Win32::SafeHandles::SafeWaitHandle* handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(), { "SetHandleInternal", {}, { ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeWaitHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline bool System::Threading::WaitHandle::WaitOne(int32_t millisecondsTimeout, bool exitContext) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::WaitHandle*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, millisecondsTimeout, exitContext);
}
inline bool System::Threading::WaitHandle::WaitOne(::System::TimeSpan timeout, bool exitContext) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::WaitHandle*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, timeout, exitContext);
}
inline bool System::Threading::WaitHandle::WaitOne() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::WaitHandle*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Threading::WaitHandle::WaitOne(int32_t millisecondsTimeout) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::WaitHandle*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, millisecondsTimeout);
}
inline bool System::Threading::WaitHandle::WaitOne(::System::TimeSpan timeout) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::WaitHandle*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, timeout);
}
inline bool System::Threading::WaitHandle::WaitOne(int64_t timeout, bool exitContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(), { "WaitOne", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, timeout, exitContext);
}
inline bool System::Threading::WaitHandle::InternalWaitOne(::System::Runtime::InteropServices::SafeHandle* waitableSafeHandle, int64_t millisecondsTimeout, bool hasThreadAffinity, bool exitContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Threading::WaitHandle*>(),
                       { "InternalWaitOne", {}, { ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, waitableSafeHandle, millisecondsTimeout, hasThreadAffinity, exitContext);
}
inline int32_t System::Threading::WaitHandle::WaitAny(::ArrayW<::System::Threading::WaitHandle*> waitHandles, int32_t millisecondsTimeout, bool exitContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(),
                                                           { "WaitAny", {}, { ::i2c::type_of<::ArrayW<::System::Threading::WaitHandle*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, waitHandles, millisecondsTimeout, exitContext);
}
inline int32_t System::Threading::WaitHandle::WaitAny(::ArrayW<::System::Threading::WaitHandle*> waitHandles, ::System::TimeSpan timeout, bool exitContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(),
                                              { "WaitAny", {}, { ::i2c::type_of<::ArrayW<::System::Threading::WaitHandle*>>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, waitHandles, timeout, exitContext);
}
inline void System::Threading::WaitHandle::ThrowAbandonedMutexException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(), { "ThrowAbandonedMutexException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Threading::WaitHandle::ThrowAbandonedMutexException(int32_t location, ::System::Threading::WaitHandle* handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(),
                                                           { "ThrowAbandonedMutexException", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::WaitHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, location, handle);
}
inline void System::Threading::WaitHandle::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::WaitHandle*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::WaitHandle::Dispose(bool explicitDisposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::WaitHandle*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, explicitDisposing);
}
inline void System::Threading::WaitHandle::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Threading::WaitHandle::WaitOneNative(::System::Runtime::InteropServices::SafeHandle* waitableSafeHandle, uint32_t millisecondsTimeout, bool hasThreadAffinity,
                                                            bool exitContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(),
                          { "WaitOneNative", {}, { ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, waitableSafeHandle, millisecondsTimeout, hasThreadAffinity, exitContext);
}
inline int32_t System::Threading::WaitHandle::WaitMultiple(::ArrayW<::System::Threading::WaitHandle*> waitHandles, int32_t millisecondsTimeout, bool exitContext, bool WaitAll) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(),
                          { "WaitMultiple", {}, { ::i2c::type_of<::ArrayW<::System::Threading::WaitHandle*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, waitHandles, millisecondsTimeout, exitContext, WaitAll);
}
inline int32_t System::Threading::WaitHandle::Wait_internal(::System::IntPtr* handles, int32_t numHandles, bool waitAll, int32_t ms) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::WaitHandle*>(),
                                              { "Wait_internal", {}, { ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handles, numHandles, waitAll, ms);
}
inline ::System::Threading::WaitHandle* System::Threading::WaitHandle::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::WaitHandle*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Threading::WaitHandle::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Threading::WaitHandle::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Threading::WaitHandle::WaitHandle() {}
