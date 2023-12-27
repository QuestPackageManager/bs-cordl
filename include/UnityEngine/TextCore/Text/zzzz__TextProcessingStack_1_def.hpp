#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextProcessingStack_1)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
template <typename T> struct TextProcessingStack_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::TextCore::Text::TextProcessingStack_1);
// Type: UnityEngine.TextCore.Text::TextProcessingStack`1
// SizeInfo { instance_size: 40, native_size: 52, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13727))
// CS Name: ::UnityEngine.TextCore.Text::TextProcessingStack`1<T>
struct CORDL_TYPE TextProcessingStack_1 {
public:
  // Declarations
  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::ArrayW<T, ::Array<T>*> stack);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(int32_t capacity);

  /// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Clear();

  /// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void SetDefault(T item);

  /// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Add(T item);

  /// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T Remove();

  /// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Push(T item);

  /// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T Pop();

  /// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T Peek();

  /// @brief Method CurrentItem addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T CurrentItem();

  // Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "m_DefaultItem", ty: "T", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextProcessingStack_1(::ArrayW<T, ::Array<T>*> itemStack, int32_t index, T m_DefaultItem, int32_t m_Capacity, int32_t m_RolloverSize, int32_t m_Count) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextProcessingStack_1();

  /// @brief Field itemStack, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> itemStack;

  /// @brief Field index, offset: 0x8, size: 0x4, def value: None
  int32_t index;

  /// @brief Field m_DefaultItem, offset: 0x10, size: 0x8, def value: None
  T m_DefaultItem;

  /// @brief Field m_Capacity, offset: 0x18, size: 0x4, def value: None
  int32_t m_Capacity;

  /// @brief Field m_RolloverSize, offset: 0x1c, size: 0x4, def value: None
  int32_t m_RolloverSize;

  /// @brief Field m_Count, offset: 0x20, size: 0x4, def value: None
  int32_t m_Count;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::TextCore::Text::TextProcessingStack_1, "UnityEngine.TextCore.Text", "TextProcessingStack`1");
