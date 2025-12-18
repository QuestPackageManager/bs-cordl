#pragma once
// IWYU pragma private; include "Unity/Collections/NativeParallelHashMapExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeParallelHashMapExtensions)
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeParallelHashMapBucketData;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename TKey, typename TValue> struct UnsafeParallelMultiHashMap_2;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
template <typename TKey, typename TValue> struct NativeParallelHashMap_2;
}
namespace Unity::Collections {
template <typename TKey, typename TValue> struct NativeParallelMultiHashMap_2;
}
// Forward declare root types
namespace Unity::Collections {
class NativeParallelHashMapExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::NativeParallelHashMapExtensions);
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.NativeParallelHashMapExtensions
class CORDL_TYPE NativeParallelHashMapExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetUniqueKeyArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue>
  static inline ::System::ValueTuple_2<::Unity::Collections::NativeArray_1<TKey>, int32_t>
  GetUniqueKeyArray(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<TKey, TValue> container, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method GetUniqueKeyArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue>
  static inline ::System::ValueTuple_2<::Unity::Collections::NativeArray_1<TKey>, int32_t> GetUniqueKeyArray(::Unity::Collections::NativeParallelMultiHashMap_2<TKey, TValue> container,
                                                                                                             ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method GetUnsafeBucketData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue>
  static inline ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData GetUnsafeBucketData(::Unity::Collections::NativeParallelHashMap_2<TKey, TValue> container);

  /// @brief Method GetUnsafeBucketData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue>
  static inline ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData GetUnsafeBucketData(::Unity::Collections::NativeParallelMultiHashMap_2<TKey, TValue> container);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue> static inline void Remove(::Unity::Collections::NativeParallelMultiHashMap_2<TKey, TValue> container, TKey key, TValue value);

  /// @brief Method Unique, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t Unique(::Unity::Collections::NativeArray_1<T> array);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeParallelHashMapExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeParallelHashMapExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeParallelHashMapExtensions(NativeParallelHashMapExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeParallelHashMapExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeParallelHashMapExtensions(NativeParallelHashMapExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15631 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeParallelHashMapExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::NativeParallelHashMapExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeParallelHashMapExtensions*, "Unity.Collections", "NativeParallelHashMapExtensions");
