#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutList_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutList_1)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
struct Allocator;
}
namespace UnityEngine::UIElements::Layout {
template <typename T> struct LayoutList_1_Data;
}
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
template <typename T> struct LayoutList_1;
}
namespace UnityEngine::UIElements::Layout {
template <typename T> struct LayoutList_1_Data;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::UIElements::Layout::LayoutList_1);
MARK_GEN_VAL_T(::UnityEngine::UIElements::Layout::LayoutList_1_Data);
// Dependencies
namespace UnityEngine::UIElements::Layout {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutList`1/Data<T>
struct CORDL_TYPE LayoutList_1_Data {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutList_1_Data();

  // Ctor Parameters [CppParam { name: "Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "Values", ty: "T*", modifiers: "", def_value: None }]
  constexpr LayoutList_1_Data(int32_t Capacity, int32_t Count, T* Values) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5430 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Capacity, offset: 0x0, size: 0x4, def value: None
  int32_t Capacity;

  /// @brief Field Count, offset: 0x4, size: 0x4, def value: None
  int32_t Count;

  /// @brief Field Values, offset: 0x8, size: 0x8, def value: None
  T* Values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::Layout
// Dependencies Unity.Collections.Allocator
namespace UnityEngine::UIElements::Layout {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutList`1<T>
struct CORDL_TYPE LayoutList_1 {
public:
  // Declarations
  using Data = ::UnityEngine::UIElements::Layout::LayoutList_1_Data<T>;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  __declspec(property(get = get_Item)) T Item[];

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method EnsureCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void EnsureCapacity(int32_t capacity);

  /// @brief Method IncreaseCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void IncreaseCapacity();

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Insert(int32_t index, T value);

  /// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method ResizeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void* ResizeArray(void* fromPtr, int64_t fromCount, int64_t toCount, int64_t size, int32_t align, ::Unity::Collections::Allocator allocator);

  /// @brief Method ResizeCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ResizeCapacity(int32_t capacity);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialCapacity, ::Unity::Collections::Allocator allocator);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ByRef<T> get_Item(int32_t index);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutList_1();

  // Ctor Parameters [CppParam { name: "m_Allocator", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }, CppParam { name: "m_Data", ty:
  // "::UnityEngine::UIElements::Layout::LayoutList_1_Data<T>*", modifiers: "", def_value: None }]
  constexpr LayoutList_1(::Unity::Collections::Allocator m_Allocator, ::UnityEngine::UIElements::Layout::LayoutList_1_Data<T>* m_Data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5431 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Allocator, offset: 0x0, size: 0x4, def value: None
  ::Unity::Collections::Allocator m_Allocator;

  /// @brief Field m_Data, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Layout::LayoutList_1_Data<T>* m_Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::Layout
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::Layout::LayoutList_1, "UnityEngine.UIElements.Layout", "LayoutList`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::Layout::LayoutList_1_Data, "UnityEngine.UIElements.Layout", "LayoutList`1/Data");
