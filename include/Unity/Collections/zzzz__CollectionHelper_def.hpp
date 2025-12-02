#pragma once
// IWYU pragma private; include "Unity/Collections/CollectionHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CollectionHelper)
namespace System {
struct IntPtr;
}
namespace System {
class Type;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
struct CollectionHelper_DummyJob;
}
namespace Unity::Collections {
struct CollectionHelper_LongDoubleUnion;
}
namespace Unity::Collections {
struct NativeArrayOptions;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
template <typename T> struct NativeList_1;
}
namespace Unity::Collections {
template <typename TKey, typename TValue> struct NativeParallelMultiHashMap_2;
}
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace Unity::Collections {
class CollectionHelper;
}
namespace Unity::Collections {
struct CollectionHelper_DummyJob;
}
namespace Unity::Collections {
struct CollectionHelper_LongDoubleUnion;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::CollectionHelper);
MARK_VAL_T(::Unity::Collections::CollectionHelper_DummyJob);
MARK_VAL_T(::Unity::Collections::CollectionHelper_LongDoubleUnion);
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.CollectionHelper/LongDoubleUnion
struct CORDL_TYPE CollectionHelper_LongDoubleUnion {
public:
  // Declarations
  /// @brief Field doubleValue, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_doubleValue, put = __cordl_internal_set_doubleValue)) double_t doubleValue;

  /// @brief Field longValue, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_longValue, put = __cordl_internal_set_longValue)) int64_t longValue;

  constexpr double_t const& __cordl_internal_get_doubleValue() const;

  constexpr double_t& __cordl_internal_get_doubleValue();

  constexpr int64_t const& __cordl_internal_get_longValue() const;

  constexpr int64_t& __cordl_internal_get_longValue();

  constexpr void __cordl_internal_set_doubleValue(double_t value);

  constexpr void __cordl_internal_set_longValue(int64_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionHelper_LongDoubleUnion();

  // Ctor Parameters [CppParam { name: "longValue", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "doubleValue", ty: "double_t", modifiers: "", def_value: None }]
  constexpr CollectionHelper_LongDoubleUnion(int64_t longValue, double_t doubleValue) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___longValue_padding[0x0];
      /// @brief Field longValue, offset: 0x0, size: 0x8, def value: None
      int64_t ___longValue;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___longValue_padding_forAlignment[0x0];
      /// @brief Field longValue, offset: 0x0, size: 0x8, def value: None
      int64_t ___longValue_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___doubleValue_padding[0x0];
      /// @brief Field doubleValue, offset: 0x0, size: 0x8, def value: None
      double_t ___doubleValue;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___doubleValue_padding_forAlignment[0x0];
      /// @brief Field doubleValue, offset: 0x0, size: 0x8, def value: None
      double_t ___doubleValue_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15512 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::CollectionHelper_LongDoubleUnion, 0x8>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.CollectionHelper/DummyJob
#pragma pack(push, 0)
struct CORDL_TYPE CollectionHelper_DummyJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x628e350, size 0x4, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionHelper_DummyJob();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15513 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::CollectionHelper_DummyJob, 0x1>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.CollectionHelper
class CORDL_TYPE CollectionHelper : public ::System::Object {
public:
  // Declarations
  using DummyJob = ::Unity::Collections::CollectionHelper_DummyJob;

  using LongDoubleUnion = ::Unity::Collections::CollectionHelper_LongDoubleUnion;

  /// @brief Method Align, addr 0x628dd90, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t Align(int32_t size, int32_t alignmentPowerOfTwo);

  /// @brief Method Align, addr 0x628ddac, size 0x1c, virtual false, abstract: false, final false
  static inline uint64_t Align(uint64_t size, uint64_t alignmentPowerOfTwo);

  /// @brief Method AssumePositive, addr 0x628e09c, size 0x4, virtual false, abstract: false, final false
  static inline int32_t AssumePositive(int32_t value);

  /// @brief Method CheckAllocator, addr 0x628dc90, size 0x84, virtual false, abstract: false, final false
  static inline void CheckAllocator(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method CheckCapacityInRange, addr 0x628e264, size 0xec, virtual false, abstract: false, final false
  static inline void CheckCapacityInRange(int32_t capacity, int32_t length);

  /// @brief Method CheckConvertArguments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void CheckConvertArguments(int32_t length);

  /// @brief Method CheckIndexInRange, addr 0x628e1c0, size 0xa4, virtual false, abstract: false, final false
  static inline void CheckIndexInRange(int32_t index, int32_t length);

  /// @brief Method CheckIntPositivePowerOfTwo, addr 0x628e0a0, size 0x94, virtual false, abstract: false, final false
  static inline void CheckIntPositivePowerOfTwo(int32_t value);

  /// @brief Method CheckIsUnmanaged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void CheckIsUnmanaged();

  /// @brief Method CheckReflectionDataCorrect, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void CheckReflectionDataCorrect(::System::IntPtr reflectionData);

  /// @brief Method CheckReflectionDataCorrectInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void CheckReflectionDataCorrectInternal(::System::IntPtr reflectionData, ::ByRef<bool> burstCompiled);

  /// @brief Method CheckUlongPositivePowerOfTwo, addr 0x628e134, size 0x8c, virtual false, abstract: false, final false
  static inline void CheckUlongPositivePowerOfTwo(uint64_t value);

  /// @brief Method ConvertExistingDataToNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::Unity::Collections::NativeArray_1<T> ConvertExistingDataToNativeArray(void* dataPointer, int32_t length, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                                                        bool setTempMemoryHandle);

  /// @brief Method ConvertExistingNativeListToNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::Unity::Collections::NativeArray_1<T> ConvertExistingNativeListToNativeArray(::ByRef<::Unity::Collections::NativeList_1<T>> nativeList, int32_t length,
                                                                                              ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method CreateNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline ::Unity::Collections::NativeArray_1<T> CreateNativeArray(::ArrayW<T, ::Array<T>*> array, ::ByRef<U> allocator);

  /// @brief Method CreateNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::NativeArray_1<T> CreateNativeArray(::ArrayW<T, ::Array<T>*> array, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method CreateNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::Unity::Collections::NativeArray_1<T> CreateNativeArray(::Unity::Collections::NativeArray_1<T> array, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method CreateNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline ::Unity::Collections::NativeArray_1<T> CreateNativeArray(int32_t length, ::ByRef<U> allocator, ::Unity::Collections::NativeArrayOptions options);

  /// @brief Method CreateNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::Unity::Collections::NativeArray_1<T> CreateNativeArray(int32_t length, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                                         ::Unity::Collections::NativeArrayOptions options);

  /// @brief Method CreateNativeParallelMultiHashMap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue, typename U>
  static inline ::Unity::Collections::NativeParallelMultiHashMap_2<TKey, TValue> CreateNativeParallelMultiHashMap(int32_t length, ::ByRef<U> allocator);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Dispose(::Unity::Collections::NativeArray_1<T> nativeArray);

  /// @brief Method DisposeNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void DisposeNativeArray(::Unity::Collections::NativeArray_1<T> nativeArray, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method Hash, addr 0x628de00, size 0x40, virtual false, abstract: false, final false
  static inline uint32_t Hash(void* ptr, int32_t bytes);

  /// @brief Method IsAligned, addr 0x628dddc, size 0x14, virtual false, abstract: false, final false
  static inline bool IsAligned(uint64_t offset, int32_t alignmentPowerOfTwo);

  /// @brief Method IsAligned, addr 0x628ddc8, size 0x14, virtual false, abstract: false, final false
  static inline bool IsAligned(void* p, int32_t alignmentPowerOfTwo);

  /// @brief Method IsPowerOfTwo, addr 0x628ddf0, size 0x10, virtual false, abstract: false, final false
  static inline bool IsPowerOfTwo(int32_t value);

  /// @brief Method Log2Ceil, addr 0x628dd58, size 0x38, virtual false, abstract: false, final false
  static inline int32_t Log2Ceil(int32_t value);

  /// @brief Method Log2Floor, addr 0x628dd20, size 0x38, virtual false, abstract: false, final false
  static inline int32_t Log2Floor(int32_t value);

  /// @brief Method ShouldDeallocate, addr 0x628dd14, size 0xc, virtual false, abstract: false, final false
  static inline bool ShouldDeallocate(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method WriteLayout, addr 0x628de40, size 0x25c, virtual false, abstract: false, final false
  static inline void WriteLayout(::System::Type* type);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectionHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionHelper(CollectionHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionHelper(CollectionHelper const&) = delete;

  /// @brief Field CacheLineSize offset 0xffffffff size 0x4
  static constexpr int32_t CacheLineSize{ static_cast<int32_t>(0x40) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15514 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::CollectionHelper, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::CollectionHelper);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::CollectionHelper*, "Unity.Collections", "CollectionHelper");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::CollectionHelper_DummyJob, "Unity.Collections", "CollectionHelper/DummyJob");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::CollectionHelper_LongDoubleUnion, "Unity.Collections", "CollectionHelper/LongDoubleUnion");
