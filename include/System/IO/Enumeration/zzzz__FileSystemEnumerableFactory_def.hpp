#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FileSystemEnumerableFactory)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::IO::Enumeration {
struct FileSystemEntry;
}
namespace System::IO::Enumeration {
class __FileSystemEnumerableFactory____c;
}
namespace System::IO::Enumeration {
class __FileSystemEnumerableFactory____c__DisplayClass3_0;
}
namespace System::IO::Enumeration {
class __FileSystemEnumerableFactory____c__DisplayClass4_0;
}
namespace System::IO::Enumeration {
class __FileSystemEnumerableFactory____c__DisplayClass5_0;
}
namespace System::IO::Enumeration {
class __FileSystemEnumerableFactory____c__DisplayClass6_0;
}
namespace System::IO::Enumeration {
class __FileSystemEnumerableFactory____c__DisplayClass7_0;
}
namespace System::IO::Enumeration {
class __FileSystemEnumerableFactory____c__DisplayClass8_0;
}
namespace System::IO::Enumeration {
template <typename TResult> class __FileSystemEnumerable_1__FindTransform;
}
namespace System::IO {
class DirectoryInfo;
}
namespace System::IO {
class EnumerationOptions;
}
namespace System::IO {
class FileInfo;
}
namespace System::IO {
class FileSystemInfo;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::IO::Enumeration {
class FileSystemEnumerableFactory;
}
namespace System::IO::Enumeration {
class __FileSystemEnumerableFactory____c;
}
namespace System::IO::Enumeration {
class __FileSystemEnumerableFactory____c__DisplayClass3_0;
}
namespace System::IO::Enumeration {
class __FileSystemEnumerableFactory____c__DisplayClass4_0;
}
namespace System::IO::Enumeration {
class __FileSystemEnumerableFactory____c__DisplayClass5_0;
}
namespace System::IO::Enumeration {
class __FileSystemEnumerableFactory____c__DisplayClass6_0;
}
namespace System::IO::Enumeration {
class __FileSystemEnumerableFactory____c__DisplayClass7_0;
}
namespace System::IO::Enumeration {
class __FileSystemEnumerableFactory____c__DisplayClass8_0;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Enumeration::FileSystemEnumerableFactory);
MARK_REF_PTR_T(::System::IO::Enumeration::__FileSystemEnumerableFactory____c);
MARK_REF_PTR_T(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass3_0);
MARK_REF_PTR_T(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass4_0);
MARK_REF_PTR_T(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass5_0);
MARK_REF_PTR_T(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass6_0);
MARK_REF_PTR_T(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass7_0);
MARK_REF_PTR_T(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass8_0);
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO::Enumeration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3647))
// CS Name: ::FileSystemEnumerableFactory::<>c__DisplayClass3_0*
class CORDL_TYPE __FileSystemEnumerableFactory____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field expression, offset 0x10, size 0x8
  __declspec(property(get = __get_expression, put = __set_expression))::StringW expression;

  /// @brief Field options, offset 0x18, size 0x8
  __declspec(property(get = __get_options, put = __set_options))::System::IO::EnumerationOptions* options;

  constexpr ::StringW& __get_expression();

  constexpr ::StringW const& __get_expression() const;

  constexpr void __set_expression(::StringW value);

  constexpr ::System::IO::EnumerationOptions*& __get_options();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::EnumerationOptions*> const& __get_options() const;

  constexpr void __set_options(::System::IO::EnumerationOptions* value);

  static inline ::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass3_0* New_ctor();

  /// @brief Method .ctor, addr 0x2547038, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <UserFiles>b__1, addr 0x25479c0, size 0xa0, virtual false, abstract: false, final false
  inline bool _UserFiles_b__1(ByRef<::System::IO::Enumeration::FileSystemEntry> entry);

  // Ctor Parameters [CppParam { name: "", ty: "__FileSystemEnumerableFactory____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FileSystemEnumerableFactory____c__DisplayClass3_0(__FileSystemEnumerableFactory____c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FileSystemEnumerableFactory____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FileSystemEnumerableFactory____c__DisplayClass3_0(__FileSystemEnumerableFactory____c__DisplayClass3_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FileSystemEnumerableFactory____c__DisplayClass3_0();

public:
  /// @brief Field expression, offset: 0x10, size: 0x8, def value: None
  ::StringW ___expression;

  /// @brief Field options, offset: 0x18, size: 0x8, def value: None
  ::System::IO::EnumerationOptions* ___options;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass3_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass3_0, ___expression) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass3_0, ___options) == 0x18, "Offset mismatch!");

} // namespace System::IO::Enumeration
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO::Enumeration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3648))
// CS Name: ::FileSystemEnumerableFactory::<>c*
class CORDL_TYPE __FileSystemEnumerableFactory____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::IO::Enumeration::__FileSystemEnumerableFactory____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<::StringW>* __9__3_0;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0))::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<::StringW>* __9__4_0;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0))::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<::StringW>* __9__5_0;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0))::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<::System::IO::FileInfo*>* __9__6_0;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0))::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<::System::IO::DirectoryInfo*>* __9__7_0;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0))::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<::System::IO::FileSystemInfo*>* __9__8_0;

  static inline void setStaticF___9(::System::IO::Enumeration::__FileSystemEnumerableFactory____c* value);

  static inline ::System::IO::Enumeration::__FileSystemEnumerableFactory____c* getStaticF___9();

  static inline void setStaticF___9__3_0(::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<::StringW>* value);

  static inline ::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<::StringW>* getStaticF___9__3_0();

  static inline void setStaticF___9__4_0(::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<::StringW>* value);

  static inline ::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<::StringW>* getStaticF___9__4_0();

  static inline void setStaticF___9__5_0(::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<::StringW>* value);

  static inline ::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<::StringW>* getStaticF___9__5_0();

  static inline void setStaticF___9__6_0(::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<::System::IO::FileInfo*>* value);

  static inline ::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<::System::IO::FileInfo*>* getStaticF___9__6_0();

  static inline void setStaticF___9__7_0(::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<::System::IO::DirectoryInfo*>* value);

  static inline ::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<::System::IO::DirectoryInfo*>* getStaticF___9__7_0();

  static inline void setStaticF___9__8_0(::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<::System::IO::FileSystemInfo*>* value);

  static inline ::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<::System::IO::FileSystemInfo*>* getStaticF___9__8_0();

  static inline ::System::IO::Enumeration::__FileSystemEnumerableFactory____c* New_ctor();

  /// @brief Method .ctor, addr 0x2547ac4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <UserFiles>b__3_0, addr 0x2547acc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW _UserFiles_b__3_0(ByRef<::System::IO::Enumeration::FileSystemEntry> entry);

  /// @brief Method <UserDirectories>b__4_0, addr 0x2547ad4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW _UserDirectories_b__4_0(ByRef<::System::IO::Enumeration::FileSystemEntry> entry);

  /// @brief Method <UserEntries>b__5_0, addr 0x2547adc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW _UserEntries_b__5_0(ByRef<::System::IO::Enumeration::FileSystemEntry> entry);

  /// @brief Method <FileInfos>b__6_0, addr 0x2547ae4, size 0x60, virtual false, abstract: false, final false
  inline ::System::IO::FileInfo* _FileInfos_b__6_0(ByRef<::System::IO::Enumeration::FileSystemEntry> entry);

  /// @brief Method <DirectoryInfos>b__7_0, addr 0x2547b44, size 0x60, virtual false, abstract: false, final false
  inline ::System::IO::DirectoryInfo* _DirectoryInfos_b__7_0(ByRef<::System::IO::Enumeration::FileSystemEntry> entry);

  /// @brief Method <FileSystemInfos>b__8_0, addr 0x2547ba4, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::FileSystemInfo* _FileSystemInfos_b__8_0(ByRef<::System::IO::Enumeration::FileSystemEntry> entry);

  // Ctor Parameters [CppParam { name: "", ty: "__FileSystemEnumerableFactory____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FileSystemEnumerableFactory____c(__FileSystemEnumerableFactory____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FileSystemEnumerableFactory____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FileSystemEnumerableFactory____c(__FileSystemEnumerableFactory____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FileSystemEnumerableFactory____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Enumeration::__FileSystemEnumerableFactory____c, 0x10>, "Size mismatch!");

} // namespace System::IO::Enumeration
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO::Enumeration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3649))
// CS Name: ::FileSystemEnumerableFactory::<>c__DisplayClass4_0*
class CORDL_TYPE __FileSystemEnumerableFactory____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field expression, offset 0x10, size 0x8
  __declspec(property(get = __get_expression, put = __set_expression))::StringW expression;

  /// @brief Field options, offset 0x18, size 0x8
  __declspec(property(get = __get_options, put = __set_options))::System::IO::EnumerationOptions* options;

  constexpr ::StringW& __get_expression();

  constexpr ::StringW const& __get_expression() const;

  constexpr void __set_expression(::StringW value);

  constexpr ::System::IO::EnumerationOptions*& __get_options();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::EnumerationOptions*> const& __get_options() const;

  constexpr void __set_options(::System::IO::EnumerationOptions* value);

  static inline ::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass4_0* New_ctor();

  /// @brief Method .ctor, addr 0x2547204, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <UserDirectories>b__1, addr 0x2547bac, size 0xa0, virtual false, abstract: false, final false
  inline bool _UserDirectories_b__1(ByRef<::System::IO::Enumeration::FileSystemEntry> entry);

  // Ctor Parameters [CppParam { name: "", ty: "__FileSystemEnumerableFactory____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FileSystemEnumerableFactory____c__DisplayClass4_0(__FileSystemEnumerableFactory____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FileSystemEnumerableFactory____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FileSystemEnumerableFactory____c__DisplayClass4_0(__FileSystemEnumerableFactory____c__DisplayClass4_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FileSystemEnumerableFactory____c__DisplayClass4_0();

public:
  /// @brief Field expression, offset: 0x10, size: 0x8, def value: None
  ::StringW ___expression;

  /// @brief Field options, offset: 0x18, size: 0x8, def value: None
  ::System::IO::EnumerationOptions* ___options;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass4_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass4_0, ___expression) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass4_0, ___options) == 0x18, "Offset mismatch!");

} // namespace System::IO::Enumeration
// Type: ::<>c__DisplayClass5_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO::Enumeration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3650))
// CS Name: ::FileSystemEnumerableFactory::<>c__DisplayClass5_0*
class CORDL_TYPE __FileSystemEnumerableFactory____c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field expression, offset 0x10, size 0x8
  __declspec(property(get = __get_expression, put = __set_expression))::StringW expression;

  /// @brief Field options, offset 0x18, size 0x8
  __declspec(property(get = __get_options, put = __set_options))::System::IO::EnumerationOptions* options;

  constexpr ::StringW& __get_expression();

  constexpr ::StringW const& __get_expression() const;

  constexpr void __set_expression(::StringW value);

  constexpr ::System::IO::EnumerationOptions*& __get_options();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::EnumerationOptions*> const& __get_options() const;

  constexpr void __set_options(::System::IO::EnumerationOptions* value);

  static inline ::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass5_0* New_ctor();

  /// @brief Method .ctor, addr 0x25473d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <UserEntries>b__1, addr 0x2547c4c, size 0x84, virtual false, abstract: false, final false
  inline bool _UserEntries_b__1(ByRef<::System::IO::Enumeration::FileSystemEntry> entry);

  // Ctor Parameters [CppParam { name: "", ty: "__FileSystemEnumerableFactory____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FileSystemEnumerableFactory____c__DisplayClass5_0(__FileSystemEnumerableFactory____c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FileSystemEnumerableFactory____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FileSystemEnumerableFactory____c__DisplayClass5_0(__FileSystemEnumerableFactory____c__DisplayClass5_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FileSystemEnumerableFactory____c__DisplayClass5_0();

public:
  /// @brief Field expression, offset: 0x10, size: 0x8, def value: None
  ::StringW ___expression;

  /// @brief Field options, offset: 0x18, size: 0x8, def value: None
  ::System::IO::EnumerationOptions* ___options;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass5_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass5_0, ___expression) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass5_0, ___options) == 0x18, "Offset mismatch!");

} // namespace System::IO::Enumeration
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO::Enumeration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3651))
// CS Name: ::FileSystemEnumerableFactory::<>c__DisplayClass6_0*
class CORDL_TYPE __FileSystemEnumerableFactory____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field expression, offset 0x10, size 0x8
  __declspec(property(get = __get_expression, put = __set_expression))::StringW expression;

  /// @brief Field options, offset 0x18, size 0x8
  __declspec(property(get = __get_options, put = __set_options))::System::IO::EnumerationOptions* options;

  constexpr ::StringW& __get_expression();

  constexpr ::StringW const& __get_expression() const;

  constexpr void __set_expression(::StringW value);

  constexpr ::System::IO::EnumerationOptions*& __get_options();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::EnumerationOptions*> const& __get_options() const;

  constexpr void __set_options(::System::IO::EnumerationOptions* value);

  static inline ::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass6_0* New_ctor();

  /// @brief Method .ctor, addr 0x254759c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FileInfos>b__1, addr 0x2547cd0, size 0xa0, virtual false, abstract: false, final false
  inline bool _FileInfos_b__1(ByRef<::System::IO::Enumeration::FileSystemEntry> entry);

  // Ctor Parameters [CppParam { name: "", ty: "__FileSystemEnumerableFactory____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FileSystemEnumerableFactory____c__DisplayClass6_0(__FileSystemEnumerableFactory____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FileSystemEnumerableFactory____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FileSystemEnumerableFactory____c__DisplayClass6_0(__FileSystemEnumerableFactory____c__DisplayClass6_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FileSystemEnumerableFactory____c__DisplayClass6_0();

public:
  /// @brief Field expression, offset: 0x10, size: 0x8, def value: None
  ::StringW ___expression;

  /// @brief Field options, offset: 0x18, size: 0x8, def value: None
  ::System::IO::EnumerationOptions* ___options;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass6_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass6_0, ___expression) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass6_0, ___options) == 0x18, "Offset mismatch!");

} // namespace System::IO::Enumeration
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO::Enumeration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3652))
// CS Name: ::FileSystemEnumerableFactory::<>c__DisplayClass7_0*
class CORDL_TYPE __FileSystemEnumerableFactory____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field expression, offset 0x10, size 0x8
  __declspec(property(get = __get_expression, put = __set_expression))::StringW expression;

  /// @brief Field options, offset 0x18, size 0x8
  __declspec(property(get = __get_options, put = __set_options))::System::IO::EnumerationOptions* options;

  constexpr ::StringW& __get_expression();

  constexpr ::StringW const& __get_expression() const;

  constexpr void __set_expression(::StringW value);

  constexpr ::System::IO::EnumerationOptions*& __get_options();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::EnumerationOptions*> const& __get_options() const;

  constexpr void __set_options(::System::IO::EnumerationOptions* value);

  static inline ::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass7_0* New_ctor();

  /// @brief Method .ctor, addr 0x2547d70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DirectoryInfos>b__1, addr 0x2547d78, size 0xb0, virtual false, abstract: false, final false
  inline bool _DirectoryInfos_b__1(ByRef<::System::IO::Enumeration::FileSystemEntry> entry);

  // Ctor Parameters [CppParam { name: "", ty: "__FileSystemEnumerableFactory____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FileSystemEnumerableFactory____c__DisplayClass7_0(__FileSystemEnumerableFactory____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FileSystemEnumerableFactory____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FileSystemEnumerableFactory____c__DisplayClass7_0(__FileSystemEnumerableFactory____c__DisplayClass7_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FileSystemEnumerableFactory____c__DisplayClass7_0();

public:
  /// @brief Field expression, offset: 0x10, size: 0x8, def value: None
  ::StringW ___expression;

  /// @brief Field options, offset: 0x18, size: 0x8, def value: None
  ::System::IO::EnumerationOptions* ___options;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass7_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass7_0, ___expression) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass7_0, ___options) == 0x18, "Offset mismatch!");

} // namespace System::IO::Enumeration
// Type: ::<>c__DisplayClass8_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO::Enumeration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3653))
// CS Name: ::FileSystemEnumerableFactory::<>c__DisplayClass8_0*
class CORDL_TYPE __FileSystemEnumerableFactory____c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field expression, offset 0x10, size 0x8
  __declspec(property(get = __get_expression, put = __set_expression))::StringW expression;

  /// @brief Field options, offset 0x18, size 0x8
  __declspec(property(get = __get_options, put = __set_options))::System::IO::EnumerationOptions* options;

  constexpr ::StringW& __get_expression();

  constexpr ::StringW const& __get_expression() const;

  constexpr void __set_expression(::StringW value);

  constexpr ::System::IO::EnumerationOptions*& __get_options();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::EnumerationOptions*> const& __get_options() const;

  constexpr void __set_options(::System::IO::EnumerationOptions* value);

  static inline ::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass8_0* New_ctor();

  /// @brief Method .ctor, addr 0x2547e28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FileSystemInfos>b__1, addr 0x2547e30, size 0x8c, virtual false, abstract: false, final false
  inline bool _FileSystemInfos_b__1(ByRef<::System::IO::Enumeration::FileSystemEntry> entry);

  // Ctor Parameters [CppParam { name: "", ty: "__FileSystemEnumerableFactory____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FileSystemEnumerableFactory____c__DisplayClass8_0(__FileSystemEnumerableFactory____c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FileSystemEnumerableFactory____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FileSystemEnumerableFactory____c__DisplayClass8_0(__FileSystemEnumerableFactory____c__DisplayClass8_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FileSystemEnumerableFactory____c__DisplayClass8_0();

public:
  /// @brief Field expression, offset: 0x10, size: 0x8, def value: None
  ::StringW ___expression;

  /// @brief Field options, offset: 0x18, size: 0x8, def value: None
  ::System::IO::EnumerationOptions* ___options;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass8_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass8_0, ___expression) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass8_0, ___options) == 0x18, "Offset mismatch!");

} // namespace System::IO::Enumeration
// Type: System.IO.Enumeration::FileSystemEnumerableFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO::Enumeration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3654))
// CS Name: ::System.IO.Enumeration::FileSystemEnumerableFactory*
class CORDL_TYPE FileSystemEnumerableFactory : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass8_0 = ::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass8_0;

  using __c__DisplayClass7_0 = ::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass7_0;

  using __c__DisplayClass6_0 = ::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass6_0;

  using __c__DisplayClass5_0 = ::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass5_0;

  using __c__DisplayClass4_0 = ::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass4_0;

  using __c = ::System::IO::Enumeration::__FileSystemEnumerableFactory____c;

  using __c__DisplayClass3_0 = ::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass3_0;

  /// @brief Field s_unixEscapeChars, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_unixEscapeChars, put = setStaticF_s_unixEscapeChars))::ArrayW<char16_t, ::Array<char16_t>*> s_unixEscapeChars;

  static inline void setStaticF_s_unixEscapeChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_s_unixEscapeChars();

  /// @brief Method NormalizeInputs, addr 0x25467e8, size 0x460, virtual false, abstract: false, final false
  static inline void NormalizeInputs(ByRef<::StringW> directory, ByRef<::StringW> expression, ::System::IO::EnumerationOptions* options);

  /// @brief Method MatchesPattern, addr 0x2546c48, size 0x22c, virtual false, abstract: false, final false
  static inline bool MatchesPattern(::StringW expression, ::System::ReadOnlySpan_1<char16_t> name, ::System::IO::EnumerationOptions* options);

  /// @brief Method UserFiles, addr 0x2546e74, size 0x1c4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UserFiles(::StringW directory, ::StringW expression, ::System::IO::EnumerationOptions* options);

  /// @brief Method UserDirectories, addr 0x2547040, size 0x1c4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UserDirectories(::StringW directory, ::StringW expression, ::System::IO::EnumerationOptions* options);

  /// @brief Method UserEntries, addr 0x254720c, size 0x1c4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UserEntries(::StringW directory, ::StringW expression, ::System::IO::EnumerationOptions* options);

  /// @brief Method FileInfos, addr 0x25473d8, size 0x1c4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* FileInfos(::StringW directory, ::StringW expression, ::System::IO::EnumerationOptions* options);

  /// @brief Method DirectoryInfos, addr 0x25475a4, size 0x1c4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::IO::DirectoryInfo*>* DirectoryInfos(::StringW directory, ::StringW expression, ::System::IO::EnumerationOptions* options);

  /// @brief Method FileSystemInfos, addr 0x2547768, size 0x1c4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>* FileSystemInfos(::StringW directory, ::StringW expression, ::System::IO::EnumerationOptions* options);

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerableFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemEnumerableFactory(FileSystemEnumerableFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerableFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemEnumerableFactory(FileSystemEnumerableFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemEnumerableFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Enumeration::FileSystemEnumerableFactory, 0x10>, "Size mismatch!");

} // namespace System::IO::Enumeration
NEED_NO_BOX(::System::IO::Enumeration::FileSystemEnumerableFactory);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Enumeration::FileSystemEnumerableFactory*, "System.IO.Enumeration", "FileSystemEnumerableFactory");
NEED_NO_BOX(::System::IO::Enumeration::__FileSystemEnumerableFactory____c);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Enumeration::__FileSystemEnumerableFactory____c*, "System.IO.Enumeration", "FileSystemEnumerableFactory/<>c");
NEED_NO_BOX(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass3_0*, "System.IO.Enumeration", "FileSystemEnumerableFactory/<>c__DisplayClass3_0");
NEED_NO_BOX(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass4_0*, "System.IO.Enumeration", "FileSystemEnumerableFactory/<>c__DisplayClass4_0");
NEED_NO_BOX(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass5_0*, "System.IO.Enumeration", "FileSystemEnumerableFactory/<>c__DisplayClass5_0");
NEED_NO_BOX(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass6_0*, "System.IO.Enumeration", "FileSystemEnumerableFactory/<>c__DisplayClass6_0");
NEED_NO_BOX(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass7_0*, "System.IO.Enumeration", "FileSystemEnumerableFactory/<>c__DisplayClass7_0");
NEED_NO_BOX(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Enumeration::__FileSystemEnumerableFactory____c__DisplayClass8_0*, "System.IO.Enumeration", "FileSystemEnumerableFactory/<>c__DisplayClass8_0");
