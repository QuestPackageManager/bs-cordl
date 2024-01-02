#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayBuilder_1)
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> struct ArrayBuilder_1;
}
// Write type traits
MARK_GEN_VAL_T(::System::Collections::Generic::ArrayBuilder_1);
// Type: System.Collections.Generic::ArrayBuilder`1
// SizeInfo { instance_size: 16, native_size: 28, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3845))
// CS Name: ::System.Collections.Generic::ArrayBuilder`1<T>
struct CORDL_TYPE ArrayBuilder_1 {
public:
  // Declarations
  __declspec(property(get = get_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item)) T Item[];

  /// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Capacity();

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Item(int32_t index);

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(T item);

  /// @brief Method UncheckedAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UncheckedAdd(T item);

  /// @brief Method EnsureCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void EnsureCapacity(int32_t minimum);

  // Ctor Parameters [CppParam { name: "_array", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ArrayBuilder_1(::ArrayW<T, ::Array<T>*> _array, int32_t _count) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayBuilder_1();

  /// @brief Field _array, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> _array;

  /// @brief Field _count, offset: 0x8, size: 0x4, def value: None
  int32_t _count;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::ArrayBuilder_1, "System.Collections.Generic", "ArrayBuilder`1");
