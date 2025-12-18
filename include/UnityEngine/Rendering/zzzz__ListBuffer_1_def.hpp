#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ListBuffer_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ListBuffer_1)
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename T> struct ListBuffer_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::Rendering::ListBuffer_1);
// Dependencies
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.Rendering.ListBuffer`1<T>
struct CORDL_TYPE ListBuffer_1 {
public:
  // Declarations
  __declspec(property(get = get_BufferPtr)) T* BufferPtr;

  __declspec(property(get = get_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item)) T Item[];

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyTo(T* dstBuffer, int32_t startDstIndex, int32_t copyCount);

  /// @brief Method GetUnchecked, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ByRef<T> GetUnchecked(::ByRef<int32_t> index);

  /// @brief Method TryAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryAdd(::ByRef<T> value);

  /// @brief Method TryCopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryCopyFrom(T* srcPtr, int32_t count);

  /// @brief Method TryCopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryCopyTo(::UnityEngine::Rendering::ListBuffer_1<T> other);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T* bufferPtr, int32_t* countPtr, int32_t capacity);

  /// @brief Method get_BufferPtr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T* get_BufferPtr();

  /// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Capacity();

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ByRef<T> get_Item(::ByRef<int32_t> index);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ListBuffer_1();

  // Ctor Parameters [CppParam { name: "m_BufferPtr", ty: "T*", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_CountPtr", ty: "int32_t*", modifiers: "", def_value: None }]
  constexpr ListBuffer_1(T* m_BufferPtr, int32_t m_Capacity, int32_t* m_CountPtr) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11895 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_BufferPtr, offset: 0x0, size: 0x8, def value: None
  T* m_BufferPtr;

  /// @brief Field m_Capacity, offset: 0x8, size: 0x4, def value: None
  int32_t m_Capacity;

  /// @brief Field m_CountPtr, offset: 0x10, size: 0x8, def value: None
  int32_t* m_CountPtr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Rendering::ListBuffer_1, "UnityEngine.Rendering", "ListBuffer`1");
