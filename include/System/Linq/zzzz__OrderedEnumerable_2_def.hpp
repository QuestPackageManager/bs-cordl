#pragma once
// IWYU pragma private; include "System/Linq/OrderedEnumerable_2.hpp"
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
namespace System::Linq {
template <typename TElement> class EnumerableSorter_1;
}
namespace System::Linq {
template <typename TElement> class OrderedEnumerable_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace System::Linq {
template <typename TElement, typename TKey> class OrderedEnumerable_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::OrderedEnumerable_2);
// Dependencies System.Linq.OrderedEnumerable`1<TElement>
namespace System::Linq {
// cpp template
template <typename TElement, typename TKey>
// Is value type: false
// CS Name: System.Linq.OrderedEnumerable`2<TElement,TKey>
class CORDL_TYPE OrderedEnumerable_2 : public ::System::Linq::OrderedEnumerable_1<TElement> {
public:
  // Declarations
  /// @brief Field comparer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_comparer, put = __cordl_internal_set_comparer)) ::System::Collections::Generic::IComparer_1<TKey>* comparer;

  /// @brief Field descending, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_descending, put = __cordl_internal_set_descending)) bool descending;

  /// @brief Field keySelector, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_keySelector, put = __cordl_internal_set_keySelector)) ::System::Func_2<TElement, TKey>* keySelector;

  /// @brief Field parent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_parent, put = __cordl_internal_set_parent)) ::System::Linq::OrderedEnumerable_1<TElement>* parent;

  /// @brief Method GetEnumerableSorter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Linq::EnumerableSorter_1<TElement>* GetEnumerableSorter(::System::Linq::EnumerableSorter_1<TElement>* next);

  static inline ::System::Linq::OrderedEnumerable_2<TElement, TKey>* New_ctor(::System::Collections::Generic::IEnumerable_1<TElement>* source, ::System::Func_2<TElement, TKey>* keySelector,
                                                                              ::System::Collections::Generic::IComparer_1<TKey>* comparer, bool descending);

  constexpr ::System::Collections::Generic::IComparer_1<TKey>* const& __cordl_internal_get_comparer() const;

  constexpr ::System::Collections::Generic::IComparer_1<TKey>*& __cordl_internal_get_comparer();

  constexpr bool const& __cordl_internal_get_descending() const;

  constexpr bool& __cordl_internal_get_descending();

  constexpr ::System::Func_2<TElement, TKey>* const& __cordl_internal_get_keySelector() const;

  constexpr ::System::Func_2<TElement, TKey>*& __cordl_internal_get_keySelector();

  constexpr ::System::Linq::OrderedEnumerable_1<TElement>* const& __cordl_internal_get_parent() const;

  constexpr ::System::Linq::OrderedEnumerable_1<TElement>*& __cordl_internal_get_parent();

  constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IComparer_1<TKey>* value);

  constexpr void __cordl_internal_set_descending(bool value);

  constexpr void __cordl_internal_set_keySelector(::System::Func_2<TElement, TKey>* value);

  constexpr void __cordl_internal_set_parent(::System::Linq::OrderedEnumerable_1<TElement>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<TElement>* source, ::System::Func_2<TElement, TKey>* keySelector, ::System::Collections::Generic::IComparer_1<TKey>* comparer,
                    bool descending);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OrderedEnumerable_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OrderedEnumerable_2(OrderedEnumerable_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OrderedEnumerable_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OrderedEnumerable_2(OrderedEnumerable_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13606 };

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
