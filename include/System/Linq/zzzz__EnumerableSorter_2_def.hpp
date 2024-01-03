#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/zzzz__EnumerableSorter_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnumerableSorter_2)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Linq {
template <typename TElement> class EnumerableSorter_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace System::Linq {
template <typename TElement, typename TKey> class EnumerableSorter_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::EnumerableSorter_2);
// Type: System.Linq::EnumerableSorter`2
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq {
// cpp template
template <typename TElement, typename TKey>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14293), inst: 1676 }), TypeDefinitionIndex(TypeDefinitionIndex(14293))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14294))
// CS Name: ::System.Linq::EnumerableSorter`2<TElement,TKey>*
class CORDL_TYPE EnumerableSorter_2 : public ::System::Linq::EnumerableSorter_1<TElement> {
public:
  // Declarations
  /// @brief Field keySelector, offset 0x10, size 0x8
  __declspec(property(get = __get_keySelector, put = __set_keySelector))::System::Func_2<TElement, TKey>* keySelector;

  /// @brief Field comparer, offset 0x18, size 0x8
  __declspec(property(get = __get_comparer, put = __set_comparer))::System::Collections::Generic::IComparer_1<TKey>* comparer;

  /// @brief Field descending, offset 0x20, size 0x1
  __declspec(property(get = __get_descending, put = __set_descending)) bool descending;

  /// @brief Field next, offset 0x28, size 0x8
  __declspec(property(get = __get_next, put = __set_next))::System::Linq::EnumerableSorter_1<TElement>* next;

  /// @brief Field keys, offset 0x30, size 0x8
  __declspec(property(get = __get_keys, put = __set_keys))::ArrayW<TKey, ::Array<TKey>*> keys;

  constexpr ::System::Func_2<TElement, TKey>*& __get_keySelector();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TElement, TKey>*> const& __get_keySelector() const;

  constexpr void __set_keySelector(::System::Func_2<TElement, TKey>* value);

  constexpr ::System::Collections::Generic::IComparer_1<TKey>*& __get_comparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<TKey>*> const& __get_comparer() const;

  constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<TKey>* value);

  constexpr bool& __get_descending();

  constexpr bool const& __get_descending() const;

  constexpr void __set_descending(bool value);

  constexpr ::System::Linq::EnumerableSorter_1<TElement>*& __get_next();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::EnumerableSorter_1<TElement>*> const& __get_next() const;

  constexpr void __set_next(::System::Linq::EnumerableSorter_1<TElement>* value);

  constexpr ::ArrayW<TKey, ::Array<TKey>*>& __get_keys();

  constexpr ::ArrayW<TKey, ::Array<TKey>*> const& __get_keys() const;

  constexpr void __set_keys(::ArrayW<TKey, ::Array<TKey>*> value);

  static inline ::System::Linq::EnumerableSorter_2<TElement, TKey>* New_ctor(::System::Func_2<TElement, TKey>* keySelector, ::System::Collections::Generic::IComparer_1<TKey>* comparer,
                                                                             bool descending, ::System::Linq::EnumerableSorter_1<TElement>* next);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_2<TElement, TKey>* keySelector, ::System::Collections::Generic::IComparer_1<TKey>* comparer, bool descending, ::System::Linq::EnumerableSorter_1<TElement>* next);

  /// @brief Method ComputeKeys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ComputeKeys(::ArrayW<TElement, ::Array<TElement>*> elements, int32_t count);

  /// @brief Method CompareKeys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t CompareKeys(int32_t index1, int32_t index2);

  // Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumerableSorter_2(EnumerableSorter_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumerableSorter_2(EnumerableSorter_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumerableSorter_2();

public:
  /// @brief Field keySelector, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<TElement, TKey>* ___keySelector;

  /// @brief Field comparer, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IComparer_1<TKey>* ___comparer;

  /// @brief Field descending, offset: 0x20, size: 0x1, def value: None
  bool ___descending;

  /// @brief Field next, offset: 0x28, size: 0x8, def value: None
  ::System::Linq::EnumerableSorter_1<TElement>* ___next;

  /// @brief Field keys, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<TKey, ::Array<TKey>*> ___keys;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::EnumerableSorter_2, "System.Linq", "EnumerableSorter`2");
