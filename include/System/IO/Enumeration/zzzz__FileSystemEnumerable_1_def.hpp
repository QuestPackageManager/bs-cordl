#pragma once
// IWYU pragma private; include "System/IO/Enumeration/FileSystemEnumerable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEnumerator_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FileSystemEnumerable_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::IO::Enumeration {
struct FileSystemEntry;
}
namespace System::IO::Enumeration {
template <typename TResult> class FileSystemEnumerable_1_DelegateEnumerator;
}
namespace System::IO::Enumeration {
template <typename TResult> class FileSystemEnumerable_1_FindPredicate;
}
namespace System::IO::Enumeration {
template <typename TResult> class FileSystemEnumerable_1_FindTransform;
}
namespace System::IO {
class EnumerationOptions;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::IO::Enumeration {
template <typename TResult> class FileSystemEnumerable_1;
}
namespace System::IO::Enumeration {
template <typename TResult> class FileSystemEnumerable_1_DelegateEnumerator;
}
namespace System::IO::Enumeration {
template <typename TResult> class FileSystemEnumerable_1_FindPredicate;
}
namespace System::IO::Enumeration {
template <typename TResult> class FileSystemEnumerable_1_FindTransform;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::IO::Enumeration::FileSystemEnumerable_1);
MARK_GEN_REF_PTR_T(::System::IO::Enumeration::FileSystemEnumerable_1_DelegateEnumerator);
MARK_GEN_REF_PTR_T(::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate);
MARK_GEN_REF_PTR_T(::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform);
// Dependencies System.MulticastDelegate
namespace System::IO::Enumeration {
// cpp template
template <typename TResult>
// Is value type: false
// CS Name: System.IO.Enumeration.FileSystemEnumerable`1/FindPredicate<TResult>
class CORDL_TYPE FileSystemEnumerable_1_FindPredicate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Invoke(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry);

  static inline ::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemEnumerable_1_FindPredicate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerable_1_FindPredicate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemEnumerable_1_FindPredicate(FileSystemEnumerable_1_FindPredicate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerable_1_FindPredicate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemEnumerable_1_FindPredicate(FileSystemEnumerable_1_FindPredicate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3649 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::IO::Enumeration
// Dependencies System.MulticastDelegate
namespace System::IO::Enumeration {
// cpp template
template <typename TResult>
// Is value type: false
// CS Name: System.IO.Enumeration.FileSystemEnumerable`1/FindTransform<TResult>
class CORDL_TYPE FileSystemEnumerable_1_FindTransform : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TResult Invoke(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry);

  static inline ::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<TResult>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemEnumerable_1_FindTransform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerable_1_FindTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemEnumerable_1_FindTransform(FileSystemEnumerable_1_FindTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerable_1_FindTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemEnumerable_1_FindTransform(FileSystemEnumerable_1_FindTransform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3650 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::IO::Enumeration
// Dependencies System.IO.Enumeration.FileSystemEnumerator`1<TResult>
namespace System::IO::Enumeration {
// cpp template
template <typename TResult>
// Is value type: false
// CS Name: System.IO.Enumeration.FileSystemEnumerable`1/DelegateEnumerator<TResult>
class CORDL_TYPE FileSystemEnumerable_1_DelegateEnumerator : public ::System::IO::Enumeration::FileSystemEnumerator_1<TResult> {
public:
  // Declarations
  /// @brief Field _enumerable, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__enumerable, put = __cordl_internal_set__enumerable)) ::System::IO::Enumeration::FileSystemEnumerable_1<TResult>* _enumerable;

  static inline ::System::IO::Enumeration::FileSystemEnumerable_1_DelegateEnumerator<TResult>* New_ctor(::System::IO::Enumeration::FileSystemEnumerable_1<TResult>* enumerable);

  /// @brief Method ShouldIncludeEntry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool ShouldIncludeEntry(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry);

  /// @brief Method ShouldRecurseIntoEntry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool ShouldRecurseIntoEntry(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry);

  /// @brief Method TransformEntry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TResult TransformEntry(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry);

  constexpr ::System::IO::Enumeration::FileSystemEnumerable_1<TResult>* const& __cordl_internal_get__enumerable() const;

  constexpr ::System::IO::Enumeration::FileSystemEnumerable_1<TResult>*& __cordl_internal_get__enumerable();

  constexpr void __cordl_internal_set__enumerable(::System::IO::Enumeration::FileSystemEnumerable_1<TResult>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Enumeration::FileSystemEnumerable_1<TResult>* enumerable);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemEnumerable_1_DelegateEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerable_1_DelegateEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemEnumerable_1_DelegateEnumerator(FileSystemEnumerable_1_DelegateEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerable_1_DelegateEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemEnumerable_1_DelegateEnumerator(FileSystemEnumerable_1_DelegateEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3651 };

  /// @brief Field _enumerable, offset: 0x78, size: 0x8, def value: None
  ::System::IO::Enumeration::FileSystemEnumerable_1<TResult>* ____enumerable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::IO::Enumeration
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.IEnumerable, System.Object
namespace System::IO::Enumeration {
// cpp template
template <typename TResult>
// Is value type: false
// CS Name: System.IO.Enumeration.FileSystemEnumerable`1<TResult>
class CORDL_TYPE FileSystemEnumerable_1 : public ::System::Object {
public:
  // Declarations
  using DelegateEnumerator = ::System::IO::Enumeration::FileSystemEnumerable_1_DelegateEnumerator<TResult>;

  using FindPredicate = ::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>;

  using FindTransform = ::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<TResult>;

  __declspec(property(get = get_ShouldIncludePredicate, put = set_ShouldIncludePredicate)) ::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>* ShouldIncludePredicate;

  __declspec(property(get = get_ShouldRecursePredicate)) ::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>* ShouldRecursePredicate;

  /// @brief Field <ShouldIncludePredicate>k__BackingField, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get__ShouldIncludePredicate_k__BackingField,
      put = __cordl_internal_set__ShouldIncludePredicate_k__BackingField)) ::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>* _ShouldIncludePredicate_k__BackingField;

  /// @brief Field <ShouldRecursePredicate>k__BackingField, offset 0x38, size 0x8
  __declspec(property(
      get = __cordl_internal_get__ShouldRecursePredicate_k__BackingField,
      put = __cordl_internal_set__ShouldRecursePredicate_k__BackingField)) ::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>* _ShouldRecursePredicate_k__BackingField;

  /// @brief Field _directory, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__directory, put = __cordl_internal_set__directory)) ::StringW _directory;

  /// @brief Field _enumerator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__enumerator, put = __cordl_internal_set__enumerator)) ::System::IO::Enumeration::FileSystemEnumerable_1_DelegateEnumerator<TResult>* _enumerator;

  /// @brief Field _options, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__options, put = __cordl_internal_set__options)) ::System::IO::EnumerationOptions* _options;

  /// @brief Field _transform, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform)) ::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<TResult>* _transform;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TResult>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TResult>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TResult>* GetEnumerator();

  static inline ::System::IO::Enumeration::FileSystemEnumerable_1<TResult>* New_ctor(::StringW directory, ::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<TResult>* transform,
                                                                                     ::System::IO::EnumerationOptions* options);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>* const& __cordl_internal_get__ShouldIncludePredicate_k__BackingField() const;

  constexpr ::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>*& __cordl_internal_get__ShouldIncludePredicate_k__BackingField();

  constexpr ::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>* const& __cordl_internal_get__ShouldRecursePredicate_k__BackingField() const;

  constexpr ::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>*& __cordl_internal_get__ShouldRecursePredicate_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__directory() const;

  constexpr ::StringW& __cordl_internal_get__directory();

  constexpr ::System::IO::Enumeration::FileSystemEnumerable_1_DelegateEnumerator<TResult>* const& __cordl_internal_get__enumerator() const;

  constexpr ::System::IO::Enumeration::FileSystemEnumerable_1_DelegateEnumerator<TResult>*& __cordl_internal_get__enumerator();

  constexpr ::System::IO::EnumerationOptions* const& __cordl_internal_get__options() const;

  constexpr ::System::IO::EnumerationOptions*& __cordl_internal_get__options();

  constexpr ::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<TResult>* const& __cordl_internal_get__transform() const;

  constexpr ::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<TResult>*& __cordl_internal_get__transform();

  constexpr void __cordl_internal_set__ShouldIncludePredicate_k__BackingField(::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>* value);

  constexpr void __cordl_internal_set__ShouldRecursePredicate_k__BackingField(::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>* value);

  constexpr void __cordl_internal_set__directory(::StringW value);

  constexpr void __cordl_internal_set__enumerator(::System::IO::Enumeration::FileSystemEnumerable_1_DelegateEnumerator<TResult>* value);

  constexpr void __cordl_internal_set__options(::System::IO::EnumerationOptions* value);

  constexpr void __cordl_internal_set__transform(::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<TResult>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW directory, ::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<TResult>* transform, ::System::IO::EnumerationOptions* options);

  /// @brief Method get_ShouldIncludePredicate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>* get_ShouldIncludePredicate();

  /// @brief Method get_ShouldRecursePredicate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>* get_ShouldRecursePredicate();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TResult>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TResult>* i___System__Collections__Generic__IEnumerable_1_TResult_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_ShouldIncludePredicate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_ShouldIncludePredicate(::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemEnumerable_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerable_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemEnumerable_1(FileSystemEnumerable_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerable_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemEnumerable_1(FileSystemEnumerable_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3652 };

  /// @brief Field _enumerator, offset: 0x10, size: 0x8, def value: None
  ::System::IO::Enumeration::FileSystemEnumerable_1_DelegateEnumerator<TResult>* ____enumerator;

  /// @brief Field _transform, offset: 0x18, size: 0x8, def value: None
  ::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<TResult>* ____transform;

  /// @brief Field _options, offset: 0x20, size: 0x8, def value: None
  ::System::IO::EnumerationOptions* ____options;

  /// @brief Field _directory, offset: 0x28, size: 0x8, def value: None
  ::StringW ____directory;

  /// @brief Field <ShouldIncludePredicate>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>* ____ShouldIncludePredicate_k__BackingField;

  /// @brief Field <ShouldRecursePredicate>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>* ____ShouldRecursePredicate_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::IO::Enumeration
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::IO::Enumeration::FileSystemEnumerable_1, "System.IO.Enumeration", "FileSystemEnumerable`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::IO::Enumeration::FileSystemEnumerable_1_DelegateEnumerator, "System.IO.Enumeration", "FileSystemEnumerable`1/DelegateEnumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate, "System.IO.Enumeration", "FileSystemEnumerable`1/FindPredicate");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform, "System.IO.Enumeration", "FileSystemEnumerable`1/FindTransform");
