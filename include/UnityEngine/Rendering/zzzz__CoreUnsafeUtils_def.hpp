#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CoreUnsafeUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CoreUnsafeUtils)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Rendering {
template <typename T> struct CoreUnsafeUtils_DefaultKeyGetter_1;
}
namespace UnityEngine::Rendering {
struct CoreUnsafeUtils_FixedBufferStringQueue;
}
namespace UnityEngine::Rendering {
template <typename TValue, typename TKey> class CoreUnsafeUtils_IKeyGetter_2;
}
namespace UnityEngine::Rendering {
struct CoreUnsafeUtils_UintKeyGetter;
}
namespace UnityEngine::Rendering {
struct CoreUnsafeUtils_UlongKeyGetter;
}
namespace UnityEngine {
struct Hash128;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class CoreUnsafeUtils;
}
namespace UnityEngine::Rendering {
template <typename TValue, typename TKey> class CoreUnsafeUtils_IKeyGetter_2;
}
namespace UnityEngine::Rendering {
template <typename T> struct CoreUnsafeUtils_DefaultKeyGetter_1;
}
namespace UnityEngine::Rendering {
struct CoreUnsafeUtils_FixedBufferStringQueue;
}
namespace UnityEngine::Rendering {
struct CoreUnsafeUtils_UintKeyGetter;
}
namespace UnityEngine::Rendering {
struct CoreUnsafeUtils_UlongKeyGetter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::CoreUnsafeUtils*);
MARK_GEN_REF_T_PTR(::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2);
MARK_GEN_VAL_T(::UnityEngine::Rendering::CoreUnsafeUtils_DefaultKeyGetter_1);
MARK_VAL_T(::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue);
MARK_VAL_T(::UnityEngine::Rendering::CoreUnsafeUtils_UintKeyGetter);
MARK_VAL_T(::UnityEngine::Rendering::CoreUnsafeUtils_UlongKeyGetter);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CoreUnsafeUtils*, "UnityEngine.Rendering", "CoreUnsafeUtils");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2, "UnityEngine.Rendering", "CoreUnsafeUtils/IKeyGetter`2");
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::Rendering::CoreUnsafeUtils_DefaultKeyGetter_1, "UnityEngine.Rendering", "CoreUnsafeUtils/DefaultKeyGetter`1");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue, "UnityEngine.Rendering", "CoreUnsafeUtils/FixedBufferStringQueue");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CoreUnsafeUtils_UintKeyGetter, "UnityEngine.Rendering", "CoreUnsafeUtils/UintKeyGetter");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CoreUnsafeUtils_UlongKeyGetter, "UnityEngine.Rendering", "CoreUnsafeUtils/UlongKeyGetter");
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CoreUnsafeUtils/FixedBufferStringQueue
struct CORDL_TYPE CoreUnsafeUtils_FixedBufferStringQueue {
public:
  // Declarations
  __declspec(property(get = get_Count, put = set_Count)) int32_t Count;

  /// @brief Method Clear, addr 0x6751b74, size 0x50, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method TryPop, addr 0x6751c40, size 0x60, virtual false, abstract: false, final false
  inline bool TryPop(::by_ref<::StringW> v);

  /// @brief Method TryPush, addr 0x6751bc4, size 0x7c, virtual false, abstract: false, final false
  inline bool TryPush(::StringW v);

  /// @brief Method .ctor, addr 0x6751b1c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(uint8_t* ptr, int32_t length);

  /// @brief Method get_Count, addr 0x6751b0c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method set_Count, addr 0x6751b14, size 0x8, virtual false, abstract: false, final false
  inline void set_Count(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreUnsafeUtils_FixedBufferStringQueue();

  // Ctor Parameters [CppParam { name: "m_ReadCursor", ty: "uint8_t*", modifiers: "", def_value: None }, CppParam { name: "m_WriteCursor", ty: "uint8_t*", modifiers: "", def_value: None }, CppParam {
  // name: "m_BufferEnd", ty: "uint8_t*", modifiers: "", def_value: None }, CppParam { name: "m_BufferStart", ty: "uint8_t*", modifiers: "", def_value: None }, CppParam { name: "m_BufferLength", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "_Count_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CoreUnsafeUtils_FixedBufferStringQueue(uint8_t* m_ReadCursor, uint8_t* m_WriteCursor, uint8_t* m_BufferEnd, uint8_t* m_BufferStart, int32_t m_BufferLength,
                                                   int32_t _Count_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11868 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field m_ReadCursor, offset: 0x0, size: 0x8, def value: None
  uint8_t* m_ReadCursor;

  /// @brief Field m_WriteCursor, offset: 0x8, size: 0x8, def value: None
  uint8_t* m_WriteCursor;

  /// @brief Field m_BufferEnd, offset: 0x10, size: 0x8, def value: None
  uint8_t* m_BufferEnd;

  /// @brief Field m_BufferStart, offset: 0x18, size: 0x8, def value: None
  uint8_t* m_BufferStart;

  /// @brief Field m_BufferLength, offset: 0x20, size: 0x4, def value: None
  int32_t m_BufferLength;

  /// @brief Field <Count>k__BackingField, offset: 0x24, size: 0x4, def value: None
  int32_t _Count_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue, m_ReadCursor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue, m_WriteCursor) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue, m_BufferEnd) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue, m_BufferStart) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue, m_BufferLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue, _Count_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue) == 0x28, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// cpp template
template <typename TValue, typename TKey>
// Is value type: false
// CS Name: UnityEngine.Rendering.CoreUnsafeUtils/IKeyGetter`2<TValue,TKey>
class CORDL_TYPE CoreUnsafeUtils_IKeyGetter_2 {
public:
  // Declarations
  /// @brief Method Get, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TKey Get(::by_ref<TValue> v);

  // Ctor Parameters [CppParam { name: "", ty: "CoreUnsafeUtils_IKeyGetter_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoreUnsafeUtils_IKeyGetter_2(CoreUnsafeUtils_IKeyGetter_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11869 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.Rendering.CoreUnsafeUtils/DefaultKeyGetter`1<T>
#pragma pack(push, 0)
struct CORDL_TYPE CoreUnsafeUtils_DefaultKeyGetter_1 {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<T,T>"
  constexpr operator ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<T, T>*();

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T Get(::by_ref<T> v);

  /// @brief Convert to "::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<T,T>"
  constexpr ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<T, T>* i___UnityEngine__Rendering__CoreUnsafeUtils_IKeyGetter_2_T_T_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreUnsafeUtils_DefaultKeyGetter_1();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11870 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CoreUnsafeUtils/UintKeyGetter
#pragma pack(push, 0)
struct CORDL_TYPE CoreUnsafeUtils_UintKeyGetter {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint32_t,uint32_t>"
  constexpr operator ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint32_t, uint32_t>*();

  /// @brief Method Get, addr 0x6751ca0, size 0x8, virtual true, abstract: false, final true
  inline uint32_t Get(::by_ref<uint32_t> v);

  /// @brief Convert to "::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint32_t,uint32_t>"
  constexpr ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint32_t, uint32_t>* i___UnityEngine__Rendering__CoreUnsafeUtils_IKeyGetter_2_uint32_t_uint32_t_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreUnsafeUtils_UintKeyGetter();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11871 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::CoreUnsafeUtils_UintKeyGetter) == 0x1, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CoreUnsafeUtils/UlongKeyGetter
#pragma pack(push, 0)
struct CORDL_TYPE CoreUnsafeUtils_UlongKeyGetter {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint64_t,uint64_t>"
  constexpr operator ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint64_t, uint64_t>*();

  /// @brief Method Get, addr 0x6751ca8, size 0x8, virtual true, abstract: false, final true
  inline uint64_t Get(::by_ref<uint64_t> v);

  /// @brief Convert to "::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint64_t,uint64_t>"
  constexpr ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint64_t, uint64_t>* i___UnityEngine__Rendering__CoreUnsafeUtils_IKeyGetter_2_uint64_t_uint64_t_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreUnsafeUtils_UlongKeyGetter();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11872 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::CoreUnsafeUtils_UlongKeyGetter) == 0x1, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CoreUnsafeUtils
class CORDL_TYPE CoreUnsafeUtils : public ::System::Object {
public:
  // Declarations
  template <typename T> using DefaultKeyGetter_1 = ::UnityEngine::Rendering::CoreUnsafeUtils_DefaultKeyGetter_1<T>;

  using FixedBufferStringQueue = ::UnityEngine::Rendering::CoreUnsafeUtils_FixedBufferStringQueue;

  template <typename TValue, typename TKey> using IKeyGetter_2 = ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<TValue, TKey>;

  using UintKeyGetter = ::UnityEngine::Rendering::CoreUnsafeUtils_UintKeyGetter;

  using UlongKeyGetter = ::UnityEngine::Rendering::CoreUnsafeUtils_UlongKeyGetter;

  /// @brief Method CalculateRadixParams, addr 0x6750e6c, size 0x10, virtual false, abstract: false, final false
  static inline void CalculateRadixParams(int32_t radixBits, ::by_ref<int32_t> bitStates);

  /// @brief Method CalculateRadixSortSupportArrays, addr 0x6750e88, size 0x20, virtual false, abstract: false, final false
  static inline void CalculateRadixSortSupportArrays(int32_t bitStates, int32_t arrayLength, uint32_t* supportArray, ::by_ref<uint32_t*> bucketIndices, ::by_ref<uint32_t*> bucketSizes,
                                                     ::by_ref<uint32_t*> bucketPrefix, ::by_ref<uint32_t*> arrayOutput);

  /// @brief Method CalculateRadixSupportSize, addr 0x6750e7c, size 0xc, virtual false, abstract: false, final false
  static inline int32_t CalculateRadixSupportSize(int32_t bitStates, int32_t arrayLength);

  /// @brief Method CombineHashes, addr 0x6751950, size 0x64, virtual false, abstract: false, final false
  static inline void CombineHashes(int32_t count, ::UnityEngine::Hash128* hashes, ::UnityEngine::Hash128* outHash);

  /// @brief Method CombineHashes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue, typename TGetter> static inline void CombineHashes(int32_t count, void* hashes, ::UnityEngine::Hash128* outHash);

  /// @brief Method CompareHashes, addr 0x67518a8, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t CompareHashes(int32_t oldHashCount, ::UnityEngine::Hash128* oldHashes, int32_t newHashCount, ::UnityEngine::Hash128* newHashes, int32_t* addIndices, int32_t* removeIndices,
                                      ::by_ref<int32_t> addCount, ::by_ref<int32_t> remCount);

  /// @brief Method CompareHashes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TOldValue, typename TOldGetter, typename TNewValue, typename TNewGetter>
  static inline int32_t CompareHashes(int32_t oldHashCount, void* oldHashes, int32_t newHashCount, void* newHashes, int32_t* addIndices, int32_t* removeIndices, ::by_ref<int32_t> addCount,
                                      ::by_ref<int32_t> remCount);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void CopyTo(::ArrayW<T> list, void* dest, int32_t count);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void CopyTo(::System::Collections::Generic::List_1<T>* list, void* dest, int32_t count);

  /// @brief Method HaveDuplicates, addr 0x67519b4, size 0x158, virtual false, abstract: false, final false
  static inline bool HaveDuplicates(::ArrayW<int32_t> arr);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t IndexOf(void* data, int32_t count, T v);

  /// @brief Method InsertionSort, addr 0x6751250, size 0x94, virtual false, abstract: false, final false
  static inline void InsertionSort(::ArrayW<uint32_t> arr, int32_t sortSize);

  /// @brief Method InsertionSort, addr 0x67512e4, size 0xb0, virtual false, abstract: false, final false
  static inline void InsertionSort(::Unity::Collections::NativeArray_1<uint32_t> arr, int32_t sortSize);

  /// @brief Method InsertionSort, addr 0x67511f0, size 0x60, virtual false, abstract: false, final false
  static inline void InsertionSort(uint32_t* arr, int32_t length);

  /// @brief Method MergeSort, addr 0x6750fdc, size 0x110, virtual false, abstract: false, final false
  static inline void MergeSort(::ArrayW<uint32_t> arr, int32_t sortSize, ::by_ref<::ArrayW<uint32_t>> supportArray);

  /// @brief Method MergeSort, addr 0x67510ec, size 0x104, virtual false, abstract: false, final false
  static inline void MergeSort(::Unity::Collections::NativeArray_1<uint32_t> arr, int32_t sortSize, ::by_ref<::Unity::Collections::NativeArray_1<uint32_t>> supportArray);

  /// @brief Method MergeSort, addr 0x6750ea8, size 0x134, virtual false, abstract: false, final false
  static inline void MergeSort(uint32_t* array, uint32_t* support, int32_t length);

  /// @brief Method Partition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue, typename TKey, typename TGetter> static inline int32_t Partition(void* data, int32_t left, int32_t right);

  /// @brief Method QuickSort, addr 0x67517b0, size 0x7c, virtual false, abstract: false, final false
  static inline void QuickSort(::ArrayW<uint32_t> arr, int32_t left, int32_t right);

  /// @brief Method QuickSort, addr 0x675182c, size 0x7c, virtual false, abstract: false, final false
  static inline void QuickSort(::ArrayW<uint64_t> arr, int32_t left, int32_t right);

  /// @brief Method QuickSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void QuickSort(int32_t count, void* data);

  /// @brief Method QuickSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue, typename TKey, typename TGetter> static inline void QuickSort(int32_t count, void* data);

  /// @brief Method QuickSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue, typename TKey, typename TGetter> static inline void QuickSort(void* data, int32_t left, int32_t right);

  /// @brief Method RadixSort, addr 0x675154c, size 0x13c, virtual false, abstract: false, final false
  static inline void RadixSort(::ArrayW<uint32_t> arr, int32_t sortSize, ::by_ref<::ArrayW<uint32_t>> supportArray, int32_t radixBits);

  /// @brief Method RadixSort, addr 0x6751688, size 0x128, virtual false, abstract: false, final false
  static inline void RadixSort(::Unity::Collections::NativeArray_1<uint32_t> array, int32_t sortSize, ::by_ref<::Unity::Collections::NativeArray_1<uint32_t>> supportArray, int32_t radixBits);

  /// @brief Method RadixSort, addr 0x6751394, size 0x1b8, virtual false, abstract: false, final false
  static inline void RadixSort(uint32_t* array, uint32_t* support, int32_t radixBits, int32_t bitStates, int32_t length);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreUnsafeUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CoreUnsafeUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoreUnsafeUtils(CoreUnsafeUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoreUnsafeUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoreUnsafeUtils(CoreUnsafeUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11873 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::CoreUnsafeUtils) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
