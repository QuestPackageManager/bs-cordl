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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileAttributes (*)(::by_ref<::System::IO::Enumeration::FileSystemEntry>, ::GlobalNamespace::Sys_Interop_DirectoryEntry,
                                                                                        ::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>,
                                                                                        ::System::Span_1<char16_t>)>(&::System::IO::Enumeration::FileSystemEntry::Initialize)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x5c20a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(),
                                                { "Initialize",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::System::IO::Enumeration::FileSystemEntry>>(), ::i2c::type_of<::GlobalNamespace::Sys_Interop_DirectoryEntry>(),
                                                    ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                    ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Span_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.get_FullPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (::System::IO::Enumeration::FileSystemEntry::*)()>(
    &::System::IO::Enumeration::FileSystemEntry::get_FullPath)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5c20d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(), { "get_FullPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.get_FileName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (::System::IO::Enumeration::FileSystemEntry::*)()>(
    &::System::IO::Enumeration::FileSystemEntry::get_FileName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c20ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(), { "get_FileName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.get_Directory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (::System::IO::Enumeration::FileSystemEntry::*)()>(
    &::System::IO::Enumeration::FileSystemEntry::get_Directory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c20f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(), { "get_Directory", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.set_Directory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Enumeration::FileSystemEntry::*)(::System::ReadOnlySpan_1<char16_t>)>(
    &::System::IO::Enumeration::FileSystemEntry::set_Directory)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c20f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(), { "set_Directory", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.get_RootDirectory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (::System::IO::Enumeration::FileSystemEntry::*)()>(
    &::System::IO::Enumeration::FileSystemEntry::get_RootDirectory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c20f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(), { "get_RootDirectory", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.set_RootDirectory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Enumeration::FileSystemEntry::*)(::System::ReadOnlySpan_1<char16_t>)>(
    &::System::IO::Enumeration::FileSystemEntry::set_RootDirectory)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c20f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(), { "set_RootDirectory", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.get_OriginalRootDirectory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (::System::IO::Enumeration::FileSystemEntry::*)()>(
    &::System::IO::Enumeration::FileSystemEntry::get_OriginalRootDirectory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c20f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(), { "get_OriginalRootDirectory", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.set_OriginalRootDirectory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Enumeration::FileSystemEntry::*)(::System::ReadOnlySpan_1<char16_t>)>(
    &::System::IO::Enumeration::FileSystemEntry::set_OriginalRootDirectory)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c20f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(),
                                                                                           { "set_OriginalRootDirectory", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.get_Attributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileAttributes (::System::IO::Enumeration::FileSystemEntry::*)()>(&::System::IO::Enumeration::FileSystemEntry::get_Attributes)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c20f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(), { "get_Attributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.get_IsDirectory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::Enumeration::FileSystemEntry::*)()>(&::System::IO::Enumeration::FileSystemEntry::get_IsDirectory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c20fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(), { "get_IsDirectory", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.ToSpecifiedFullPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::Enumeration::FileSystemEntry::*)()>(&::System::IO::Enumeration::FileSystemEntry::ToSpecifiedFullPath)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5c20fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(), { "ToSpecifiedFullPath", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::IO::FileAttributes System::IO::Enumeration::FileSystemEntry::Initialize(::by_ref<::System::IO::Enumeration::FileSystemEntry> entry,
                                                                                         ::GlobalNamespace::Sys_Interop_DirectoryEntry directoryEntry, ::System::ReadOnlySpan_1<char16_t> directory,
                                                                                         ::System::ReadOnlySpan_1<char16_t> rootDirectory, ::System::ReadOnlySpan_1<char16_t> originalRootDirectory,
                                                                                         ::System::Span_1<char16_t> pathBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(),
                                                           { "Initialize",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::System::IO::Enumeration::FileSystemEntry>>(), ::i2c::type_of<::GlobalNamespace::Sys_Interop_DirectoryEntry>(),
                                                               ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                               ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Span_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::FileAttributes>(nullptr, ___internal_method, entry, directoryEntry, directory, rootDirectory, originalRootDirectory, pathBuffer);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::Enumeration::FileSystemEntry::get_FullPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(), { "get_FullPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(*this, ___internal_method);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::Enumeration::FileSystemEntry::get_FileName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(), { "get_FileName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(*this, ___internal_method);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::Enumeration::FileSystemEntry::get_Directory() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(), { "get_Directory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(*this, ___internal_method);
}
inline void System::IO::Enumeration::FileSystemEntry::set_Directory(::System::ReadOnlySpan_1<char16_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(), { "set_Directory", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::Enumeration::FileSystemEntry::get_RootDirectory() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(), { "get_RootDirectory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(*this, ___internal_method);
}
inline void System::IO::Enumeration::FileSystemEntry::set_RootDirectory(::System::ReadOnlySpan_1<char16_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(), { "set_RootDirectory", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::Enumeration::FileSystemEntry::get_OriginalRootDirectory() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(), { "get_OriginalRootDirectory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(*this, ___internal_method);
}
inline void System::IO::Enumeration::FileSystemEntry::set_OriginalRootDirectory(::System::ReadOnlySpan_1<char16_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(), { "set_OriginalRootDirectory", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::IO::FileAttributes System::IO::Enumeration::FileSystemEntry::get_Attributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(), { "get_Attributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::FileAttributes>(*this, ___internal_method);
}
inline bool System::IO::Enumeration::FileSystemEntry::get_IsDirectory() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(), { "get_IsDirectory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW System::IO::Enumeration::FileSystemEntry::ToSpecifiedFullPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(), { "ToSpecifiedFullPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
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
