#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__ArrayBuilder_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LargeArrayBuilder_1)
namespace System::Collections::Generic {
template <typename T> struct ArrayBuilder_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> struct LargeArrayBuilder_1;
}
// Write type traits
MARK_GEN_VAL_T(::System::Collections::Generic::LargeArrayBuilder_1);
// Type: System.Collections.Generic::LargeArrayBuilder`1
// SizeInfo { instance_size: 48, native_size: 64, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3845)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3845), inst: 767 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3847))
// CS Name: ::System.Collections.Generic::LargeArrayBuilder`1<T>
struct CORDL_TYPE LargeArrayBuilder_1 {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(bool initialize);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxCapacity);

  /// @brief Method AddRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddRange(::System::Collections::Generic::IEnumerable_1<T>* items);

  /// @brief Method AddWithBufferAllocation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddWithBufferAllocation(T item, ByRef<::ArrayW<T, ::Array<T>*>> destination, ByRef<int32_t> index);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t arrayIndex, int32_t count);

  /// @brief Method GetBuffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<T, ::Array<T>*> GetBuffer(int32_t index);

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<T, ::Array<T>*> ToArray();

  /// @brief Method TryMove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryMove(ByRef<::ArrayW<T, ::Array<T>*>> array);

  /// @brief Method AllocateBuffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AllocateBuffer();

  // Ctor Parameters [CppParam { name: "_maxCapacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_first", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: None },
  // CppParam { name: "_buffers", ty: "::System::Collections::Generic::ArrayBuilder_1<::ArrayW<T,::Array<T>*>>", modifiers: "", def_value: None }, CppParam { name: "_current", ty:
  // "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "",
  // def_value: None }]
  constexpr LargeArrayBuilder_1(int32_t _maxCapacity, ::ArrayW<T, ::Array<T>*> _first, ::System::Collections::Generic::ArrayBuilder_1<::ArrayW<T, ::Array<T>*>> _buffers,
                                ::ArrayW<T, ::Array<T>*> _current, int32_t _index, int32_t _count) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr LargeArrayBuilder_1();

  /// @brief Field _maxCapacity, offset: 0x0, size: 0x4, def value: None
  int32_t _maxCapacity;

  /// @brief Field _first, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> _first;

  /// @brief Field _buffers, offset: 0x10, size: 0x10, def value: None
  ::System::Collections::Generic::ArrayBuilder_1<::ArrayW<T, ::Array<T>*>> _buffers;

  /// @brief Field _current, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> _current;

  /// @brief Field _index, offset: 0x28, size: 0x4, def value: None
  int32_t _index;

  /// @brief Field _count, offset: 0x2c, size: 0x4, def value: None
  int32_t _count;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::LargeArrayBuilder_1, "System.Collections.Generic", "LargeArrayBuilder`1");
