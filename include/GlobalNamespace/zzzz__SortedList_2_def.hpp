#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SortedList_2)
namespace System::Collections::Generic {
template <typename T> class LinkedList_1;
}
namespace GlobalNamespace {
template <typename T> class ISortedListItemProcessor_1;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
namespace GlobalNamespace {
template <typename T> class ISortedList_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T, typename TBase> class SortedList_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::SortedList_2);
// Type: ::SortedList`2
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T, typename TBase>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14780))
// CS Name: ::SortedList`2<T,TBase>*
class CORDL_TYPE SortedList_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _items, offset 0x10, size 0x8
  __declspec(property(get = __get__items, put = __set__items))::System::Collections::Generic::LinkedList_1<TBase>* _items;

  /// @brief Field _sortedListDataProcessor, offset 0x18, size 0x8
  __declspec(property(get = __get__sortedListDataProcessor, put = __set__sortedListDataProcessor))::GlobalNamespace::ISortedListItemProcessor_1<TBase>* _sortedListDataProcessor;

  /// @brief Field _lastUsedNode, offset 0x20, size 0x8
  __declspec(property(get = __get__lastUsedNode, put = __set__lastUsedNode))::System::Collections::Generic::LinkedListNode_1<TBase>* _lastUsedNode;

  __declspec(property(get = get_count)) int32_t count;

  __declspec(property(get = get_items))::System::Collections::Generic::LinkedList_1<TBase>* items;

  /// @brief Convert operator to "::GlobalNamespace::ISortedList_1<TBase>"
  constexpr operator ::GlobalNamespace::ISortedList_1<TBase>*() noexcept;

  constexpr ::System::Collections::Generic::LinkedList_1<TBase>*& __get__items();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<TBase>*> const& __get__items() const;

  constexpr void __set__items(::System::Collections::Generic::LinkedList_1<TBase>* value);

  constexpr ::GlobalNamespace::ISortedListItemProcessor_1<TBase>*& __get__sortedListDataProcessor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISortedListItemProcessor_1<TBase>*> const& __get__sortedListDataProcessor() const;

  constexpr void __set__sortedListDataProcessor(::GlobalNamespace::ISortedListItemProcessor_1<TBase>* value);

  constexpr ::System::Collections::Generic::LinkedListNode_1<TBase>*& __get__lastUsedNode();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<TBase>*> const& __get__lastUsedNode() const;

  constexpr void __set__lastUsedNode(::System::Collections::Generic::LinkedListNode_1<TBase>* value);

  /// @brief Method get_count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_count();

  /// @brief Method get_items, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::LinkedList_1<TBase>* get_items();

  static inline ::GlobalNamespace::SortedList_2<T, TBase>* New_ctor(::GlobalNamespace::ISortedListItemProcessor_1<TBase>* sortedListDataProcessor);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ISortedListItemProcessor_1<TBase>* sortedListDataProcessor);

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::LinkedListNode_1<TBase>* Insert(TBase newItem);

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Insert(::System::Collections::Generic::LinkedListNode_1<TBase>* newNode);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Remove(::System::Collections::Generic::LinkedListNode_1<TBase>* node);

  /// @brief Method TouchLastUsedNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void TouchLastUsedNode(::System::Collections::Generic::LinkedListNode_1<TBase>* node);

  /// @brief Method InsertInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InsertInternal(::System::Collections::Generic::LinkedListNode_1<TBase>* newItem);

  // Ctor Parameters [CppParam { name: "", ty: "SortedList_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortedList_2(SortedList_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortedList_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortedList_2(SortedList_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortedList_2();

public:
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
