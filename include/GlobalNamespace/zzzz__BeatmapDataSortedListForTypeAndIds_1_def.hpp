#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataSortedListForTypeAndIds_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataSortedListForTypeAndIds_1)
namespace GlobalNamespace {
template <typename TBase> class BeatmapDataSortedListForTypeAndIds_1___c;
}
namespace GlobalNamespace {
template <typename T> class ISortedListItemProcessor_1;
}
namespace GlobalNamespace {
template <typename T> class ISortedList_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Type;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TBase> class BeatmapDataSortedListForTypeAndIds_1;
}
namespace GlobalNamespace {
template <typename TBase> class BeatmapDataSortedListForTypeAndIds_1___c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c);
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TBase>
// Is value type: false
// CS Name: BeatmapDataSortedListForTypeAndIds`1/<>c<TBase>
class CORDL_TYPE BeatmapDataSortedListForTypeAndIds_1___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_0,
                      put = setStaticF___9__1_0)) ::System::Func_2<::GlobalNamespace::ISortedList_1<TBase>*, ::System::Collections::Generic::LinkedListNode_1<TBase>*>* __9__1_0;

  /// @brief Field <>9__1_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_1, put = setStaticF___9__1_1)) ::System::Func_2<::System::Collections::Generic::LinkedListNode_1<TBase>*, bool>* __9__1_1;

  static inline ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_sortedListHeads>b__1_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::LinkedListNode_1<TBase>* _get_sortedListHeads_b__1_0(::GlobalNamespace::ISortedList_1<TBase>* listItem);

  /// @brief Method <get_sortedListHeads>b__1_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _get_sortedListHeads_b__1_1(::System::Collections::Generic::LinkedListNode_1<TBase>* head);

  static inline ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::ISortedList_1<TBase>*, ::System::Collections::Generic::LinkedListNode_1<TBase>*>* getStaticF___9__1_0();

  static inline ::System::Func_2<::System::Collections::Generic::LinkedListNode_1<TBase>*, bool>* getStaticF___9__1_1();

  static inline void setStaticF___9(::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>* value);

  static inline void setStaticF___9__1_0(::System::Func_2<::GlobalNamespace::ISortedList_1<TBase>*, ::System::Collections::Generic::LinkedListNode_1<TBase>*>* value);

  static inline void setStaticF___9__1_1(::System::Func_2<::System::Collections::Generic::LinkedListNode_1<TBase>*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataSortedListForTypeAndIds_1___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataSortedListForTypeAndIds_1___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataSortedListForTypeAndIds_1___c(BeatmapDataSortedListForTypeAndIds_1___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataSortedListForTypeAndIds_1___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataSortedListForTypeAndIds_1___c(BeatmapDataSortedListForTypeAndIds_1___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14853 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TBase>
// Is value type: false
// CS Name: BeatmapDataSortedListForTypeAndIds`1<TBase>
class CORDL_TYPE BeatmapDataSortedListForTypeAndIds_1 : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c<TBase>;

  /// @brief Field _itemToNodeMap, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__itemToNodeMap,
                      put = __cordl_internal_set__itemToNodeMap)) ::System::Collections::Generic::Dictionary_2<TBase, ::System::Collections::Generic::LinkedListNode_1<TBase>*>* _itemToNodeMap;

  /// @brief Field _items, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__items,
      put = __cordl_internal_set__items)) ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::GlobalNamespace::ISortedList_1<TBase>*>* _items;

  /// @brief Field _sortedListsDataProcessors, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sortedListsDataProcessors,
                      put = __cordl_internal_set__sortedListsDataProcessors)) ::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::ISortedListItemProcessor_1<TBase>*>*
      _sortedListsDataProcessors;

  __declspec(property(get = get_sortedListHeads)) ::ArrayW<::System::Collections::Generic::LinkedListNode_1<TBase>*, ::Array<::System::Collections::Generic::LinkedListNode_1<TBase>*>*>
      sortedListHeads;

  /// @brief Method GetCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline int32_t GetCount(int32_t typeIdentifier);

  /// @brief Method GetItems, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* GetItems(int32_t typeIdentifier);

  /// @brief Method GetList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ISortedList_1<TBase>* GetList(::System::Type* type, int32_t typeIdentifier);

  /// @brief Method InsertItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::LinkedListNode_1<TBase>* InsertItem(TBase item);

  static inline ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<TBase>* New_ctor();

  /// @brief Method RemoveItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveItem(TBase item);

  /// @brief Method RemoveList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveList(::System::Type* type, int32_t typeIdentifier);

  constexpr ::System::Collections::Generic::Dictionary_2<TBase, ::System::Collections::Generic::LinkedListNode_1<TBase>*>* const& __cordl_internal_get__itemToNodeMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<TBase, ::System::Collections::Generic::LinkedListNode_1<TBase>*>*& __cordl_internal_get__itemToNodeMap();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::GlobalNamespace::ISortedList_1<TBase>*>* const& __cordl_internal_get__items() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::GlobalNamespace::ISortedList_1<TBase>*>*& __cordl_internal_get__items();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::ISortedListItemProcessor_1<TBase>*>* const& __cordl_internal_get__sortedListsDataProcessors() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::ISortedListItemProcessor_1<TBase>*>*& __cordl_internal_get__sortedListsDataProcessors();

  constexpr void __cordl_internal_set__itemToNodeMap(::System::Collections::Generic::Dictionary_2<TBase, ::System::Collections::Generic::LinkedListNode_1<TBase>*>* value);

  constexpr void __cordl_internal_set__items(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::GlobalNamespace::ISortedList_1<TBase>*>* value);

  constexpr void __cordl_internal_set__sortedListsDataProcessors(::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::ISortedListItemProcessor_1<TBase>*>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_sortedListHeads, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Collections::Generic::LinkedListNode_1<TBase>*, ::Array<::System::Collections::Generic::LinkedListNode_1<TBase>*>*> get_sortedListHeads();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataSortedListForTypeAndIds_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataSortedListForTypeAndIds_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataSortedListForTypeAndIds_1(BeatmapDataSortedListForTypeAndIds_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataSortedListForTypeAndIds_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataSortedListForTypeAndIds_1(BeatmapDataSortedListForTypeAndIds_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14854 };

  /// @brief Field _items, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::GlobalNamespace::ISortedList_1<TBase>*>* ____items;

  /// @brief Field _sortedListsDataProcessors, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::ISortedListItemProcessor_1<TBase>*>* ____sortedListsDataProcessors;

  /// @brief Field _itemToNodeMap, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<TBase, ::System::Collections::Generic::LinkedListNode_1<TBase>*>* ____itemToNodeMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1, "", "BeatmapDataSortedListForTypeAndIds`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1___c, "", "BeatmapDataSortedListForTypeAndIds`1/<>c");
