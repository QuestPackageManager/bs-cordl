#pragma once
// IWYU pragma private; include "System/Linq/EnumerableSorter_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/zzzz__EnumerableSorter_1_def.hpp"
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
// Dependencies System.Linq.EnumerableSorter`1<TElement>
namespace System::Linq {
// cpp template
template <typename TElement, typename TKey>
// Is value type: false
// CS Name: System.Linq.EnumerableSorter`2<TElement,TKey>
class CORDL_TYPE EnumerableSorter_2 : public ::System::Linq::EnumerableSorter_1<TElement> {
public:
  // Declarations
  /// @brief Field comparer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_comparer, put = __cordl_internal_set_comparer)) ::System::Collections::Generic::IComparer_1<TKey>* comparer;

  /// @brief Field descending, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_descending, put = __cordl_internal_set_descending)) bool descending;

  /// @brief Field keySelector, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_keySelector, put = __cordl_internal_set_keySelector)) ::System::Func_2<TElement, TKey>* keySelector;

  /// @brief Field keys, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_keys, put = __cordl_internal_set_keys)) ::ArrayW<TKey, ::Array<TKey>*> keys;

  /// @brief Field next, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next)) ::System::Linq::EnumerableSorter_1<TElement>* next;

  /// @brief Method CompareKeys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t CompareKeys(int32_t index1, int32_t index2);

  /// @brief Method ComputeKeys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ComputeKeys(::ArrayW<TElement, ::Array<TElement>*> elements, int32_t count);

  static inline ::System::Linq::EnumerableSorter_2<TElement, TKey>* New_ctor(::System::Func_2<TElement, TKey>* keySelector, ::System::Collections::Generic::IComparer_1<TKey>* comparer,
                                                                             bool descending, ::System::Linq::EnumerableSorter_1<TElement>* next);

  constexpr ::System::Collections::Generic::IComparer_1<TKey>* const& __cordl_internal_get_comparer() const;

  constexpr ::System::Collections::Generic::IComparer_1<TKey>*& __cordl_internal_get_comparer();

  constexpr bool const& __cordl_internal_get_descending() const;

  constexpr bool& __cordl_internal_get_descending();

  constexpr ::System::Func_2<TElement, TKey>* const& __cordl_internal_get_keySelector() const;

  constexpr ::System::Func_2<TElement, TKey>*& __cordl_internal_get_keySelector();

  constexpr ::ArrayW<TKey, ::Array<TKey>*> const& __cordl_internal_get_keys() const;

  constexpr ::ArrayW<TKey, ::Array<TKey>*>& __cordl_internal_get_keys();

  constexpr ::System::Linq::EnumerableSorter_1<TElement>* const& __cordl_internal_get_next() const;

  constexpr ::System::Linq::EnumerableSorter_1<TElement>*& __cordl_internal_get_next();

  constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IComparer_1<TKey>* value);

  constexpr void __cordl_internal_set_descending(bool value);

  constexpr void __cordl_internal_set_keySelector(::System::Func_2<TElement, TKey>* value);

  constexpr void __cordl_internal_set_keys(::ArrayW<TKey, ::Array<TKey>*> value);

  constexpr void __cordl_internal_set_next(::System::Linq::EnumerableSorter_1<TElement>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_2<TElement, TKey>* keySelector, ::System::Collections::Generic::IComparer_1<TKey>* comparer, bool descending, ::System::Linq::EnumerableSorter_1<TElement>* next);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumerableSorter_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumerableSorter_2(EnumerableSorter_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumerableSorter_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumerableSorter_2(EnumerableSorter_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13607 };

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
