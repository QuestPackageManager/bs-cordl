#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeListExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeListExtensions)
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
struct UnsafeList_1_ParallelReader;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
struct UnsafeList_1_ReadOnly;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
struct UnsafeList_1;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class UnsafeListExtensions;
}
// Write type traits
MARK_REF_T(::Unity::Collections::LowLevel::Unsafe::UnsafeListExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::Collections::LowLevel::Unsafe::UnsafeListExtensions*, "Unity.Collections.LowLevel.Unsafe", "UnsafeListExtensions");
// [Extension]
// [GenerateTestsForBurstCompatibility]
// Dependencies System.IEquatable`1<T>, System.Object
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeListExtensions
class CORDL_TYPE UnsafeListExtensions : public ::System::Object {
public:
  // Declarations
  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
  /// @brief Method ArraysEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline bool ArraysEqual(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> container, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>> other);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(System.Int32) })]
  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<U>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline bool Contains(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> list, U value);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(System.Int32) })]
  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<U>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline bool Contains(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelReader<T> list, U value);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(System.Int32) })]
  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<U>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline bool Contains(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T> list, U value);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(System.Int32) })]
  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<U>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline int32_t IndexOf(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> list, U value);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(System.Int32) })]
  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<U>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline int32_t IndexOf(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelReader<T> list, U value);

  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(System.Int32) })]
  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U>
    requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<U>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline int32_t IndexOf(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T> list, U value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeListExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsafeListExtensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsafeListExtensions(UnsafeListExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsafeListExtensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsafeListExtensions(UnsafeListExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15780 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::LowLevel::Unsafe::UnsafeListExtensions) == 0x10, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
