#pragma once
// IWYU pragma private; include "Unity/Collections/NativeKeyValueArrays_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeKeyValueArrays_2)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
class INativeDisposable;
}
namespace Unity::Collections {
struct NativeArrayOptions;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Collections {
template <typename TKey, typename TValue> struct NativeKeyValueArrays_2;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::NativeKeyValueArrays_2);
// Dependencies Unity.Collections.NativeArray`1<T>
namespace Unity::Collections {
// cpp template
template <typename TKey, typename TValue>
// Is value type: true
// CS Name: Unity.Collections.NativeKeyValueArrays`2<TKey,TValue>
struct CORDL_TYPE NativeKeyValueArrays_2 {
public:
  // Declarations
  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::Unity::Collections::INativeDisposable"
  constexpr operator ::Unity::Collections::INativeDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle inputDeps);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t length, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator, ::Unity::Collections::NativeArrayOptions options);

  /// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert to "::Unity::Collections::INativeDisposable"
  constexpr ::Unity::Collections::INativeDisposable* i___Unity__Collections__INativeDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeKeyValueArrays_2();

  // Ctor Parameters [CppParam { name: "Keys", ty: "::Unity::Collections::NativeArray_1<TKey>", modifiers: "", def_value: None }, CppParam { name: "Values", ty:
  // "::Unity::Collections::NativeArray_1<TValue>", modifiers: "", def_value: None }]
  constexpr NativeKeyValueArrays_2(::Unity::Collections::NativeArray_1<TKey> Keys, ::Unity::Collections::NativeArray_1<TValue> Values) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15611 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field Keys, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<TKey> Keys;

  /// @brief Field Values, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<TValue> Values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::NativeKeyValueArrays_2, "Unity.Collections", "NativeKeyValueArrays`2");
