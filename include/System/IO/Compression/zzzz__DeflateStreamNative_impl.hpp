#pragma once
// IWYU pragma private; include "System\IO\Compression\DeflateStreamNative.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/Compression/zzzz__DeflateStreamNative_def.hpp"
#include "System/IO/Compression/zzzz__CompressionMode_def.hpp"
#include "System/IO/Compression/zzzz__DeflateStreamNative_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite::*)(::System::Object*, ::System::IntPtr)>(
    &::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x63f642c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite::*)(::System::IntPtr, int32_t, ::System::IntPtr)>(
    &::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x63f6bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite*>(),
                                                                                          { ::i2c::class_of<::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite::Invoke(::System::IntPtr buffer, int32_t length, ::System::IntPtr data) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, length, data);
}
inline ::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite* System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite::New_ctor(::System::Object* object,
                                                                                                                                                        ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite*>(object, method));
}
// Ctor Parameters []
constexpr ::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite::DeflateStreamNative_UnmanagedReadOrWrite() {}
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle.get_IsInvalid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle::*)()>(
    &::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle::get_IsInvalid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x63f6bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*>(),
                                                                                          { ::i2c::class_of<::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle::*)()>(
    &::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x63f6b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle.ReleaseHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle::*)()>(
    &::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x63f6be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*>(),
                                                                                          { ::i2c::class_of<::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*>(), 7 }));
    return ___internal_method;
  }
};
inline bool System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle::get_IsInvalid() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle::ReleaseHandle() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle* System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*>());
}
// Ctor Parameters []
constexpr ::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle::DeflateStreamNative_SafeDeflateStreamHandle() {}
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Compression::DeflateStreamNative::*)()>(&::System::IO::Compression::DeflateStreamNative::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63f6428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Compression::DeflateStreamNative* (*)(::System::IO::Stream*, ::System::IO::Compression::CompressionMode, bool)>(
    &::System::IO::Compression::DeflateStreamNative::Create)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x63f4d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(),
                                                { "Create", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Compression::CompressionMode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Compression::DeflateStreamNative::*)()>(&::System::IO::Compression::DeflateStreamNative::Finalize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x63f6568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(), { ::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Compression::DeflateStreamNative::*)(bool)>(&::System::IO::Compression::DeflateStreamNative::Dispose)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x63f4f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Compression::DeflateStreamNative::*)()>(&::System::IO::Compression::DeflateStreamNative::Flush)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x63f5664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(), { "Flush", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.ReadZStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::Compression::DeflateStreamNative::*)(::System::IntPtr, int32_t)>(
    &::System::IO::Compression::DeflateStreamNative::ReadZStream)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x63f50e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(),
                                                                                           { "ReadZStream", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.WriteZStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Compression::DeflateStreamNative::*)(::System::IntPtr, int32_t)>(
    &::System::IO::Compression::DeflateStreamNative::WriteZStream)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x63f5368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(),
                                                                                           { "WriteZStream", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.UnmanagedRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t, ::System::IntPtr)>(&::System::IO::Compression::DeflateStreamNative::UnmanagedRead)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x63f6210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(),
                                                             { "UnmanagedRead", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.UnmanagedRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::Compression::DeflateStreamNative::*)(::System::IntPtr, int32_t)>(
    &::System::IO::Compression::DeflateStreamNative::UnmanagedRead)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x63f67e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(),
                                                                                           { "UnmanagedRead", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.UnmanagedWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t, ::System::IntPtr)>(&::System::IO::Compression::DeflateStreamNative::UnmanagedWrite)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x63f631c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(),
                                                             { "UnmanagedWrite", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.UnmanagedWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::Compression::DeflateStreamNative::*)(::System::IntPtr, int32_t)>(
    &::System::IO::Compression::DeflateStreamNative::UnmanagedWrite)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x63f698c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(),
                                                                                           { "UnmanagedWrite", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.CheckResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Compression::DeflateStreamNative::*)(int32_t, ::StringW)>(&::System::IO::Compression::DeflateStreamNative::CheckResult)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x63f6614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(), { "CheckResult", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.CreateZStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle* (*)(::System::IO::Compression::CompressionMode, bool, ::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite*,
                                                                                ::System::IntPtr)>(&::System::IO::Compression::DeflateStreamNative::CreateZStream)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x63f6498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(),
                                                             { "CreateZStream",
                                                               {},
                                                               { ::i2c::type_of<::System::IO::Compression::CompressionMode>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.CloseZStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::System::IO::Compression::DeflateStreamNative::CloseZStream)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63f6bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(), { "CloseZStream", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*)>(&::System::IO::Compression::DeflateStreamNative::Flush)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x63f65b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(),
                                                             { "Flush", {}, { ::i2c::type_of<::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.ReadZStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*, ::System::IntPtr, int32_t)>(
    &::System::IO::Compression::DeflateStreamNative::ReadZStream)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x63f66ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(),
            { "ReadZStream", {}, { ::i2c::type_of<::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.WriteZStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*, ::System::IntPtr, int32_t)>(
    &::System::IO::Compression::DeflateStreamNative::WriteZStream)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x63f6768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(),
            { "WriteZStream", {}, { ::i2c::type_of<::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite*& System::IO::Compression::DeflateStreamNative::__cordl_internal_get_feeder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___feeder;
}
constexpr ::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite* const& System::IO::Compression::DeflateStreamNative::__cordl_internal_get_feeder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___feeder;
}
constexpr void System::IO::Compression::DeflateStreamNative::__cordl_internal_set_feeder(::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___feeder = value;
}
constexpr ::System::IO::Stream*& System::IO::Compression::DeflateStreamNative::__cordl_internal_get_base_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___base_stream;
}
constexpr ::System::IO::Stream* const& System::IO::Compression::DeflateStreamNative::__cordl_internal_get_base_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___base_stream;
}
constexpr void System::IO::Compression::DeflateStreamNative::__cordl_internal_set_base_stream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___base_stream = value;
}
constexpr ::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*& System::IO::Compression::DeflateStreamNative::__cordl_internal_get_z_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z_stream;
}
constexpr ::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle* const& System::IO::Compression::DeflateStreamNative::__cordl_internal_get_z_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z_stream;
}
constexpr void System::IO::Compression::DeflateStreamNative::__cordl_internal_set_z_stream(::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___z_stream = value;
}
constexpr ::System::Runtime::InteropServices::GCHandle& System::IO::Compression::DeflateStreamNative::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& System::IO::Compression::DeflateStreamNative::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void System::IO::Compression::DeflateStreamNative::__cordl_internal_set_data(::System::Runtime::InteropServices::GCHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
constexpr bool& System::IO::Compression::DeflateStreamNative::__cordl_internal_get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr bool const& System::IO::Compression::DeflateStreamNative::__cordl_internal_get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr void System::IO::Compression::DeflateStreamNative::__cordl_internal_set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposed = value;
}
constexpr ::ArrayW<uint8_t>& System::IO::Compression::DeflateStreamNative::__cordl_internal_get_io_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___io_buffer;
}
constexpr ::ArrayW<uint8_t> const& System::IO::Compression::DeflateStreamNative::__cordl_internal_get_io_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___io_buffer;
}
constexpr void System::IO::Compression::DeflateStreamNative::__cordl_internal_set_io_buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___io_buffer = value;
}
constexpr ::System::Exception*& System::IO::Compression::DeflateStreamNative::__cordl_internal_get_last_error() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___last_error;
}
constexpr ::System::Exception* const& System::IO::Compression::DeflateStreamNative::__cordl_internal_get_last_error() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___last_error;
}
constexpr void System::IO::Compression::DeflateStreamNative::__cordl_internal_set_last_error(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___last_error = value;
}
inline void System::IO::Compression::DeflateStreamNative::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IO::Compression::DeflateStreamNative* System::IO::Compression::DeflateStreamNative::Create(::System::IO::Stream* compressedStream, ::System::IO::Compression::CompressionMode mode,
                                                                                                            bool gzip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(),
                                              { "Create", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Compression::CompressionMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Compression::DeflateStreamNative*>(nullptr, ___internal_method, compressedStream, mode, gzip);
}
inline void System::IO::Compression::DeflateStreamNative::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::Compression::DeflateStreamNative::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::IO::Compression::DeflateStreamNative::Flush() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(), { "Flush", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::IO::Compression::DeflateStreamNative::ReadZStream(::System::IntPtr buffer, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(), { "ReadZStream", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, length);
}
inline void System::IO::Compression::DeflateStreamNative::WriteZStream(::System::IntPtr buffer, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(), { "WriteZStream", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, length);
}
inline int32_t System::IO::Compression::DeflateStreamNative::UnmanagedRead(::System::IntPtr buffer, int32_t length, ::System::IntPtr data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(),
                                                           { "UnmanagedRead", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, buffer, length, data);
}
inline int32_t System::IO::Compression::DeflateStreamNative::UnmanagedRead(::System::IntPtr buffer, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(),
                                                                                         { "UnmanagedRead", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, length);
}
inline int32_t System::IO::Compression::DeflateStreamNative::UnmanagedWrite(::System::IntPtr buffer, int32_t length, ::System::IntPtr data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(),
                                                           { "UnmanagedWrite", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, buffer, length, data);
}
inline int32_t System::IO::Compression::DeflateStreamNative::UnmanagedWrite(::System::IntPtr buffer, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(),
                                                                                         { "UnmanagedWrite", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, length);
}
inline void System::IO::Compression::DeflateStreamNative::CheckResult(int32_t result, ::StringW where) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(), { "CheckResult", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, where);
}
inline ::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*
System::IO::Compression::DeflateStreamNative::CreateZStream(::System::IO::Compression::CompressionMode compress, bool gzip, ::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite* feeder,
                                                            ::System::IntPtr data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(),
                                                           { "CreateZStream",
                                                             {},
                                                             { ::i2c::type_of<::System::IO::Compression::CompressionMode>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*>(nullptr, ___internal_method, compress, gzip, feeder, data);
}
inline int32_t System::IO::Compression::DeflateStreamNative::CloseZStream(::System::IntPtr stream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(), { "CloseZStream", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, stream);
}
inline int32_t System::IO::Compression::DeflateStreamNative::Flush(::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle* stream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(),
                                                           { "Flush", {}, { ::i2c::type_of<::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, stream);
}
inline int32_t System::IO::Compression::DeflateStreamNative::ReadZStream(::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle* stream, ::System::IntPtr buffer, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(),
          { "ReadZStream", {}, { ::i2c::type_of<::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, stream, buffer, length);
}
inline int32_t System::IO::Compression::DeflateStreamNative::WriteZStream(::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle* stream, ::System::IntPtr buffer, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::IO::Compression::DeflateStreamNative*>(),
          { "WriteZStream", {}, { ::i2c::type_of<::System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, stream, buffer, length);
}
inline ::System::IO::Compression::DeflateStreamNative* System::IO::Compression::DeflateStreamNative::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::Compression::DeflateStreamNative*>());
}
// Ctor Parameters []
constexpr ::System::IO::Compression::DeflateStreamNative::DeflateStreamNative() {}
