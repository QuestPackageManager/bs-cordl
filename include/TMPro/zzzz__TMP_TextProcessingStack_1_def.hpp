#pragma once
// IWYU pragma private; include "TMPro/TMP_TextProcessingStack_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_TextProcessingStack_1)
// Forward declare root types
namespace TMPro {
template <typename T> struct TMP_TextProcessingStack_1;
}
// Write type traits
MARK_GEN_VAL_T(::TMPro::TMP_TextProcessingStack_1);
// Dependencies
namespace TMPro {
// cpp template
template <typename T>
// Is value type: true
// CS Name: TMPro.TMP_TextProcessingStack`1<T>
struct CORDL_TYPE TMP_TextProcessingStack_1 {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_current)) T current;

  __declspec(property(get = get_rolloverSize, put = set_rolloverSize)) int32_t rolloverSize;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(T item);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method CurrentItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T CurrentItem();

  /// @brief Method Peek, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Peek();

  /// @brief Method Pop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Pop();

  /// @brief Method PreviousItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T PreviousItem();

  /// @brief Method Push, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Push(T item);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Remove();

  /// @brief Method SetDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetDefault(T item);

  /// @brief Method SetDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void SetDefault(::ArrayW<::TMPro::TMP_TextProcessingStack_1<T>, ::Array<::TMPro::TMP_TextProcessingStack_1<T>>*> stack, T item);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, int32_t rolloverSize);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<T, ::Array<T>*> stack);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_current();

  /// @brief Method get_rolloverSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_rolloverSize();

  /// @brief Method set_rolloverSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_rolloverSize(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_TextProcessingStack_1();

  // Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "m_DefaultItem", ty: "T", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TMP_TextProcessingStack_1(::ArrayW<T, ::Array<T>*> itemStack, int32_t index, T m_DefaultItem, int32_t m_Capacity, int32_t m_RolloverSize, int32_t m_Count) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15989 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field k_DefaultCapacity offset 0xffffffff size 0x4
  static constexpr int32_t k_DefaultCapacity{ static_cast<int32_t>(0x4) };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::TMPro::TMP_TextProcessingStack_1, "TMPro", "TMP_TextProcessingStack`1");
