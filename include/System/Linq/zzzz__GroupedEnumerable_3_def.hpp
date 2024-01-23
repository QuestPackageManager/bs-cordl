#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GroupedEnumerable_3)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Linq {
template <typename TKey, typename TElement> class IGrouping_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace System::Linq {
template <typename TSource, typename TKey, typename TElement> class GroupedEnumerable_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::GroupedEnumerable_3);
// Type: System.Linq::GroupedEnumerable`3
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq {
// cpp template
template <typename TSource, typename TKey, typename TElement>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14289))
// CS Name: ::System.Linq::GroupedEnumerable`3<TSource,TKey,TElement>*
class CORDL_TYPE GroupedEnumerable_3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field source, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source))::System::Collections::Generic::IEnumerable_1<TSource>* source;

  /// @brief Field keySelector, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_keySelector, put = __cordl_internal_set_keySelector))::System::Func_2<TSource, TKey>* keySelector;

  /// @brief Field elementSelector, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_elementSelector, put = __cordl_internal_set_elementSelector))::System::Func_2<TSource, TElement>* elementSelector;

  /// @brief Field comparer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_comparer, put = __cordl_internal_set_comparer))::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey, TElement>*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey, TElement>*>*
  i___System__Collections__Generic__IEnumerable_1___System__Linq__IGrouping_2_TKey_TElement___() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get_source();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const& __cordl_internal_get_source() const;

  constexpr void __cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  constexpr ::System::Func_2<TSource, TKey>*& __cordl_internal_get_keySelector();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, TKey>*> const& __cordl_internal_get_keySelector() const;

  constexpr void __cordl_internal_set_keySelector(::System::Func_2<TSource, TKey>* value);

  constexpr ::System::Func_2<TSource, TElement>*& __cordl_internal_get_elementSelector();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, TElement>*> const& __cordl_internal_get_elementSelector() const;

  constexpr void __cordl_internal_set_elementSelector(::System::Func_2<TSource, TElement>* value);

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& __cordl_internal_get_comparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TKey>*> const& __cordl_internal_get_comparer() const;

  constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>* value);

  static inline ::System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>* New_ctor(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, TKey>* keySelector,
                                                                                       ::System::Func_2<TSource, TElement>* elementSelector,
                                                                                       ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, TKey>* keySelector, ::System::Func_2<TSource, TElement>* elementSelector,
                    ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey, TElement>*>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "GroupedEnumerable_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GroupedEnumerable_3(GroupedEnumerable_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GroupedEnumerable_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GroupedEnumerable_3(GroupedEnumerable_3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GroupedEnumerable_3();

public:
  /// @brief Field source, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* ___source;

  /// @brief Field keySelector, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<TSource, TKey>* ___keySelector;

  /// @brief Field elementSelector, offset: 0x20, size: 0x8, def value: None
  ::System::Func_2<TSource, TElement>* ___elementSelector;

  /// @brief Field comparer, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEqualityComparer_1<TKey>* ___comparer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::GroupedEnumerable_3, "System.Linq", "GroupedEnumerable`3");
