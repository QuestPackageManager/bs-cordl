#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IndexedSet_1)
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace UnityEngine::UI::Collections {
template <typename T> class IndexedSet_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UI::Collections::IndexedSet_1);
// Type: UnityEngine.UI.Collections::IndexedSet`1
// SizeInfo { instance_size: 40, native_size: 36, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI::Collections {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13149))
// CS Name: ::UnityEngine.UI.Collections::IndexedSet`1<T>*
class CORDL_TYPE IndexedSet_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_List, offset 0x10, size 0x8
  __declspec(property(get = __get_m_List, put = __set_m_List))::System::Collections::Generic::List_1<T>* m_List;

  /// @brief Field m_Dictionary, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Dictionary, put = __set_m_Dictionary))::System::Collections::Generic::Dictionary_2<T, int32_t>* m_Dictionary;

  /// @brief Field m_EnabledObjectCount, offset 0x20, size 0x4
  __declspec(property(get = __get_m_EnabledObjectCount, put = __set_m_EnabledObjectCount)) int32_t m_EnabledObjectCount;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Capacity)) int32_t Capacity;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Item, put = set_Item)) T Item[];

  /// @brief Convert operator to "::System::Collections::Generic::IList_1<T>"
  constexpr operator ::System::Collections::Generic::IList_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
  constexpr operator ::System::Collections::Generic::ICollection_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::System::Collections::Generic::List_1<T>*& __get_m_List();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& __get_m_List() const;

  constexpr void __set_m_List(::System::Collections::Generic::List_1<T>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<T, int32_t>*& __get_m_Dictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<T, int32_t>*> const& __get_m_Dictionary() const;

  constexpr void __set_m_Dictionary(::System::Collections::Generic::Dictionary_2<T, int32_t>* value);

  constexpr int32_t& __get_m_EnabledObjectCount();

  constexpr int32_t const& __get_m_EnabledObjectCount() const;

  constexpr void __set_m_EnabledObjectCount(int32_t value);

  /// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Add(T item);

  /// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Add(T item, bool isActive);

  /// @brief Method AddUnique addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool AddUnique(T item, bool isActive);

  /// @brief Method EnableItem addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool EnableItem(T item);

  /// @brief Method DisableItem addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool DisableItem(T item);

  /// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool Remove(T item);

  /// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Clear();

  /// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool Contains(T item);

  /// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t arrayIndex);

  /// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
  inline int32_t get_Count();

  /// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
  inline int32_t get_Capacity();

  /// @brief Method get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool get_IsReadOnly();

  /// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final true
  inline int32_t IndexOf(T item);

  /// @brief Method Insert addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Insert(int32_t index, T item);

  /// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void RemoveAt(int32_t index);

  /// @brief Method Swap addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Swap(int32_t index1, int32_t index2);

  /// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
  inline T get_Item(int32_t index);

  /// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void set_Item(int32_t index, T value);

  /// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void RemoveAll(::System::Predicate_1<T>* match);

  /// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Sort(::System::Comparison_1<T>* sortLayoutFunction);

  static inline ::UnityEngine::UI::Collections::IndexedSet_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "IndexedSet_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IndexedSet_1(IndexedSet_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IndexedSet_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IndexedSet_1(IndexedSet_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IndexedSet_1();

public:
  /// @brief Field m_List, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ___m_List;

  /// @brief Field m_Dictionary, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<T, int32_t>* ___m_Dictionary;

  /// @brief Field m_EnabledObjectCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_EnabledObjectCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UI::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UI::Collections::IndexedSet_1, "UnityEngine.UI.Collections", "IndexedSet`1");
