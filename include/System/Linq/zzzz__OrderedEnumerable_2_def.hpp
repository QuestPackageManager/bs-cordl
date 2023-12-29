#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/zzzz__OrderedEnumerable_1_def.hpp"
CORDL_MODULE_EXPORT(OrderedEnumerable_2)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System::Linq {
template <typename TElement> class EnumerableSorter_1;
}
namespace System::Linq {
template <typename TElement> class OrderedEnumerable_1;
}
// Forward declare root types
namespace System::Linq {
template <typename TElement, typename TKey> class OrderedEnumerable_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::OrderedEnumerable_2);
// Type: System.Linq::OrderedEnumerable`2
// SizeInfo { instance_size: 56, native_size: 49, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq {
// cpp template
template <typename TElement, typename TKey>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14629), inst: 1612 }), TypeDefinitionIndex(TypeDefinitionIndex(14629))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14630))
// CS Name: ::System.Linq::OrderedEnumerable`2<TElement,TKey>*
class CORDL_TYPE OrderedEnumerable_2 : public ::System::Linq::OrderedEnumerable_1<TElement> {
public:
  // Declarations
  /// @brief Field parent, offset 0x18, size 0x8
  __declspec(property(get = __get_parent, put = __set_parent))::System::Linq::OrderedEnumerable_1<TElement>* parent;

  /// @brief Field keySelector, offset 0x20, size 0x8
  __declspec(property(get = __get_keySelector, put = __set_keySelector))::System::Func_2<TElement, TKey>* keySelector;

  /// @brief Field comparer, offset 0x28, size 0x8
  __declspec(property(get = __get_comparer, put = __set_comparer))::System::Collections::Generic::IComparer_1<TKey>* comparer;

  /// @brief Field descending, offset 0x30, size 0x1
  __declspec(property(get = __get_descending, put = __set_descending)) bool descending;

  constexpr ::System::Linq::OrderedEnumerable_1<TElement>*& __get_parent();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::OrderedEnumerable_1<TElement>*> const& __get_parent() const;

  constexpr void __set_parent(::System::Linq::OrderedEnumerable_1<TElement>* value);

  constexpr ::System::Func_2<TElement, TKey>*& __get_keySelector();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TElement, TKey>*> const& __get_keySelector() const;

  constexpr void __set_keySelector(::System::Func_2<TElement, TKey>* value);

  constexpr ::System::Collections::Generic::IComparer_1<TKey>*& __get_comparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<TKey>*> const& __get_comparer() const;

  constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<TKey>* value);

  constexpr bool& __get_descending();

  constexpr bool const& __get_descending() const;

  constexpr void __set_descending(bool value);

  static inline ::System::Linq::OrderedEnumerable_2<TElement, TKey>* New_ctor(::System::Collections::Generic::IEnumerable_1<TElement>* source, ::System::Func_2<TElement, TKey>* keySelector,
                                                                              ::System::Collections::Generic::IComparer_1<TKey>* comparer, bool descending);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<TElement>* source, ::System::Func_2<TElement, TKey>* keySelector, ::System::Collections::Generic::IComparer_1<TKey>* comparer,
                    bool descending);

  /// @brief Method GetEnumerableSorter addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Linq::EnumerableSorter_1<TElement>* GetEnumerableSorter(::System::Linq::EnumerableSorter_1<TElement>* next);

  // Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OrderedEnumerable_2(OrderedEnumerable_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OrderedEnumerable_2(OrderedEnumerable_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OrderedEnumerable_2();

public:
  /// @brief Field parent, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::OrderedEnumerable_1<TElement>* ___parent;

  /// @brief Field keySelector, offset: 0x20, size: 0x8, def value: None
  ::System::Func_2<TElement, TKey>* ___keySelector;

  /// @brief Field comparer, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IComparer_1<TKey>* ___comparer;

  /// @brief Field descending, offset: 0x30, size: 0x1, def value: None
  bool ___descending;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::OrderedEnumerable_2, "System.Linq", "OrderedEnumerable`2");
