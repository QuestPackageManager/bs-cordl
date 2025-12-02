#pragma once
// IWYU pragma private; include "Unity/Collections/FixedList_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedList_2)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
template <typename T> class IIndexable_1;
}
namespace Unity::Collections {
template <typename T> class INativeList_1;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
// Forward declare root types
namespace Unity::Collections {
template <typename T, typename U> struct FixedList_2;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::FixedList_2);
// Dependencies
namespace Unity::Collections {
// cpp template
template <typename T, typename U>
// Is value type: true
// CS Name: Unity.Collections.FixedList`2<T,U>
struct CORDL_TYPE FixedList_2 {
public:
  // Declarations
  __declspec(property(get = get_Buffer)) uint8_t* Buffer;

  __declspec(property(get = get_Capacity, put = set_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Elements)) ::System::Collections::Generic::IEnumerable_1<T>* Elements;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_Item, put = set_Item)) T Item[];

  __declspec(property(get = get_Length, put = set_Length)) int32_t Length;

  __declspec(property(get = get_LengthInBytes)) int32_t LengthInBytes;

  __declspec(property(get = get_buffer)) uint8_t* buffer;

  __declspec(property(get = get_length, put = set_length)) uint16_t length;

  /// @brief Convert operator to "::Unity::Collections::IIndexable_1<T>"
  constexpr operator ::Unity::Collections::IIndexable_1<T>*();

  /// @brief Convert operator to "::Unity::Collections::INativeList_1<T>"
  constexpr operator ::Unity::Collections::INativeList_1<T>*();

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(::ByRef<T> item);

  /// @brief Method AddNoResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddNoResize(::ByRef<T> item);

  /// @brief Method AddRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddRange(void* ptr, int32_t length);

  /// @brief Method AddRangeNoResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddRangeNoResize(void* ptr, int32_t length);

  /// @brief Method AddReplicate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddReplicate(::ByRef<T> value, int32_t count);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method ElementAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::ByRef<T> ElementAt(int32_t index);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Insert(int32_t index, ::ByRef<T> item);

  /// @brief Method InsertRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InsertRange(int32_t index, int32_t count);

  /// @brief Method InsertRangeWithBeginEnd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InsertRangeWithBeginEnd(int32_t begin, int32_t end);

  /// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method RemoveAtSwapBack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveAtSwapBack(int32_t index);

  /// @brief Method RemoveRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveRange(int32_t index, int32_t count);

  /// @brief Method RemoveRangeSwapBack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveRangeSwapBack(int32_t index, int32_t count);

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<T, ::Array<T>*> ToArray();

  /// @brief Method ToNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<T> ToNativeArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method get_Buffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline uint8_t* get_Buffer();

  /// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Capacity();

  /// @brief Method get_Elements, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<T>* get_Elements();

  /// @brief Method get_IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_IsEmpty();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T get_Item(int32_t index);

  /// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Length();

  /// @brief Method get_LengthInBytes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_LengthInBytes();

  /// @brief Method get_buffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline uint8_t* get_buffer();

  /// @brief Method get_length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline uint16_t get_length();

  /// @brief Convert to "::Unity::Collections::IIndexable_1<T>"
  constexpr ::Unity::Collections::IIndexable_1<T>* i___Unity__Collections__IIndexable_1_T_();

  /// @brief Convert to "::Unity::Collections::INativeList_1<T>"
  constexpr ::Unity::Collections::INativeList_1<T>* i___Unity__Collections__INativeList_1_T_();

  /// @brief Method set_Capacity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Capacity(int32_t value);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Item(int32_t index, T value);

  /// @brief Method set_Length, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Length(int32_t value);

  /// @brief Method set_length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_length(uint16_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedList_2();

  // Ctor Parameters [CppParam { name: "data", ty: "U", modifiers: "", def_value: None }]
  constexpr FixedList_2(U data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15527 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field data, offset: 0x0, size: 0x8, def value: None
  U data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::FixedList_2, "Unity.Collections", "FixedList`2");
