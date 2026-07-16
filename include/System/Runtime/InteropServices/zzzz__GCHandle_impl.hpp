#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/GCHandle.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandleType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::GCHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::GCHandle::*)(::System::IntPtr)>(&::System::Runtime::InteropServices::GCHandle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6aec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::GCHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::GCHandle::*)(::System::Object*)>(&::System::Runtime::InteropServices::GCHandle::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b6aed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::GCHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::GCHandle::*)(::System::Object*, ::System::Runtime::InteropServices::GCHandleType)>(
    &::System::Runtime::InteropServices::GCHandle::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b6aef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::InteropServices::GCHandleType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::GCHandle.get_IsAllocated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::InteropServices::GCHandle::*)()>(&::System::Runtime::InteropServices::GCHandle::get_IsAllocated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b6af24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "get_IsAllocated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::GCHandle.GetRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::IntPtr)>(&::System::Runtime::InteropServices::GCHandle::GetRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6af34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "GetRef", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::GCHandle.SetRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::Object*)>(&::System::Runtime::InteropServices::GCHandle::SetRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6af3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(),
                                                                                           { "SetRef", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::GCHandle.CanDereferenceHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::System::Runtime::InteropServices::GCHandle::CanDereferenceHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b6af44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "CanDereferenceHandle", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::GCHandle.get_Target
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::InteropServices::GCHandle::*)()>(&::System::Runtime::InteropServices::GCHandle::get_Target)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b6af50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "get_Target", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::GCHandle.set_Target
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::GCHandle::*)(::System::Object*)>(&::System::Runtime::InteropServices::GCHandle::set_Target)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5b6afb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "set_Target", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::GCHandle.AddrOfPinnedObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::System::Runtime::InteropServices::GCHandle::*)()>(&::System::Runtime::InteropServices::GCHandle::AddrOfPinnedObject)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b6afec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "AddrOfPinnedObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::GCHandle.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::GCHandle (*)(::System::Object*)>(&::System::Runtime::InteropServices::GCHandle::Alloc)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b6b090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "Alloc", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::GCHandle.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::GCHandle (*)(::System::Object*, ::System::Runtime::InteropServices::GCHandleType)>(
    &::System::Runtime::InteropServices::GCHandle::Alloc)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b6b09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(),
                                                             { "Alloc", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::InteropServices::GCHandleType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::GCHandle.Free
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::GCHandle::*)()>(&::System::Runtime::InteropServices::GCHandle::Free)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b6b0b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "Free", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::GCHandle.op_Explicit___System__IntPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::Runtime::InteropServices::GCHandle)>(
    &::System::Runtime::InteropServices::GCHandle::op_Explicit___System__IntPtr)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b6b130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Runtime::InteropServices::GCHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::GCHandle.op_Explicit___System__Runtime__InteropServices__GCHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::GCHandle (*)(::System::IntPtr)>(
    &::System::Runtime::InteropServices::GCHandle::op_Explicit___System__Runtime__InteropServices__GCHandle)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b6b134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "op_Explicit", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::GCHandle.CheckCurrentDomain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::System::Runtime::InteropServices::GCHandle::CheckCurrentDomain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6b188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "CheckCurrentDomain", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::GCHandle.GetTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::IntPtr)>(&::System::Runtime::InteropServices::GCHandle::GetTarget)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b6afb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "GetTarget", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::GCHandle.GetTargetHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::Object*, ::System::IntPtr, ::System::Runtime::InteropServices::GCHandleType)>(
    &::System::Runtime::InteropServices::GCHandle::GetTargetHandle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b6af20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(),
                         { "GetTargetHandle", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Runtime::InteropServices::GCHandleType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::GCHandle.FreeHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::System::Runtime::InteropServices::GCHandle::FreeHandle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b6b12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "FreeHandle", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::GCHandle.GetAddrOfPinnedObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::System::Runtime::InteropServices::GCHandle::GetAddrOfPinnedObject)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b6b08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "GetAddrOfPinnedObject", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::GCHandle.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::InteropServices::GCHandle, ::System::Runtime::InteropServices::GCHandle)>(
    &::System::Runtime::InteropServices::GCHandle::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b6b190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(),
                                         { "op_Equality", {}, { ::i2c::type_of<::System::Runtime::InteropServices::GCHandle>(), ::i2c::type_of<::System::Runtime::InteropServices::GCHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::GCHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::InteropServices::GCHandle::*)(::System::Object*)>(&::System::Runtime::InteropServices::GCHandle::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b6b19c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { ::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::GCHandle.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::InteropServices::GCHandle::*)()>(&::System::Runtime::InteropServices::GCHandle::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6b218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { ::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::GCHandle.FromIntPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::GCHandle (*)(::System::IntPtr)>(&::System::Runtime::InteropServices::GCHandle::FromIntPtr)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b6b220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "FromIntPtr", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::GCHandle.ToIntPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::Runtime::InteropServices::GCHandle)>(&::System::Runtime::InteropServices::GCHandle::ToIntPtr)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b6b224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "ToIntPtr", {}, { ::i2c::type_of<::System::Runtime::InteropServices::GCHandle>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::InteropServices::GCHandle::_ctor(::System::IntPtr h) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, h);
}
inline void System::Runtime::InteropServices::GCHandle::_ctor(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, obj);
}
inline void System::Runtime::InteropServices::GCHandle::_ctor(::System::Object* value, ::System::Runtime::InteropServices::GCHandleType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::InteropServices::GCHandleType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, type);
}
inline bool System::Runtime::InteropServices::GCHandle::get_IsAllocated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "get_IsAllocated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::Object* System::Runtime::InteropServices::GCHandle::GetRef(::System::IntPtr handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "GetRef", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, handle);
}
inline void System::Runtime::InteropServices::GCHandle::SetRef(::System::IntPtr handle, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(),
                                                                                         { "SetRef", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, value);
}
inline bool System::Runtime::InteropServices::GCHandle::CanDereferenceHandle(::System::IntPtr handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "CanDereferenceHandle", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline ::System::Object* System::Runtime::InteropServices::GCHandle::get_Target() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "get_Target", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void System::Runtime::InteropServices::GCHandle::set_Target(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "set_Target", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::IntPtr System::Runtime::InteropServices::GCHandle::AddrOfPinnedObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "AddrOfPinnedObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline ::System::Runtime::InteropServices::GCHandle System::Runtime::InteropServices::GCHandle::Alloc(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "Alloc", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::GCHandle>(nullptr, ___internal_method, value);
}
inline ::System::Runtime::InteropServices::GCHandle System::Runtime::InteropServices::GCHandle::Alloc(::System::Object* value, ::System::Runtime::InteropServices::GCHandleType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(),
                                                           { "Alloc", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::InteropServices::GCHandleType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::GCHandle>(nullptr, ___internal_method, value, type);
}
inline void System::Runtime::InteropServices::GCHandle::Free() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "Free", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::System::IntPtr System::Runtime::InteropServices::GCHandle::op_Explicit___System__IntPtr(::System::Runtime::InteropServices::GCHandle value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Runtime::InteropServices::GCHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, value);
}
inline ::System::Runtime::InteropServices::GCHandle System::Runtime::InteropServices::GCHandle::op_Explicit___System__Runtime__InteropServices__GCHandle(::System::IntPtr value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "op_Explicit", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::GCHandle>(nullptr, ___internal_method, value);
}
inline bool System::Runtime::InteropServices::GCHandle::CheckCurrentDomain(::System::IntPtr handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "CheckCurrentDomain", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline ::System::Object* System::Runtime::InteropServices::GCHandle::GetTarget(::System::IntPtr handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "GetTarget", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, handle);
}
inline ::System::IntPtr System::Runtime::InteropServices::GCHandle::GetTargetHandle(::System::Object* obj, ::System::IntPtr handle, ::System::Runtime::InteropServices::GCHandleType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(),
                          { "GetTargetHandle", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Runtime::InteropServices::GCHandleType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj, handle, type);
}
inline void System::Runtime::InteropServices::GCHandle::FreeHandle(::System::IntPtr handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "FreeHandle", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline ::System::IntPtr System::Runtime::InteropServices::GCHandle::GetAddrOfPinnedObject(::System::IntPtr handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "GetAddrOfPinnedObject", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handle);
}
inline bool System::Runtime::InteropServices::GCHandle::op_Equality(::System::Runtime::InteropServices::GCHandle a, ::System::Runtime::InteropServices::GCHandle b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(),
                                       { "op_Equality", {}, { ::i2c::type_of<::System::Runtime::InteropServices::GCHandle>(), ::i2c::type_of<::System::Runtime::InteropServices::GCHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool System::Runtime::InteropServices::GCHandle::Equals(::System::Object* o) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t System::Runtime::InteropServices::GCHandle::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::Runtime::InteropServices::GCHandle System::Runtime::InteropServices::GCHandle::FromIntPtr(::System::IntPtr value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "FromIntPtr", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::GCHandle>(nullptr, ___internal_method, value);
}
inline ::System::IntPtr System::Runtime::InteropServices::GCHandle::ToIntPtr(::System::Runtime::InteropServices::GCHandle value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GCHandle>(), { "ToIntPtr", {}, { ::i2c::type_of<::System::Runtime::InteropServices::GCHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "handle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::InteropServices::GCHandle::GCHandle(::System::IntPtr handle) noexcept {
  this->handle = handle;
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::GCHandle::GCHandle() {}
