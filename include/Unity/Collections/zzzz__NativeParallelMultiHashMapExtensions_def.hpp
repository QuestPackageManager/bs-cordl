#pragma once
// IWYU pragma private; include "Unity/Collections/NativeParallelMultiHashMapExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
MARK_REF_PTR_T(::Unity::Collections::NativeParallelMultiHashMapExtensions);
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.NativeParallelMultiHashMapExtensions
class CORDL_TYPE NativeParallelMultiHashMapExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue, typename U>
  static inline void Initialize(::ByRef<::Unity::Collections::NativeParallelMultiHashMap_2<TKey, TValue>> container, int32_t capacity, ::ByRef<U> allocator);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeParallelMultiHashMapExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeParallelMultiHashMapExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeParallelMultiHashMapExtensions(NativeParallelMultiHashMapExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeParallelMultiHashMapExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeParallelMultiHashMapExtensions(NativeParallelMultiHashMapExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15645 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeParallelMultiHashMapExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::NativeParallelMultiHashMapExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeParallelMultiHashMapExtensions*, "Unity.Collections", "NativeParallelMultiHashMapExtensions");
