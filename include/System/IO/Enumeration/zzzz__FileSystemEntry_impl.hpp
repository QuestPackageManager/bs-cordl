#pragma once
// IWYU pragma private; include "System/IO/Enumeration/FileSystemEntry.hpp"
#include "GlobalNamespace/zzzz__Interop_impl.hpp"
#include "System/IO/zzzz__FileAttributes_impl.hpp"
#include "System/IO/zzzz__FileStatus_impl.hpp"
#include "System/zzzz__ReadOnlySpan_1_impl.hpp"
#include "System/zzzz__Span_1_impl.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEntry_def.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEntry_def.hpp"
#include "System/IO/zzzz__FileAttributes_def.hpp"
#include "System/IO/zzzz__FileSystemInfo_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "char16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Enumeration::FileSystemEntry___fileNameBuffer_e__FixedBuffer::FileSystemEntry___fileNameBuffer_e__FixedBuffer(char16_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::System::IO::Enumeration::FileSystemEntry___fileNameBuffer_e__FixedBuffer::FileSystemEntry___fileNameBuffer_e__FixedBuffer() {}
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::FileAttributes (*)(
    ::ByRef<::System::IO::Enumeration::FileSystemEntry>, ::GlobalNamespace::Sys_Interop_DirectoryEntry, ::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>,
    ::System::ReadOnlySpan_1<char16_t>, ::System::Span_1<char16_t>)>(&::System::IO::Enumeration::FileSystemEntry::Initialize)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x3d7fc44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Enumeration::FileSystemEntry>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Sys_Interop_DirectoryEntry>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.get_FullPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ReadOnlySpan_1<char16_t> (::System::IO::Enumeration::FileSystemEntry::*)()>(
    &::System::IO::Enumeration::FileSystemEntry::get_FullPath)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x3d7fec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                                                                               "get_FullPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.get_FileName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ReadOnlySpan_1<char16_t> (::System::IO::Enumeration::FileSystemEntry::*)()>(
    &::System::IO::Enumeration::FileSystemEntry::get_FileName)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3d7fff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                                                                               "get_FileName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.get_Directory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ReadOnlySpan_1<char16_t> (::System::IO::Enumeration::FileSystemEntry::*)()>(
    &::System::IO::Enumeration::FileSystemEntry::get_Directory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3d80060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                                                                               "get_Directory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.set_Directory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Enumeration::FileSystemEntry::*)(::System::ReadOnlySpan_1<char16_t>)>(
    &::System::IO::Enumeration::FileSystemEntry::set_Directory)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3d80070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(), "set_Directory", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.get_RootDirectory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ReadOnlySpan_1<char16_t> (::System::IO::Enumeration::FileSystemEntry::*)()>(
    &::System::IO::Enumeration::FileSystemEntry::get_RootDirectory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3d8007c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                                                                               "get_RootDirectory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.set_RootDirectory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Enumeration::FileSystemEntry::*)(::System::ReadOnlySpan_1<char16_t>)>(
    &::System::IO::Enumeration::FileSystemEntry::set_RootDirectory)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3d8008c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(), "set_RootDirectory", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.get_OriginalRootDirectory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ReadOnlySpan_1<char16_t> (::System::IO::Enumeration::FileSystemEntry::*)()>(
    &::System::IO::Enumeration::FileSystemEntry::get_OriginalRootDirectory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3d80098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                                                                               "get_OriginalRootDirectory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.set_OriginalRootDirectory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Enumeration::FileSystemEntry::*)(::System::ReadOnlySpan_1<char16_t>)>(
    &::System::IO::Enumeration::FileSystemEntry::set_OriginalRootDirectory)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3d800a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(), "set_OriginalRootDirectory", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.get_Attributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::FileAttributes (::System::IO::Enumeration::FileSystemEntry::*)()>(
    &::System::IO::Enumeration::FileSystemEntry::get_Attributes)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3d800b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                                                                               "get_Attributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.get_IsDirectory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Enumeration::FileSystemEntry::*)()>(
    &::System::IO::Enumeration::FileSystemEntry::get_IsDirectory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d800fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                                                                               "get_IsDirectory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.ToFileSystemInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::FileSystemInfo* (::System::IO::Enumeration::FileSystemEntry::*)()>(
    &::System::IO::Enumeration::FileSystemEntry::ToFileSystemInfo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3d80104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                                                                               "ToFileSystemInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.ToFullPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::IO::Enumeration::FileSystemEntry::*)()>(
    &::System::IO::Enumeration::FileSystemEntry::ToFullPath)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3d80174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(), "ToFullPath",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.ToSpecifiedFullPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::IO::Enumeration::FileSystemEntry::*)()>(
    &::System::IO::Enumeration::FileSystemEntry::ToSpecifiedFullPath)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x3d8019c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                                                                               "ToSpecifiedFullPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::IO::FileAttributes System::IO::Enumeration::FileSystemEntry::Initialize(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry,
                                                                                         ::GlobalNamespace::Sys_Interop_DirectoryEntry directoryEntry, ::System::ReadOnlySpan_1<char16_t> directory,
                                                                                         ::System::ReadOnlySpan_1<char16_t> rootDirectory, ::System::ReadOnlySpan_1<char16_t> originalRootDirectory,
                                                                                         ::System::Span_1<char16_t> pathBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Enumeration::FileSystemEntry>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Sys_Interop_DirectoryEntry>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::FileAttributes, false>(nullptr, ___internal_method, entry, directoryEntry, directory, rootDirectory, originalRootDirectory, pathBuffer);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::Enumeration::FileSystemEntry::get_FullPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(), "get_FullPath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>, false>(this, ___internal_method);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::Enumeration::FileSystemEntry::get_FileName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(), "get_FileName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>, false>(this, ___internal_method);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::Enumeration::FileSystemEntry::get_Directory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(), "get_Directory",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>, false>(this, ___internal_method);
}
inline void System::IO::Enumeration::FileSystemEntry::set_Directory(::System::ReadOnlySpan_1<char16_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(), "set_Directory", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::Enumeration::FileSystemEntry::get_RootDirectory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                                                                             "get_RootDirectory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>, false>(this, ___internal_method);
}
inline void System::IO::Enumeration::FileSystemEntry::set_RootDirectory(::System::ReadOnlySpan_1<char16_t> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(), "set_RootDirectory", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::Enumeration::FileSystemEntry::get_OriginalRootDirectory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                                                                             "get_OriginalRootDirectory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>, false>(this, ___internal_method);
}
inline void System::IO::Enumeration::FileSystemEntry::set_OriginalRootDirectory(::System::ReadOnlySpan_1<char16_t> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(), "set_OriginalRootDirectory", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::IO::FileAttributes System::IO::Enumeration::FileSystemEntry::get_Attributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                                                                             "get_Attributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IO::FileAttributes, false>(this, ___internal_method);
}
inline bool System::IO::Enumeration::FileSystemEntry::get_IsDirectory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                                                                             "get_IsDirectory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IO::FileSystemInfo* System::IO::Enumeration::FileSystemEntry::ToFileSystemInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                                                                             "ToFileSystemInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IO::FileSystemInfo*, false>(this, ___internal_method);
}
inline ::StringW System::IO::Enumeration::FileSystemEntry::ToFullPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(), "ToFullPath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::IO::Enumeration::FileSystemEntry::ToSpecifiedFullPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                                                                             "ToSpecifiedFullPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_directoryEntry", ty: "::GlobalNamespace::Sys_Interop_DirectoryEntry", modifiers: "", def_value: Some("{}") }, CppParam { name: "_status", ty:
// "::System::IO::FileStatus", modifiers: "", def_value: Some("{}") }, CppParam { name: "_pathBuffer", ty: "::System::Span_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_fullPath", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_fileName", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_fileNameBuffer", ty: "::System::IO::Enumeration::FileSystemEntry___fileNameBuffer_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_initialAttributes", ty: "::System::IO::FileAttributes", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Directory_k__BackingField", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "_RootDirectory_k__BackingField", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_OriginalRootDirectory_k__BackingField", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Enumeration::FileSystemEntry::FileSystemEntry(::GlobalNamespace::Sys_Interop_DirectoryEntry _directoryEntry, ::System::IO::FileStatus _status,
                                                                      ::System::Span_1<char16_t> _pathBuffer, ::System::ReadOnlySpan_1<char16_t> _fullPath,
                                                                      ::System::ReadOnlySpan_1<char16_t> _fileName,
                                                                      ::System::IO::Enumeration::FileSystemEntry___fileNameBuffer_e__FixedBuffer _fileNameBuffer,
                                                                      ::System::IO::FileAttributes _initialAttributes, ::System::ReadOnlySpan_1<char16_t> _Directory_k__BackingField,
                                                                      ::System::ReadOnlySpan_1<char16_t> _RootDirectory_k__BackingField,
                                                                      ::System::ReadOnlySpan_1<char16_t> _OriginalRootDirectory_k__BackingField) noexcept {
  this->_directoryEntry = _directoryEntry;
  this->_status = _status;
  this->_pathBuffer = _pathBuffer;
  this->_fullPath = _fullPath;
  this->_fileName = _fileName;
  this->_fileNameBuffer = _fileNameBuffer;
  this->_initialAttributes = _initialAttributes;
  this->_Directory_k__BackingField = _Directory_k__BackingField;
  this->_RootDirectory_k__BackingField = _RootDirectory_k__BackingField;
  this->_OriginalRootDirectory_k__BackingField = _OriginalRootDirectory_k__BackingField;
}
// Ctor Parameters []
constexpr ::System::IO::Enumeration::FileSystemEntry::FileSystemEntry() {}
