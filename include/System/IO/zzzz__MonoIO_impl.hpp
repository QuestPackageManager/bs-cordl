#pragma once
// IWYU pragma private; include "System/IO/MonoIO.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::System::IO::MonoIOError)>(&::System::IO::MonoIO::GetException)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3d1cb34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetException", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MonoIOError>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.GetException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::StringW, ::System::IO::MonoIOError)>(&::System::IO::MonoIO::GetException)> {
  constexpr static std::size_t size = 0x744;
  constexpr static std::size_t addrs = 0x3d1cc58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetException", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MonoIOError>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.GetCurrentDirectory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(ByRef<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::GetCurrentDirectory)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3d1d3a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetCurrentDirectory", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.GetFileType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::MonoFileType (*)(::System::IntPtr, ByRef<::System::IO::MonoIOError>)>(
    &::System::IO::MonoIO::GetFileType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3d1d3a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetFileType", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.GetFileType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::MonoFileType (*)(::System::Runtime::InteropServices::SafeHandle*, ByRef<::System::IO::MonoIOError>)>(
    &::System::IO::MonoIO::GetFileType)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x3d1d3a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetFileType", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::cordl_internals::Ptr<char16_t>, ::System::IO::FileMode, ::System::IO::FileAccess,
                                                                                                       ::System::IO::FileShare, ::System::IO::FileOptions, ByRef<::System::IO::MonoIOError>)>(
    &::System::IO::MonoIO::Open)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3d1d4e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileMode>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileAccess>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileShare>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileOptions>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::StringW, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare,
                                                                                                       ::System::IO::FileOptions, ByRef<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::Open)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3d1d4e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileMode>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileAccess>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileShare>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileOptions>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Cancel_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ByRef<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::Cancel_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3d1d580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Cancel_internal", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Cancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::InteropServices::SafeHandle*, ByRef<::System::IO::MonoIOError>)>(
    &::System::IO::MonoIO::Cancel)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x3d1d584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Cancel", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ByRef<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::Close)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3d1d6bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Close", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ByRef<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::Read)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3d1d6c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Read", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::System::Runtime::InteropServices::SafeHandle*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ByRef<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::Read)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3d1d6c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Read", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::System::IntPtr, ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>, int32_t, int32_t, ByRef<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::Write)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3d1d81c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Write", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::System::Runtime::InteropServices::SafeHandle*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ByRef<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::Write)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3d1d820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Write", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Seek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::IntPtr, int64_t, ::System::IO::SeekOrigin, ByRef<::System::IO::MonoIOError>)>(
    &::System::IO::MonoIO::Seek)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3d1d978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Seek", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::SeekOrigin>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Seek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int64_t (*)(::System::Runtime::InteropServices::SafeHandle*, int64_t, ::System::IO::SeekOrigin, ByRef<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::Seek)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3d1d97c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Seek", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::SeekOrigin>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.GetLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::IntPtr, ByRef<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::GetLength)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3d1dacc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetLength", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.GetLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::Runtime::InteropServices::SafeHandle*, ByRef<::System::IO::MonoIOError>)>(
    &::System::IO::MonoIO::GetLength)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x3d1dad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetLength", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.SetLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, int64_t, ByRef<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::SetLength)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3d1dc08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "SetLength", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.SetLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::InteropServices::SafeHandle*, int64_t, ByRef<::System::IO::MonoIOError>)>(
    &::System::IO::MonoIO::SetLength)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3d1dc0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "SetLength", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.get_ConsoleOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&::System::IO::MonoIO::get_ConsoleOutput)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3d1dd4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_ConsoleOutput",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.get_ConsoleInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&::System::IO::MonoIO::get_ConsoleInput)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3d1dd50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_ConsoleInput",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.get_ConsoleError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&::System::IO::MonoIO::get_ConsoleError)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3d1dd54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_ConsoleError",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.CreatePipe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::IntPtr>, ByRef<::System::IntPtr>, ByRef<::System::IO::MonoIOError>)>(
    &::System::IO::MonoIO::CreatePipe)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3d1dd58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "CreatePipe", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IntPtr>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IntPtr>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.DuplicateHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ByRef<::System::IntPtr>, int32_t, int32_t, int32_t,
                                                                                           ByRef<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::DuplicateHandle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3d1dd5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "DuplicateHandle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IntPtr>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.get_VolumeSeparatorChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)()>(&::System::IO::MonoIO::get_VolumeSeparatorChar)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3d1dd60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_VolumeSeparatorChar",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.get_DirectorySeparatorChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)()>(&::System::IO::MonoIO::get_DirectorySeparatorChar)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3d1dd64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_DirectorySeparatorChar",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.get_AltDirectorySeparatorChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)()>(&::System::IO::MonoIO::get_AltDirectorySeparatorChar)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3d1dd68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_AltDirectorySeparatorChar",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.get_PathSeparator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)()>(&::System::IO::MonoIO::get_PathSeparator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3d1dd6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_PathSeparator",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.DumpHandles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::IO::MonoIO::DumpHandles)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3d1d39c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "DumpHandles",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.RemapPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::StringW>)>(&::System::IO::MonoIO::RemapPath)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3d1dd70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "RemapPath", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
inline void System::IO::MonoIO::setStaticF_InvalidHandle(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "InvalidHandle", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr System::IO::MonoIO::getStaticF_InvalidHandle() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "InvalidHandle", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get>();
}
inline void System::IO::MonoIO::setStaticF_dump_handles(bool value) {
  ::cordl_internals::setStaticField<bool, "dump_handles", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get>(std::forward<bool>(value));
}
inline bool System::IO::MonoIO::getStaticF_dump_handles() {
  return ::cordl_internals::getStaticField<bool, "dump_handles", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get>();
}
inline ::System::Exception* System::IO::MonoIO::GetException(::System::IO::MonoIOError error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetException", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MonoIOError>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method, error);
}
inline ::System::Exception* System::IO::MonoIO::GetException(::StringW path, ::System::IO::MonoIOError error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetException", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MonoIOError>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method, path, error);
}
inline ::StringW System::IO::MonoIO::GetCurrentDirectory(ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetCurrentDirectory", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, error);
}
inline ::System::IO::MonoFileType System::IO::MonoIO::GetFileType(::System::IntPtr handle, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetFileType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::MonoFileType, false>(nullptr, ___internal_method, handle, error);
}
inline ::System::IO::MonoFileType System::IO::MonoIO::GetFileType(::System::Runtime::InteropServices::SafeHandle* safeHandle, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetFileType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::MonoFileType, false>(nullptr, ___internal_method, safeHandle, error);
}
inline ::System::IntPtr System::IO::MonoIO::Open(::cordl_internals::Ptr<char16_t> filename, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share,
                                                 ::System::IO::FileOptions options, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileAccess>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileShare>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, filename, mode, access, share, options, error);
}
inline ::System::IntPtr System::IO::MonoIO::Open(::StringW filename, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, ::System::IO::FileOptions options,
                                                 ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileAccess>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileShare>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, filename, mode, access, share, options, error);
}
inline bool System::IO::MonoIO::Cancel_internal(::System::IntPtr handle, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Cancel_internal", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle, error);
}
inline bool System::IO::MonoIO::Cancel(::System::Runtime::InteropServices::SafeHandle* safeHandle, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Cancel", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, safeHandle, error);
}
inline bool System::IO::MonoIO::Close(::System::IntPtr handle, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Close", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle, error);
}
inline int32_t System::IO::MonoIO::Read(::System::IntPtr handle, ::ArrayW<uint8_t, ::Array<uint8_t>*> dest, int32_t dest_offset, int32_t count, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Read", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, handle, dest, dest_offset, count, error);
}
inline int32_t System::IO::MonoIO::Read(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::ArrayW<uint8_t, ::Array<uint8_t>*> dest, int32_t dest_offset, int32_t count,
                                        ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Read", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, dest, dest_offset, count, error);
}
inline int32_t System::IO::MonoIO::Write(::System::IntPtr handle, ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>> src, int32_t src_offset, int32_t count, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Write", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, handle, src, src_offset, count, error);
}
inline int32_t System::IO::MonoIO::Write(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t src_offset, int32_t count,
                                         ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Write", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, src, src_offset, count, error);
}
inline int64_t System::IO::MonoIO::Seek(::System::IntPtr handle, int64_t offset, ::System::IO::SeekOrigin origin, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Seek", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::SeekOrigin>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, handle, offset, origin, error);
}
inline int64_t System::IO::MonoIO::Seek(::System::Runtime::InteropServices::SafeHandle* safeHandle, int64_t offset, ::System::IO::SeekOrigin origin, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Seek", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::SeekOrigin>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, safeHandle, offset, origin, error);
}
inline int64_t System::IO::MonoIO::GetLength(::System::IntPtr handle, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetLength", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, handle, error);
}
inline int64_t System::IO::MonoIO::GetLength(::System::Runtime::InteropServices::SafeHandle* safeHandle, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetLength", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, safeHandle, error);
}
inline bool System::IO::MonoIO::SetLength(::System::IntPtr handle, int64_t length, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "SetLength", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle, length, error);
}
inline bool System::IO::MonoIO::SetLength(::System::Runtime::InteropServices::SafeHandle* safeHandle, int64_t length, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "SetLength", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, safeHandle, length, error);
}
inline ::System::IntPtr System::IO::MonoIO::get_ConsoleOutput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_ConsoleOutput",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method);
}
inline ::System::IntPtr System::IO::MonoIO::get_ConsoleInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_ConsoleInput",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method);
}
inline ::System::IntPtr System::IO::MonoIO::get_ConsoleError() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_ConsoleError",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method);
}
inline bool System::IO::MonoIO::CreatePipe(ByRef<::System::IntPtr> read_handle, ByRef<::System::IntPtr> write_handle, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "CreatePipe", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IntPtr>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IntPtr>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, read_handle, write_handle, error);
}
inline bool System::IO::MonoIO::DuplicateHandle(::System::IntPtr source_process_handle, ::System::IntPtr source_handle, ::System::IntPtr target_process_handle, ByRef<::System::IntPtr> target_handle,
                                                int32_t access, int32_t inherit, int32_t options, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "DuplicateHandle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IntPtr>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, source_process_handle, source_handle, target_process_handle, target_handle, access, inherit, options, error);
}
inline char16_t System::IO::MonoIO::get_VolumeSeparatorChar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_VolumeSeparatorChar",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method);
}
inline char16_t System::IO::MonoIO::get_DirectorySeparatorChar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_DirectorySeparatorChar",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method);
}
inline char16_t System::IO::MonoIO::get_AltDirectorySeparatorChar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_AltDirectorySeparatorChar",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method);
}
inline char16_t System::IO::MonoIO::get_PathSeparator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_PathSeparator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method);
}
inline void System::IO::MonoIO::DumpHandles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "DumpHandles",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool System::IO::MonoIO::RemapPath(::StringW path, ByRef<::StringW> newPath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "RemapPath", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, path, newPath);
}
// Ctor Parameters []
constexpr ::System::IO::MonoIO::MonoIO() {}
