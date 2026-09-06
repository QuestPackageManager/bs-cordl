#pragma once
// IWYU pragma private; include "Unity/Collections/FixedListExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FixedListExtensions)
namespace Unity::Collections {
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
struct FixedList128Bytes_1;
}
namespace Unity::Collections {
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
struct FixedList32Bytes_1;
}
namespace Unity::Collections {
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
struct FixedList4096Bytes_1;
}
namespace Unity::Collections {
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
struct FixedList512Bytes_1;
}
namespace Unity::Collections {
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
struct FixedList64Bytes_1;
}
// Forward declare root types
namespace Unity::Collections {
class FixedListExtensions;
}
// Write type traits
MARK_REF_T(::Unity::Collections::FixedListExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::Collections::FixedListExtensions*, "Unity.Collections", "FixedListExtensions");
// [Extension]
// Dependencies System.Collections.Generic.IComparer`1<T>, System.IComparable`1<T>, System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.FixedListExtensions
class CORDL_TYPE FixedListExtensions : public ::System::Object {
public:
  // Declarations
  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline void Sort(::by_ref<::Unity::Collections::FixedList128Bytes_1<T>> list);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(Unity.Collections.NativeSortExtension::DefaultComparer`1<T>) })]
  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
    requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<U, ::System::Collections::Generic::IComparer_1<T>*>)
  static inline void Sort(::by_ref<::Unity::Collections::FixedList128Bytes_1<T>> list, U comp);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline void Sort(::by_ref<::Unity::Collections::FixedList32Bytes_1<T>> list);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(Unity.Collections.NativeSortExtension::DefaultComparer`1<T>) })]
  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
    requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<U, ::System::Collections::Generic::IComparer_1<T>*>)
  static inline void Sort(::by_ref<::Unity::Collections::FixedList32Bytes_1<T>> list, U comp);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline void Sort(::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>> list);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(Unity.Collections.NativeSortExtension::DefaultComparer`1<T>) })]
  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
    requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<U, ::System::Collections::Generic::IComparer_1<T>*>)
  static inline void Sort(::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>> list, U comp);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline void Sort(::by_ref<::Unity::Collections::FixedList512Bytes_1<T>> list);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(Unity.Collections.NativeSortExtension::DefaultComparer`1<T>) })]
  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
    requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<U, ::System::Collections::Generic::IComparer_1<T>*>)
  static inline void Sort(::by_ref<::Unity::Collections::FixedList512Bytes_1<T>> list, U comp);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline void Sort(::by_ref<::Unity::Collections::FixedList64Bytes_1<T>> list);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(Unity.Collections.NativeSortExtension::DefaultComparer`1<T>) })]
  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
    requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> &&
             ::cordl_internals::type_constraint<U, ::System::Collections::Generic::IComparer_1<T>*>)
  static inline void Sort(::by_ref<::Unity::Collections::FixedList64Bytes_1<T>> list, U comp);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedListExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixedListExtensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedListExtensions(FixedListExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedListExtensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedListExtensions(FixedListExtensionsconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15594 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::FixedListExtensions) == 0x10, "Size mismatch!");

} // namespace Unity::Collections
