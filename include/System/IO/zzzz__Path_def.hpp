#pragma once
// IWYU pragma private; include "System/IO/Path.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Path)
namespace System::Buffers {
template <typename T, typename TArg> class SpanAction_2;
}
namespace System::IO {
class Path___c;
}
namespace System {
struct IntPtr;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System {
template <typename T1> struct ValueTuple_1;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename T5> struct ValueTuple_5;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRest> struct ValueTuple_8;
}
// Forward declare root types
namespace System::IO {
class Path;
}
namespace System::IO {
class Path___c;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Path);
MARK_REF_PTR_T(::System::IO::Path___c);
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.Path/<>c
class CORDL_TYPE Path___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::IO::Path___c* __9;

  /// @brief Field <>9__56_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__56_0,
                      put = setStaticF___9__56_0)) ::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_5<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool>>* __9__56_0;

  /// @brief Field <>9__57_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__57_0, put = setStaticF___9__57_0)) ::System::Buffers::SpanAction_2<
      char16_t, ::System::ValueTuple_8<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool, ::System::ValueTuple_1<bool>>>* __9__57_0;

  static inline ::System::IO::Path___c* New_ctor();

  /// @brief Method <JoinInternal>b__56_0, addr 0x5a71078, size 0x134, virtual false, abstract: false, final false
  inline void _JoinInternal_b__56_0(::System::Span_1<char16_t> destination, ::System::ValueTuple_5<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool> state);

  /// @brief Method <JoinInternal>b__57_0, addr 0x5a711ac, size 0x1b8, virtual false, abstract: false, final false
  inline void _JoinInternal_b__57_0(::System::Span_1<char16_t> destination,
                                    ::System::ValueTuple_8<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool, ::System::ValueTuple_1<bool>> state);

  /// @brief Method .ctor, addr 0x5a71074, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::IO::Path___c* getStaticF___9();

  static inline ::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_5<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool>>* getStaticF___9__56_0();

  static inline ::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_8<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool, ::System::ValueTuple_1<bool>>>*
  getStaticF___9__57_0();

  static inline void setStaticF___9(::System::IO::Path___c* value);

  static inline void setStaticF___9__56_0(::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_5<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool>>* value);

  static inline void setStaticF___9__57_0(
      ::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_8<::System::IntPtr, int32_t, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool, ::System::ValueTuple_1<bool>>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Path___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Path___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Path___c(Path___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Path___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Path___c(Path___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3917 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Path___c, 0x10>, "Size mismatch!");

} // namespace System::IO
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.Path
class CORDL_TYPE Path : public ::System::Object {
public:
  // Declarations
  using __c = ::System::IO::Path___c;

  /// @brief Field AltDirectorySeparatorChar, offset 0xffffffff, size 0x2
  __declspec(property(get = getStaticF_AltDirectorySeparatorChar, put = setStaticF_AltDirectorySeparatorChar)) char16_t AltDirectorySeparatorChar;

  /// @brief Field DirectorySeparatorChar, offset 0xffffffff, size 0x2
  __declspec(property(get = getStaticF_DirectorySeparatorChar, put = setStaticF_DirectorySeparatorChar)) char16_t DirectorySeparatorChar;

  /// @brief Field DirectorySeparatorStr, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DirectorySeparatorStr, put = setStaticF_DirectorySeparatorStr)) ::StringW DirectorySeparatorStr;

  /// @brief Field InvalidPathChars, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InvalidPathChars, put = setStaticF_InvalidPathChars)) ::ArrayW<char16_t, ::Array<char16_t>*> InvalidPathChars;

  /// @brief Field PathSeparator, offset 0xffffffff, size 0x2
  __declspec(property(get = getStaticF_PathSeparator, put = setStaticF_PathSeparator)) char16_t PathSeparator;

  /// @brief Field PathSeparatorChars, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PathSeparatorChars, put = setStaticF_PathSeparatorChars)) ::ArrayW<char16_t, ::Array<char16_t>*> PathSeparatorChars;

  /// @brief Field VolumeSeparatorChar, offset 0xffffffff, size 0x2
  __declspec(property(get = getStaticF_VolumeSeparatorChar, put = setStaticF_VolumeSeparatorChar)) char16_t VolumeSeparatorChar;

  /// @brief Field dirEqualsVolume, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_dirEqualsVolume, put = setStaticF_dirEqualsVolume)) bool dirEqualsVolume;

  /// @brief Field trimEndCharsUnix, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_trimEndCharsUnix, put = setStaticF_trimEndCharsUnix)) ::ArrayW<char16_t, ::Array<char16_t>*> trimEndCharsUnix;

  /// @brief Field trimEndCharsWindows, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_trimEndCharsWindows, put = setStaticF_trimEndCharsWindows)) ::ArrayW<char16_t, ::Array<char16_t>*> trimEndCharsWindows;

  /// @brief Method CanonicalizePath, addr 0x5a6f8ec, size 0x29c, virtual false, abstract: false, final false
  static inline ::StringW CanonicalizePath(::StringW path);

  /// @brief Method ChangeExtension, addr 0x5a6e8a4, size 0x1e8, virtual false, abstract: false, final false
  static inline ::StringW ChangeExtension(::StringW path, ::StringW extension);

  /// @brief Method CleanPath, addr 0x5a6eebc, size 0x414, virtual false, abstract: false, final false
  static inline ::StringW CleanPath(::StringW s);

  /// @brief Method Combine, addr 0x5a6eb2c, size 0x264, virtual false, abstract: false, final false
  static inline ::StringW Combine(::StringW path1, ::StringW path2);

  /// @brief Method Combine, addr 0x5a70278, size 0x154, virtual false, abstract: false, final false
  static inline ::StringW Combine(::StringW path1, ::StringW path2, ::StringW path3);

  /// @brief Method Combine, addr 0x5a703cc, size 0x190, virtual false, abstract: false, final false
  static inline ::StringW Combine(::StringW path1, ::StringW path2, ::StringW path3, ::StringW path4);

  /// @brief Method Combine, addr 0x5a6ff90, size 0x2e8, virtual false, abstract: false, final false
  static inline ::StringW Combine(::ArrayW<::StringW, ::Array<::StringW>*> paths);

  /// @brief Method GetDirectoryName, addr 0x5a5a758, size 0x348, virtual false, abstract: false, final false
  static inline ::StringW GetDirectoryName(::StringW path);

  /// @brief Method GetDirectoryName, addr 0x5a6f694, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> GetDirectoryName(::System::ReadOnlySpan_1<char16_t> path);

  /// @brief Method GetExtension, addr 0x5a6f76c, size 0x120, virtual false, abstract: false, final false
  static inline ::StringW GetExtension(::StringW path);

  /// @brief Method GetFileName, addr 0x5a659e0, size 0x11c, virtual false, abstract: false, final false
  static inline ::StringW GetFileName(::StringW path);

  /// @brief Method GetFileName, addr 0x5a7055c, size 0x170, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> GetFileName(::System::ReadOnlySpan_1<char16_t> path);

  /// @brief Method GetFileNameWithoutExtension, addr 0x5a6f88c, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW GetFileNameWithoutExtension(::StringW path);

  /// @brief Method GetFullPath, addr 0x5a6a8fc, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW GetFullPath(::StringW path);

  /// @brief Method GetFullPathInternal, addr 0x5a5abe8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW GetFullPathInternal(::StringW path);

  /// @brief Method GetInvalidPathChars, addr 0x5a6fd84, size 0x5c, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t, ::Array<char16_t>*> GetInvalidPathChars();

  /// @brief Method GetPathRoot, addr 0x5a6f2d0, size 0x3c4, virtual false, abstract: false, final false
  static inline ::StringW GetPathRoot(::StringW path);

  /// @brief Method GetTempPath, addr 0x5a6fb88, size 0xe8, virtual false, abstract: false, final false
  static inline ::StringW GetTempPath();

  /// @brief Method InsecureGetFullPath, addr 0x5a6a270, size 0x5dc, virtual false, abstract: false, final false
  static inline ::StringW InsecureGetFullPath(::StringW path);

  /// @brief Method IsDirectorySeparator, addr 0x5a6594c, size 0x94, virtual false, abstract: false, final false
  static inline bool IsDirectorySeparator(char16_t c);

  /// @brief Method IsPathRooted, addr 0x5a6ed90, size 0x12c, virtual false, abstract: false, final false
  static inline bool IsPathRooted(::StringW path);

  /// @brief Method IsPathRooted, addr 0x5a6fc74, size 0x110, virtual false, abstract: false, final false
  static inline bool IsPathRooted(::System::ReadOnlySpan_1<char16_t> path);

  /// @brief Method Join, addr 0x5a706cc, size 0xc4, virtual false, abstract: false, final false
  static inline ::StringW Join(::System::ReadOnlySpan_1<char16_t> path1, ::System::ReadOnlySpan_1<char16_t> path2);

  /// @brief Method Join, addr 0x5a70994, size 0x128, virtual false, abstract: false, final false
  static inline ::StringW Join(::System::ReadOnlySpan_1<char16_t> path1, ::System::ReadOnlySpan_1<char16_t> path2, ::System::ReadOnlySpan_1<char16_t> path3);

  /// @brief Method JoinInternal, addr 0x5a70790, size 0x204, virtual false, abstract: false, final false
  static inline ::StringW JoinInternal(::System::ReadOnlySpan_1<char16_t> first, ::System::ReadOnlySpan_1<char16_t> second);

  /// @brief Method JoinInternal, addr 0x5a70abc, size 0x2f0, virtual false, abstract: false, final false
  static inline ::StringW JoinInternal(::System::ReadOnlySpan_1<char16_t> first, ::System::ReadOnlySpan_1<char16_t> second, ::System::ReadOnlySpan_1<char16_t> third);

  /// @brief Method TryJoin, addr 0x5a70dac, size 0x274, virtual false, abstract: false, final false
  static inline bool TryJoin(::System::ReadOnlySpan_1<char16_t> path1, ::System::ReadOnlySpan_1<char16_t> path2, ::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten);

  /// @brief Method findExtension, addr 0x5a6ea8c, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t findExtension(::StringW path);

  static inline char16_t getStaticF_AltDirectorySeparatorChar();

  static inline char16_t getStaticF_DirectorySeparatorChar();

  static inline ::StringW getStaticF_DirectorySeparatorStr();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_InvalidPathChars();

  static inline char16_t getStaticF_PathSeparator();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_PathSeparatorChars();

  static inline char16_t getStaticF_VolumeSeparatorChar();

  static inline bool getStaticF_dirEqualsVolume();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_trimEndCharsUnix();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_trimEndCharsWindows();

  /// @brief Method get_temp_path, addr 0x5a6fc70, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_temp_path();

  static inline void setStaticF_AltDirectorySeparatorChar(char16_t value);

  static inline void setStaticF_DirectorySeparatorChar(char16_t value);

  static inline void setStaticF_DirectorySeparatorStr(::StringW value);

  static inline void setStaticF_InvalidPathChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_PathSeparator(char16_t value);

  static inline void setStaticF_PathSeparatorChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_VolumeSeparatorChar(char16_t value);

  static inline void setStaticF_dirEqualsVolume(bool value);

  static inline void setStaticF_trimEndCharsUnix(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_trimEndCharsWindows(::ArrayW<char16_t, ::Array<char16_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Path();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Path", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Path(Path&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Path", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Path(Path const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3918 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Path, 0x10>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::Path);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Path*, "System.IO", "Path");
NEED_NO_BOX(::System::IO::Path___c);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Path___c*, "System.IO", "Path/<>c");
