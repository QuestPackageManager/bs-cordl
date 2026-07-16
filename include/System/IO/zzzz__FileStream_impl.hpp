#pragma once
// IWYU pragma private; include "System/IO/FileStream.hpp"
#include "System/IO/zzzz__FileAccess_impl.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/IO/zzzz__FileStream_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeFileHandle_def.hpp"
#include "System/IO/zzzz__FileAccess_def.hpp"
#include "System/IO/zzzz__FileMode_def.hpp"
#include "System/IO/zzzz__FileOptions_def.hpp"
#include "System/IO/zzzz__FileShare_def.hpp"
#include "System/IO/zzzz__FileStream_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::IO::FileStream_ReadDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream_ReadDelegate::*)(::System::Object*, ::System::IntPtr)>(&::System::IO::FileStream_ReadDelegate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c1a738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::IO::FileStream_ReadDelegate*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream_ReadDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::FileStream_ReadDelegate::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::IO::FileStream_ReadDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c1c1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream_ReadDelegate*>(), { ::i2c::class_of<::System::IO::FileStream_ReadDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream_ReadDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::IO::FileStream_ReadDelegate::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*,
                                                                                                                          ::System::Object*)>(&::System::IO::FileStream_ReadDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c1a7b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream_ReadDelegate*>(), { ::i2c::class_of<::System::IO::FileStream_ReadDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream_ReadDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::FileStream_ReadDelegate::*)(::System::IAsyncResult*)>(&::System::IO::FileStream_ReadDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c1a9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream_ReadDelegate*>(), { ::i2c::class_of<::System::IO::FileStream_ReadDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void System::IO::FileStream_ReadDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::IO::FileStream_ReadDelegate*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t System::IO::FileStream_ReadDelegate::Invoke(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream_ReadDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline ::System::IAsyncResult* System::IO::FileStream_ReadDelegate::BeginInvoke(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream_ReadDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, count, callback, object);
}
inline int32_t System::IO::FileStream_ReadDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream_ReadDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, result);
}
inline ::System::IO::FileStream_ReadDelegate* System::IO::FileStream_ReadDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileStream_ReadDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::System::IO::FileStream_ReadDelegate::FileStream_ReadDelegate() {}
//  Writing Method size for method: ::System::IO::FileStream_WriteDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream_WriteDelegate::*)(::System::Object*, ::System::IntPtr)>(&::System::IO::FileStream_WriteDelegate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c1b35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::IO::FileStream_WriteDelegate*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream_WriteDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream_WriteDelegate::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::IO::FileStream_WriteDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c1c1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream_WriteDelegate*>(), { ::i2c::class_of<::System::IO::FileStream_WriteDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream_WriteDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::IO::FileStream_WriteDelegate::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*,
                                                                                                                           ::System::Object*)>(&::System::IO::FileStream_WriteDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c1b3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream_WriteDelegate*>(), { ::i2c::class_of<::System::IO::FileStream_WriteDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream_WriteDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream_WriteDelegate::*)(::System::IAsyncResult*)>(&::System::IO::FileStream_WriteDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c1b5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream_WriteDelegate*>(), { ::i2c::class_of<::System::IO::FileStream_WriteDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void System::IO::FileStream_WriteDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::IO::FileStream_WriteDelegate*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::IO::FileStream_WriteDelegate::Invoke(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream_WriteDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline ::System::IAsyncResult* System::IO::FileStream_WriteDelegate::BeginInvoke(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream_WriteDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, count, callback, object);
}
inline void System::IO::FileStream_WriteDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream_WriteDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::System::IO::FileStream_WriteDelegate* System::IO::FileStream_WriteDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileStream_WriteDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::System::IO::FileStream_WriteDelegate::FileStream_WriteDelegate() {}
//  Writing Method size for method: ::System::IO::FileStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream::*)(::System::IntPtr, ::System::IO::FileAccess, bool, int32_t)>(&::System::IO::FileStream::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c173d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IO::FileAccess>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream::*)(::System::IntPtr, ::System::IO::FileAccess, bool, int32_t, bool, bool)>(&::System::IO::FileStream::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5c173dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ".ctor",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IO::FileAccess>(), ::i2c::type_of<bool>(),
                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream::*)(::StringW, ::System::IO::FileMode, ::System::IO::FileAccess)>(&::System::IO::FileStream::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5c17814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<::System::IO::FileAccess>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream::*)(::StringW, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare)>(
    &::System::IO::FileStream::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c17858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::IO::FileStream*>(),
            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<::System::IO::FileAccess>(), ::i2c::type_of<::System::IO::FileShare>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream::*)(::StringW, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, int32_t)>(
    &::System::IO::FileStream::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c17f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ".ctor",
                                                                            {},
                                                                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<::System::IO::FileAccess>(),
                                                                              ::i2c::type_of<::System::IO::FileShare>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream::*)(::StringW, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, int32_t, bool)>(
    &::System::IO::FileStream::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c17f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ".ctor",
                                                                            {},
                                                                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<::System::IO::FileAccess>(),
                                                                              ::i2c::type_of<::System::IO::FileShare>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream::*)(::StringW, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, int32_t,
                                                                                          ::System::IO::FileOptions)>(&::System::IO::FileStream::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c17f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ".ctor",
                                                                            {},
                                                                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<::System::IO::FileAccess>(),
                                                                              ::i2c::type_of<::System::IO::FileShare>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::FileOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream::*)(::StringW, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, int32_t, bool, bool)>(
    &::System::IO::FileStream::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c17840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<::System::IO::FileAccess>(),
                                                                 ::i2c::type_of<::System::IO::FileShare>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream::*)(::StringW, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, int32_t, bool,
                                                                                          ::System::IO::FileOptions)>(&::System::IO::FileStream::_ctor)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x5c1787c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<::System::IO::FileAccess>(),
                                                    ::i2c::type_of<::System::IO::FileShare>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IO::FileOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream::*)(::Microsoft::Win32::SafeHandles::SafeFileHandle*, ::System::IO::FileAccess, bool, int32_t, bool, bool)>(
    &::System::IO::FileStream::Init)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5c1756c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { "Init",
                                                                            {},
                                                                            { ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeFileHandle*>(), ::i2c::type_of<::System::IO::FileAccess>(),
                                                                              ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.get_CanRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::FileStream::*)()>(&::System::IO::FileStream::get_CanRead)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c1967c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ::i2c::class_of<::System::IO::FileStream*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.get_CanWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::FileStream::*)()>(&::System::IO::FileStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c19690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ::i2c::class_of<::System::IO::FileStream*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.get_CanSeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::FileStream::*)()>(&::System::IO::FileStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c196a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ::i2c::class_of<::System::IO::FileStream*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::FileStream::*)()>(&::System::IO::FileStream::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c196ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ::i2c::class_of<::System::IO::FileStream*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::IO::FileStream::*)()>(&::System::IO::FileStream::get_Length)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5c196b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ::i2c::class_of<::System::IO::FileStream*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.get_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::IO::FileStream::*)()>(&::System::IO::FileStream::get_Position)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5c19964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ::i2c::class_of<::System::IO::FileStream*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.set_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream::*)(int64_t)>(&::System::IO::FileStream::set_Position)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c19ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ::i2c::class_of<::System::IO::FileStream*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.get_SafeFileHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Microsoft::Win32::SafeHandles::SafeFileHandle* (::System::IO::FileStream::*)()>(&::System::IO::FileStream::get_SafeFileHandle)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c19b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ::i2c::class_of<::System::IO::FileStream*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.ExposeHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream::*)()>(&::System::IO::FileStream::ExposeHandle)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c19500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { "ExposeHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.ReadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::FileStream::*)()>(&::System::IO::FileStream::ReadByte)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5c19d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ::i2c::class_of<::System::IO::FileStream*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.WriteByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream::*)(uint8_t)>(&::System::IO::FileStream::WriteByte)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5c19fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ::i2c::class_of<::System::IO::FileStream*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::FileStream::*)(::by_ref<::ArrayW<uint8_t>>, int32_t, int32_t)>(&::System::IO::FileStream::Read)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5c1a108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ::i2c::class_of<::System::IO::FileStream*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.ReadInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::FileStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::IO::FileStream::ReadInternal)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c1a34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { "ReadInternal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.BeginRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::IO::FileStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::System::IO::FileStream::BeginRead)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5c1a49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ::i2c::class_of<::System::IO::FileStream*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.EndRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::FileStream::*)(::System::IAsyncResult*)>(&::System::IO::FileStream::EndRead)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5c1a82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ::i2c::class_of<::System::IO::FileStream*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::IO::FileStream::Write)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5c1a9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ::i2c::class_of<::System::IO::FileStream*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.WriteInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::IO::FileStream::WriteInternal)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5c1abf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { "WriteInternal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.BeginWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::IO::FileStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::System::IO::FileStream::BeginWrite)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x5c1afb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ::i2c::class_of<::System::IO::FileStream*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.EndWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream::*)(::System::IAsyncResult*)>(&::System::IO::FileStream::EndWrite)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5c1b450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ::i2c::class_of<::System::IO::FileStream*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.Seek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::IO::FileStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::System::IO::FileStream::Seek)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5c1b5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ::i2c::class_of<::System::IO::FileStream*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.SetLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream::*)(int64_t)>(&::System::IO::FileStream::SetLength)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5c1b834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ::i2c::class_of<::System::IO::FileStream*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream::*)()>(&::System::IO::FileStream::Flush)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c1bb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ::i2c::class_of<::System::IO::FileStream*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream::*)()>(&::System::IO::FileStream::Finalize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5c1bbf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ::i2c::class_of<::System::IO::FileStream*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream::*)(bool)>(&::System::IO::FileStream::Dispose)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x5c1bc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ::i2c::class_of<::System::IO::FileStream*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.FlushAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::FileStream::*)(::System::Threading::CancellationToken)>(
    &::System::IO::FileStream::FlushAsync)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c1bf84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ::i2c::class_of<::System::IO::FileStream*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.ReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::IO::FileStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::IO::FileStream::ReadAsync)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c1bfec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ::i2c::class_of<::System::IO::FileStream*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::FileStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(
    &::System::IO::FileStream::WriteAsync)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c1bff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ::i2c::class_of<::System::IO::FileStream*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.ReadSegment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::FileStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::IO::FileStream::ReadSegment)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c1a3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { "ReadSegment", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.WriteSegment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::FileStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::IO::FileStream::WriteSegment)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c1af38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { "WriteSegment", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.FlushBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream::*)()>(&::System::IO::FileStream::FlushBuffer)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5c19b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { "FlushBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.FlushBufferIfDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream::*)()>(&::System::IO::FileStream::FlushBufferIfDirty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c19818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { "FlushBufferIfDirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.RefillBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream::*)()>(&::System::IO::FileStream::RefillBuffer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5c19f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { "RefillBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.ReadData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::FileStream::*)(::System::Runtime::InteropServices::SafeHandle*, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::IO::FileStream::ReadData)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5c19e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::IO::FileStream*>(),
            { "ReadData", {}, { ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.InitBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStream::*)(int32_t, bool)>(&::System::IO::FileStream::InitBuffer)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5c1926c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { "InitBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.GetSecureFileName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::FileStream::*)(::StringW)>(&::System::IO::FileStream::GetSecureFileName)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c18738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { "GetSecureFileName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStream.GetSecureFileName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::FileStream::*)(::StringW, bool)>(&::System::IO::FileStream::GetSecureFileName)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c18590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { "GetSecureFileName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::IO::FileStream::__cordl_internal_get_buf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf;
}
constexpr ::ArrayW<uint8_t> const& System::IO::FileStream::__cordl_internal_get_buf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf;
}
constexpr void System::IO::FileStream::__cordl_internal_set_buf(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buf = value;
}
constexpr ::StringW& System::IO::FileStream::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::IO::FileStream::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::IO::FileStream::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::Microsoft::Win32::SafeHandles::SafeFileHandle*& System::IO::FileStream::__cordl_internal_get_safeHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___safeHandle;
}
constexpr ::Microsoft::Win32::SafeHandles::SafeFileHandle* const& System::IO::FileStream::__cordl_internal_get_safeHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___safeHandle;
}
constexpr void System::IO::FileStream::__cordl_internal_set_safeHandle(::Microsoft::Win32::SafeHandles::SafeFileHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___safeHandle = value;
}
constexpr bool& System::IO::FileStream::__cordl_internal_get_isExposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isExposed;
}
constexpr bool const& System::IO::FileStream::__cordl_internal_get_isExposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isExposed;
}
constexpr void System::IO::FileStream::__cordl_internal_set_isExposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isExposed = value;
}
constexpr int64_t& System::IO::FileStream::__cordl_internal_get_append_startpos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___append_startpos;
}
constexpr int64_t const& System::IO::FileStream::__cordl_internal_get_append_startpos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___append_startpos;
}
constexpr void System::IO::FileStream::__cordl_internal_set_append_startpos(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___append_startpos = value;
}
constexpr ::System::IO::FileAccess& System::IO::FileStream::__cordl_internal_get_access() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___access;
}
constexpr ::System::IO::FileAccess const& System::IO::FileStream::__cordl_internal_get_access() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___access;
}
constexpr void System::IO::FileStream::__cordl_internal_set_access(::System::IO::FileAccess value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___access = value;
}
constexpr bool& System::IO::FileStream::__cordl_internal_get_owner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___owner;
}
constexpr bool const& System::IO::FileStream::__cordl_internal_get_owner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___owner;
}
constexpr void System::IO::FileStream::__cordl_internal_set_owner(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___owner = value;
}
constexpr bool& System::IO::FileStream::__cordl_internal_get_async() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___async;
}
constexpr bool const& System::IO::FileStream::__cordl_internal_get_async() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___async;
}
constexpr void System::IO::FileStream::__cordl_internal_set_async(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___async = value;
}
constexpr bool& System::IO::FileStream::__cordl_internal_get_canseek() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canseek;
}
constexpr bool const& System::IO::FileStream::__cordl_internal_get_canseek() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canseek;
}
constexpr void System::IO::FileStream::__cordl_internal_set_canseek(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___canseek = value;
}
constexpr bool& System::IO::FileStream::__cordl_internal_get_anonymous() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anonymous;
}
constexpr bool const& System::IO::FileStream::__cordl_internal_get_anonymous() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anonymous;
}
constexpr void System::IO::FileStream::__cordl_internal_set_anonymous(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___anonymous = value;
}
constexpr bool& System::IO::FileStream::__cordl_internal_get_buf_dirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf_dirty;
}
constexpr bool const& System::IO::FileStream::__cordl_internal_get_buf_dirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf_dirty;
}
constexpr void System::IO::FileStream::__cordl_internal_set_buf_dirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buf_dirty = value;
}
constexpr int32_t& System::IO::FileStream::__cordl_internal_get_buf_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf_size;
}
constexpr int32_t const& System::IO::FileStream::__cordl_internal_get_buf_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf_size;
}
constexpr void System::IO::FileStream::__cordl_internal_set_buf_size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buf_size = value;
}
constexpr int32_t& System::IO::FileStream::__cordl_internal_get_buf_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf_length;
}
constexpr int32_t const& System::IO::FileStream::__cordl_internal_get_buf_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf_length;
}
constexpr void System::IO::FileStream::__cordl_internal_set_buf_length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buf_length = value;
}
constexpr int32_t& System::IO::FileStream::__cordl_internal_get_buf_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf_offset;
}
constexpr int32_t const& System::IO::FileStream::__cordl_internal_get_buf_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf_offset;
}
constexpr void System::IO::FileStream::__cordl_internal_set_buf_offset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buf_offset = value;
}
constexpr int64_t& System::IO::FileStream::__cordl_internal_get_buf_start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf_start;
}
constexpr int64_t const& System::IO::FileStream::__cordl_internal_get_buf_start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf_start;
}
constexpr void System::IO::FileStream::__cordl_internal_set_buf_start(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buf_start = value;
}
inline void System::IO::FileStream::setStaticF_buf_recycle(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "buf_recycle", ::System::IO::FileStream*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::IO::FileStream::getStaticF_buf_recycle() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "buf_recycle", ::System::IO::FileStream*>();
}
inline void System::IO::FileStream::setStaticF_buf_recycle_lock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "buf_recycle_lock", ::System::IO::FileStream*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::IO::FileStream::getStaticF_buf_recycle_lock() {
  return ::cordl_internals::getStaticField<::System::Object*, "buf_recycle_lock", ::System::IO::FileStream*>();
}
inline void System::IO::FileStream::_ctor(::System::IntPtr handle, ::System::IO::FileAccess access, bool ownsHandle, int32_t bufferSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IO::FileAccess>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, access, ownsHandle, bufferSize);
}
inline void System::IO::FileStream::_ctor(::System::IntPtr handle, ::System::IO::FileAccess access, bool ownsHandle, int32_t bufferSize, bool isAsync, bool isConsoleWrapper) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ".ctor",
                                                                                              {},
                                                                                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IO::FileAccess>(), ::i2c::type_of<bool>(),
                                                                                                ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, access, ownsHandle, bufferSize, isAsync, isConsoleWrapper);
}
inline void System::IO::FileStream::_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<::System::IO::FileAccess>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, mode, access);
}
inline void System::IO::FileStream::_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::IO::FileStream*>(),
          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<::System::IO::FileAccess>(), ::i2c::type_of<::System::IO::FileShare>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, mode, access, share);
}
inline void System::IO::FileStream::_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ".ctor",
                                                                          {},
                                                                          { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<::System::IO::FileAccess>(),
                                                                            ::i2c::type_of<::System::IO::FileShare>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, mode, access, share, bufferSize);
}
inline void System::IO::FileStream::_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize, bool useAsync) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ".ctor",
                                                                          {},
                                                                          { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<::System::IO::FileAccess>(),
                                                                            ::i2c::type_of<::System::IO::FileShare>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, mode, access, share, bufferSize, useAsync);
}
inline void System::IO::FileStream::_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize,
                                          ::System::IO::FileOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ".ctor",
                                                                          {},
                                                                          { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<::System::IO::FileAccess>(),
                                                                            ::i2c::type_of<::System::IO::FileShare>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::FileOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, mode, access, share, bufferSize, options);
}
inline void System::IO::FileStream::_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize, bool isAsync,
                                          bool anonymous) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { ".ctor",
                                                                          {},
                                                                          { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<::System::IO::FileAccess>(),
                                                                            ::i2c::type_of<::System::IO::FileShare>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, mode, access, share, bufferSize, isAsync, anonymous);
}
inline void System::IO::FileStream::_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize, bool anonymous,
                                          ::System::IO::FileOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<::System::IO::FileAccess>(),
                                                  ::i2c::type_of<::System::IO::FileShare>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IO::FileOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, mode, access, share, bufferSize, anonymous, options);
}
inline void System::IO::FileStream::Init(::Microsoft::Win32::SafeHandles::SafeFileHandle* safeHandle, ::System::IO::FileAccess access, bool ownsHandle, int32_t bufferSize, bool isAsync,
                                         bool isConsoleWrapper) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { "Init",
                                                                                       {},
                                                                                       { ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeFileHandle*>(), ::i2c::type_of<::System::IO::FileAccess>(),
                                                                                         ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, safeHandle, access, ownsHandle, bufferSize, isAsync, isConsoleWrapper);
}
inline bool System::IO::FileStream::get_CanRead() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::IO::FileStream::get_CanWrite() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::IO::FileStream::get_CanSeek() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::IO::FileStream::get_Name() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int64_t System::IO::FileStream::get_Length() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t System::IO::FileStream::get_Position() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::IO::FileStream::set_Position(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Microsoft::Win32::SafeHandles::SafeFileHandle* System::IO::FileStream::get_SafeFileHandle() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeFileHandle*>(this, ___internal_method);
}
inline void System::IO::FileStream::ExposeHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { "ExposeHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::IO::FileStream::ReadByte() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::IO::FileStream::WriteByte(uint8_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::IO::FileStream::Read(::by_ref<::ArrayW<uint8_t>> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, array, offset, count);
}
inline int32_t System::IO::FileStream::ReadInternal(::ArrayW<uint8_t> dest, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { "ReadInternal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, dest, offset, count);
}
inline ::System::IAsyncResult* System::IO::FileStream::BeginRead(::ArrayW<uint8_t> array, int32_t offset, int32_t numBytes, ::System::AsyncCallback* userCallback, ::System::Object* stateObject) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, array, offset, numBytes, userCallback, stateObject);
}
inline int32_t System::IO::FileStream::EndRead(::System::IAsyncResult* asyncResult) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, asyncResult);
}
inline void System::IO::FileStream::Write(::ArrayW<uint8_t> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, offset, count);
}
inline void System::IO::FileStream::WriteInternal(::ArrayW<uint8_t> src, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { "WriteInternal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, offset, count);
}
inline ::System::IAsyncResult* System::IO::FileStream::BeginWrite(::ArrayW<uint8_t> array, int32_t offset, int32_t numBytes, ::System::AsyncCallback* userCallback, ::System::Object* stateObject) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, array, offset, numBytes, userCallback, stateObject);
}
inline void System::IO::FileStream::EndWrite(::System::IAsyncResult* asyncResult) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncResult);
}
inline int64_t System::IO::FileStream::Seek(int64_t offset, ::System::IO::SeekOrigin origin) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void System::IO::FileStream::SetLength(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IO::FileStream::Flush() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::FileStream::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::FileStream::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Threading::Tasks::Task* System::IO::FileStream::FlushAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::IO::FileStream::ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count,
                                                                                      ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::IO::FileStream::WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileStream*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline int32_t System::IO::FileStream::ReadSegment(::ArrayW<uint8_t> dest, int32_t dest_offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { "ReadSegment", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, dest, dest_offset, count);
}
inline int32_t System::IO::FileStream::WriteSegment(::ArrayW<uint8_t> src, int32_t src_offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { "WriteSegment", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, src, src_offset, count);
}
inline void System::IO::FileStream::FlushBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { "FlushBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::FileStream::FlushBufferIfDirty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { "FlushBufferIfDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::FileStream::RefillBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { "RefillBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::IO::FileStream::ReadData(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::ArrayW<uint8_t> buf, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::IO::FileStream*>(),
          { "ReadData", {}, { ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, safeHandle, buf, offset, count);
}
inline void System::IO::FileStream::InitBuffer(int32_t size, bool isZeroSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { "InitBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size, isZeroSize);
}
inline ::StringW System::IO::FileStream::GetSecureFileName(::StringW filename) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { "GetSecureFileName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, filename);
}
inline ::StringW System::IO::FileStream::GetSecureFileName(::StringW filename, bool full) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStream*>(), { "GetSecureFileName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, filename, full);
}
inline ::System::IO::FileStream* System::IO::FileStream::New_ctor(::System::IntPtr handle, ::System::IO::FileAccess access, bool ownsHandle, int32_t bufferSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileStream*>(handle, access, ownsHandle, bufferSize));
}
inline ::System::IO::FileStream* System::IO::FileStream::New_ctor(::System::IntPtr handle, ::System::IO::FileAccess access, bool ownsHandle, int32_t bufferSize, bool isAsync, bool isConsoleWrapper) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileStream*>(handle, access, ownsHandle, bufferSize, isAsync, isConsoleWrapper));
}
inline ::System::IO::FileStream* System::IO::FileStream::New_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileStream*>(path, mode, access));
}
inline ::System::IO::FileStream* System::IO::FileStream::New_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileStream*>(path, mode, access, share));
}
inline ::System::IO::FileStream* System::IO::FileStream::New_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileStream*>(path, mode, access, share, bufferSize));
}
inline ::System::IO::FileStream* System::IO::FileStream::New_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize,
                                                                  bool useAsync) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileStream*>(path, mode, access, share, bufferSize, useAsync));
}
inline ::System::IO::FileStream* System::IO::FileStream::New_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize,
                                                                  ::System::IO::FileOptions options) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileStream*>(path, mode, access, share, bufferSize, options));
}
inline ::System::IO::FileStream* System::IO::FileStream::New_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize,
                                                                  bool isAsync, bool anonymous) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileStream*>(path, mode, access, share, bufferSize, isAsync, anonymous));
}
inline ::System::IO::FileStream* System::IO::FileStream::New_ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize,
                                                                  bool anonymous, ::System::IO::FileOptions options) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileStream*>(path, mode, access, share, bufferSize, anonymous, options));
}
// Ctor Parameters []
constexpr ::System::IO::FileStream::FileStream() {}
