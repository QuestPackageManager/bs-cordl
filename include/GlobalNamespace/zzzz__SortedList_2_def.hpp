#pragma once
// IWYU pragma private; include "GlobalNamespace/SortedList_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ISortedList_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SortedList_2)
namespace GlobalNamespace {
template <typename T> class ISortedListItemProcessor_1;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
namespace System::Collections::Generic {
template <typename T> class LinkedList_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T, typename TBase> class SortedList_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::SortedList_2);
// Dependencies ISortedList`1<T>, System.Object
namespace GlobalNamespace {
// cpp template
template <typename T, typename TBase>
// Is value type: false
// CS Name: SortedList`2<T,TBase>
class CORDL_TYPE SortedList_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _items, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__items, put = __cordl_internal_set__items)) ::System::Collections::Generic::LinkedList_1<TBase>* _items;

  /// @brief Field _lastUsedNode, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lastUsedNode, put = __cordl_internal_set__lastUsedNode)) ::System::Collections::Generic::LinkedListNode_1<TBase>* _lastUsedNode;

  /// @brief Field _sortedListDataProcessor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sortedListDataProcessor,
                      put = __cordl_internal_set__sortedListDataProcessor)) ::GlobalNamespace::ISortedListItemProcessor_1<TBase>* _sortedListDataProcessor;

  __declspec(property(get = get_count)) int32_t count;

  __declspec(property(get = get_items)) ::System::Collections::Generic::LinkedList_1<TBase>* items;

  /// @brief Convert operator to "::GlobalNamespace::ISortedList_1<TBase>"
  constexpr operator ::GlobalNamespace::ISortedList_1<TBase>*() noexcept;

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::LinkedListNode_1<TBase>* Insert(TBase newItem);

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Insert(::System::Collections::Generic::LinkedListNode_1<TBase>* newNode);

  /// @brief Method InsertInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InsertInternal(::System::Collections::Generic::LinkedListNode_1<TBase>* newItem);

  static inline ::GlobalNamespace::SortedList_2<T, TBase>* New_ctor(::GlobalNamespace::ISortedListItemProcessor_1<TBase>* sortedListDataProcessor);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Remove(::System::Collections::Generic::LinkedListNode_1<TBase>* node);

  /// @brief Method TouchLastUsedNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void TouchLastUsedNode(::System::Collections::Generic::LinkedListNode_1<TBase>* node);

  constexpr ::System::Collections::Generic::LinkedList_1<TBase>* const& __cordl_internal_get__items() const;

  constexpr ::System::Collections::Generic::LinkedList_1<TBase>*& __cordl_internal_get__items();

  constexpr ::System::Collections::Generic::LinkedListNode_1<TBase>* const& __cordl_internal_get__lastUsedNode() const;

  constexpr ::System::Collections::Generic::LinkedListNode_1<TBase>*& __cordl_internal_get__lastUsedNode();

  constexpr ::GlobalNamespace::ISortedListItemProcessor_1<TBase>* const& __cordl_internal_get__sortedListDataProcessor() const;

  constexpr ::GlobalNamespace::ISortedListItemProcessor_1<TBase>*& __cordl_internal_get__sortedListDataProcessor();

  constexpr void __cordl_internal_set__items(::System::Collections::Generic::LinkedList_1<TBase>* value);

  constexpr void __cordl_internal_set__lastUsedNode(::System::Collections::Generic::LinkedListNode_1<TBase>* value);

  constexpr void __cordl_internal_set__sortedListDataProcessor(::GlobalNamespace::ISortedListItemProcessor_1<TBase>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ISortedListItemProcessor_1<TBase>* sortedListDataProcessor);

  /// @brief Method get_count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_count();

  /// @brief Method get_items, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::LinkedList_1<TBase>* get_items();

  /// @brief Convert to "::GlobalNamespace::ISortedList_1<TBase>"
  constexpr ::GlobalNamespace::ISortedList_1<TBase>* i___GlobalNamespace__ISortedList_1_TBase_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortedList_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortedList_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortedList_2(SortedList_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortedList_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortedList_2(SortedList_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17092 };

  /// @brief Field _items, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedList_1<TBase>* ____items;

  /// @brief Field _sortedListDataProcessor, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ISortedListItemProcessor_1<TBase>* ____sortedListDataProcessor;

  /// @brief Field _lastUsedNode, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedListNode_1<TBase>* ____lastUsedNode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::SortedList_2, "", "SortedList`2");
