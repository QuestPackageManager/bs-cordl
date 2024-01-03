#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HMCache_2)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename K, typename V> class HMCache_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::HMCache_2);
// Type: ::HMCache`2
// SizeInfo { instance_size: 48, native_size: 44, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename K, typename V>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14372))
// CS Name: ::HMCache`2<K,V>*
class CORDL_TYPE HMCache_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field itemWillBeRemovedFromCacheEvent, offset 0x10, size 0x8
  __declspec(property(get = __get_itemWillBeRemovedFromCacheEvent, put = __set_itemWillBeRemovedFromCacheEvent))::System::Action_1<V>* itemWillBeRemovedFromCacheEvent;

  /// @brief Field _cache, offset 0x18, size 0x8
  __declspec(property(get = __get__cache, put = __set__cache))::System::Collections::Generic::Dictionary_2<K, V>* _cache;

  /// @brief Field _addedElements, offset 0x20, size 0x8
  __declspec(property(get = __get__addedElements, put = __set__addedElements))::System::Collections::Generic::Queue_1<K>* _addedElements;

  /// @brief Field _maxNumberElements, offset 0x28, size 0x4
  __declspec(property(get = __get__maxNumberElements, put = __set__maxNumberElements)) int32_t _maxNumberElements;

  constexpr ::System::Action_1<V>*& __get_itemWillBeRemovedFromCacheEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<V>*> const& __get_itemWillBeRemovedFromCacheEvent() const;

  constexpr void __set_itemWillBeRemovedFromCacheEvent(::System::Action_1<V>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<K, V>*& __get__cache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<K, V>*> const& __get__cache() const;

  constexpr void __set__cache(::System::Collections::Generic::Dictionary_2<K, V>* value);

  constexpr ::System::Collections::Generic::Queue_1<K>*& __get__addedElements();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<K>*> const& __get__addedElements() const;

  constexpr void __set__addedElements(::System::Collections::Generic::Queue_1<K>* value);

  constexpr int32_t& __get__maxNumberElements();

  constexpr int32_t const& __get__maxNumberElements() const;

  constexpr void __set__maxNumberElements(int32_t value);

  /// @brief Method add_itemWillBeRemovedFromCacheEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_itemWillBeRemovedFromCacheEvent(::System::Action_1<V>* value);

  /// @brief Method remove_itemWillBeRemovedFromCacheEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_itemWillBeRemovedFromCacheEvent(::System::Action_1<V>* value);

  static inline ::GlobalNamespace::HMCache_2<K, V>* New_ctor(int32_t maxNumberElements);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxNumberElements);

  /// @brief Method IsInCache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool IsInCache(K key);

  /// @brief Method UpdateOrderInCache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateOrderInCache(K key);

  /// @brief Method GetFromCache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline V GetFromCache(K key);

  /// @brief Method PutToCache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void PutToCache(K key, V value);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  // Ctor Parameters [CppParam { name: "", ty: "HMCache_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HMCache_2(HMCache_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HMCache_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HMCache_2(HMCache_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HMCache_2();

public:
  /// @brief Field itemWillBeRemovedFromCacheEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<V>* ___itemWillBeRemovedFromCacheEvent;

  /// @brief Field _cache, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<K, V>* ____cache;

  /// @brief Field _addedElements, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<K>* ____addedElements;

  /// @brief Field _maxNumberElements, offset: 0x28, size: 0x4, def value: None
  int32_t ____maxNumberElements;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::HMCache_2, "", "HMCache`2");
