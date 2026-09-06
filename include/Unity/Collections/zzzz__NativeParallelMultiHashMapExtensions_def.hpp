#pragma once
// IWYU pragma private; include "Unity/Collections/NativeParallelMultiHashMapExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeParallelMultiHashMapExtensions)
namespace Unity::Collections {
template <typename TKey, typename TValue> struct NativeParallelMultiHashMap_2;
}
// Forward declare root types
namespace Unity::Collections {
class NativeParallelMultiHashMapExtensions;
}
// Write type traits
MARK_REF_T(::Unity::Collections::NativeParallelMultiHashMapExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::Collections::NativeParallelMultiHashMapExtensions*, "Unity.Collections", "NativeParallelMultiHashMapExtensions");
// [Extension]
// [GenerateTestsForBurstCompatibility]
// Dependencies System.IEquatable`1<T>, System.Object, Unity.Collections.AllocatorManager::IAllocator
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.NativeParallelMultiHashMapExtensions
class CORDL_TYPE NativeParallelMultiHashMapExtensions : public ::System::Object {
public:
  // Declarations
  /// [Extension]
  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(System.Int32), typeof(Unity.Collections.AllocatorManager::AllocatorHandle) })]
  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue, typename U>
    requires(::cordl_internals::type_constraint<TKey, ::System::IEquatable_1<TKey>*> && ::cordl_internals::value_type_constraint<TKey> && ::cordl_internals::default_constructor_constraint<TKey> &&
             ::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue> &&
             ::cordl_internals::type_constraint<U, ::Unity::Collections::AllocatorManager_IAllocator*> && ::cordl_internals::value_type_constraint<U> &&
             ::cordl_internals::default_constructor_constraint<U>)
  static inline void Initialize(::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<TKey, TValue>> container, int32_t capacity, ::by_ref<U> allocator);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeParallelMultiHashMapExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeParallelMultiHashMapExtensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeParallelMultiHashMapExtensions(NativeParallelMultiHashMapExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeParallelMultiHashMapExtensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeParallelMultiHashMapExtensions(NativeParallelMultiHashMapExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15676 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::NativeParallelMultiHashMapExtensions) == 0x10, "Size mismatch!");

} // namespace Unity::Collections
