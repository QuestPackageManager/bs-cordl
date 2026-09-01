#pragma once
// IWYU pragma private; include "System\IO\MonoIO.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__MonoIO_def.hpp"
#include "System/IO/zzzz__FileAccess_def.hpp"
#include "System/IO/zzzz__FileMode_def.hpp"
#include "System/IO/zzzz__FileOptions_def.hpp"
#include "System/IO/zzzz__FileShare_def.hpp"
#include "System/IO/zzzz__MonoFileType_def.hpp"
#include "System/IO/zzzz__MonoIOError_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::System::IO::MonoIO.GetException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::IO::MonoIOError)>(&::System::IO::MonoIO::GetException)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5c1e5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "GetException", {}, { ::i2c::type_of<::System::IO::MonoIOError>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.GetException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::System::IO::MonoIOError)>(&::System::IO::MonoIO::GetException)> {
  constexpr static std::size_t size = 0x988;
  constexpr static std::size_t addrs = 0x5c1aac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "GetException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::MonoIOError>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.GetCurrentDirectory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::by_ref<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::GetCurrentDirectory)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c1e6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "GetCurrentDirectory", {}, { ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.GetFileType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::MonoFileType (*)(::System::IntPtr, ::by_ref<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::GetFileType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1e6e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "GetFileType", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.GetFileType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::MonoFileType (*)(::System::Runtime::InteropServices::SafeHandle*, ::by_ref<::System::IO::MonoIOError>)>(
    &::System::IO::MonoIO::GetFileType)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5c1b448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(),
                                                { "GetFileType", {}, { ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(char16_t*, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, ::System::IO::FileOptions,
                                                                            ::by_ref<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::Open)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c1e6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(),
                                         { "Open",
                                           {},
                                           { ::i2c::type_of<char16_t*>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<::System::IO::FileAccess>(),
                                             ::i2c::type_of<::System::IO::FileShare>(), ::i2c::type_of<::System::IO::FileOptions>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::StringW, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare, ::System::IO::FileOptions,
                                                                            ::by_ref<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::Open)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c1a998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(),
                                         { "Open",
                                           {},
                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<::System::IO::FileAccess>(),
                                             ::i2c::type_of<::System::IO::FileShare>(), ::i2c::type_of<::System::IO::FileOptions>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Cancel_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::Cancel_internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1e6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "Cancel_internal", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Cancel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::InteropServices::SafeHandle*, ::by_ref<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::Cancel)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5c1e6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(),
                                                { "Cancel", {}, { ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::Close)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c1e280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "Close", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<uint8_t>, int32_t, int32_t, ::by_ref<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::Read)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c1e810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "Read",
                                                                                            {},
                                                                                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                                              ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Runtime::InteropServices::SafeHandle*, ::ArrayW<uint8_t>, int32_t, int32_t, ::by_ref<::System::IO::MonoIOError>)>(
    &::System::IO::MonoIO::Read)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5c1e2f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "Read",
                                                                        {},
                                                                        { ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ByRefConst<::ArrayW<uint8_t>>, int32_t, int32_t, ::by_ref<::System::IO::MonoIOError>)>(
    &::System::IO::MonoIO::Write)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c1e814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "Write",
                                                                                     {},
                                                                                     { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ByRefConst<::ArrayW<uint8_t>>>(), ::i2c::type_of<int32_t>(),
                                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Runtime::InteropServices::SafeHandle*, ::ArrayW<uint8_t>, int32_t, int32_t, ::by_ref<::System::IO::MonoIOError>)>(
    &::System::IO::MonoIO::Write)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5c1d0d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "Write",
                                                                        {},
                                                                        { ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Seek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr, int64_t, ::System::IO::SeekOrigin, ::by_ref<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::Seek)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c1e818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::IO::MonoIO*>(),
            { "Seek", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::IO::SeekOrigin>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Seek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::Runtime::InteropServices::SafeHandle*, int64_t, ::System::IO::SeekOrigin, ::by_ref<::System::IO::MonoIOError>)>(
    &::System::IO::MonoIO::Seek)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5c1b828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "Seek",
                                                                                            {},
                                                                                            { ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<int64_t>(),
                                                                                              ::i2c::type_of<::System::IO::SeekOrigin>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.GetLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr, ::by_ref<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::GetLength)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c1e81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "GetLength", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.GetLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::Runtime::InteropServices::SafeHandle*, ::by_ref<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::GetLength)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5c1bb28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(),
                                                { "GetLength", {}, { ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.SetLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int64_t, ::by_ref<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::SetLength)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c1e820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(),
                                                { "SetLength", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.SetLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::InteropServices::SafeHandle*, int64_t, ::by_ref<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::SetLength)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5c1dd44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::IO::MonoIO*>(),
            { "SetLength", {}, { ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.get_ConsoleOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::System::IO::MonoIO::get_ConsoleOutput)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c1e824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "get_ConsoleOutput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.get_ConsoleInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::System::IO::MonoIO::get_ConsoleInput)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c1e828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "get_ConsoleInput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.get_ConsoleError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::System::IO::MonoIO::get_ConsoleError)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c1e82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "get_ConsoleError", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.CreatePipe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::IntPtr>, ::by_ref<::System::IntPtr>, ::by_ref<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::CreatePipe)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c1e830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::IO::MonoIO*>(),
                         { "CreatePipe", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.DuplicateHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::by_ref<::System::IntPtr>, int32_t, int32_t, int32_t,
                                                                ::by_ref<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::DuplicateHandle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c1e834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(),
                                         { "DuplicateHandle",
                                           {},
                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(),
                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.get_VolumeSeparatorChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)()>(&::System::IO::MonoIO::get_VolumeSeparatorChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1e838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "get_VolumeSeparatorChar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.get_DirectorySeparatorChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)()>(&::System::IO::MonoIO::get_DirectorySeparatorChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1e840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "get_DirectorySeparatorChar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.get_AltDirectorySeparatorChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)()>(&::System::IO::MonoIO::get_AltDirectorySeparatorChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1e848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "get_AltDirectorySeparatorChar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.get_PathSeparator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)()>(&::System::IO::MonoIO::get_PathSeparator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1e850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "get_PathSeparator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.DumpHandles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::IO::MonoIO::DumpHandles)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c1e6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "DumpHandles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.RemapPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::StringW>)>(&::System::IO::MonoIO::RemapPath)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c1e858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "RemapPath", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
inline void System::IO::MonoIO::setStaticF_InvalidHandle(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "InvalidHandle", ::System::IO::MonoIO*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr System::IO::MonoIO::getStaticF_InvalidHandle() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "InvalidHandle", ::System::IO::MonoIO*>();
}
inline void System::IO::MonoIO::setStaticF_dump_handles(bool value) {
  ::cordl_internals::setStaticField<bool, "dump_handles", ::System::IO::MonoIO*>(std::forward<bool>(value));
}
inline bool System::IO::MonoIO::getStaticF_dump_handles() {
  return ::cordl_internals::getStaticField<bool, "dump_handles", ::System::IO::MonoIO*>();
}
inline ::System::Exception* System::IO::MonoIO::GetException(::System::IO::MonoIOError error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "GetException", {}, { ::i2c::type_of<::System::IO::MonoIOError>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, error);
}
inline ::System::Exception* System::IO::MonoIO::GetException(::StringW path, ::System::IO::MonoIOError error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "GetException", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::MonoIOError>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, path, error);
}
inline ::StringW System::IO::MonoIO::GetCurrentDirectory(::by_ref<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "GetCurrentDirectory", {}, { ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, error);
}
inline ::System::IO::MonoFileType System::IO::MonoIO::GetFileType(::System::IntPtr handle, ::by_ref<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "GetFileType", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::MonoFileType>(nullptr, ___internal_method, handle, error);
}
inline ::System::IO::MonoFileType System::IO::MonoIO::GetFileType(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::by_ref<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(),
                                              { "GetFileType", {}, { ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::MonoFileType>(nullptr, ___internal_method, safeHandle, error);
}
inline ::System::IntPtr System::IO::MonoIO::Open(char16_t* filename, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, ::System::IO::FileOptions options,
                                                 ::by_ref<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(),
                                              { "Open",
                                                {},
                                                { ::i2c::type_of<char16_t*>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<::System::IO::FileAccess>(),
                                                  ::i2c::type_of<::System::IO::FileShare>(), ::i2c::type_of<::System::IO::FileOptions>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, filename, mode, access, share, options, error);
}
inline ::System::IntPtr System::IO::MonoIO::Open(::StringW filename, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, ::System::IO::FileOptions options,
                                                 ::by_ref<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(),
                                              { "Open",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<::System::IO::FileAccess>(),
                                                  ::i2c::type_of<::System::IO::FileShare>(), ::i2c::type_of<::System::IO::FileOptions>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, filename, mode, access, share, options, error);
}
inline bool System::IO::MonoIO::Cancel_internal(::System::IntPtr handle, ::by_ref<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "Cancel_internal", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, error);
}
inline bool System::IO::MonoIO::Cancel(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::by_ref<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(),
                                              { "Cancel", {}, { ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, safeHandle, error);
}
inline bool System::IO::MonoIO::Close(::System::IntPtr handle, ::by_ref<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "Close", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, error);
}
inline int32_t System::IO::MonoIO::Read(::System::IntPtr handle, ::ArrayW<uint8_t> dest, int32_t dest_offset, int32_t count, ::by_ref<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "Read",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                                            ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, dest, dest_offset, count, error);
}
inline int32_t System::IO::MonoIO::Read(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::ArrayW<uint8_t> dest, int32_t dest_offset, int32_t count,
                                        ::by_ref<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "Read",
                                                                                   {},
                                                                                   { ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                     ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, safeHandle, dest, dest_offset, count, error);
}
inline int32_t System::IO::MonoIO::Write(::System::IntPtr handle, ::ByRefConst<::ArrayW<uint8_t>> src, int32_t src_offset, int32_t count, ::by_ref<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "Write",
                                                                                   {},
                                                                                   { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ByRefConst<::ArrayW<uint8_t>>>(), ::i2c::type_of<int32_t>(),
                                                                                     ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, src, src_offset, count, error);
}
inline int32_t System::IO::MonoIO::Write(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::ArrayW<uint8_t> src, int32_t src_offset, int32_t count,
                                         ::by_ref<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "Write",
                                                                                   {},
                                                                                   { ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                     ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, safeHandle, src, src_offset, count, error);
}
inline int64_t System::IO::MonoIO::Seek(::System::IntPtr handle, int64_t offset, ::System::IO::SeekOrigin origin, ::by_ref<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::IO::MonoIO*>(),
          { "Seek", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::IO::SeekOrigin>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, handle, offset, origin, error);
}
inline int64_t System::IO::MonoIO::Seek(::System::Runtime::InteropServices::SafeHandle* safeHandle, int64_t offset, ::System::IO::SeekOrigin origin, ::by_ref<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "Seek",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<int64_t>(),
                                                                                            ::i2c::type_of<::System::IO::SeekOrigin>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, safeHandle, offset, origin, error);
}
inline int64_t System::IO::MonoIO::GetLength(::System::IntPtr handle, ::by_ref<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "GetLength", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, handle, error);
}
inline int64_t System::IO::MonoIO::GetLength(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::by_ref<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(),
                                              { "GetLength", {}, { ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, safeHandle, error);
}
inline bool System::IO::MonoIO::SetLength(::System::IntPtr handle, int64_t length, ::by_ref<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(),
                                              { "SetLength", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, length, error);
}
inline bool System::IO::MonoIO::SetLength(::System::Runtime::InteropServices::SafeHandle* safeHandle, int64_t length, ::by_ref<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::IO::MonoIO*>(),
                       { "SetLength", {}, { ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, safeHandle, length, error);
}
inline ::System::IntPtr System::IO::MonoIO::get_ConsoleOutput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "get_ConsoleOutput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr System::IO::MonoIO::get_ConsoleInput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "get_ConsoleInput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr System::IO::MonoIO::get_ConsoleError() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "get_ConsoleError", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline bool System::IO::MonoIO::CreatePipe(::by_ref<::System::IntPtr> read_handle, ::by_ref<::System::IntPtr> write_handle, ::by_ref<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::IO::MonoIO*>(),
                       { "CreatePipe", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, read_handle, write_handle, error);
}
inline bool System::IO::MonoIO::DuplicateHandle(::System::IntPtr source_process_handle, ::System::IntPtr source_handle, ::System::IntPtr target_process_handle,
                                                ::by_ref<::System::IntPtr> target_handle, int32_t access, int32_t inherit, int32_t options, ::by_ref<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(),
                                       { "DuplicateHandle",
                                         {},
                                         { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(),
                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::IO::MonoIOError>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source_process_handle, source_handle, target_process_handle, target_handle, access, inherit, options, error);
}
inline char16_t System::IO::MonoIO::get_VolumeSeparatorChar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "get_VolumeSeparatorChar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method);
}
inline char16_t System::IO::MonoIO::get_DirectorySeparatorChar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "get_DirectorySeparatorChar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method);
}
inline char16_t System::IO::MonoIO::get_AltDirectorySeparatorChar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "get_AltDirectorySeparatorChar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method);
}
inline char16_t System::IO::MonoIO::get_PathSeparator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "get_PathSeparator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method);
}
inline void System::IO::MonoIO::DumpHandles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "DumpHandles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool System::IO::MonoIO::RemapPath(::StringW path, ::by_ref<::StringW> newPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MonoIO*>(), { "RemapPath", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path, newPath);
}
// Ctor Parameters []
constexpr ::System::IO::MonoIO::MonoIO() {}
