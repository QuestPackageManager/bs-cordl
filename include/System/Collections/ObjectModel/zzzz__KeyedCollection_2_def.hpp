#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/ObjectModel/zzzz__Collection_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeyedCollection_2)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace System::Collections::ObjectModel {
template <typename TKey, typename TItem> class KeyedCollection_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::ObjectModel::KeyedCollection_2);
// Type: System.Collections.ObjectModel::KeyedCollection`2
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::ObjectModel {
// cpp template
template <typename TKey, typename TItem>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3813)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3813), inst: 1012 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3815))
// CS Name: ::System.Collections.ObjectModel::KeyedCollection`2<TKey,TItem>*
class CORDL_TYPE KeyedCollection_2 : public ::System::Collections::ObjectModel::Collection_1<TItem> {
public:
  // Declarations
  /// @brief Field comparer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_comparer, put = __cordl_internal_set_comparer))::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer;

  /// @brief Field dict, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_dict, put = __cordl_internal_set_dict))::System::Collections::Generic::Dictionary_2<TKey, TItem>* dict;

  /// @brief Field keyCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_keyCount, put = __cordl_internal_set_keyCount)) int32_t keyCount;

  /// @brief Field threshold, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_threshold, put = __cordl_internal_set_threshold)) int32_t threshold;

  __declspec(property(get = get_Items))::System::Collections::Generic::List_1<TItem>* Items;

  __declspec(property(get = get_Item)) TItem Item[];

  __declspec(property(get = get_Dictionary))::System::Collections::Generic::IDictionary_2<TKey, TItem>* Dictionary;

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& __cordl_internal_get_comparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TKey>*> const& __cordl_internal_get_comparer() const;

  constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<TKey, TItem>*& __cordl_internal_get_dict();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey, TItem>*> const& __cordl_internal_get_dict() const;

  constexpr void __cordl_internal_set_dict(::System::Collections::Generic::Dictionary_2<TKey, TItem>* value);

  constexpr int32_t& __cordl_internal_get_keyCount();

  constexpr int32_t const& __cordl_internal_get_keyCount() const;

  constexpr void __cordl_internal_set_keyCount(int32_t value);

  constexpr int32_t& __cordl_internal_get_threshold();

  constexpr int32_t const& __cordl_internal_get_threshold() const;

  constexpr void __cordl_internal_set_threshold(int32_t value);

  static inline ::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  static inline ::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer, int32_t dictionaryCreationThreshold);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer, int32_t dictionaryCreationThreshold);

  /// @brief Method get_Items, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<TItem>* get_Items();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TItem get_Item(TKey key);

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Contains(TKey key);

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetValue(TKey key, ByRef<TItem> item);

  /// @brief Method get_Dictionary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<TKey, TItem>* get_Dictionary();

  /// @brief Method ClearItems, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ClearItems();

  /// @brief Method GetKeyForItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline TKey GetKeyForItem(TItem item);

  /// @brief Method InsertItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void InsertItem(int32_t index, TItem item);

  /// @brief Method RemoveItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RemoveItem(int32_t index);

  /// @brief Method SetItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetItem(int32_t index, TItem item);

  /// @brief Method AddKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddKey(TKey key, TItem item);

  /// @brief Method CreateDictionary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CreateDictionary();

  /// @brief Method RemoveKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveKey(TKey key);

  // Ctor Parameters [CppParam { name: "", ty: "KeyedCollection_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyedCollection_2(KeyedCollection_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyedCollection_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyedCollection_2(KeyedCollection_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyedCollection_2();

public:
  /// @brief Field comparer, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IEqualityComparer_1<TKey>* ___comparer;

  /// @brief Field dict, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<TKey, TItem>* ___dict;

  /// @brief Field keyCount, offset: 0x28, size: 0x4, def value: None
  int32_t ___keyCount;

  /// @brief Field threshold, offset: 0x2c, size: 0x4, def value: None
  int32_t ___threshold;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::ObjectModel
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::ObjectModel::KeyedCollection_2, "System.Collections.ObjectModel", "KeyedCollection`2");
