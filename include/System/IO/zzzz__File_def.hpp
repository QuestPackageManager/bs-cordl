#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(File)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::IO {
struct FileAccess;
}
namespace System::IO {
struct FileAttributes;
}
namespace System::IO {
struct FileMode;
}
namespace System::IO {
struct FileShare;
}
namespace System::IO {
class FileStream;
}
namespace System::IO {
class StreamReader;
}
namespace System::IO {
class StreamWriter;
}
namespace System::IO {
class TextWriter;
}
namespace System::IO {
struct __File___InternalReadAllTextAsync_d__67;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter;
}
namespace System::Security::AccessControl {
struct AccessControlSections;
}
namespace System::Security::AccessControl {
class FileSecurity;
}
namespace System::Text {
class Encoding;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace System::IO {
class File;
}
namespace System::IO {
struct __File___InternalReadAllTextAsync_d__67;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::File);
MARK_VAL_T(::System::IO::__File___InternalReadAllTextAsync_d__67);
// Type: ::<InternalReadAllTextAsync>d__67
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: true
// CS Name: ::File::<InternalReadAllTextAsync>d__67
struct CORDL_TYPE __File___InternalReadAllTextAsync_d__67 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2661f20, size 0x568, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2662488, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __File___InternalReadAllTextAsync_d__67();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam
  // { name: "encoding", ty: "::System::Text::Encoding*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "_buffer_5__2", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: None }, CppParam { name: "_sr_5__3", ty: "::System::IO::StreamReader*",
  // modifiers: "", def_value: None }, CppParam { name: "_sb_5__4", ty: "::System::Text::StringBuilder*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr __File___InternalReadAllTextAsync_d__67(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::StringW path,
                                                    ::System::Text::Encoding* encoding, ::System::Threading::CancellationToken cancellationToken, ::ArrayW<char16_t, ::Array<char16_t>*> _buffer_5__2,
                                                    ::System::IO::StreamReader* _sr_5__3, ::System::Text::StringBuilder* _sb_5__4,
                                                    ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder;

  /// @brief Field path, offset: 0x20, size: 0x8, def value: None
  ::StringW path;

  /// @brief Field encoding, offset: 0x28, size: 0x8, def value: None
  ::System::Text::Encoding* encoding;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <buffer>5__2, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> _buffer_5__2;

  /// @brief Field <sr>5__3, offset: 0x40, size: 0x8, def value: None
  ::System::IO::StreamReader* _sr_5__3;

  /// @brief Field <sb>5__4, offset: 0x48, size: 0x8, def value: None
  ::System::Text::StringBuilder* _sb_5__4;

  /// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__File___InternalReadAllTextAsync_d__67, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::IO::__File___InternalReadAllTextAsync_d__67, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::__File___InternalReadAllTextAsync_d__67, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::__File___InternalReadAllTextAsync_d__67, path) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::__File___InternalReadAllTextAsync_d__67, encoding) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::__File___InternalReadAllTextAsync_d__67, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::__File___InternalReadAllTextAsync_d__67, _buffer_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::__File___InternalReadAllTextAsync_d__67, _sr_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::__File___InternalReadAllTextAsync_d__67, _sb_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::IO::__File___InternalReadAllTextAsync_d__67, __u__1) == 0x50, "Offset mismatch!");

} // namespace System::IO
// Type: System.IO::File
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// CS Name: ::System.IO::File*
class CORDL_TYPE File : public ::System::Object {
public:
  // Declarations
  using _InternalReadAllTextAsync_d__67 = ::System::IO::__File___InternalReadAllTextAsync_d__67;

  /// @brief Method AppendText, addr 0x265f790, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::IO::StreamWriter* AppendText(::StringW path);

  /// @brief Method AsyncStreamReader, addr 0x2661b3c, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::IO::StreamReader* AsyncStreamReader(::StringW path, ::System::Text::Encoding* encoding);

  /// @brief Method Create, addr 0x265f844, size 0x8, virtual false, abstract: false, final false
  static inline ::System::IO::FileStream* Create(::StringW path);

  /// @brief Method Create, addr 0x265f84c, size 0x80, virtual false, abstract: false, final false
  static inline ::System::IO::FileStream* Create(::StringW path, int32_t bufferSize);

  /// @brief Method CreateText, addr 0x265f6dc, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::IO::StreamWriter* CreateText(::StringW path);

  /// @brief Method Delete, addr 0x265f8cc, size 0xac, virtual false, abstract: false, final false
  static inline void Delete(::StringW path);

  /// @brief Method Exists, addr 0x26520b4, size 0x1bc, virtual false, abstract: false, final false
  static inline bool Exists(::StringW path);

  /// @brief Method GetAccessControl, addr 0x2661ea4, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Security::AccessControl::FileSecurity* GetAccessControl(::StringW path);

  /// @brief Method GetAccessControl, addr 0x2661eac, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Security::AccessControl::FileSecurity* GetAccessControl(::StringW path, ::System::Security::AccessControl::AccessControlSections includeSections);

  /// @brief Method GetAttributes, addr 0x265fc40, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::IO::FileAttributes GetAttributes(::StringW path);

  /// @brief Method InternalReadAllLines, addr 0x2660d7c, size 0x284, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> InternalReadAllLines(::StringW path, ::System::Text::Encoding* encoding);

  /// @brief Method InternalReadAllText, addr 0x265fed8, size 0x1ac, virtual false, abstract: false, final false
  static inline ::StringW InternalReadAllText(::StringW path, ::System::Text::Encoding* encoding);

  /// @brief Method InternalReadAllTextAsync, addr 0x2661da0, size 0x104, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::StringW>* InternalReadAllTextAsync(::StringW path, ::System::Text::Encoding* encoding, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method InternalWriteAllBytes, addr 0x2660af8, size 0x1b8, virtual false, abstract: false, final false
  static inline void InternalWriteAllBytes(::StringW path, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method InternalWriteAllLines, addr 0x2661138, size 0x404, virtual false, abstract: false, final false
  static inline void InternalWriteAllLines(::System::IO::TextWriter* writer, ::System::Collections::Generic::IEnumerable_1<::StringW>* contents);

  /// @brief Method Move, addr 0x26617e4, size 0x240, virtual false, abstract: false, final false
  static inline void Move(::StringW sourceFileName, ::StringW destFileName);

  /// @brief Method Open, addr 0x265fba0, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IO::FileStream* Open(::StringW path, ::System::IO::FileMode mode);

  /// @brief Method Open, addr 0x265fbb4, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::IO::FileStream* Open(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share);

  /// @brief Method OpenRead, addr 0x265fd2c, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IO::FileStream* OpenRead(::StringW path);

  /// @brief Method OpenText, addr 0x265f614, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::IO::StreamReader* OpenText(::StringW path);

  /// @brief Method OpenWrite, addr 0x265fd9c, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IO::FileStream* OpenWrite(::StringW path);

  /// @brief Method ReadAllBytes, addr 0x26602c0, size 0x2c0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadAllBytes(::StringW path);

  /// @brief Method ReadAllBytesUnknownLength, addr 0x2660580, size 0x470, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadAllBytesUnknownLength(::System::IO::FileStream* fs);

  /// @brief Method ReadAllLines, addr 0x2660cb0, size 0xcc, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> ReadAllLines(::StringW path);

  /// @brief Method ReadAllText, addr 0x265fe0c, size 0xcc, virtual false, abstract: false, final false
  static inline ::StringW ReadAllText(::StringW path);

  /// @brief Method ReadAllTextAsync, addr 0x2661bfc, size 0x30, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::StringW>* ReadAllTextAsync(::StringW path, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAllTextAsync, addr 0x2661c2c, size 0x174, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::StringW>* ReadAllTextAsync(::StringW path, ::System::Text::Encoding* encoding, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Replace, addr 0x266153c, size 0x8, virtual false, abstract: false, final false
  static inline void Replace(::StringW sourceFileName, ::StringW destinationFileName, ::StringW destinationBackupFileName);

  /// @brief Method Replace, addr 0x2661544, size 0x130, virtual false, abstract: false, final false
  static inline void Replace(::StringW sourceFileName, ::StringW destinationFileName, ::StringW destinationBackupFileName, bool ignoreMetadataErrors);

  /// @brief Method WriteAllBytes, addr 0x26609f0, size 0x108, virtual false, abstract: false, final false
  static inline void WriteAllBytes(::StringW path, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method WriteAllLines, addr 0x2661000, size 0x4, virtual false, abstract: false, final false
  static inline void WriteAllLines(::StringW path, ::ArrayW<::StringW, ::Array<::StringW>*> contents);

  /// @brief Method WriteAllLines, addr 0x2661004, size 0x134, virtual false, abstract: false, final false
  static inline void WriteAllLines(::StringW path, ::System::Collections::Generic::IEnumerable_1<::StringW>* contents);

  /// @brief Method WriteAllText, addr 0x2660084, size 0x23c, virtual false, abstract: false, final false
  static inline void WriteAllText(::StringW path, ::StringW contents);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr File();

public:
  // Ctor Parameters [CppParam { name: "", ty: "File", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  File(File&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "File", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  File(File const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::File, 0x10>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::File);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::File*, "System.IO", "File");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__File___InternalReadAllTextAsync_d__67, "System.IO", "File/<InternalReadAllTextAsync>d__67");
