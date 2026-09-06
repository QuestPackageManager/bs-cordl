#pragma once
// IWYU pragma private; include "System/Collections/Generic/ArrayBuilder_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayBuilder_1)
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> struct ArrayBuilder_1;
}
// Write type traits
MARK_GEN_VAL_T(::System::Collections::Generic::ArrayBuilder_1);
DEFINE_IL2CPP_GEN_CLASS(::System::Collections::Generic::ArrayBuilder_1, "System.Collections.Generic", "ArrayBuilder`1");
// [DefaultMember("Item")]
// Dependencies
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: true
// CS Name: System.Collections.Generic.ArrayBuilder`1<T>
struct CORDL_TYPE ArrayBuilder_1 {
public:
  // Declarations
  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<T> ToArray();

  /// @brief Method UncheckedAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UncheckedAdd(T item);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayBuilder_1();

  // Ctor Parameters [CppParam { name: "_array", ty: "::ArrayW<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None, comment:
  // None }]
  constexpr ArrayBuilder_1(::ArrayW<T> _array, int32_t _count) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16684 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _array, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<T> _array;

  /// @brief Field _count, offset: 0x8, size: 0x4, def value: None
  int32_t _count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Collections::Generic
