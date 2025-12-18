#pragma once
// IWYU pragma private; include "System/IO/Enumeration/FileSystemEnumerableFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FileSystemEnumerableFactory)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::IO::Enumeration {
struct FileSystemEntry;
}
namespace System::IO::Enumeration {
class FileSystemEnumerableFactory___c;
}
namespace System::IO::Enumeration {
class FileSystemEnumerableFactory___c__DisplayClass3_0;
}
namespace System::IO::Enumeration {
class FileSystemEnumerableFactory___c__DisplayClass4_0;
}
namespace System::IO::Enumeration {
class FileSystemEnumerableFactory___c__DisplayClass5_0;
}
namespace System::IO::Enumeration {
template <typename TResult> class FileSystemEnumerable_1_FindTransform;
}
namespace System::IO {
class EnumerationOptions;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::IO::Enumeration {
class FileSystemEnumerableFactory;
}
namespace System::IO::Enumeration {
class FileSystemEnumerableFactory___c;
}
namespace System::IO::Enumeration {
class FileSystemEnumerableFactory___c__DisplayClass3_0;
}
namespace System::IO::Enumeration {
class FileSystemEnumerableFactory___c__DisplayClass4_0;
}
namespace System::IO::Enumeration {
class FileSystemEnumerableFactory___c__DisplayClass5_0;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Enumeration::FileSystemEnumerableFactory);
MARK_REF_PTR_T(::System::IO::Enumeration::FileSystemEnumerableFactory___c);
MARK_REF_PTR_T(::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0);
MARK_REF_PTR_T(::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0);
MARK_REF_PTR_T(::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0);
// Dependencies System.Object
namespace System::IO::Enumeration {
// Is value type: false
// CS Name: System.IO.Enumeration.FileSystemEnumerableFactory/<>c__DisplayClass3_0
class CORDL_TYPE FileSystemEnumerableFactory___c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field expression, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_expression, put = __cordl_internal_set_expression)) ::StringW expression;

  /// @brief Field options, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_options, put = __cordl_internal_set_options)) ::System::IO::EnumerationOptions* options;

  static inline ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0* New_ctor();

  /// @brief Method <UserFiles>b__1, addr 0x5a745c4, size 0xa4, virtual false, abstract: false, final false
  inline bool _UserFiles_b__1(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry);

  constexpr ::StringW const& __cordl_internal_get_expression() const;

  constexpr ::StringW& __cordl_internal_get_expression();

  constexpr ::System::IO::EnumerationOptions* const& __cordl_internal_get_options() const;

  constexpr ::System::IO::EnumerationOptions*& __cordl_internal_get_options();

  constexpr void __cordl_internal_set_expression(::StringW value);

  constexpr void __cordl_internal_set_options(::System::IO::EnumerationOptions* value);

  /// @brief Method .ctor, addr 0x5a74178, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemEnumerableFactory___c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerableFactory___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemEnumerableFactory___c__DisplayClass3_0(FileSystemEnumerableFactory___c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerableFactory___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemEnumerableFactory___c__DisplayClass3_0(FileSystemEnumerableFactory___c__DisplayClass3_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3931 };

  /// @brief Field expression, offset: 0x10, size: 0x8, def value: None
  ::StringW ___expression;

  /// @brief Field options, offset: 0x18, size: 0x8, def value: None
  ::System::IO::EnumerationOptions* ___options;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0, ___expression) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0, ___options) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0, 0x20>, "Size mismatch!");

} // namespace System::IO::Enumeration
// Dependencies System.Object
namespace System::IO::Enumeration {
// Is value type: false
// CS Name: System.IO.Enumeration.FileSystemEnumerableFactory/<>c
class CORDL_TYPE FileSystemEnumerableFactory___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::IO::Enumeration::FileSystemEnumerableFactory___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::StringW>* __9__3_0;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0)) ::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::StringW>* __9__4_0;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0)) ::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::StringW>* __9__5_0;

  static inline ::System::IO::Enumeration::FileSystemEnumerableFactory___c* New_ctor();

  /// @brief Method <UserDirectories>b__4_0, addr 0x5a746c8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW _UserDirectories_b__4_0(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry);

  /// @brief Method <UserEntries>b__5_0, addr 0x5a746d0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW _UserEntries_b__5_0(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry);

  /// @brief Method <UserFiles>b__3_0, addr 0x5a746c0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW _UserFiles_b__3_0(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry);

  /// @brief Method .ctor, addr 0x5a746bc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::IO::Enumeration::FileSystemEnumerableFactory___c* getStaticF___9();

  static inline ::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::StringW>* getStaticF___9__3_0();

  static inline ::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::StringW>* getStaticF___9__4_0();

  static inline ::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::StringW>* getStaticF___9__5_0();

  static inline void setStaticF___9(::System::IO::Enumeration::FileSystemEnumerableFactory___c* value);

  static inline void setStaticF___9__3_0(::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::StringW>* value);

  static inline void setStaticF___9__4_0(::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::StringW>* value);

  static inline void setStaticF___9__5_0(::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemEnumerableFactory___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerableFactory___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemEnumerableFactory___c(FileSystemEnumerableFactory___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerableFactory___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemEnumerableFactory___c(FileSystemEnumerableFactory___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3932 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Enumeration::FileSystemEnumerableFactory___c, 0x10>, "Size mismatch!");

} // namespace System::IO::Enumeration
// Dependencies System.Object
namespace System::IO::Enumeration {
// Is value type: false
// CS Name: System.IO.Enumeration.FileSystemEnumerableFactory/<>c__DisplayClass4_0
class CORDL_TYPE FileSystemEnumerableFactory___c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field expression, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_expression, put = __cordl_internal_set_expression)) ::StringW expression;

  /// @brief Field options, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_options, put = __cordl_internal_set_options)) ::System::IO::EnumerationOptions* options;

  static inline ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0* New_ctor();

  /// @brief Method <UserDirectories>b__1, addr 0x5a746d8, size 0xa4, virtual false, abstract: false, final false
  inline bool _UserDirectories_b__1(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry);

  constexpr ::StringW const& __cordl_internal_get_expression() const;

  constexpr ::StringW& __cordl_internal_get_expression();

  constexpr ::System::IO::EnumerationOptions* const& __cordl_internal_get_options() const;

  constexpr ::System::IO::EnumerationOptions*& __cordl_internal_get_options();

  constexpr void __cordl_internal_set_expression(::StringW value);

  constexpr void __cordl_internal_set_options(::System::IO::EnumerationOptions* value);

  /// @brief Method .ctor, addr 0x5a74350, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemEnumerableFactory___c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerableFactory___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemEnumerableFactory___c__DisplayClass4_0(FileSystemEnumerableFactory___c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerableFactory___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemEnumerableFactory___c__DisplayClass4_0(FileSystemEnumerableFactory___c__DisplayClass4_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3933 };

  /// @brief Field expression, offset: 0x10, size: 0x8, def value: None
  ::StringW ___expression;

  /// @brief Field options, offset: 0x18, size: 0x8, def value: None
  ::System::IO::EnumerationOptions* ___options;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0, ___expression) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0, ___options) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0, 0x20>, "Size mismatch!");

} // namespace System::IO::Enumeration
// Dependencies System.Object
namespace System::IO::Enumeration {
// Is value type: false
// CS Name: System.IO.Enumeration.FileSystemEnumerableFactory/<>c__DisplayClass5_0
class CORDL_TYPE FileSystemEnumerableFactory___c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field expression, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_expression, put = __cordl_internal_set_expression)) ::StringW expression;

  /// @brief Field options, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_options, put = __cordl_internal_set_options)) ::System::IO::EnumerationOptions* options;

  static inline ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0* New_ctor();

  /// @brief Method <UserEntries>b__1, addr 0x5a7477c, size 0x88, virtual false, abstract: false, final false
  inline bool _UserEntries_b__1(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry);

  constexpr ::StringW const& __cordl_internal_get_expression() const;

  constexpr ::StringW& __cordl_internal_get_expression();

  constexpr ::System::IO::EnumerationOptions* const& __cordl_internal_get_options() const;

  constexpr ::System::IO::EnumerationOptions*& __cordl_internal_get_options();

  constexpr void __cordl_internal_set_expression(::StringW value);

  constexpr void __cordl_internal_set_options(::System::IO::EnumerationOptions* value);

  /// @brief Method .ctor, addr 0x5a74528, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemEnumerableFactory___c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerableFactory___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemEnumerableFactory___c__DisplayClass5_0(FileSystemEnumerableFactory___c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerableFactory___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemEnumerableFactory___c__DisplayClass5_0(FileSystemEnumerableFactory___c__DisplayClass5_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3934 };

  /// @brief Field expression, offset: 0x10, size: 0x8, def value: None
  ::StringW ___expression;

  /// @brief Field options, offset: 0x18, size: 0x8, def value: None
  ::System::IO::EnumerationOptions* ___options;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0, ___expression) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0, ___options) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0, 0x20>, "Size mismatch!");

} // namespace System::IO::Enumeration
// Dependencies System.Object
namespace System::IO::Enumeration {
// Is value type: false
// CS Name: System.IO.Enumeration.FileSystemEnumerableFactory
class CORDL_TYPE FileSystemEnumerableFactory : public ::System::Object {
public:
  // Declarations
  using __c = ::System::IO::Enumeration::FileSystemEnumerableFactory___c;

  using __c__DisplayClass3_0 = ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0;

  using __c__DisplayClass4_0 = ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0;

  using __c__DisplayClass5_0 = ::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0;

  /// @brief Field s_unixEscapeChars, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_unixEscapeChars, put = setStaticF_s_unixEscapeChars)) ::ArrayW<char16_t, ::Array<char16_t>*> s_unixEscapeChars;

  /// @brief Method MatchesPattern, addr 0x5a73c60, size 0x22c, virtual false, abstract: false, final false
  static inline bool MatchesPattern(::StringW expression, ::System::ReadOnlySpan_1<char16_t> name, ::System::IO::EnumerationOptions* options);

  /// @brief Method NormalizeInputs, addr 0x5a7341c, size 0x494, virtual false, abstract: false, final false
  static inline void NormalizeInputs(::ByRef<::StringW> directory, ::ByRef<::StringW> expression, ::System::IO::EnumerationOptions* options);

  /// @brief Method UserDirectories, addr 0x5a7417c, size 0x1d4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UserDirectories(::StringW directory, ::StringW expression, ::System::IO::EnumerationOptions* options);

  /// @brief Method UserEntries, addr 0x5a74354, size 0x1d4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UserEntries(::StringW directory, ::StringW expression, ::System::IO::EnumerationOptions* options);

  /// @brief Method UserFiles, addr 0x5a73fa4, size 0x1d4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UserFiles(::StringW directory, ::StringW expression, ::System::IO::EnumerationOptions* options);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_s_unixEscapeChars();

  static inline void setStaticF_s_unixEscapeChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemEnumerableFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerableFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemEnumerableFactory(FileSystemEnumerableFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerableFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemEnumerableFactory(FileSystemEnumerableFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3935 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Enumeration::FileSystemEnumerableFactory, 0x10>, "Size mismatch!");

} // namespace System::IO::Enumeration
NEED_NO_BOX(::System::IO::Enumeration::FileSystemEnumerableFactory);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Enumeration::FileSystemEnumerableFactory*, "System.IO.Enumeration", "FileSystemEnumerableFactory");
NEED_NO_BOX(::System::IO::Enumeration::FileSystemEnumerableFactory___c);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Enumeration::FileSystemEnumerableFactory___c*, "System.IO.Enumeration", "FileSystemEnumerableFactory/<>c");
NEED_NO_BOX(::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass3_0*, "System.IO.Enumeration", "FileSystemEnumerableFactory/<>c__DisplayClass3_0");
NEED_NO_BOX(::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass4_0*, "System.IO.Enumeration", "FileSystemEnumerableFactory/<>c__DisplayClass4_0");
NEED_NO_BOX(::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Enumeration::FileSystemEnumerableFactory___c__DisplayClass5_0*, "System.IO.Enumeration", "FileSystemEnumerableFactory/<>c__DisplayClass5_0");
