#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__MonoIO_def.hpp"
#include "System/IO/zzzz__MonoFileType_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
#include "System/IO/zzzz__FileAccess_def.hpp"
#include "System/IO/zzzz__FileOptions_def.hpp"
#include "System/IO/zzzz__MonoIOError_def.hpp"
#include "System/IO/zzzz__FileShare_def.hpp"
#include "System/IO/zzzz__FileMode_def.hpp"
//  Writing Method size for method: ::System::IO::MonoIO.GetException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::System::IO::MonoIOError)>(&::System::IO::MonoIO::GetException)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2541608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetException", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MonoIOError>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.GetException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::StringW, ::System::IO::MonoIOError)>(&::System::IO::MonoIO::GetException)> {
  constexpr static std::size_t size = 0x71c;
  constexpr static std::size_t addrs = 0x253dc54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetException", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MonoIOError>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.GetCurrentDirectory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(ByRef<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::GetCurrentDirectory)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x254173c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetCurrentDirectory", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.GetFileType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::MonoFileType (*)(void*, ByRef<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::GetFileType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2541740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetFileType", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.GetFileType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::MonoFileType (*)(::System::Runtime::InteropServices::SafeHandle*, ByRef<::System::IO::MonoIOError>)>(
    &::System::IO::MonoIO::GetFileType)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x253e370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetFileType", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(::cordl_internals::Ptr<char16_t>, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare,
                                                                                            ::System::IO::FileOptions, ByRef<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::Open)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2541744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Open", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(::StringW, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare,
                                                                                            ::System::IO::FileOptions, ByRef<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::Open)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x253db40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Open", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileAccess>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileShare>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileOptions>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Cancel_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(void*, ByRef<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::Cancel_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2541748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Cancel_internal", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Cancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::InteropServices::SafeHandle*, ByRef<::System::IO::MonoIOError>)>(
    &::System::IO::MonoIO::Cancel)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x254174c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Cancel", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(void*, ByRef<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::Close)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25412d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Close", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(void*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ByRef<::System::IO::MonoIOError>)>(
    &::System::IO::MonoIO::Read)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2541874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Read", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
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
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x254136c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Read", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(void*, ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>, int32_t, int32_t, ByRef<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::Write)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2541878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Write", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
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
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2540064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Write", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Seek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(void*, int64_t, ::System::IO::SeekOrigin, ByRef<::System::IO::MonoIOError>)>(
    &::System::IO::MonoIO::Seek)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x254187c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Seek", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::SeekOrigin>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.Seek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int64_t (*)(::System::Runtime::InteropServices::SafeHandle*, int64_t, ::System::IO::SeekOrigin, ByRef<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::Seek)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x253e74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Seek", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::SeekOrigin>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.GetLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(void*, ByRef<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::GetLength)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2541880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetLength", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.GetLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::Runtime::InteropServices::SafeHandle*, ByRef<::System::IO::MonoIOError>)>(
    &::System::IO::MonoIO::GetLength)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x253ea30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetLength", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.SetLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(void*, int64_t, ByRef<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::SetLength)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2541884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "SetLength", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.SetLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::InteropServices::SafeHandle*, int64_t, ByRef<::System::IO::MonoIOError>)>(
    &::System::IO::MonoIO::SetLength)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2540d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "SetLength", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.get_ConsoleOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)()>(&::System::IO::MonoIO::get_ConsoleOutput)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2541888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_ConsoleOutput",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.get_ConsoleInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)()>(&::System::IO::MonoIO::get_ConsoleInput)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x254188c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_ConsoleInput",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.get_ConsoleError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)()>(&::System::IO::MonoIO::get_ConsoleError)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2541890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_ConsoleError",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.CreatePipe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<void*>, ByRef<void*>, ByRef<::System::IO::MonoIOError>)>(&::System::IO::MonoIO::CreatePipe)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2541894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "CreatePipe", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.DuplicateHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(void*, void*, void*, ByRef<void*>, int32_t, int32_t, int32_t, ByRef<::System::IO::MonoIOError>)>(
    &::System::IO::MonoIO::DuplicateHandle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2541898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "DuplicateHandle", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.get_VolumeSeparatorChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)()>(&::System::IO::MonoIO::get_VolumeSeparatorChar)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x254189c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_VolumeSeparatorChar",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.get_DirectorySeparatorChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)()>(&::System::IO::MonoIO::get_DirectorySeparatorChar)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25418a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_DirectorySeparatorChar",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.get_AltDirectorySeparatorChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)()>(&::System::IO::MonoIO::get_AltDirectorySeparatorChar)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25418a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_AltDirectorySeparatorChar",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.get_PathSeparator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)()>(&::System::IO::MonoIO::get_PathSeparator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25418a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_PathSeparator",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.DumpHandles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::IO::MonoIO::DumpHandles)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2541738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "DumpHandles",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MonoIO.RemapPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::StringW>)>(&::System::IO::MonoIO::RemapPath)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25418ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "RemapPath", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
inline void System::IO::MonoIO::setStaticF_InvalidHandle(void* value) {
  ::cordl_internals::setStaticField<void*, "InvalidHandle", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get>(std::forward<void*>(value));
}
inline void* System::IO::MonoIO::getStaticF_InvalidHandle() {
  return ::cordl_internals::getStaticField<void*, "InvalidHandle", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get>();
}
inline void System::IO::MonoIO::setStaticF_dump_handles(bool value) {
  ::cordl_internals::setStaticField<bool, "dump_handles", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get>(std::forward<bool>(value));
}
inline bool System::IO::MonoIO::getStaticF_dump_handles() {
  return ::cordl_internals::getStaticField<bool, "dump_handles", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get>();
}
inline ::System::Exception* System::IO::MonoIO::GetException(::System::IO::MonoIOError error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetException", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MonoIOError>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method, error);
}
inline ::System::Exception* System::IO::MonoIO::GetException(::StringW path, ::System::IO::MonoIOError error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetException", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MonoIOError>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method, path, error);
}
inline ::StringW System::IO::MonoIO::GetCurrentDirectory(ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetCurrentDirectory", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, error);
}
inline ::System::IO::MonoFileType System::IO::MonoIO::GetFileType(void* handle, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetFileType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::MonoFileType, false>(nullptr, ___internal_method, handle, error);
}
inline ::System::IO::MonoFileType System::IO::MonoIO::GetFileType(::System::Runtime::InteropServices::SafeHandle* safeHandle, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetFileType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::MonoFileType, false>(nullptr, ___internal_method, safeHandle, error);
}
inline void* System::IO::MonoIO::Open(::cordl_internals::Ptr<char16_t> filename, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share,
                                      ::System::IO::FileOptions options, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Open", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileAccess>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileShare>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, filename, mode, access, share, options, error);
}
inline void* System::IO::MonoIO::Open(::StringW filename, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, ::System::IO::FileOptions options,
                                      ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Open", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileAccess>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileShare>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, filename, mode, access, share, options, error);
}
inline bool System::IO::MonoIO::Cancel_internal(void* handle, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Cancel_internal", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle, error);
}
inline bool System::IO::MonoIO::Cancel(::System::Runtime::InteropServices::SafeHandle* safeHandle, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Cancel", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, safeHandle, error);
}
inline bool System::IO::MonoIO::Close(void* handle, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Close", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle, error);
}
inline int32_t System::IO::MonoIO::Read(void* handle, ::ArrayW<uint8_t, ::Array<uint8_t>*> dest, int32_t dest_offset, int32_t count, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Read", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, handle, dest, dest_offset, count, error);
}
inline int32_t System::IO::MonoIO::Read(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::ArrayW<uint8_t, ::Array<uint8_t>*> dest, int32_t dest_offset, int32_t count,
                                        ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Read", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, dest, dest_offset, count, error);
}
inline int32_t System::IO::MonoIO::Write(void* handle, ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>> src, int32_t src_offset, int32_t count, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Write", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, handle, src, src_offset, count, error);
}
inline int32_t System::IO::MonoIO::Write(::System::Runtime::InteropServices::SafeHandle* safeHandle, ::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t src_offset, int32_t count,
                                         ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Write", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, src, src_offset, count, error);
}
inline int64_t System::IO::MonoIO::Seek(void* handle, int64_t offset, ::System::IO::SeekOrigin origin, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Seek", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::SeekOrigin>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, handle, offset, origin, error);
}
inline int64_t System::IO::MonoIO::Seek(::System::Runtime::InteropServices::SafeHandle* safeHandle, int64_t offset, ::System::IO::SeekOrigin origin, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "Seek", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::SeekOrigin>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, safeHandle, offset, origin, error);
}
inline int64_t System::IO::MonoIO::GetLength(void* handle, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetLength", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, handle, error);
}
inline int64_t System::IO::MonoIO::GetLength(::System::Runtime::InteropServices::SafeHandle* safeHandle, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "GetLength", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, safeHandle, error);
}
inline bool System::IO::MonoIO::SetLength(void* handle, int64_t length, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "SetLength", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle, length, error);
}
inline bool System::IO::MonoIO::SetLength(::System::Runtime::InteropServices::SafeHandle* safeHandle, int64_t length, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "SetLength", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, safeHandle, length, error);
}
inline void* System::IO::MonoIO::get_ConsoleOutput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_ConsoleOutput",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method);
}
inline void* System::IO::MonoIO::get_ConsoleInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_ConsoleInput",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method);
}
inline void* System::IO::MonoIO::get_ConsoleError() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_ConsoleError",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method);
}
inline bool System::IO::MonoIO::CreatePipe(ByRef<void*> read_handle, ByRef<void*> write_handle, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "CreatePipe", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, read_handle, write_handle, error);
}
inline bool System::IO::MonoIO::DuplicateHandle(void* source_process_handle, void* source_handle, void* target_process_handle, ByRef<void*> target_handle, int32_t access, int32_t inherit,
                                                int32_t options, ByRef<::System::IO::MonoIOError> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "DuplicateHandle", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::MonoIOError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, source_process_handle, source_handle, target_process_handle, target_handle, access, inherit, options, error);
}
inline char16_t System::IO::MonoIO::get_VolumeSeparatorChar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_VolumeSeparatorChar",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method);
}
inline char16_t System::IO::MonoIO::get_DirectorySeparatorChar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_DirectorySeparatorChar",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method);
}
inline char16_t System::IO::MonoIO::get_AltDirectorySeparatorChar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_AltDirectorySeparatorChar",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method);
}
inline char16_t System::IO::MonoIO::get_PathSeparator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "get_PathSeparator",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method);
}
inline void System::IO::MonoIO::DumpHandles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "DumpHandles",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool System::IO::MonoIO::RemapPath(::StringW path, ByRef<::StringW> newPath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::MonoIO*>::get(), "RemapPath", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, path, newPath);
}
// Ctor Parameters []
constexpr ::System::IO::MonoIO::MonoIO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
