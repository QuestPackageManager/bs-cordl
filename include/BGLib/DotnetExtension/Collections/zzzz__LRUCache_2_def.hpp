#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LRUCache_2)
namespace BGLib::DotnetExtension::Collections {
template <typename TKey, typename TValue> class __LRUCache_2__CacheElement;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
namespace System::Collections::Generic {
template <typename T> class LinkedList_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace BGLib::DotnetExtension::Collections {
template <typename TKey, typename TValue> class LRUCache_2;
}
namespace BGLib::DotnetExtension::Collections {
template <typename TKey, typename TValue> class __LRUCache_2__CacheElement;
}
// Write type traits
MARK_GEN_REF_PTR_T(::BGLib::DotnetExtension::Collections::LRUCache_2);
MARK_GEN_REF_PTR_T(::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement);
// Type: ::CacheElement
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::DotnetExtension::Collections {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15238))
// CS Name: ::LRUCache`2::CacheElement<TKey,TValue>*
class CORDL_TYPE __LRUCache_2__CacheElement : public ::System::Object {
public:
  // Declarations
  /// @brief Field _key, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__key, put = __cordl_internal_set__key)) TKey _key;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) TValue value;

  __declspec(property(get = get_key)) TKey key;

  constexpr TKey& __cordl_internal_get__key();

  constexpr TKey const& __cordl_internal_get__key() const;

  constexpr void __cordl_internal_set__key(TKey value);

  constexpr TValue& __cordl_internal_get_value();

  constexpr TValue const& __cordl_internal_get_value() const;

  constexpr void __cordl_internal_set_value(TValue value);

  /// @brief Method get_key, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TKey get_key();

  static inline ::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>* New_ctor(TKey key, TValue value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TKey key, TValue value);

  // Ctor Parameters [CppParam { name: "", ty: "__LRUCache_2__CacheElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LRUCache_2__CacheElement(__LRUCache_2__CacheElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LRUCache_2__CacheElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LRUCache_2__CacheElement(__LRUCache_2__CacheElement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LRUCache_2__CacheElement();

public:
  /// @brief Field _key, offset: 0x10, size: 0x8, def value: None
  TKey ____key;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  TValue ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGLib::DotnetExtension::Collections
// Type: BGLib.DotnetExtension.Collections::LRUCache`2
// SizeInfo { instance_size: 48, native_size: 44, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::DotnetExtension::Collections {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15239))
// CS Name: ::BGLib.DotnetExtension.Collections::LRUCache`2<TKey,TValue>*
class CORDL_TYPE LRUCache_2 : public ::System::Object {
public:
  // Declarations
  using CacheElement = ::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>;

  /// @brief Field itemWillBeRemovedFromCacheEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_itemWillBeRemovedFromCacheEvent,
                      put = __cordl_internal_set_itemWillBeRemovedFromCacheEvent))::System::Action_2<TKey, TValue>* itemWillBeRemovedFromCacheEvent;

  /// @brief Field _cacheContent, offset 0x18, size 0x8
  __declspec(
      property(get = __cordl_internal_get__cacheContent,
               put = __cordl_internal_set__cacheContent))::System::Collections::Generic::LinkedList_1<::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>*>* _cacheContent;

  /// @brief Field _index, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index))::System::Collections::Generic::Dictionary_2<
      TKey, ::System::Collections::Generic::LinkedListNode_1<::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>*>*>* _index;

  /// @brief Field _maxNumberElements, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__maxNumberElements, put = __cordl_internal_set__maxNumberElements)) int32_t _maxNumberElements;

  __declspec(property(get = get_Count)) int32_t Count;

  constexpr ::System::Action_2<TKey, TValue>*& __cordl_internal_get_itemWillBeRemovedFromCacheEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TKey, TValue>*> const& __cordl_internal_get_itemWillBeRemovedFromCacheEvent() const;

  constexpr void __cordl_internal_set_itemWillBeRemovedFromCacheEvent(::System::Action_2<TKey, TValue>* value);

  constexpr ::System::Collections::Generic::LinkedList_1<::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>*>*& __cordl_internal_get__cacheContent();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>*>*> const&
  __cordl_internal_get__cacheContent() const;

  constexpr void __cordl_internal_set__cacheContent(::System::Collections::Generic::LinkedList_1<::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<TKey, ::System::Collections::Generic::LinkedListNode_1<::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>*>*>*&
  __cordl_internal_get__index();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<TKey, ::System::Collections::Generic::LinkedListNode_1<::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>*>*>*> const&
  __cordl_internal_get__index() const;

  constexpr void __cordl_internal_set__index(
      ::System::Collections::Generic::Dictionary_2<TKey, ::System::Collections::Generic::LinkedListNode_1<::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>*>*>* value);

  constexpr int32_t& __cordl_internal_get__maxNumberElements();

  constexpr int32_t const& __cordl_internal_get__maxNumberElements() const;

  constexpr void __cordl_internal_set__maxNumberElements(int32_t value);

  /// @brief Method add_itemWillBeRemovedFromCacheEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_itemWillBeRemovedFromCacheEvent(::System::Action_2<TKey, TValue>* value);

  /// @brief Method remove_itemWillBeRemovedFromCacheEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_itemWillBeRemovedFromCacheEvent(::System::Action_2<TKey, TValue>* value);

  static inline ::BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>* New_ctor(int32_t maxNumberElements);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxNumberElements);

  /// @brief Method IsInCache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool IsInCache(TKey key);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method MakeNodeMostRecentlyUsed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void MakeNodeMostRecentlyUsed(::System::Collections::Generic::LinkedListNode_1<::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>*>* node);

  /// @brief Method TryGetFromCache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetFromCache(TKey key, ByRef<TValue> value);

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(TKey key, TValue value);

  /// @brief Method RemoveLeastUsedElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveLeastUsedElement();

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  // Ctor Parameters [CppParam { name: "", ty: "LRUCache_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LRUCache_2(LRUCache_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LRUCache_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LRUCache_2(LRUCache_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LRUCache_2();

public:
  /// @brief Field itemWillBeRemovedFromCacheEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_2<TKey, TValue>* ___itemWillBeRemovedFromCacheEvent;

  /// @brief Field _cacheContent, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedList_1<::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>*>* ____cacheContent;

  /// @brief Field _index, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<TKey, ::System::Collections::Generic::LinkedListNode_1<::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>*>*>* ____index;

  /// @brief Field _maxNumberElements, offset: 0x28, size: 0x4, def value: None
  int32_t ____maxNumberElements;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGLib::DotnetExtension::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGLib::DotnetExtension::Collections::LRUCache_2, "BGLib.DotnetExtension.Collections", "LRUCache`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement, "BGLib.DotnetExtension.Collections", "LRUCache`2/CacheElement");
