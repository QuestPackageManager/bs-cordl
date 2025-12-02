#pragma once
// IWYU pragma private; include "Unity/Collections/HashSetExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HashSetExtensions)
namespace Unity::Collections {
template <typename T> struct FixedList128Bytes_1;
}
namespace Unity::Collections {
template <typename T> struct FixedList32Bytes_1;
}
namespace Unity::Collections {
template <typename T> struct FixedList4096Bytes_1;
}
namespace Unity::Collections {
template <typename T> struct FixedList512Bytes_1;
}
namespace Unity::Collections {
template <typename T> struct FixedList64Bytes_1;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
template <typename T> struct NativeHashSet_1_ReadOnly;
}
namespace Unity::Collections {
template <typename T> struct NativeHashSet_1;
}
namespace Unity::Collections {
template <typename T> struct NativeList_1;
}
namespace Unity::Collections {
template <typename T> struct NativeParallelHashSet_1_ReadOnly;
}
namespace Unity::Collections {
template <typename T> struct NativeParallelHashSet_1;
}
// Forward declare root types
namespace Unity::Collections {
class HashSetExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::HashSetExtensions);
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.HashSetExtensions
class CORDL_TYPE HashSetExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ExceptWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ExceptWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::FixedList128Bytes_1<T> other);

  /// @brief Method ExceptWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ExceptWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::FixedList32Bytes_1<T> other);

  /// @brief Method ExceptWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ExceptWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::FixedList4096Bytes_1<T> other);

  /// @brief Method ExceptWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ExceptWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::FixedList512Bytes_1<T> other);

  /// @brief Method ExceptWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ExceptWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::FixedList64Bytes_1<T> other);

  /// @brief Method ExceptWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ExceptWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::NativeArray_1<T> other);

  /// @brief Method ExceptWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ExceptWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::NativeHashSet_1<T> other);

  /// @brief Method ExceptWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ExceptWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::NativeHashSet_1_ReadOnly<T> other);

  /// @brief Method ExceptWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ExceptWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::NativeList_1<T> other);

  /// @brief Method ExceptWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ExceptWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::NativeParallelHashSet_1<T> other);

  /// @brief Method ExceptWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ExceptWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::NativeParallelHashSet_1_ReadOnly<T> other);

  /// @brief Method ExceptWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ExceptWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::FixedList128Bytes_1<T> other);

  /// @brief Method ExceptWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ExceptWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::FixedList32Bytes_1<T> other);

  /// @brief Method ExceptWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ExceptWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::FixedList4096Bytes_1<T> other);

  /// @brief Method ExceptWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ExceptWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::FixedList512Bytes_1<T> other);

  /// @brief Method ExceptWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ExceptWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::FixedList64Bytes_1<T> other);

  /// @brief Method ExceptWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ExceptWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::NativeArray_1<T> other);

  /// @brief Method ExceptWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ExceptWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::NativeHashSet_1<T> other);

  /// @brief Method ExceptWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ExceptWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::NativeHashSet_1_ReadOnly<T> other);

  /// @brief Method ExceptWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ExceptWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::NativeList_1<T> other);

  /// @brief Method ExceptWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ExceptWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::NativeParallelHashSet_1<T> other);

  /// @brief Method ExceptWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ExceptWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::NativeParallelHashSet_1_ReadOnly<T> other);

  /// @brief Method IntersectWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IntersectWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::FixedList128Bytes_1<T> other);

  /// @brief Method IntersectWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IntersectWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::FixedList32Bytes_1<T> other);

  /// @brief Method IntersectWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IntersectWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::FixedList4096Bytes_1<T> other);

  /// @brief Method IntersectWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IntersectWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::FixedList512Bytes_1<T> other);

  /// @brief Method IntersectWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IntersectWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::FixedList64Bytes_1<T> other);

  /// @brief Method IntersectWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IntersectWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::NativeArray_1<T> other);

  /// @brief Method IntersectWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IntersectWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::NativeHashSet_1<T> other);

  /// @brief Method IntersectWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IntersectWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::NativeHashSet_1_ReadOnly<T> other);

  /// @brief Method IntersectWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IntersectWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::NativeList_1<T> other);

  /// @brief Method IntersectWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IntersectWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::NativeParallelHashSet_1<T> other);

  /// @brief Method IntersectWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IntersectWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::NativeParallelHashSet_1_ReadOnly<T> other);

  /// @brief Method IntersectWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IntersectWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::FixedList128Bytes_1<T> other);

  /// @brief Method IntersectWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IntersectWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::FixedList32Bytes_1<T> other);

  /// @brief Method IntersectWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IntersectWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::FixedList4096Bytes_1<T> other);

  /// @brief Method IntersectWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IntersectWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::FixedList512Bytes_1<T> other);

  /// @brief Method IntersectWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IntersectWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::FixedList64Bytes_1<T> other);

  /// @brief Method IntersectWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IntersectWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::NativeArray_1<T> other);

  /// @brief Method IntersectWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IntersectWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::NativeHashSet_1<T> other);

  /// @brief Method IntersectWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IntersectWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::NativeHashSet_1_ReadOnly<T> other);

  /// @brief Method IntersectWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IntersectWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::NativeList_1<T> other);

  /// @brief Method IntersectWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IntersectWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::NativeParallelHashSet_1<T> other);

  /// @brief Method IntersectWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void IntersectWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::NativeParallelHashSet_1_ReadOnly<T> other);

  /// @brief Method UnionWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void UnionWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::FixedList128Bytes_1<T> other);

  /// @brief Method UnionWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void UnionWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::FixedList32Bytes_1<T> other);

  /// @brief Method UnionWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void UnionWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::FixedList4096Bytes_1<T> other);

  /// @brief Method UnionWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void UnionWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::FixedList512Bytes_1<T> other);

  /// @brief Method UnionWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void UnionWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::FixedList64Bytes_1<T> other);

  /// @brief Method UnionWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void UnionWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::NativeArray_1<T> other);

  /// @brief Method UnionWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void UnionWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::NativeHashSet_1<T> other);

  /// @brief Method UnionWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void UnionWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::NativeHashSet_1_ReadOnly<T> other);

  /// @brief Method UnionWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void UnionWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::NativeList_1<T> other);

  /// @brief Method UnionWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void UnionWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::NativeParallelHashSet_1<T> other);

  /// @brief Method UnionWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void UnionWith(::ByRef<::Unity::Collections::NativeHashSet_1<T>> container, ::Unity::Collections::NativeParallelHashSet_1_ReadOnly<T> other);

  /// @brief Method UnionWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void UnionWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::FixedList128Bytes_1<T> other);

  /// @brief Method UnionWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void UnionWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::FixedList32Bytes_1<T> other);

  /// @brief Method UnionWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void UnionWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::FixedList4096Bytes_1<T> other);

  /// @brief Method UnionWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void UnionWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::FixedList512Bytes_1<T> other);

  /// @brief Method UnionWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void UnionWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::FixedList64Bytes_1<T> other);

  /// @brief Method UnionWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void UnionWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::NativeArray_1<T> other);

  /// @brief Method UnionWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void UnionWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::NativeHashSet_1<T> other);

  /// @brief Method UnionWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void UnionWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::NativeHashSet_1_ReadOnly<T> other);

  /// @brief Method UnionWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void UnionWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::NativeList_1<T> other);

  /// @brief Method UnionWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void UnionWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::NativeParallelHashSet_1<T> other);

  /// @brief Method UnionWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void UnionWith(::ByRef<::Unity::Collections::NativeParallelHashSet_1<T>> container, ::Unity::Collections::NativeParallelHashSet_1_ReadOnly<T> other);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashSetExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HashSetExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashSetExtensions(HashSetExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashSetExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashSetExtensions(HashSetExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15623 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::HashSetExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::HashSetExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::HashSetExtensions*, "Unity.Collections", "HashSetExtensions");
